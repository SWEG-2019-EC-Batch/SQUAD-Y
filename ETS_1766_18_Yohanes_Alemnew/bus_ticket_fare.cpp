#include <iostream>
using namespace std;
int main()
{
   
    float base_fare, bag_weight,rate;
    char isstud;
    short int Age;
    int destination;
    const short int WEIGHT_LIMIT = 20;
    const float discountElder=0.25;
    const float discountChildren=0.5;
    const float discountStudent=0.15;


cout << "Choose your destination:" << endl;
cout << "1. Bahir Dar" << endl;
cout << "2. Hawassa" << endl;
cout << "3. Mekelle" << endl;
cout << "4. Dire Dawa" << endl;
cout << "5. Gondar" << endl;
cout << "6. Adama" << endl;
cout << "7. Bishoftu" << endl;

cout<<endl;
cout << "Enter your choice: ";
cin >> destination;

switch (destination)
{
    case 1:
        cout << "Your destination is: Bahir Dar" << endl;
        break;

    case 2:
        cout << "Your destination is: Hawassa" << endl;
        break;

    case 3:
        cout << "Your destination is: Mekelle" << endl;
        break;

    case 4:
        cout << "Your destination is: Dire Dawa" << endl;
        break;

    case 5:
        cout << "Your destination is: Gondar" << endl;
        break;

    case 6:
        cout << "Your destination is: Adama" << endl;
        break;

    case 7:
        cout << "Your destination is: Bishoftu" << endl;
        break;

    default:
        cout << "Invalid destination!";
        return 0;
}
    
    cout<<"Enter the base fare in (birr) ";
    cin>>base_fare;
    cout<<"Enter the bag weight in (kg) ";
    cin>> bag_weight;
    cout<<"Enter the rate in (birr) ";
    cin>>rate;
    cout<<"Enter your Age(years) ";
    cin>>Age;
    cout<<"Are you a student ";
    cin>>isstud;
    

if(Age<=0){ 
cout<<"invalid Age";
return 0;
}
else if(Age<=12){
     base_fare=base_fare-base_fare*discountChildren;
    }
else if(Age>=60){
     base_fare=base_fare-base_fare*discountElder;
    }
else{
     base_fare=base_fare-base_fare*0;
    }

if (isstud=='Y'|| isstud=='y'  ){
     base_fare=base_fare-base_fare*discountStudent;
    }

float Extra_Charge=0;
if (bag_weight>WEIGHT_LIMIT)
{
   Extra_Charge=(bag_weight-WEIGHT_LIMIT)*rate;
}    


float total_fare=base_fare+Extra_Charge;

cout<<endl;
cout<<"Your trip fare information is: "<<endl;
cout<<"Base fare: "<<base_fare<<endl;
cout<<"Extra charge: "<< Extra_Charge<<endl;
cout<<"Total fare: " << total_fare<<endl;
return 0;
}