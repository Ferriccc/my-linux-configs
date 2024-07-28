// clang-format off

#ifdef ONLINE_JUDGE
#define dbg(...)
#define SOLVE solve();
#else
// #define _GLIBCXX_DEBUG
#endif

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

namespace debug { void __print(int x) { std::cerr << x; } void __print(long x) { std::cerr << x; } void __print(long long x) { std::cerr << x; } void __print(unsigned x) { std::cerr << x; } void __print(unsigned long x) { std::cerr << x; } void __print(unsigned long long x) { std::cerr << x; } void __print(float x) { std::cerr << x; } void __print(double x) { std::cerr << x; } void __print(long double x) { std::cerr << x; } void __print(char x) { std::cerr << '\'' << x << '\''; } void __print(const char *x) { std::cerr << '\"' << x << '\"'; } void __print(const std::string x) { std::cerr << '\"' << x << '\"'; } void __print(bool x) { std::cerr << (x ? "true" : "false"); } template <typename T, typename V> void __print(std::pair<T, V> x) { std::cerr << '{'; __print(x.first); std::cerr << ','; __print(x.second); std::cerr << '}'; } template <typename T> void __print(T x) { int f = 0; std::cerr << '{'; for (auto &i : x) std::cerr << (f++ ? "," : ""), __print(i); std::cerr << "}"; } template <typename T> void __print(std::stack<T> x) { std::vector<T> _x; while (!x.empty()) _x.push_back(x.top()), x.pop(); reverse(_x.begin(), _x.end()); __print(_x); } template <typename T> void __print(std::queue<T> x) { std::vector<T> _x; while (!x.empty()) _x.push_back(x.front()), x.pop(); reverse(_x.begin(), _x.end()); __print(_x); } template <typename T> void __print(std::priority_queue<T> x) { std::vector<T> _x; while (!x.empty()) _x.push_back(x.top()), x.pop(); reverse(_x.begin(), _x.end()); __print(_x); } template <typename T> void __print(std::priority_queue<T, std::vector<T>, std::greater<T>> x) { std::vector<T> _x; while (!x.empty()) _x.push_back(x.top()), x.pop(); reverse(_x.begin(), _x.end()); __print(_x); } void _print() { std::cerr << "]\n\n"; } template <typename T, typename... V> void _print(T t, V... v) { __print(t); if (sizeof...(v)) std::cerr << ", "; _print(v...); } template <typename T> void _print2d(T x) { for (auto &i : x) _print(i); } } // namespace debug

using namespace std;
using namespace __gnu_pbds;
using namespace debug;

