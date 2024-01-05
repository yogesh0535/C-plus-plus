#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter the number: ";
cin>>n;

if(n<18){
    cout<<"you are less than 18"<<endl;
}

else if(n<50){
    cout<<"You are less than 50"<<endl;
}

else if(n>150){
    cout<<"Your age is invalid"<<endl;
}

else{
    cout<<"you are above than 50"<<endl;
}

return 0;
}