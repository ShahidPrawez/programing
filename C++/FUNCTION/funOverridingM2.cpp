#include<iostream>
using namespace std;
class base {
    public:
    void display(){
        cout<<"Base class";
    }
};
class derived : public base{
    public:
    
    void display(){
        cout<<"Derived class"<<endl;
    }
};
int main(){
    derived d;
    d.display();
    return 0;
}