void rd(char &c) { cin >> c; } void rd(string &x) { cin >> x; } template <typename T> void rd_real(T &x) { string s; rd(s); x = stod(s); } void rd(int &x) { cin >> x; } void rd(long long &x) { cin >> x; } void rd(unsigned int &x) { cin >> x; } void rd(unsigned long long &x) { cin >> x; } void rd(double &x) { rd_real(x); } void rd(long double &x) { rd_real(x); } void rd(__float128 &x) { rd_real(x); } template <class T, class U> void rd(pair<T, U> &p) { return rd(p.first), rd(p.second); } template <size_t N = 0, typename T> void rd_tuple(T &t) { if constexpr (N < tuple_size<T>::value) { auto &x = get<N>(t); rd(x); rd_tuple<N + 1>(t); } } template <class... T> void rd(tuple<T...> &tpl) { rd_tuple(tpl); } template <size_t N = 0, typename T> void rd(array<T, N> &x) { for (auto &d : x) rd(d); } template <class T> void rd(vector<T> &x) { for (auto &d : x) rd(d); } void read() {} template <class H, class... T> void read(H &h, T &...t) { rd(h), read(t...); } void wt(const char c) { cout << c; } void wt(const string s) { cout << s; } void wt(const char *s) { size_t len = strlen(s); for (size_t i = 0; i < len; i++) wt(s[i]); } template <typename T> void wt_real(T x) { ostringstream oss; oss << fixed << setprecision(15) << double(x); string s = oss.str(); wt(s); } void wt(int x) { cout << x; } void wt(long long x) { cout << x; } void wt(unsigned int x) { cout << x; } void wt(unsigned long long x) { cout << x; } void wt(double x) { wt_real(x); } void wt(long double x) { wt_real(x); } void wt(__float128 x) { wt_real(x); } template <class T, class U> void wt(const pair<T, U> val) { wt(val.first); wt(' '); wt(val.second); } template <size_t N = 0, typename T> void wt_tuple(const T t) { if constexpr (N < tuple_size<T>::value) { if constexpr (N > 0) { wt(' '); } const auto x = get<N>(t); wt(x); wt_tuple<N + 1>(t); } } template <class... T> void wt(tuple<T...> tpl) { wt_tuple(tpl); } template <class T, size_t S> void wt(const array<T, S> val) { auto n = val.size(); for (size_t i = 0; i < n; i++) { if (i) wt(' '); wt(val[i]); } } template <class T> void wt(const vector<T> val) { auto n = val.size(); for (size_t i = 0; i < n; i++) { if (i) wt(' '); wt(val[i]); } } void print() { wt('\n'); } template <class Head, class... Tail> void print(Head &&head, Tail &&...tail) { wt(head); if (sizeof...(Tail)) wt(' '); print(forward<Tail>(tail)...); } void println() { wt('\n'); } template <class Head, class... Tail> void println(Head &&head, Tail &&...tail) { wt(head); if (sizeof...(Tail)) wt('\n'); println(forward<Tail>(tail)...); } template <typename T> void print2d(T x) { for (auto &i : x) println(i); }

#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#define dbg2d(x) cerr << "[" << #x << "]\n"; _print2d(x)
#define SOLVE { cerr << (_ > 0 ? "\n####### TestCase " : "####### TestCase ") << _ + 1 << " #######\n\n"; solve(); }
#endif

#define int(...) int __VA_ARGS__; read(__VA_ARGS__);
#define long(...) long long __VA_ARGS__; read(__VA_ARGS__);
#define str(...) string __VA_ARGS__; read(__VA_ARGS__);
#define chr(...) char __VA_ARGS__; read(__VA_ARGS__);
#define vec(type, name, size) vc<type> name(size); read(name);
#define vvec(type, name, n, m) vc<vc<type>> name(n, vc<type>(m)); read(name);
#define reif(t, ...) if (t) { __VA_ARGS__; return; }
#define coif(t, ...) if (t) { __VA_ARGS__; continue; }
#define brif(t, ...) if (t) { __VA_ARGS__; break; }

#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define s0rt(x) sort(all(x))
#define s0rtd(x) sort(all(x)), rev(x);
#define s0rtx(x, ...) sort(all(x), __VA_ARGS__);
#define sum(x) accumulate(all(x), 0ll)
#define len(x) (long long)(x.size())
#define mine(v) *min_element(all(v))
#define maxe(v) *max_element(all(v))
#define unq(x) s0rt(x), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()
#define FOR1(a) for (int _ = 0; _ < (a); ++_)
#define FOR2(i, a) for (int i = 0; i < (a); ++i)
#define FOR3(i, a, b) for (int i = a; i < (b); ++i)
#define FOR4(i, a, b, c) for (int i = a; i < (b); i += (c))
#define FOR5(i, a, condn, b, add) for (int i = a; condn < b; i += add)
#define FOR1_R(a) for (int _ = (a); _ >= (0); --i)
#define FOR2_R(i, a) for (int i = (a); i >= (0); --i)
#define FOR3_R(i, a, b) for (int i = (a); i >= (b); --i)
#define FOR4_R(i, a, b, c) for (int i = (a); i >= (b); i -= c)
#define FOR5_R(i, a, condn, b, add) for (int i = (a); condn >= (b); i -= add)
#define TRAV1(i, a) for (auto &i : a)
#define TRAV2(i, j, a) for (auto &[i, j] : a)
#define LB1(x, y) lower_bound(all(x), y)
#define UB1(x, y) upper_bound(all(x), y)
#define LB2(x) lower_bound(x)
#define UB2(x) upper_bound(x)
#define CNT1(x, y) count(all(x), y)
#define cnt2(x) count(x)
#define overload5(a, b, c, d, e, f, ...) f
#define overload2(a, b, c, d, ...) d
#define overload1(a, b, c, ...) c
#define f0r(...) overload5(__VA_ARGS__, FOR5, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
#define f0rd(...) overload5(__VA_ARGS__, FOR5_R, FOR4_R, FOR3_R, FOR2_R, FOR1_R)(__VA_ARGS__)
#define trav(...) overload2(__VA_ARGS__, TRAV2, TRAV1)(__VA_ARGS__)
#define lb(...) overload1(__VA_ARGS__, LB1, LB2)(__VA_ARGS__)
#define ub(...) overload1(__VA_ARGS__, UB1, UB2)(__VA_ARGS__)
#define c0unt(...) overload1(__VA_ARGS__, CNT1, CNT2)(__VA_ARGS__)
#define pb push_back
#define eb emplace_back
#define ep emplace
#define ins insert
#define ers erase
#define beg begin()
#define ed end()
#define mkp make_pair
#define f first
#define s second
#define yes "Yes"
#define no "No"
#define printw(x) print(#x)
#define fun(type, name, ...) auto name = [&](__VA_ARGS__) -> type
#define recfun(type, name, ...) auto name = [&](auto &&name, __VA_ARGS__) -> type

