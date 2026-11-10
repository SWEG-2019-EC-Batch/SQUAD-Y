#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 
    const double Assignment_Weight = 0.2;
    const double Midterm_Weight = 0.3;
    const double Final_Weight = 0.5;
    const double Pass_Mark = 50;
    double assignment, midterm, finalterm ;
    
    cout<<"Enter your assignment result: ";
    cin>> assignment;
    cout<<"Enter your midterm result: ";
    cin>> midterm;
    cout<<"Enter your finalterm result: ";
    cin>> finalterm;
  
    double total = assignment * Assignment_Weight + midterm * Midterm_Weight + finalterm * Final_Weight;
   
    cout<< fixed << setprecision(1);
    cout<<"Course Total: " << total <<endl;
    cout<< "Result: " << (total >= Pass_Mark ? "Pass" : "Fail") <<endl;   
    return 0;
}
