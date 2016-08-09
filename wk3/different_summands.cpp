#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n) {
    vector<int> summands;
    long sum = 0, osum;
    int i = 0;
    while (sum < n)    {
        summands.push_back(i);
        sum+=i;
        i++;
    }
    osum = sum;
    sum -= summands.back();
    if (osum > n)    {
        summands.pop_back();
        summands.back() += n-sum;
    }
    return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size()-1 << '\n';
  for (size_t i = 1; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
