#include <iostream>
using namespace std;

class Solution {
  public:
    int sumOfDivisors(int n) {
        // Write Your Code here
        int totalsum = 0 ;
        for(int i = 1 ; i <= n ; i++ ){
            totalsum = totalsum + (i*(i/n));
        }
        return totalsum;
    }
};