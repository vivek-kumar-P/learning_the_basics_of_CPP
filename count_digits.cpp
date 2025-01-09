#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int countDividingDigits(int n) {
    int count = 0;
    int original = n;  // Store the original number

    while (n > 0) {
        int digit = n % 10;  // Extract the last digit
        if (digit != 0 && original % digit == 0) {  // Check if the digit divides the number evenly
            count++;
        }
        n /= 10;  // Remove the last digit
    }

    return count;
}

int main() {
    // Examples
    cout << countDividingDigits(12) << endl;   // Output: 2
    cout << countDividingDigits(2446) << endl; // Output: 1
    cout << countDividingDigits(23) << endl;   // Output: 0

    return 0;
}
