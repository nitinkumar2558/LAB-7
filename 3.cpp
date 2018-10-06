//write aprogram to print all evan and odd   no. in given range using recursion
#include<iostream>
using namespace std;
//recursion function

void foo(int n,int m) {
if (n>m){  }

else     {

			if(n%2==0){
//condition

//print no
				cout<<n<<endl;
//increase by 2
			n=n+2;
//call function
			foo(n,m);}

		else { n++;
		foo(n,m);}	

} }





void foo2(int n,int m){
if (n>m){ }
else {
if (n%2!=0){
//print number
cout<<n<<endl;
//increased by 2
n=n+2;
//call function
foo2(n,m);}

else{ n++;
foo2(n,m);   } }
}




int main(){
cout<<"from where to where wants to print evan and odd no."<< endl; 
int a,b;
cin>>a;
cin>>b;
cout<<"evan numbers are"<<endl;
		foo(a,b);
		cout<<"odd numbers are"<<endl;
		foo2(a,b);

return 0;
}

