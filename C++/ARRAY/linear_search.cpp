#include<iostream>
using namespace std;
int main(){
    int x,f=0;
    int arr[5] = {1,2,3,4,5};
    cout<<"find the element : ";
    cin>>x;
    for(int i = 0; i<= 4; i++)
    {
        if(arr[i]==x)
        {
            f=1;
            break;
        }
   }
      if(f==1)
        {
            cout<<"Element found"<<endl;
        }
        else{
            cout<<"element not found"<<endl;
        }
    }