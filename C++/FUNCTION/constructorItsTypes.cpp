#include<iostream>
using namespace std;
class rectangle
{
    public:
    int l;
    int b;
    rectangle (){ //defoult constructor
        l=0;
        b=0;
    }
    rectangle(int x, int y){ // parametrise constructor
        l=x;
        b=y;
    }
    rectangle(rectangle & r){
        l=r.l;
        b=r.b;
}
     ~ rectangle(){
        
        cout<<"called"<<endl;

     }

};
int main(){
    rectangle r1;
    cout<<r1.b<<"-"<<r1.b<<endl;

    rectangle r2(8,4);
    cout<<r2.l<<"-"<<r2.b<<endl;

    rectangle r3=r2;
    cout<<r3.l<<"-"<<r3.b<<endl;
    return 0;

    return 0;
}