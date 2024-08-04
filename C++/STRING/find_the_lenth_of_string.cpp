#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string link your name : ";
    cin>>s;
    int length=0;
    for(int i=0;s[i]>'\0';i++){
        length++;
    }
    cout<<length;
}