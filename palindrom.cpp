#include <iostream>
#include <climits>  // For INT_MIN and INT_MAX
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        long reversed = 0;
        int original = x;

        while(x > 0){
            int lastdigit = x % 10;
            x = x/10;
            reversed = (reversed*10)+lastdigit;
        }
        if(reversed == original){
            return true;
        }
        else return false;
    }
};