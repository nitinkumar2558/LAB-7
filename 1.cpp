//program to find power of any no. using recursion
#include<iostream>
using namespace std;

//recursion function
int foo(int a,int b) {
//a^b=a*a^b-1
if (b==0) return 1;
else return (a*foo(a,b-1));





}


int main() {
int n,m;
cout<<"write a number";
cin>>n;
cout<<"assign a power to it"<<endl; 
cin>>m;
foo(n,m);
cout<<foo(n,m)<<endl;

return 0;
}
