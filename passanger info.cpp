#include<iostream>
#include<string>
using namespace std;
struct passanger{
   		 string first_name;
   		 string last_name;
   		 int age;
   		 int phone_number;
   		 int seat;
   		 }s[30];//for 30 seat bus
int main(){
	int a;
	cout<<"This is passanges information form. Do you want continue?"<<"\n                        yes=1    No =0\n";
	cin>>a;
	if(a){
		for (int i=0; i<10; i++){
			s[i].seat=i+1;
			cout<<"For seat Number"<<s[i].seat<<",\n";
			cout<<"Enter First Name: ";
			cin>>s[i].first_name;
			cout<<"Enter Last Name: ";
			cin>>s[i].last_name;
			cout<<"Enter Age: ";
			cin>>s[i].age;
			cout<<"Enter Phone Number: ";
			cin>>s[i].phone_number;
			cout<<endl;
			
		}
	}}
	