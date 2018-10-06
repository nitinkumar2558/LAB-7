//program to generate Nth fibonacci term using recursion
#include<iostream>
using namespace std;


int foo(int n){
		if (n==1) return 1;
	else if(n==0)return 0;
 else return foo(n-1)+foo(n-2);
} 



int main() {
cout<<" which term you wants to print in fibonacci series"<<endl;
int a;
cin>>a;

cout<<foo(a);



return 0;
}


