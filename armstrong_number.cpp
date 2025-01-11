#include <iostream>
using namespace std;

bool armstrong(int n){
    int dup = n;
    int sum = 0;
    while(n > 0){
        int ln = n % 10;
        sum = sum + (ln*ln*ln);
        n = n/10;
    }
    return sum == dup;
}

int main(){
    int n;
    cin >> n; // n = 1634, 371.......
    bool result = armstrong(n);
    if(result)
        cout << "True";
    else
        cout << "False";
}