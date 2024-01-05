// 
// #include<iostream>
// using namespace std;
// int main(){
    // int i=0;
    // while(i<11){
        // cout<<"square of "<<i<<" is: "<<i*i<<endl;
        // i++;
    // }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the last number ";
    cin>>n;
    int i=0;
    do{
        cout<<"cube of "<<i<<" is: "<<i*i*i<<endl;
        i++;
    }while(i<=n);

return 0;
}