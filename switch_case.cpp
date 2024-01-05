#include<iostream>
using namespace std;
int main(){
cout<<"Enter the age: ";
int age;
cin>>age;

switch(age)
{
    case 18:
        cout<<"your age is 18"<<endl;
        break;
    case 50:
        cout<<"your age is 50"<<endl;
        break;
    
    default:
     cout<<"you are alien";
    break;

}



return 0;
}