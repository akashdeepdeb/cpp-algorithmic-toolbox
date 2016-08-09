#include <iostream>
#include <vector>

long long get_fibonaccihuge(long long n, long long m) {
    long long pisano = 1;
    int flag = 0;
    std::vector<long> F {0,1};
    for(int i = 2; i<n+1; ++i) {
        F.push_back((F[i-1] + F[i-2])%m);
        if (F[i-1] == 0 && F[i] == 1)   {
            flag = 1;
            break;
        }
        else
            pisano++;
    }
    if(flag == 1)
        return F[n%pisano];
    else
        return F[n];
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonaccihuge(n, m) << '\n';
}
