//START
#include <iostream>
using namespace std;

int main() {
    //VARIABLE DECLARTAION
    int destination , age  , weight ;
    double extra,extra_price, base_fare, total;
    char student_stat;
    const int WEIGHT_LIMIT=20 ;

    //INPUT
    cout<<"What is your destination? :"<<endl;
    cout<<" 1. Adama"<<endl;
    cout<<" 2. Hawassa"<<endl;
    cout<<" 3. Dire Dawa"<<endl;
    cout<<" 4. Bahir dar"<<endl;
    cout<<" 5. Mekelle"<<endl;
    cout<<"your Destination: ";
    cin>>destination;
    cout<<"Enter age (age): ";
    cin>>age;
    cout<<"Are you a student? (y/n): ";
    cin>>student_stat;
    cout<<"Enter luggage weight (kg): ";
    cin>>weight;
    cout<<"Enter birr per extra kg (birr): ";
    cin>>extra;

    if (age <= 0 || weight < 0 || extra < 0) {
    cout << "Invalid input!";
    return 0;
    }

    //SWITCH
    switch (destination) {
        case 1:
            cout<< "Ticket price to adama : 300 ETB";
            base_fare=300;
            break;
        case 2:
            cout<<"Ticket price to Hawassa: 500 ETB"<<endl;
            base_fare=500;
            break;
        case 3:
            cout<<"Ticket price to Dire Dawa : 600 ETB"<<endl;
            base_fare=600;
            break;
        case 4:
            cout<<"Ticket price to Bahir dar : 850 ETB"<<endl;
            base_fare=850;
            break;
        case 5:
            cout<<"Ticket price to Mekelle : 1000 ETB"<<endl;
            base_fare=1000;
            break;
        default:
            cout<<"invalid input, please try again"<<endl;
            return 0;
    }

    double original_base_fare=base_fare;

    //DISCOUNT CALCULATION
    if (student_stat == 'y' || student_stat == 'Y') {
        if (age<=12) {
        base_fare=base_fare-base_fare*0.65;
            }
        else if (age>=60) {
        base_fare=base_fare-base_fare*0.4;
            }
        else {
                
            }
        }
    else if (student_stat == 'n' || student_stat == 'N') {
        if (age<=12) {
        base_fare=base_fare-base_fare*0.5;
            }
        else if (age>=60) {
        base_fare=base_fare-base_fare*0.25;
            }
        else {
                
            }
        }
    else {
        cout<<"Invalid student status";
        return 0;
            }
    extra_price=0;
    if (weight> WEIGHT_LIMIT) {
        extra_price = (weight-WEIGHT_LIMIT)*extra;
        }
    double discount=original_base_fare-base_fare;
    total = base_fare+extra_price;

    // OUTPUT
    cout<<"Trip information:"<<endl;
    cout<<"original base fare: "<<original_base_fare<<endl;
    cout<<"Base Fare after discounts: "<<base_fare<<"birr"<<endl;
    cout<<"Discount"<<discount;
    cout<<"extra charge on weight: "<<extra_price<<"birr"<<endl;
    cout<<"Total trip fare: "<<total <<"birr"<<endl;

    return 0;

        }



    
