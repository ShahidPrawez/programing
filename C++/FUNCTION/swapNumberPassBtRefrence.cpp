#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp =x;
    x=y;
    y=temp;
}
int main(){
    int x=10;
    int c=1;
    int &y =x;//pass by refrence....
    swap(x,c);
    cout<<y<<" "<<c<<endl;
    return 0;
}