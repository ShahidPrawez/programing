#include<iostream>
using namespace std;
class A
{
    public :
    void display(){
        cout<<"display A\n";
    }
};
class B : public A
{
    public :
    void display1(){
        cout<<"display B\n";
    }
};
class C : public A
{
    public :
    void display2(){
        cout<<"display C\n";
    }
};
class D : public B , public C
{
    public :
    void display3(){
        cout<<"display D\n";
    }
};
int main(){
    B obj1;
    obj1.display();
    C obj2;
    obj2.display();
    D obj;
    obj.display1();
    obj.display2();
    obj.display3();
    
    return 0;
}