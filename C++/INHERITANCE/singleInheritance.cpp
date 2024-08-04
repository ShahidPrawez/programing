#include<iostream>
using namespace  std;
class A {
    public:
    void display(){
        cout<<"I am bace class";
    }

};
class B : public A{
    public:
    void displat1(){
        cout<<"I am derived class";
    }
};
int main(){
    system("cls");
    B obj;
    obj.display();
    cout<<"\n";
    obj.displat1();

    return 0;
}
