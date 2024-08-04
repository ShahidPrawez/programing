#include<iostream>
using namespace std;
class C{
    int a,b;
    public:
    C(int x, int y){
        a=x;
        b=y;
    }
   C(C &r){
    a=r.a;
    b=r.b;
   }
   void shwo(){
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
   }
};
int main(){

    C obj1(10,20);
    C obj2 = obj1;
    obj1.shwo();
    obj2.shwo();

    return 0;

}