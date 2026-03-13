#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;

  int a = 10;

  int b = 0;

  cout << "Enter a number: ";
  cin >> b;

  cout << "The sum of " << a << " and " << b << " is " << a + b << endl;

  // DEV: This is a comment for development purposes. The variable 'a' is
  // assigned the value of 10, which will be used in the sum calculation.
  a = 10;

  return 0;
}
