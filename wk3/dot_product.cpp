#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

bool comparator1 (long a, long b){
    return a<b;
}

bool comparator2 (long a, long b){
    return a>b;
}

long long min_dot_product(vector<long> a, vector<long> b) {
  // write your code here
  long long result = 0;
  for (size_t i = 0; i < a.size(); i++) {
    result += a[i] * b[i];
  }
  return result;
}

int main() {
    size_t n;
    std::cin >> n;
    vector<long> a(n), b(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    sort(a.begin(), a.end(), comparator1);
    for (size_t i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    sort(b.begin(), b.end(), comparator2);
    std::cout << min_dot_product(a, b) << std::endl;
}
