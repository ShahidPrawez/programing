#include<iostream>
using namespace std;
int vote_eligible(int age, int limit){
    if(age>=limit){
        return true;
    }
    else
    {
        return false;
    }
}
int main(){
    int voting_limit=18;
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    int eligible_for_voting=vote_eligible(age,voting_limit);
    if(eligible_for_voting){
        cout<<"Yes, Eligible persion for voting";
    }
    else{
        cout<<"No, Eligible persion for voting";
    }
}