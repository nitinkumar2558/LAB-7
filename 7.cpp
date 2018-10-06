//program to cheak no. is pallindrome or not 
#include<iostream>
using namespace std;



int foo(int n,int m ){
if (n==0) return m;
//51=(5*10)+(51%10) where 51%10=1  ==51
else{ 


m=(m*10)+(n%10);
return foo(n/10,m);


}
}


int main(){

cout <<"enter a number to cheak that is pallindromic or not"<<endl;
int a,b=0,z;
cin>>a;
z=foo(a,b);
if (a==z){
cout<<"number is pallindrome"<<endl;
}
else cout <<"number is not pallindrome"<<endl;
return 0;
}
