#ifdef ONLINE_JUDGE

#pragma GCC optimize("Ofast,unroll-loops")
#define dbg(...)
#define dbg2d(...)
#define SOLVE solve();

#else

#define dbg(x...)                                                                                                                                                                  \
    cerr << "[" << #x << "] = [";                                                                                                                                                  \
    _print(x)
#define dbg2d(x)                                                                                                                                                                   \
    cerr << "[" << #x << "]\n";                                                                                                                                                    \
    _print2d(x)
#define SOLVE                                                                                                                                                                      \
    {                                                                                                                                                                              \
        cerr << (_ > 0 ? "\n####### TestCase " : "####### TestCase ") << _ + 1 << " #######\n\n";                                                                                  \
        solve();                                                                                                                                                                   \
    }
// #define _GLIBCXX_DEBUG

#endif

#define INT(...)                                                                                                                                                                   \
    int __VA_ARGS__;                                                                                                                                                               \
    read(__VA_ARGS__);
#define LONG(...)                                                                                                                                                                  \
    long long __VA_ARGS__;                                                                                                                                                         \
    read(__VA_ARGS__);
#define STRING(...)                                                                                                                                                                \
    string __VA_ARGS__;                                                                                                                                                            \
    read(__VA_ARGS__);
#define CHAR(...)                                                                                                                                                                  \
    char __VA_ARGS__;                                                                                                                                                              \
    read(__VA_ARGS__);
#define VEC(type, name, size)                                                                                                                                                      \
    vector<type> name(size);                                                                                                                                                       \
    read(name);
#define VEC2D(type, name, n, m)                                                                                                                                                    \
    vector<vector<type>> name(n, vector<type>(m));                                                                                                                                 \
    read(name);
#define REIF(t, ...)                                                                                                                                                               \
    if (t) {                                                                                                                                                                       \
        __VA_ARGS__;                                                                                                                                                               \
        return;                                                                                                                                                                    \
    }
#define COIF(t, ...)                                                                                                                                                               \
    if (t) {                                                                                                                                                                       \
        __VA_ARGS__;                                                                                                                                                               \
        continue;                                                                                                                                                                  \
    }
#define BRIF(t, ...)                                                                                                                                                               \
    if (t) {                                                                                                                                                                       \
        __VA_ARGS__;                                                                                                                                                               \
        break;                                                                                                                                                                     \
    }
#define ALL(x)                           x.begin(), x.end()
#define REVERSE(x)                       reverse(x.begin(), x.end())
#define SORT(x)                          sort(x.begin(), x.end())
#define SORTD(x)                         sort(x.begin(), x.end()), reverse(x.begin(), x.end());
#define SORTX(x, ...)                    sort(x.begin(), x.end(), __VA_ARGS__);
#define SUM(x, t)                        accumulate(x.begin(), x.end(), t)
#define LEN(x)                           x.size()
#define MIN(x)                           *min_element(x.begin(), x.end())
#define MAX(x)                           *max_element(x.begin(), x.end())
#define UNQ(x)                           sort(x.begin(), x.end()), x.erase(unique(x.begin(), x.end()), x.end()), x.shrink_to_fit()
#define FOR1(a)                          for (int _ = 0; _ < (a); ++_)
#define FOR2(i, a)                       for (int i = 0; i < (a); ++i)
#define FOR3(i, a, b)                    for (int i = a; i < (b); ++i)
#define FOR4(i, a, b, c)                 for (int i = a; i < (b); i += (c))
#define FOR5(i, a, condn, b, add)        for (int i = a; condn < b; i += add)
#define FOR1_R(a)                        for (int _ = (a); _ >= (0); --i)
#define FOR2_R(i, a)                     for (int i = (a); i >= (0); --i)
#define FOR3_R(i, a, b)                  for (int i = (a); i >= (b); --i)
#define FOR4_R(i, a, b, c)               for (int i = (a); i >= (b); i -= c)
#define FOR5_R(i, a, condn, b, add)      for (int i = (a); condn >= (b); i -= add)
#define TRAV1(i, a)                      for (auto &i : a)
#define TRAV2(i, j, a)                   for (auto &[i, j] : a)
#define LB1(x, y)                        lower_bound(x.begin(), x.end(), y)
#define UB1(x, y)                        upper_bound(x.begin(), x.end(), y)
#define LB2(x)                           lower_bound(x)
#define UB2(x)                           upper_bound(x)
#define CNT(x, y)                        count(x.begin(), x.end(), y)
#define overload5(a, b, c, d, e, f, ...) f
#define overload2(a, b, c, d, ...)       d
#define overload1(a, b, c, ...)          c
#define FOR(...)                         overload5(__VA_ARGS__, FOR5, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
#define FORD(...)                        overload5(__VA_ARGS__, FOR5_R, FOR4_R, FOR3_R, FOR2_R, FOR1_R)(__VA_ARGS__)
#define TRAV(...)                        overload2(__VA_ARGS__, TRAV2, TRAV1)(__VA_ARGS__)
#define LB(...)                          overload1(__VA_ARGS__, LB1, LB2)(__VA_ARGS__)
#define UB(...)                          overload1(__VA_ARGS__, UB1, UB2)(__VA_ARGS__)
#define PB                               push_back
#define EB                               emplace_back
#define MKP                              make_pair
#define F                                first
#define S                                second
#define YES                              "Yes"
#define NO                               "No"
#define FUN(type, name, ...)             auto name = [&](__VA_ARGS__) -> type
#define RECFUN(type, name, ...)          auto name = [&](auto &&name, __VA_ARGS__) -> type

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

