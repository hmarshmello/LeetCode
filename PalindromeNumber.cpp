#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,num;
    int remainder = 0, reverse = 0;
    cin >> x;
    num = x;


    //reverse
    while(x != 0){
        remainder = x%10;
        reverse = reverse*10 + remainder;
        x /= 10;
    }

    if(num == reverse) return true;
    else return false;

    return 0;

    /* //BASIC CONVERSIONS
    int last, first, middle;
    first = x;
    int digits = (int)log10(x) + 1;

    last = x%10;
    while(first>10) first = first / 10;
    middle = (int)(x / pow(10, digits / 2)) % 10;
    */ //BASIC CONVERSIONS
}