// Write a C++ program to find factorial of any number using recursion.
#include <iostream>
using namespace std;


int factorial(int n){
if (n==1) {return 1; } 
//print number

//call function 
return (n*factorial(n-1));




}


int main () {
int a;
cout <<"give number to do factorial of that"<<endl;
cin>>a;
factorial(a);
cout<<factorial(a);


return 0;
}