namespace debug {
void __print(int x) {
    std::cerr << x;
}
void __print(long x) {
    std::cerr << x;
}
void __print(long long x) {
    std::cerr << x;
}
void __print(unsigned x) {
    std::cerr << x;
}
void __print(unsigned long x) {
    std::cerr << x;
}
void __print(unsigned long long x) {
    std::cerr << x;
}
void __print(float x) {
    std::cerr << x;
}
void __print(double x) {
    std::cerr << x;
}
void __print(long double x) {
    std::cerr << x;
}
void __print(char x) {
    std::cerr << '\'' << x << '\'';
}
void __print(const char *x) {
    std::cerr << '\"' << x << '\"';
}
void __print(const std::string x) {
    std::cerr << '\"' << x << '\"';
}
void __print(bool x) {
    std::cerr << (x ? "true" : "false");
}
template <typename T, typename V>
void __print(std::pair<T, V> x) {
    std::cerr << '{';
    __print(x.first);
    std::cerr << ',';
    __print(x.second);
    std::cerr << '}';
}
template <typename T>
void __print(T x) {
    int f = 0;
    std::cerr << '{';
    for (auto &i : x)
        std::cerr << (f++ ? "," : ""), __print(i);
    std::cerr << "}";
}
template <typename T>
void __print(std::stack<T> x) {
    std::vector<T> _x;
    while (!x.empty())
        _x.push_back(x.top()), x.pop();
    reverse(_x.begin(), _x.end());
    __print(_x);
}
template <typename T>
void __print(std::queue<T> x) {
    std::vector<T> _x;
    while (!x.empty())
        _x.push_back(x.front()), x.pop();
    reverse(_x.begin(), _x.end());
    __print(_x);
}
template <typename T>
void __print(std::priority_queue<T> x) {
    std::vector<T> _x;
    while (!x.empty())
        _x.push_back(x.top()), x.pop();
    reverse(_x.begin(), _x.end());
    __print(_x);
}
template <typename T>
void __print(std::priority_queue<T, std::vector<T>, std::greater<T>> x) {
    std::vector<T> _x;
    while (!x.empty())
        _x.push_back(x.top()), x.pop();
    reverse(_x.begin(), _x.end());
    __print(_x);
}
void _print() {
    std::cerr << "]\n\n";
}
template <typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v))
        std::cerr << ", ";
    _print(v...);
}
template <typename T>
void _print2d(T x) {
    for (auto &i : x)
        _print(i);
}
} // namespace debug
namespace fio {
void rd(char &c) {
    std::cin >> c;
}
void rd(std::string &x) {
    std::cin >> x;
}
template <typename T>
void rd_real(T &x) {
    std::string s;
    rd(s);
    x = stod(s);
}
void rd(int &x) {
    std::cin >> x;
}
void rd(long long &x) {
    std::cin >> x;
}
void rd(unsigned int &x) {
    std::cin >> x;
}
void rd(unsigned long long &x) {
    std::cin >> x;
}
void rd(double &x) {
    rd_real(x);
}
void rd(long double &x) {
    rd_real(x);
}
void rd(__float128 &x) {
    rd_real(x);
}
template <class T, class U>
void rd(std::pair<T, U> &p) {
    return rd(p.first), rd(p.second);
}
template <size_t N = 0, typename T>
void rd_tuple(T &t) {
    if constexpr (N < std::tuple_size<T>::value) {
        auto &x = std::get<N>(t);
        rd(x);
        rd_tuple<N + 1>(t);
    }
}
template <class... T>
void rd(std::tuple<T...> &tpl) {
    rd_tuple(tpl);
}
template <size_t N = 0, typename T>
void rd(std::array<T, N> &x) {
    for (auto &d : x)
        rd(d);
}
template <class T>
void rd(std::vector<T> &x) {
    for (auto &d : x)
        rd(d);
}
void read() {}
template <class H, class... T>
void read(H &h, T &...t) {
    rd(h), read(t...);
}
void wt(const char c) {
    std::cout << c;
}
void wt(const std::string s) {
    std::cout << s;
}
void wt(const char *s) {
    size_t len = strlen(s);
    for (size_t i = 0; i < len; i++)
        wt(s[i]);
}
template <typename T>
void wt_real(T x) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(15) << double(x);
    std::string s = oss.str();
    wt(s);
}
void wt(int x) {
    std::cout << x;
}
void wt(long long x) {
    std::cout << x;
}
void wt(unsigned int x) {
    std::cout << x;
}
void wt(unsigned long long x) {
    std::cout << x;
}
void wt(double x) {
    wt_real(x);
}
void wt(long double x) {
    wt_real(x);
}
void wt(__float128 x) {
    wt_real(x);
}
template <class T, class U>
void wt(const std::pair<T, U> val) {
    wt(val.first);
    wt(' ');
    wt(val.second);
}
template <size_t N = 0, typename T>
void wt_tuple(const T t) {
    if constexpr (N < std::tuple_size<T>::value) {
        if constexpr (N > 0) {
            wt(' ');
        }
        const auto x = std::get<N>(t);
        wt(x);
        wt_tuple<N + 1>(t);
    }
}
template <class... T>
void wt(std::tuple<T...> tpl) {
    wt_tuple(tpl);
}
template <class T, size_t S>
void wt(const std::array<T, S> val) {
    auto n = val.size();
    for (size_t i = 0; i < n; i++) {
        if (i)
            wt(' ');
        wt(val[i]);
    }
}
template <class T>
void wt(const std::vector<T> val) {
    auto n = val.size();
    for (size_t i = 0; i < n; i++) {
        if (i)
            wt(' ');
        wt(val[i]);
    }
}
void print() {
    wt('\n');
}
template <class Head, class... Tail>
void print(Head &&head, Tail &&...tail) {
    wt(head);
    if (sizeof...(Tail))
        wt(' ');
    print(std::forward<Tail>(tail)...);
}
void println() {
    wt('\n');
}
template <class Head, class... Tail>
void println(Head &&head, Tail &&...tail) {
    wt(head);
    if (sizeof...(Tail))
        wt('\n');
    println(std::forward<Tail>(tail)...);
}
template <typename T>
void print2d(T x) {
    for (auto &i : x)
        println(i);
}
} // namespace fio

