#include<iostream>
#include<string>
using namespace std;

struct passenger {
    string first_name;
    string last_name;
    int age;
    int phone_number;
    int seat;
    string gender;
};
const int MAX_SEATS = 30; // Maximum number of seats
//Function to display passenger information
void displayPassengerInfo(const passenger& p) {
    cout<<"Seat Number: "<<p.seat<<endl;
    cout<<"First Name: "<<p.first_name<<endl;
    cout<<"Last Name: "<<p.last_name<<endl;
    cout<<"Gender: "<<p.gender<<endl;
    cout<<"Age: "<<p.age <<endl;
    cout<<"Phone Number: "<<p.phone_number<<endl;
    cout<<endl;
}
//Function to Add passenger
passenger addPassenger(int seat) {
    passenger p;
    p.seat = seat;
    cout<<"For seat Number "<<p.seat<< ",\n";
    cout<<"Enter First Name: ";
    cin>>p.first_name;
    cout<<"Enter Last Name: ";
    cin>>p.last_name;
    cout<<"Enter Gender: ";
    cin>>p.gender;
    cout<<"Enter Age: ";
    cin>>p.age;
    cout< "Enter Phone Number: ";
    cin>>p.phone_number;
    cout<<endl;
    return p;
}
int main() {
    int option;
    passenger passengers[MAX_SEATS];
    while (true) {
        cout<<"Welcome to the Passenger Information Form"<<endl;
        cout<<"Please choose an option:"<<endl;
        cout<<"1. Enter passenger details"<<endl;
        cout<<"2. Display passenger information"<<endl;
        cout<<"0. Exit\n"<<endl;
        cout<<"Option: ";
        cin >> option;
        switch (option) {
            case 1: {
                int seat;
                cout<<"Enter the seat number (1-" <<MAX_SEATS<< "): ";
                cin>>seat;
                if (seat < 1 || seat > MAX_SEATS) {
                    cout<<"Invalid seat number. Please try again.\n"<<endl;
                    continue;
                }
                passengers[seat - 1] = addPassenger(seat);
                break;
            }
            case 2: {
                for (int i = 0; i < MAX_SEATS; i++) {
                	if (!passengers[i].first_name.empty()) {
                        displayPassengerInfo(passengers[i]);}
                }
                break;
            }
            case 0:
                cout<<"Thank you for using the Our System. Goodbye!"<<endl;
                return 0;
            default:
                cout<<"Invalid option. Please try again."<<endl;
                break;
        }
    }
    return 0;
}
