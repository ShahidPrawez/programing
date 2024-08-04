//not compleat
#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,4,6,10,18};
    int arr2[]={1,6,8,10,15,18};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
   cout<<"Common element"<<endl;
   int i=0,j=0;
   while(i<size1 && j<size2){
    if(arr1[i]== arr2[j]){
        cout<<arr1[i]<<" ";
        i++;
        j++;
    }
    else if(arr1[i]<arr2[j]){
        i++;
    }
    else if(arr2[j]<arr1[i]){
        j++;
    }
   }
   return 0;
    
}