#include<iostream>
#include<string>
using namespace std;
enum city_store {bahirdar, adiss_abeba, debre_birehan, shewarobit, hawassa};
	struct passanger{
   		 string first_name;
   		 string last_name;
   		 int age;
   		 int phone_number;
   		 city_store city_destination;
		 city_store city_departure; };
int passanger_info_form(passanger){
	passanger Person1;
	cout<<"Passanger Information form";
  cout<<"\nEnter passanger first name:";
  cin>>Person1.first_name;
  cout<<"\nEnter passanger last name";
  cin>>Person1.last_name;
  cout<<"\nEnter passanger age";
  cin>>Person1.age;
  cout<<"\nEnter passanger phone number";
  cin>>Person1.phone_number;
  return(Person1);	
 // cout<<"\nEnter passanger departure city";
//  cin>>Person1.city_departure;
 //cout<<"\nEnter passanger destination city";
 // cin>>Person1.city_destination;
  
}
void passanger_(passanger){
	passanger Person1;
	cout<<"";
  cout<<"\nEnter passanger first name:";
  cin>>Person1.first_name;
  cout<<"\nEnter passanger last name";
  cin>>Person1.last_name;
  cout<<"\nEnter passanger age";
  cin>>Person1.age;
  cout<<"\nEnter passanger phone number";
  cin>>Person1.phone_number;
}
int main(){
	int a;
	passanger abebe;
	cout<<"This is passanges information form. Do you want continue?"<<"\n                        yes=1    No =0\n";
	cin>>a;
	if(a){
		passanger_info_form(abebe);
	}
	
 // cout<<"\nEnter passanger departure city";
//  cin>>Person1.city_departure;
 //cout<<"\nEnter passanger destination city";
 // cin>>Person1.city_destination;
  
}