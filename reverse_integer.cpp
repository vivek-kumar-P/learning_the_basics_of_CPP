
#include <iostream>
#include <climits>  // For INT_MIN and INT_MAX
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int revn = 0;
        while (x != 0) { // Use x != 0 to handle both positive and negative numbers
            int lastdigit = x % 10; // Extract the last digit
            x = x / 10; // Remove the last digit

            // Check for overflow/underflow before updating `revn`
            if (revn > INT_MAX / 10 || (revn == INT_MAX / 10 && lastdigit > 7)) {
                return 0; // Overflow for positive numbers
            }
            if (revn < INT_MIN / 10 || (revn == INT_MIN / 10 && lastdigit < -8)) {
                return 0; // Underflow for negative numbers
            }

            revn = (revn * 10) + lastdigit; // Update the reversed number
        }
        return revn;
    }
};