// Write a C++ program to find sum of digits of a given number using recursion.
#include<iostream>
using namespace std;


int foo(int n){
if (n<=9) return n;
else return (n%10+foo(n/10));  }





int main() {
cout<<"enter a number to find sum of its digits"<<endl;
int a;
cin>>a;


cout<<foo(a);


return 0;
}
