#include<iostream>
using namespace std;
class A{
    public: 
    void display(){
        cout<<"0";
    }
};
class B : virtual public A{
    public: 
    void display1(){
        cout<<"1";
    }
};
class C :virtual public A{
    public: 
    void display2(){
        cout<<"2";
    }
};
class D : public C, public B{
    public: 
    void display3(){
        cout<<"3";
    }
};
int main(){
    D obj;
    obj.display();


    return 0;
}