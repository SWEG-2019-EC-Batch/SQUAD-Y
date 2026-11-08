/*
  Task 1: student course total
  (a) inputs and outputs
      inputs : assignment mark, midterm mark, final mark (each out of 100).
      outputs: total(one decimal place) and the word Pass or Fail.
  (b) process
      1. Declare constants for the percents (20, 30, 50) and the pass mark (50) and declare variables.
      2. Read the assignment, midterm and final marks.
      3. Compute total = (assignment*20 + midterm*30 + final*50) / 100.
      4. Pick "Pass" if total >= 50, otherwise "Fail", using the conditional operator.
      5. Print the total with one decimal place, then the result.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // step 1. declaring Constants and variables.
    const double assignment_percent=20.0;
    const double midterm_percent=30.0;
    const double final_percent=50.0;
    const double pass_mark=50.0;
    double assignment, midterm, finalMark;
    // step 2. read the input.
    cout << "Enter assignment mark (out of 100): ";
    cin >> assignment;
    cout << "Enter midterm mark (out of 100): ";
    cin >> midterm;
    cout << "Enter final mark (out of 100): ";
    cin >> finalMark;
    // step 3. compute total.
    double total = (assignment * assignment_percent
                    + midterm * midterm_percent
                    + finalMark * final_percent) / 100.0;
    // step 4. and step 5. using conditional operator and displaying the result.
    cout << fixed << setprecision(1);
    cout << "Course total: " << total << endl;
    cout << "Result: " << ((total >= pass_mark) ? "Pass" : "Fail") << endl;
 
    return 0;
}
