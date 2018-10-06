//program for sum of all natural no b/w 1to n


#include<iostream>
using namespace std;

//recursion function
int foo(int n){
if (n==1){ return 1;
}
else {
return (n+foo(n-1));
}


}

int main() {
cout<<"till where you want sum of natural no" << endl;
int n;
cin>>n;
cout<<"the sum upto n is "<<foo(n);



return 0;
}

