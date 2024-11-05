#include<iostream>
using namespace std;
void quotientRemainder(int a, int b){
    int qu= a/b;
    int re = a%b;
    cout<<"Quotient = "<<qu<<"\nremainder = "<<re<<endl;
    return;
}
int main(){
    int a ,b;
    cout<<"Enter Divident:";
    cin>>a;
    cout<<"Enter divisor:";
    cin>>b;
    quotientRemainder(a,b);

}