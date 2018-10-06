//write a program to print all natural numbers b/w 1to n using recursion
#include<iostream>
using namespace std;
//recursion function


void foo(int i,int n) {
//condition
						if (i>n) {  
					    }
					   else
//print number
					cout<< i<<endl;
//increase by one
			i++;
//call funtion
	foo(i,n);


}

int main() {
int n;
cout <<"till where natural no you wants to print"<<endl;
cin>>n;
cout<<endl;
	foo(1,n);
return 0;

}
