#include<iostream>
using namespace std;
template<class X>
class demo{
    X num1,num2;
    public:
    demo(X n1, X n2){
        num1=n1;
        num2=n2;
    }

    void check()
    {
        if(num1>num2){
            cout<<num1<<" in grate"<<endl;
        }
        else{
            cout<<num2<<" is grate"<<endl;
        }
    } 
};
int main()
{
    demo <float> obj1(2.4,2.5);
    obj1.check();
    return 0;
}