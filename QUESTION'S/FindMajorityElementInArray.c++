#include<iostream>
using namespace std;
int majority(int arr[], int n){
    int max=0,index=-1,count=0;
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            if(arr[i]==arr[j]){
                count ++;
            }
            if(count>max){
                max= count;
                index=i;
            }
        }
    }
    if(max > n/2){
            cout<<arr[index]<<endl;
        }
        else 
        cout<<"No majority element"<<endl;

}
int main(){
    int arr[]={1,2,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    majority(arr,n);

    return 0;
}