#include <iostream>

int get_change(int n) {
    int D[] = {10, 5, 1}, i = 0, num = 0;
    while(n>0)  {
        if(n-D[i]>=0)   {
            n = n-D[i];
            num++;
        }
        else
            i++;
    }
    return num;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << get_change(n) << '\n';
}
