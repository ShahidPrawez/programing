#include<iostream>
#include<fstream>
using namespace std;
int main(){
    system("cls");
    string name;
    ifstream fin("c://shahid//shahid.txt",ios::in);
    fin>>name;
    cout<<name;
    return 0;
}