using namespace std;
using namespace __gnu_pbds;
using namespace debug;
using namespace fio;

int POPCNT(int x) {
    return __builtin_popcount(x);
}
int POPCNT(long long x) {
    return __builtin_popcountll(x);
}
int TOPBIT(int x) {
    return (x == 0 ? -1 : 31 - __builtin_clz(x));
}
int TOPBIT(long long x) {
    return (x == 0 ? -1 : 63 - __builtin_clzll(x));
}
int LOWBIT(int x) {
    return (x == 0 ? -1 : __builtin_ctz(x));
}
int LOWBIT(long long x) {
    return (x == 0 ? -1 : __builtin_ctzll(x));
}
long long CNT_UPTO_HAVING_BIT(int bit, long long n) {
    long long res = (n >> (bit + 1)) << bit;
    if ((n >> bit) & 1)
        res += ((n & ((1ll << bit) - 1)) + 1);
    return res;
}

template <typename T>
int SIGN(const T &x) {
    return (x > 0 ? 1 : x < 0 ? -1 : 0);
};
template <typename T, typename U>
T CEIL(T x, U y) {
    return (x > 0 ? (x + y - 1) / y : x / y);
}
template <typename T, typename U>
T FLOOr(T x, U y) {
    return (x > 0 ? x / y : (x - y + 1) / y);
}
template <class T, class S>
bool CHMX(T &a, const S &b) {
    return (a < b ? a = b, 1 : 0);
}
template <class T, class S>
bool CHMN(T &a, const S &b) {
    return (a > b ? a = b, 1 : 0);
}
template <typename F>
long long BINSER(F check, long long lo, long long hi, long long df) {
    long long ret = df;
    while (abs(lo - hi) > 1) {
        long long mid = lo + (hi - lo) / 2;
        bool res = check(mid);
        (res ? lo : hi) = mid + (res ? 1 : -1);
        if (res)
            ret = mid;
    }
    return ret;
}
template <typename T>
void PRFXSUM(vector<T> &a) {
    int _n = a.size();
    for (int i = 1; i < _n; i++)
        a[i] += a[i - 1];
};
template <typename T, typename U>
vector<T> GETORDER(T start, T size, U comp) {
    vector<T> ord(size);
    iota(ord.begin(), ord.end(), start);
    sort(ord.begin(), ord.end(), comp);
    return ord;
}
template <typename T = int, typename U = int>
map<T, U> MAPPOS(const vector<T> &data, U offset) {
    map<T, U> ps;
    for (int i = 0; i < data.size(); i++)
        ps[data[i]] = i + offset;
    return ps;
}
template <typename T>
map<T, int> COUNTER(const vector<T> &data) {
    map<T, int> x;
    for (auto &i : data)
        x[i]++;
    return x;
};
template <typename T, typename U>
T TOSET(const vector<U> &data) {
    T x;
    for (auto &i : data)
        x.insert(i);
    return x;
};
template <typename T, typename U>
U ERASE(T &setik, U target) {
    auto iterator = setik.find(target);
    assert(iterator != setik.end());
    U a = *iterator;
    setik.erase(iterator);
    return a;
}
template <typename T, typename U>
pair<U, bool> ERASEIF(T &setik, U target) {
    auto iterator = setik.find(target);
    pair<U, bool> a = {0, false};
    if (iterator != setik.end()) {
        a.first = *iterator;
        setik.erase(iterator);
    }
    return a;
}
template <typename T>
T POP(multiset<T> &que, bool front = false) {
    auto iterator = front ? que.begin() : prev(que.end());
    T a = *iterator;
    que.erase(iterator);
    return a;
}
template <typename T>
T POP(set<T> &que, bool front = false) {
    auto iterator = front ? que.begin() : prev(que.end());
    T a = *iterator;
    que.erase(iterator);
    return a;
}
template <typename T>
T POP(stack<T> &que) {
    T a = que.top();
    que.pop();
    return a;
}
template <typename T>
T POP(queue<T> &que) {
    T a = que.front();
    que.pop();
    return a;
}
template <typename T>
T POP(deque<T> &que, bool front = false) {
    T a = (front ? que.front() : que.back());
    (front ? que.pop_front() : que.pop_back());
    return a;
}
template <typename T>
T POP(priority_queue<T> &que) {
    T a = que.top();
    que.pop();
    return a;
}
template <typename T>
T POP(priority_queue<T, vector<T>, greater<T>> &que) {
    T a = que.top();
    que.pop();
    return a;
}
template <typename T>
T POP(vector<T> &que) {
    T a = que.back;
    que.pop_back();
    return a;
}
template <typename T, typename U>
T FASTPOW(T x, U n) {
    T result = 1;
    while (n > 0) {
        if (n & 1)
            result *= x;
        x *= x;
        n >>= 1;
    }
    return result;
}
template <typename T>
vector<T> DIVISORS(T V) {
    vector<T> ret;
    for (int i = 1; (long long)i * i <= V; ++i) {
        if (V % i == 0) {
            ret.push_back(i);
            if (V / i != i)
                ret.push_back(V / i);
        }
    }
    return ret;
}
template <typename T>
array<T, 3> EXGCD(T a, T b) {
    if (b == 0)
        return {a, 1, 0};
    auto [g, x, y] = exgcd(b, a % b);
    return {g, y, x - a / b * y};
}

