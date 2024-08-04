#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"kya hal hai bhai\n";
    }

};
class B : public A{
    public:
    void display1(){
        cout<<"class B-> Thik ba Bhai apna  Bbtaiye \n";
    }

};
class C : public A{
    public:
    void display2(){
        cout<<"Class c-> Mast ba bhai\n";
    }

};
int main(){
    system("cls");
    B o;
    o.display();
    o.display1();
    C o1;
    o1.display();
    o1.display2();

    return 0;
}