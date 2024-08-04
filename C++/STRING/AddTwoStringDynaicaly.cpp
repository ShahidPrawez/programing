#include<iostream>
#include<cstring>
using namespace std;
int main(){
    system("cls");
    const char  *first ="shahid";
    const char *second ="prawez";
    int length = strlen(first)+ strlen(second)+1;
    char *add = new char[10];
    strcpy(add,first);
    strcat(add,second);
    cout<<add<<endl;
    delete[] add;
    return 0;
}  
