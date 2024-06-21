#include "bits/stdc++.h"

using namespace std;

#define endl '\n'

constexpr int N = 1e5;

int pc = 0;
// We use std::array for constexpr compatibility
constexpr std::array<int, N> SieveOfEratosthenes() {
    std::array<bool, N> prime = {};
    std::array<int, N> primes = {};

    // Initialize all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true bool
    for (int i = 0; i < N; ++i)
        prime[i] = true;

    // Sieve of Eratosthenes
    for (int p = 2; p * p < N; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p]) {
            // Updating all multiples of p to not prime
            for (int i = p * p; i < N; i += p)
                prime[i] = false;
        }
    }

    // Collect all prime numbers
    for (int p = 2; p < N && pc < N; p++) {
        if (prime[p])
            primes[pc++] = p;
    }

    return primes;
}

auto v = SieveOfEratosthenes();

void solve() {
    int t, m, n, a, b;
    string h;
    cin >> a >> b >> n;
    if (n == 1) {
        if (max(a, b) % min(a, b) == 0 && a != b) {
            cout << "YES" << endl;
            return;
        }
        cout << "NO\n";
        return;
    }
    auto get = [&](int x) -> int {
        int cnt = 0;
        for (int i = 0; i < pc && v[i] * v[i] <= x; ++i) {
            while (x % v[i] == 0) {
                x /= v[i];
                ++cnt;
            }
        }
        return cnt + (x > 1);
    };
    int mx = get(a) + get(b);
    cout << (n <= mx ? "YES\n" : "NO\n");
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}