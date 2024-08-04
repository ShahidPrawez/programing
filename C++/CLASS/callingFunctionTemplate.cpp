#include<iostream>
using namespace std;
template<class T>
T add(T a, T b){
    return a+b;
}
int main(){
    int resultt1;
    double resultt2;

    resultt1 = add<int>(10,10);
    cout<<"10+10="<<resultt1<<endl;
    resultt2= add<double>(2.2,3.8);
    cout<<"2.2 + 3.8 = "<<resultt2;

    return 0;
}  