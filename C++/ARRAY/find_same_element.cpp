#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,2,6,6,8};
    int count=0;
    for(int i=0;i<5;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<" ";

        }
    }

}