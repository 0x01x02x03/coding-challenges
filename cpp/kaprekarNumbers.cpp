#include <iostream>
#include <cmath>

using namespace std;

bool kaprekarCheck(int number) {
  int squaredNumber = pow(number, 2);
  int shift = 1;
  int divisor = pow(10, shift);

  while (squaredNumber > divisor) {
    int firstPiece = squaredNumber % divisor;
    int secondPiece = squaredNumber / divisor;

    if (firstPiece + secondPiece == number && (firstPiece > 0 && secondPiece > 0)) {
      return true;
    }

    divisor = pow(10, shift++);


  }
  return false;

}



int main() {
  int begin, end;
  cout << "Enter: ";
  cin >> begin >> end;
  for (int i = begin; i < end; i++) {
    if (kaprekarCheck(i)) {
      cout << i << " ";
    }

  }


  return 0;

}
