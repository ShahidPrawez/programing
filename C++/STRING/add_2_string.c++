#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2,result;
    cout<<"Enter first string :- ";
    getline(cin, s1);
    cout<<"Enter second string :- ";
    getline(cin, s2);
    result = s1 + s2;
    cout<<result<<endl;
    return 0;
}