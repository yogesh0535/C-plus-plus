#include<iostream>
using namespace std;
int main(){
 const int a=45;
 cout<<"the value of a was: "<<a<<endl;

 a=23;           //  you will get error because value of a is fixed
 cout<<"the value of a is: " <<a<<endl;


return 0;
}