#include<iostream>
#include"max.hpp"
using namespace std;

void Maximum::input()
{
    cout << "Input:";
    cin >> a;
    cout << "Input:";
    cin >> b;
}

void Maximum::max(){ 
    if(a>b) result = a;
    else result = b;
}

void Maximum::print()
{ cout <<"max:"<<result<< endl; }