int popcnt(int x) { return __builtin_popcount(x); }
int topbit(int x) { return (x == 0 ? -1 : 31 - __builtin_clz(x)); }
int lowbit(int x) { return (x == 0 ? -1 : __builtin_ctz(x)); }
int popcnt(long long x) { return __builtin_popcountll(x); }
int topbit(long long x) { return (x == 0 ? -1 : 63 - __builtin_clzll(x)); }
int lowbit(long long x) { return (x == 0 ? -1 : __builtin_ctzll(x)); }
long long cnthavingbit(int bit, long long n) { long long res = (n >> (bit + 1)) << bit; if ((n >> bit) & 1) res += ((n & ((1ll << bit) - 1)) + 1); return res; }

template <typename T> int sgn(const T &x) { return (x > 0 ? 1 : x < 0 ? -1 : 0); };
template <typename T, typename U> T ceil(T x, U y) { return (x > 0 ? (x + y - 1) / y : x / y); }
template <typename T, typename U> T floor(T x, U y) { return (x > 0 ? x / y : (x - y + 1) / y); }
template <class T, class S> bool chmx(T &a, const S &b) { return (a < b ? a = b, 1 : 0); }
template <class T, class S> bool chmn(T &a, const S &b) { return (a > b ? a = b, 1 : 0); }

