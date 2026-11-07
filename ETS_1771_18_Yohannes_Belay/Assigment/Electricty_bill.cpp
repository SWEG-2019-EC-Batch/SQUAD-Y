#include <iostream> //  for the input and output
#include <iomanip> // for using setpercision 
using namespace std;

int main() {
    int energy_consumption ;
    const int service_charge=10; // this needs to be constant because it doesnt change throught
    double energy_charge,  total_bill ;
    
    // inputs go in
    cout << "Enter energy consumption (Kwh): ";
    cin >> energy_consumption; // value goes in 
    // processing
    energy_charge=(energy_consumption<=50)? energy_consumption*1.5: (50*1.5 +(energy_consumption-50)*2); // processing and branching becuse there are two cases
    total_bill = energy_charge+service_charge;

    //outputs go out
    cout << fixed << setprecision(2);
    cout<< "\nEnergy charge: "<<energy_charge; //output goes out
    cout<<"\nService charge: "<<service_charge;
    cout<<"\nTotal Bill: "<<total_bill;
    

    return 0;
}

