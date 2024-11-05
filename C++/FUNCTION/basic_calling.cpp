#include<iostream>
using namespace std;
string welcome(string name){
    return "hii"+name;
}
int main(){
   string name=welcome("  shahid");
   cout<<name;
}