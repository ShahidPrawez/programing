#include<iostream>
#include<vector>
using namespace std;
int abssum( vector<int> arr){
   int result=0;
    for(int i=0; i< arr.size();i++){
        if(arr[i]<0){
            arr[i]*= (-1);
        }
        result += arr[i];
    }
    return result;
}
int main(){
    int arr[5]={2,-5,8,2,8};
    
}