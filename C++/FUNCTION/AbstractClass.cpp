#include<iostream>
using namespace std;
class Bank{
    public:
    virtual void show()=0;
};
class CA : public Bank{
    public:
    void show(){
        cout<<"Name : Shahid Prawez\nDOB : 25/27/2006\nAccount number : 123456789";
    }
};
int main(){
    Bank *ptr;CA obj;
    ptr =&obj;
    ptr->show();
    return 0;
}