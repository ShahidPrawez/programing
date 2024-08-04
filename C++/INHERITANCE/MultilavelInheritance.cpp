#include<iostream>
using namespace  std;
class A {
    public:
    void display(){
        cout<<"I am bace class\n";
    }

};
class B : public A{
    public:
    void displat1(){
        cout<<"class B\n";
    }
};
class C : public B{
    public:
    void displat2(){
        cout<<"Class C\n";
    }
};
class D :public C{
    public:
    void displat3(){
        cout<<"class D\n";
    }
};
int main(){
    system("cls");
    D obj;
    obj.display();
    obj.displat1();
    obj.displat2();
    obj.displat3();

    return 0;
}