#include<iostream>
using namespace std;
class A {
    public:
    void show(){
        cout<<"shahid ";
    }
    class B : public A
    {
        public:
        void display(){
            cout<<"prawez";
        }
    };
};
int main(){
    A obj,*p;
    p=&obj;
    p->show();
    
    return 0;
}