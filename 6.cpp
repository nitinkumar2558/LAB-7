//program for find reverse of given no.
#include<iostream>
using namespace std;


void foo(int n){
if (n<=9) cout<< n;
else {cout <<n%10;
	foo(n/10);
}



}

int main(){
cout<<"enter a number to find reverse of that number"<<endl;
int a;
cin>>a;
cout <<endl;

foo(a);



return 0;
}
