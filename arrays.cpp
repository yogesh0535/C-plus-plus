/*
#include<iostream>
using namespace std;
int main(){
    int i;
    int initializing[4]={34,6,76,32};
    cout<<"the value of "<<1 <<" index is: "<< initializing[0]<<endl;
    cout<<"the value of "<<2 <<" index is: "<< initializing[1]<<endl;
    cout<<"the value of "<<3 <<" index is: "<< initializing[2]<<endl;
    cout<<"the value of "<<4 <<" index is: "<< initializing[3]<<endl;

    initializing[3]=27;
    for(int i=0;i<4;i++){
        cout<<initializing[i]<<"  ";
    }


    int marks[5];
    for(i=0;i<5;i++){
        cout<<"Enter the value of "<<i<<" element: ";
        cin>>marks[i];
    }

    for(i=0;i<5;i++){
        cout<<marks[i]<<"  ";;
    }

return 0;
}
*/


                    // arrays and pointer

#include<iostream>
using namespace std;
int main(){
 int marks[3]={3,5,7};
 int* p=marks;

//  prints first element of array
 cout<<"the value of "<<*p<<endl;
 cout<<marks[0]<<endl;

//  for address of array
 cout<<p<<endl;
 cout<<&marks<<endl;

// for printing array
cout<<"the value of "<<1<<" element by *p  is: "<< *p <<endl;
cout<<"the value of "<<2<<" element by *p+1  is: "<< *(p+1) <<endl;
cout<<"the value of "<<3<<" element by *p+2  is: "<< *(p+2) <<endl;


return 0;
}