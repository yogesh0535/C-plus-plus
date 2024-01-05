#include<iostream>
using namespace std;
int main(){
    int a=34;
    int* b=&a;
    cout<<"value of a is: "<<a<<endl;
    cout<<"address of a is given by b is: "<< b<<endl;
    cout<<"value of a is given by *b is: "<< *b<<endl;
    cout<< "address of b is given by &b is: "<< &b<<endl;
 
    // pointer to pointer
    int** c=&b;

    cout<<**c<<endl;
    cout<<*c<<endl;
    cout<<&c;
 
    return  0;
} 