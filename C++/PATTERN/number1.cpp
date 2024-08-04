#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            
            if(j==0 || j==2){
                cout<<" ";
            }
            else{
                cout<<" *";
            }
            // if(i==1 && i==3){
            //     cout<<" *";
            // }
            // else{
            //     cout<<" ";
            // }
        }
        cout<<"\n";
        for(int k=0;k<3;k++){
            if(k==1 && k==3){
                cout<<" ";
            }
            else{
                cout<<" *";
            }
        }
        
    }
}