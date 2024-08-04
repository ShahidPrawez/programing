// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter array elemen in array\n";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int index,element;
//     cout<<"Before insertion\n";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"Enter index number you want to insert : ";
//     cin>>index;
//     for(int i=n;i>=index;i--){
//         arr[i+1]=arr[i];
//     }
//     cout<<"\nEnter element you want to insert : ";
//     cin>>element;
//     arr[index]=element;
//      cout<<"After insertion\n";
//     for(int i=0;i<n+1;i++){
//         cout<<arr[i]<<"   ";
//     }
   
// }
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int index,element;
    cout<<"before insertion\n";
    for(int i =0; i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"enter index number you want to insert: ";
    cin>>index;
    for(int i=4;i>=index;i--){
        arr[i+1]=arr[i];
    }
    cout<<"\nEnter element you want to insert : ";
    cin>>element;
    arr[index]=element;
     cout<<"After insertion\n";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<"   ";
    }
    return 0;
    
}