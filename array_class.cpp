#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    string course;

   void printinfo(){
       cout<<"Name: "<<name<<endl;
       cout<<"Roll number: "<<roll_no<<endl;
       cout<<"Course: "<<course<<endl;
    }

};

int main(){ 

    student std[3];
    for(int i=1;i<4;i++){
        cout<<"enter the name of "<<i<<" student: ";
        cin>>std[i].name;
        cout<<"enter the roll number of "<<i<<" student: ";
        cin>>std[i].roll_no;
        cout<<"enter the course of "<<i<<" student: ";
        cin>>std[i].course;
    }

    for(int i=1;i<=3;i++){
        std[i].printinfo();
    }


return 0;
}