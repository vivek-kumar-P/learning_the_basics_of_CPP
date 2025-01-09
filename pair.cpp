#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void expalainpair(){
    pair<int , int> p = {1,3};
    cout << p.first << " " << p.second;
    pair <int , pair<int,int>> q = {1,{3,4}};
    cout << q.first << " " << q.second.second<<" "<< q.second.first;
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout << arr[1].second;
}


void explainvector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;

    // v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5,100); // {100,100,100,100,100}

    vector<int>v(5); //{0,0,0,0,0}

    vector <int> v1(5,20);//{20,20,20,20,20}
    vector <int> v2(v1);//copy of v1
}

int main(){
    explainvector();
}