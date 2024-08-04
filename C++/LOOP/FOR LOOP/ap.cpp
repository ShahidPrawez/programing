// print this :> 1 2 4 8 64 ....182
#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i<=128; i*=2){
        cout<<i<<endl;
    } 
}