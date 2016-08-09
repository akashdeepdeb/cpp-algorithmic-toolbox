//
//  maxpp.cpp
//  
//
//  Created by Akashdeep Deb on 6/5/16.
//
//

#include <iostream>

using namespace std;

long MaxPairwiseProductFast(const vector<int>& numbers) {
    int n = numbers.size(), count=0;
    
    int max1_index = -1;
    for(int i = 0; i<n; ++i)    {
        if (max1_index == -1 || numbers[i] > numbers[max1_index])
            max1_index = i;
    }
    
    int max2_index = -1;
    for(int i = 0; i<n; ++i)    {
        if (numbers[i] == numbers[max1_index])  {
            count++;
        }
        if((numbers[i] != numbers[max1_index] || count >= 2) && (max2_index == -1 || numbers[i] > numbers[max2_index]))
            max2_index = i;
    }
    return (long) numbers[max1_index] * numbers[max2_index];
}

int main()  {
    int n;
    cin >> n;
    int numbers[n];
    for(int i = 0; i<n; ++i)    {
        cin >> numbers[i];
    }
    
    return 0;
}
