#include<iostream>
using namespace std;
int area(float r){
    return 3.14*r*r;
}
int circumference(float r){
    return 2*3.14*r;
}
int main(){
    float r;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"Area of Circle : "<<area(r)<<endl;
    cout<<"Circumference of Circle : "<<circumference(r);
    return 0;
}