#include<bits/stdc++.h>
using namespace std;


// *****
// *****
// *****
// *****
// *****
void print1(int n){

    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cout <<"*";
        }
        cout << endl;
    }
}


/*
*   
* * 
* * *
* * * *
* * * * *
*/
void print2(int n){
    for(int i = 1;i<=n;i++){
        for (int j = 1 ; j<= i ;j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}


/*
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5 
*/
void print3(int n){
    for(int i = 1;i<=n;i++){
        for (int j = 1 ; j<=i ;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


/*
1
22
333
4444
55555
*/
void print4(int n){
    for(int i =1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout << i;
        }
        cout << endl;
    }
}


/*
* * * * * 
* * * *
* * *
* *
*
*/
void print5(int n){
    for(int i = 1;i<=n;i++){
        for (int j = 0 ; j< n-i+1 ;j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}


/*
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1 
*/
void print6(int n){
    for(int i = 1;i<=n;i++){
        for (int j = 1 ; j<= n-i+1 ;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


/*
    *    
   ***
  *****
 ******* 
*********
*/
void print7(int n){
    for(int i = 0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}


/*
*********
 *******
  *****  
   ***   
    *
*/
void print8(int n){
    for(int i = 0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}


/*
    *    
   ***
  *****
 *******
*********
 ******* 
  *****
   ***   
    *
*/
void print9(int n){
    
    for(int i = 0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
    
    
    for(int i = 1;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}


/*
*
**
***
****
*****
****
***
**
*

*/
void print10(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n-(i+1);j++){
            cout << "*";
        }
        cout << endl;
    }
}


/*
*
**   
***  
**** 
*****
**** 
***  
**   
*  
*/
void print10_5(int n){
    for(int i=0;i<2*n-1;i++){
        if(i<5){
        for(int j=0; j<i+1;j++){
            cout << "*";
        }
        }
        else{
            for(int j=1;j<2*n-i;j++){
                cout << "*";
            }
        }
        cout << endl;
    }
}


/*
1
01 
101
0101
10101
*/
void print11(int n){
    int start = 1;
    for(int i=0;i<n;i++){
        if(i%2==0)start=1;
        else start =0;
        for (int j=0;j<=i;j++){
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}


/*
1        1
12      21
123    321
1234  4321
1234554321
*/
void print12(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int j=0;j<2*(n-i);j++){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }
        
}


/*
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
void print13(int n){
    int count = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}


/*
A 
A B
A B C
A B C D
A B C D E
*/
void print14(int n){
    for(int i=0;i<n;i++){
        for(char ch = 'A';ch<='A'+i;ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


/*
A B C D E 
A B C D
A B C
A B 
A
*/
void print15(int n){
    for(int i=0;i<n;i++){
        for(char ch = 'A'; ch <= 'A' +(n-i-1) ; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


/*
A 
B B
C C C
D D D D
E E E E E
*/
void print16(int n){
    for(int i=0 ;i<n;i++){
        char ch = 'A'+i;
        for(int j = 0;j<=i;j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


/*
    A    
   ABA   
  ABCBA
 ABCDCBA 
ABCDEDCBA
*/
void print17(int n){
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 0;j<2*i+1;j++){
            cout << ch;
            if(j < breakpoint) ch++;
            else ch--;
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}


/*
    A    
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
void print17_5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=0;j<2*i+1;j++){
            cout << ch;
            if (j < breakpoint ) ch++;
            else ch--;
        }
        
        for(int j =0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}


/*
E
DE
CDE
BCDE
ABCDE
*/
void print18(int n){
    for(int i=0;i<n;i++){
        for(char ch = 'E'-i;ch<='E';ch++){
            cout << ch;
        }
        cout <<endl;
    }
}


/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
void print19(int n){
    int inis =0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        for(int j=0;j<inis;j++){
            cout << " ";
        }
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        inis += 2;
        cout <<endl;
    }
    
    int inisp =2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        for(int j=0;j<inisp;j++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        inisp -= 2;
        cout <<endl;
    }
}


/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
void print20(int n){
    int spaces = 2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n)stars = 2*n-i;
        
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        for(int j=1;j<=spaces;j++){
            cout << " ";
        }
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        cout<< endl;
        if(i<n)spaces -=2;
        else spaces +=2;
    }
}


/*
*****
*   *
*   *
*   *
*****
*/
void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}


/*
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
*/
void print22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout << (n-min(min(top,down),min(left,right)));
        }
        cout << endl;
    }
}

int main(){
    int n = 5;
    print22(n);
}