#include <iostream>

// Function that tells us that "120" is "5!"?

using namespace std;

int factorial(int number) {

    if (number == 1) {

      return 1;

    }

    else {

      return number * factorial(number - 1);
    }

}

int main() {
  int number;

  cout << "Enter a number: ";
  cin >> number;


    for (int i = 1; i > 0; i++ ) {


    int result = factorial(i);

    if (result < number) {

    }

    else if (result == number) {

      cout << "Found: " << i << "!" <<endl;
      break;



    }

    else {

      cout << "Not found!" << endl;

      break;
    }


  }

  return 0;

}
