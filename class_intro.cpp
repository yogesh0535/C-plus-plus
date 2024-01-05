#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    int id;
    int salary;
};

int main(){
    employee e;
    e.name = 'yogesh';
    e.id=2101605;
    e.salary=600000;

    cout<<e.id<<endl;
    cout<<e.name<<endl;
    cout<<e.salary<<endl;

return 0;
}