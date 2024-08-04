#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string name;
    // ofstream fout("c://shahid//shahid.txt",ios::app);
    // fout<<"\nkya hal hai bhai";
    ifstream fin("c://shahid//shahid.txt",ios::in);
    fin>>name;
    cout<<name;
    return 0;
}