#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number if integer you wants : ";
    cin>>n;
    int* ptr =(int*) malloc(n*4);
    int *p = ptr;
    for(int i=1; i<=n; i++){
        scanf("%d",&(*ptr));
        ptr++;

    }
    for(int i=1; i<=n; i++){
        printf("%d  ",(*p));
        p++;
        
    }
    free(ptr);

}