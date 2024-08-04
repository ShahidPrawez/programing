#include<iostream>
using namespace std;
int main(){
    int n,sumeven = 0,sumodd = 0;
    cout<<"enter value of n : ";
    cin>>n;
    for(int i =0;i<=n;i++){
        // cout<<"enter value of n : ";
        // cin>>n;
        if(i%2==0){
            sumeven+=i;
        }
        else
        sumodd+=i;
    }
    cout<<"the sum even number : "<<sumeven<<endl;
    cout<<"the sum odd number : "<<sumodd<<endl;
}