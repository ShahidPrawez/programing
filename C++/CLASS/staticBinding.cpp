#include<iostream>
using namespace std;
class Base{
    public:
   void show(){
        cout<<"\n Base Class ";
    }
};
class Derived : public Base {
    public:
    void show(){
        cout<<"\n Derived class";
    }
};

int  main(){
    Base obj,*p;
    Derived obj1;
    p=&obj;
    p->show();
    p=&obj1;
    p->show();

    return 0;
}