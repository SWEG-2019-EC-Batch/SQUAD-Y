/*1. Problem description
Write a C++ program that reads a student’s assignment, midterm and final marks (each out of 100). The course total is 20% assignment + 30% midterm + 50% final. The pass mark is 50. Print the total (one decimal place) and the word Pass or Fail. Use the conditional operator (no if).

2. Problem analysis
2.1 Input
-Assignment
-Midterm
-Final
2.2 Output
-Total 
-Pass or Fail
Constants:
-Assignment percentage
-Midterm percentage
-Final percentage
-Pass mark

3. Process (operations)
-Declare variables for assignment, midterm, final, and total.
-Define the fixed values for assignment, midterm, and final.
-Read the inputs for assignment, midterm, and final.
-Calculate the total using the formula: total = (assignment * 0.2) + (midterm * 0.3) + (final * 0.5).
-Use the conditional operator to determine if the student has passed or failed based on the total.
-Print the total and the result.

4. Design the program
4.1 Variables Definition
      Variables         Type
      assignment        double
      midTerm           double
      final             double
      total             double
      passFail          string

4.2 Constant definition
    const double ASSIGNMENT_Weight = 0.2;
    const double MIDTERM_Weight = 0.3;
    const double FINAL_Weight = 0.5;
    const double PASS_MARK = 50.0;

4.3 Reading input
    cout << "Enter assignment, midterm, and final marks (each out of 100) separated by spaces: ";
    cin >> assignment >> midTerm >> final;

4.4 Perform the operations 
-Calculate the total:
    total = (assignment * ASSIGNMENT_Weight) + (midTerm * MIDTERM_Weight) + (final * FINAL_Weight);
-Determine pass or fail:
    passFail = (total >= PASS_MARK) ? "Pass" : "Fail";

4.5 Print the result
    cout << fixed << setprecision(1);
    cout << "Total: " << total << endl;
    cout << "Result: " << passFail << endl; 
C++ program */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const double ASSIGNMENT_WEIGHT = 0.2;
  const double MIDTERM_WEIGHT = 0.3;
  const double FINAL_WEIGHT = 0.5;
  const double PASS_MARK = 50;

  double assignment, midterm, finalmark;
  cout << "Enter your assignment mark (out of 100): ";
  cin >> assignment ;
  cout << "Enter your midterm mark (out of 100): ";
  cin >> midterm ;
  cout << "Enetr your final mark (out of 100): ";
  cin >> finalmark ;

  double total = ASSIGNMENT_WEIGHT * assignment +  MIDTERM_WEIGHT * midterm +  FINAL_WEIGHT * finalmark ;

  cout << fixed << setprecision(1);
  cout << "Course total: " << total << endl;
  cout << "Result: " << (total >= PASS_MARK ? "Pass" : "Fail") << endl;

  return 0;
}
  
