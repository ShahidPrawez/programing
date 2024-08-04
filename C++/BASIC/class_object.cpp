#include<iostream>
using namespace std;
class persion {
    int age;
    string name;
    string address;
    public:
    void input(){
        cout<<"Enter age : ";
        cin>>age;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter Address : ";
        cin>>address;
    }
    void show(){
        cout<<"Age : "<<age<<endl;
        cout<<"Name :  "<<name<<endl;
        cout<<"Addess : "<<address<<endl;
        
    }

};
main(){
    persion shahid,jay,alok,kamlesh;
    shahid.input();
    shahid.show();

    jay.input();
    jay.show();

    alok.input();
    alok.show();

    kamlesh.input();
    kamlesh.show();
}
