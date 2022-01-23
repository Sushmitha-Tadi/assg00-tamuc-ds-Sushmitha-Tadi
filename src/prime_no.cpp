#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool primeno(int num){
    int val= sqrt(num);
    for(int i=2 ; i<val;i++){
        if(num%val==0){
            return false;
        }
    }
    return true;
}

int main(){
    // call for prime number
    // cout<<primeno(49);
    return 0;
}