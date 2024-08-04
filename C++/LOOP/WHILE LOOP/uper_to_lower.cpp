#include<iostream>
using namespace std;
int main(){
    char ch,c;
    cout<<" Enter upper case string : ";
    while((ch = getchar())=='\n');
    {
        c = ch+32;
        putchar(c);
        
    }
}