template <typename U> long long binser(U&& check, long long lo, long long hi, bool min) { long long ret = (min ? hi + 1 : lo - 1); for (long long mid = lo + (hi - lo) / 2; lo <= hi; mid = lo + (hi - lo) / 2) { bool chk = check(mid); (min == chk) ? (hi = mid - 1) : (lo = mid + 1); if (chk) ret = mid; } return ret; } template <typename T> void prfxsum(vector<T> &a) { int _n = a.size(); for (int i = 1; i < _n; i++) a[i] += a[i - 1]; }; template <typename T, typename U> vector<T> getorder(T start, T size, U comp) { vector<T> ord(size); iota(ord.begin(), ord.end(), start); sort(ord.begin(), ord.end(), comp); return ord; } template <typename T = int, typename U = int> map<T, U> mappos(const vector<T> &data, U offset) { map<T, U> ps; for (int i = 0; i < data.size(); i++) ps[data[i]] = i + offset; return ps; } template <typename T> map<T, int> counter(const vector<T> &data) { map<T, int> x; for (auto &i : data) x[i]++; return x; }; template <typename T, typename U> T toset(const vector<U> &data) { T x; for (auto &i : data) x.insert(i); return x; }; template <typename T, typename U> U safeErase(T &setik, U target) { auto iterator = setik.find(target); assert(iterator != setik.end()); U a = *iterator; setik.erase(iterator); return a; } template <typename T, typename U> pair<U, bool> Erase(T &setik, U target) { auto iterator = setik.find(target); pair<U, bool> a = {0, false}; if (iterator != setik.end()) { a.first = *iterator; setik.erase(iterator); } return a; } template <typename T> T pop(multiset<T> &que, bool front) { assert(que.empty() == false); auto iterator = front ? que.begin() : prev(que.end()); T a = *iterator; que.erase(iterator); return a; } template <typename T> T pop(set<T> &que, bool front = 1) { assert(que.empty() == false); auto iterator = front ? que.begin() : prev(que.end()); T a = *iterator; que.erase(iterator); return a; } template <typename T> T pop(stack<T> &que) { T a = que.top(); que.pop(); return a; } template <typename T> T pop(queue<T> &que) { T a = que.front(); que.pop(); return a; } template <typename T> T pop(deque<T> &que, bool front) { T a = (front ? que.front() : que.back()); (front ? que.pop_front() : que.pop_back()); return a; } template <typename T> T pop(priority_queue<T> &que) { T a = que.top(); que.pop(); return a; } template <typename T> T pop(priority_queue<T, vector<T>, greater<T>> &que) { T a = que.top(); que.pop(); return a; } template <typename T> T pop(vector<T> &que) { T a = que.back; que.pop_back(); return a; } template <typename T, typename U> constexpr T fpow(T x, U n) { T result = 1; while (n > 0) { if (n & 1ll) result *= x; x *= x; n >>= 1ll; } return result; } template <typename T> vector<T> divisors(T V) { vector<T> ret; for (int i = 1; (long long)i * i < V + 1; ++i) { if (V % i == 0) { ret.push_back(i); if (V / i != i) ret.push_back(V / i); } } return ret; }
template <typename T> struct pxsx { vector<T> P, S; int n; pxsx() {} pxsx(const vector<T> &a) { n = a.size() + 1; P.resize(n), S.resize(n); for (int i = 1; i < n; i++) P[i] = P[i - 1] + a[i - 1]; for (int i = n - 2; i >= 0; i--) S[i] = S[i + 1] + a[i]; } T getp(int l, int r) { return (l > r ? 0 : P[r + 1] - P[l]); } T gets(int l, int r) { return (l > r ? 0 : S[l] - S[r + 1]); } };
template <typename T> array<T, 3> exgcd(T a, T b) { if (b == 0) return {a, 1, 0}; auto [g, x, y] = exgcd(b, a % b); return {g, y, x - a / b * y}; }

constexpr int mod0 = 998244353;
constexpr int mod1 = 1e9 + 7;
constexpr int imx = INT_MAX;
constexpr int imn = INT_MIN;
constexpr long long lmx = LLONG_MAX;
constexpr long long lmn = LLONG_MIN;
constexpr int dx[] = {1, 0, -1, 0};
constexpr int dy[] = {0, 1, 0, -1};
constexpr char nl = '\n';

using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<long long>;
using vvl = vector<vector<long long>>;
using vpi = vector<pair<int, int>>;
using vpl = vector<pair<long long, long long>>;
using pi = pair<int, int>;
using pl = pair<long long, long long>;
using uint = unsigned int;
using ull = unsigned long long;
template <typename T> using ost = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using vc = vector<T>;
template <typename T> using pq = priority_queue<T>;
template <typename T> using qu = queue<T>;
template <typename T> using dq = deque<T>;
template <typename T> using stk = stack<T>;
template <typename T1, typename T2> using pr = pair<T1, T2>;
template <typename T> using mst = multiset<T>;
template <typename Key, typename T> using ump = unordered_map<Key, T>;
template <typename T> using ust = unordered_set<T>;
template <typename T> using mpq = priority_queue<T, vector<T>, greater<T>>;
template <typename T, int N> using ar = array<T, N>;

// clang-format on
int main() {
    char x;
    cin >> x;
    if (x == '!') {
        print("YES");
        return 0;
    }
    print("NO");
}
