// Write a C++ program to find sum of all even and odd numbers in given range using recursion.
#include<iostream>
using namespace std;


 int foo(int n,int m) {
if(n<=m){
//for evan sum 
		if(n%2==0){
			

		return   (n+foo(n+2,m));}
			else {n++;
                     foo(n,m); } }
else
return 0;
}

//fuction for sum odd
int foo2(int n,int m){ if(n<=m)
{
			if (n%2!=0){
			
		return (n+foo2(n+2,m));}

			else{ n++;
					foo2(n,m); }
        }

else
return 0; }


int main (){
cout<< "write two no. for range to find sum of evan and odd"<<endl;

int a,b;
cin>>a>>b;

cout<<"sum of evan numbers is  "<<foo(a,b);

cout<<endl;
cout<<"sum of odd number is  "<<foo2(a,b);



return 0;
}
