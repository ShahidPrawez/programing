#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a numbet you want to print table : ";
    cin>>n;
    for(int i = 1; i <= 10; ++i){
        cout<<"\t\a"<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}