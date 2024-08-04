#include<iostream>
using namespace std;
class A {
    public:
    void display(){
        cout<<"chalo ";
    }

};
class B : public A {
    public:
    void display1(){
        cout<<" market ";
    }

};
class C : public A{
    public:
    void display(){
        cout<<" ghumne ";
    }

};
class D : public B , public C {
    public:
    void display(){
        cout<<" ok ";
    }

};

int main(){

    return 0;
}