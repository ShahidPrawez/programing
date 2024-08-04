 
// 21. Write C++ program to reverse a number
 #include<iostream>
//  #include<conio.h>
 using namespace std;
 int main(){  
 long n,rev=0,d;
 cout<<"Enter the number:";
 cin>>n;
 while(n!=0) { 
 d=n%10;
 rev=(rev*10)+d;
 n=n/10;
 }
 cout<<"The reversed number is : "<<rev<<endl;
 return 0;
 }