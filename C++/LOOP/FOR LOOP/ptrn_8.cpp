#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    for(int i = 1; i<=size; i++){
        for(int j = 1; j<=i; j++){
            if(j!=i){
                cout<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}