#include<iostream>
using namespace std;
class base {
    public:
    void display(){
        cout<<"jay ram";
    }
};
class derived : public base{
    public:
    
    // void display(){
    //     cout<<"Shahid Prawez"<<endl;
    // }
};
int main(){
    derived obj;
    base *p;
    p=&obj;
    p->display();
    return 0;
}