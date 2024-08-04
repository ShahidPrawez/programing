#include<iostream>
using namespace std;
int main(){
    int arr[3][3],brr[3][3],crr[3][3];
    cout<<"Enter first matrix\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"diagonal matrix\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i]==0 && arr[j]==0 ){
                crr[i][j]=brr[i][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<crr[i][j]<<endl;
        }
    }
    return 0;
    
}