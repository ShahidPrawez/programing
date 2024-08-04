#include<iostream>
using namespace std;
class A{
    public:
    int num=10, num1=20;
    void show (){
        int sum =num+num1;
        cout<<"Add = "<<sum<<endl;
    }
    void show(int a, int b){
        int sub = a - b;
        cout<<"sub = "<<sub<<endl;
    }
    void show(int a){
        cout<<a;
    }
};
int main(){
    A obj;
    obj.show();
    obj.show(100,50);
    obj.show(10);
    
    return 0;
}