constexpr int MOD0 = 998244353;
constexpr int MOD1 = 1e9 + 7;
constexpr int IMX = INT_MAX;
constexpr int IMN = INT_MIN;
constexpr int DX[] = {1, 0, -1, 0};
constexpr int DY[] = {0, 1, 0, -1};
constexpr long long LMX = LLONG_MAX;
constexpr long long LMN = LLONG_MIN;
constexpr char NL = '\n';

using LL = long long;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using VL = vector<long long>;
using VVL = vector<vector<long long>>;
using VPI = vector<pair<int, int>>;
using VPL = vector<pair<long long, long long>>;
using PI = pair<int, int>;
using PL = pair<long long, long long>;
using UINT = unsigned int;
using ULL = unsigned long long;
template <typename T>
using OST = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using VC = vector<T>;
template <typename T>
using PQ = priority_queue<T>;
template <typename T>
using QU = queue<T>;
template <typename T>
using DQ = deque<T>;
template <typename T>
using MPQ = priority_queue<T, vector<T>, greater<T>>;
template <typename T, int N>
using ARR = array<T, N>;

int tt = 1;
void solve();
void presolve();
int main() {
    cin.tie(0)->ios_base::sync_with_stdio(false);
    presolve();
    FOR(tt) SOLVE;
};

void presolve() {
    read(tt);
}

void solve() {}
