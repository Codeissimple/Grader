#include <iostream>
#define PASSING_GRADE 60;

using namespace std;

int main() {
double average = 0.0;
double grade1  = 0.0;
double grade2  = 0.0;
double grade3  = 0.0;

  cout << "Enter the first grade: " << endl;
  cin >> grade1;

  cout << "Enter the second grade: " << endl;
  cin >> grade2;

  cout << "Enter the third grade: " << endl;
  cin >> grade3;

  average = (grade1 + grade2 + grade3) / 3.0;

  cout << "The average is " << average <<endl;

  if (average < PASSING_GRADE )
    cout << "The average is failing" << endl;
  else
    cout << "The average is passing" << endl;
  return 0;
}