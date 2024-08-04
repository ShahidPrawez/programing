#include<iostream>
using namespace std;
int main(){
    int arr[]={1,8,7,9,6,5,4,7,8,6};
    int x,index;
    cout<<"Enter x : ";
    cin>>x;
    for(int i=0;i<10;i++){
        if(arr[i]==x){
            index=i;
        }
    }
    cout<<"last occurence is : "<<index<<endl;
    return 0;
}