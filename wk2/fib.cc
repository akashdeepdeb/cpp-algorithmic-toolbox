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


/*
#include <iostream>

int calc_fib (int n) {
    if (n<=1)
        return n;
    else
        return calc_fib(n-1) + calc_fib(n-2);
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cout << calc_fib(n) << '\n';
    return 0;
}
*/
