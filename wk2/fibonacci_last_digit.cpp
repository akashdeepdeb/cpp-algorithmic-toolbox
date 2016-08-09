#include <iostream>

int get_fibonacci_last_digit(int n) {
    int F[n];
    F[0] = 0;
    F[1] = 1;
    for(long i = 2; i<n+1; ++i)
        F[i] = (F[i-1] + F[i-2])%10;
    return F[n];
  return 0;
}

int main() {
  int n;
  std::cin >> n;
  int c = get_fibonacci_last_digit(n);
  std::cout << c << '\n';
}

/*
 
//FIBONACCI
 #include <iostream>
 
 int calc_fib (int n) {
 int F[n];
 F[0] = 0;
 F[1] = 1;
 for(int i = 2; i<n+1; ++i)
 F[i] = F[i-1] + F[i-2];
 return F[n];
 }
 
 int main() {
 int n = 0;
 std::cin >> n;
 std::cout << calc_fib(n) << '\n';
 return 0;
 }

*/