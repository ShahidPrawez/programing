#include<iostream>
using namespace std;
int addition(int x, int y){
    int add=x+y;
    return add;
}
void fun(string name){
    cout<<"Welcome "<<name;
}
int main(){
    cout<<addition(10,10)<<" ";// cout bhi kar sakte hai 
    int result = addition(10,10);// new variable bna kar store bhi
    cout<<result<<endl;
    fun("shahid khan");//void funtion ko cout nahi kr sakte aur na hi dusre variable bna kr store
}