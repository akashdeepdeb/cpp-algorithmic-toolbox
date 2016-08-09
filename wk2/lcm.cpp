#include <iostream>

long gcd(long a, long b) {
    if (b == 0)
        return a;
    else
        return gcd(b,a%b);
}

int main() {
  long a, b;
  std::cin >> a >> b;
  std::cout << (long long) (a*b)/gcd(a, b) << std::endl;
  return 0;
}
