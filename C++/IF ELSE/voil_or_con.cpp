#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"enter a english letter : ";
    cin>>n;
    if(n == 'a'|| n== 'e' || n== 'i' || n== 'o' || n== 'u'|| n == 'A'|| n== 'E' || n== 'I' || n== 'O' || n== 'U' ){
        cout<<"you enter a vowel letter : "<< n <<endl;
    }
    else{
        cout<<"you enter a consent letter : "<< n <<endl;
    }
}