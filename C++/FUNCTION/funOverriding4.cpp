#include<iostream>
using namespace std;
class Nokia{
    public:
    void setmic(){
        cout<<"Set mic old tech..";
    }
    void setCamera(){
        cout<<"Set camera old tech..";
    }
    void setspkr(){
        cout<<"Set spkr old tech..";
    }
};
class Nokia1 : public Nokia{
    public:
    void setmic(){
         cout<<"set mic new tech..";
    }
    void setspkr(){
        cout<<"Set spkr new tech..";
    }
};
int main(){
    Nokia1 n1;
    n1.setmic();
    cout<<"\n";
    n1.setspkr();
    return 0;
}