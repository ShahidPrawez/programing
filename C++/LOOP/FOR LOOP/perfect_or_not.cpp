#include<iostream>
using namespace std;
int main(){
    int n,s=0;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=1; i > n/2; i++){
        if(n%i==0){
            s+=i;
            if(s==n){
                cout<<"this is  perfect number"<<endl;
            }
            else
                cout<<"this is not perfect number"<<endl;
            
        }
    }
}