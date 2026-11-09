
#include <iostream>
using namespace std;
int main() {
  double assignment,midterm,finalMarks,finalGrade; 
  const double ASSIGNMENT_WEIGHT = 0.2;
  const double MIDTERM_WEIGHT = 0.3;
  const double FINAL_WEIGHT = 0.5;
cout << "Enter assignment marks ou: ";
  cin >> assignment;
  cout << "Enter midterm marks out of 100: ";
  cin >> midterm;
  cout << "Enter final marks out of 100: ";
  cin >> finalMarks;

  finalGrade = (assignment * ASSIGNMENT_WEIGHT) + (midterm * MIDTERM_WEIGHT) + (finalMarks * FINAL_WEIGHT);
  
  if (finalGrade >= 50) {
    cout << "You passed with a final grade of: " << finalGrade << endl;
  } else {
    cout << "You failed with a final grade of: " << finalGrade << endl;
  }
}
