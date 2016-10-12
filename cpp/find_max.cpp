#include <iostream>

using namespace std;

//Find maximal and lowest number out of three

int a,b,c;

int main() {


  cout << "Enter 3 numbers: ";
  cin >> a >> b >> c;

  int m = a;
  int n = a;

  if (b > m) {
    m = b;
  }

  if (c > m) {
    m = c;
  }

  if (b < n) {
    n = b;
  }

  if (c < n) {
    n = c;
  }

  cout << "Biggest number: " << m << endl;
  cout << "Lowest number: " << n << endl;

  return 0;

