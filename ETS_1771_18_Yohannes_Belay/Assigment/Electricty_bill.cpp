#include <iostream> //  for the input and output
#include <iomanip> // for using setpercision 
using namespace std;

int main() {
    int energy_consumption ;
    const int service_charge=10;
    double energy_charge,  total_bill ;

    cout << "Enter energy consumption (Kwh): ";
    cin >> energy_consumption;
    energy_charge=(energy_consumption<=50)? energy_consumption*1.5: (50*1.5 +(energy_consumption-50)*2);
    


    total_bill = energy_charge+service_charge;


    cout << fixed << setprecision(2);
    cout<< "\nEnergy charge: "<<energy_charge;
    cout<<"\nService charge: "<<service_charge;
    cout<<"\nTotal Bill: "<<total_bill;
    

    return 0;
}

