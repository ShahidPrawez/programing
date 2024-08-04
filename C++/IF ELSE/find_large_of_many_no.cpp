#include<iostream>
using namespace std;
int main(){
    int m,n,large = 0;
    cout<<"How many number : ";
    cin>>m;
    for(int i =0;i<m; ++i){
        cout<<"\nenter number "<<i+1<<":";
        cin>>n;
        if(n>large){
            large = n;
            
        }
        cout<<"the largest number is : "<<large<<endl;
    }
}