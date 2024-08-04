#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show(){
        cout<<"\n Base Class ";
    }
};
class Derived : public Base {
    public:
    void show(){
        cout<<"\n Derived class";
    }
};
class Derived1 : public Base{
    public:
    void show(){
        cout<<"\nshahid";
    }
};
int  main(){
    Base obj,*p;
    p=&obj;
    p->show();

    Derived obj1; 
    p=&obj1;
    p->show();

    Derived1 obj2;
    p = &obj2;
    p->show();

    return 0;
}