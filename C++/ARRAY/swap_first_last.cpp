#include<iostream>
using namespace std;
int main(){
    int temp;
    int arr[5]={1,2,3,4,5};
    temp=arr[0];
    arr[0]=arr[5-1];
    arr[5-1]=temp;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}
