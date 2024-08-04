#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,5,4,6,4,5,4,5,2};
    int *p=arr;
for(int i=0;i<10;i++){
    *p++;
}
    cout<<*p<<" ";
}