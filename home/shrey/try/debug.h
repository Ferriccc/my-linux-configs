#include <bits/stdc++.h>

inline void __print(int x) { std::cerr << x; }
inline void __print(long x) { std::cerr << x; }
inline void __print(long long x) { std::cerr << x; }
inline void __print(unsigned x) { std::cerr << x; }
inline void __print(unsigned long x) { std::cerr << x; }
inline void __print(unsigned long long x) { std::cerr << x; }
inline void __print(float x) { std::cerr << x; }
inline void __print(double x) { std::cerr << x; }
inline void __print(long double x) { std::cerr << x; }
inline void __print(char x) { std::cerr << '\'' << x << '\''; }
inline void __print(const char *x) { std::cerr << '\"' << x << '\"'; }
inline void __print(const std::string x) { std::cerr << '\"' << x << '\"'; }
inline void __print(bool x) { std::cerr << (x ? "true" : "false"); }
template <typename T, typename V> void __print(std::pair<T, V> x) {
  std::cerr << '{';
  __print(x.first);
  std::cerr << ',';
  __print(x.second);
  std::cerr << '}';
}
template <typename T> void __print(T x) {
  int f = 0;
  std::cerr << '{';
  for (auto &i : x)
    std::cerr << (f++ ? "," : ""), __print(i);
  std::cerr << "}";
}
template <typename T> void __print(std::stack<T> x) {
  std::vector<T> _x;
  while (!x.empty())
    _x.push_back(x.top()), x.pop();
  reverse(_x.begin(), _x.end());
  __print(_x);
}
template <typename T> void __print(std::queue<T> x) {
  std::vector<T> _x;
  while (!x.empty())
    _x.push_back(x.front()), x.pop();
  reverse(_x.begin(), _x.end());
  __print(_x);
}
template <typename T> void __print(std::priority_queue<T> x) {
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
inline void _print() { std::cerr << "]\n\n"; }
template <typename T, typename... V> void _print(T t, V... v) {
  __print(t);
  if (sizeof...(v))
    std::cerr << ", ";
  _print(v...);
}
template <typename T> void _print2d(T x) {
  for (auto &i : x)
    _print(i);
}

#define dbg(x...)                                                              \
  cerr << "[" << #x << "] = [";                                                \
  _print(x)
#define dbg2d(x)                                                               \
  cerr << "[" << #x << "]\n";                                                  \
  _print2d(x)
