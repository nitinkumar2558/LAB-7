//program for gcd (hcf) of two numbers using recurrsion
#include<iostream>
using namespace std;


 int foo(int m ,int n) {

if (m%n==0) return n;
else return foo(n,m%n);



}
int main() {
int a,b;
cout<<"enter two no. to find there GCD"<<endl;
cin>>a>>b;
if(a>b)
cout<<"the GCD is "<<foo(a,b);
else
cout<<"The GCD is "<<foo(b,a);

return 0;
}


