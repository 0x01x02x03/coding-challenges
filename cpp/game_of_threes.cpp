#include <iostream>

using namespace std;

/*

First, you mash in a random large number to start with. Then, repeatedly do the following:

    If the number is divisible by 3, divide it by 3.
    If it's not, either add 1 or subtract 1 (to make it divisible by 3), then divide it by 3.

The game stops when you reach "1".

*/

long int number;


int main() {

  cout << "Enter your number: ";
  cin >> number;

  do {

    cout << number;

    if (number % 3 == 0) {

      cout << " 0" << endl;

      number /= 3;

    }

    else if ((number + 1) % 3 == 0) {

      number++;

      cout << " +1" << endl;

      number /= 3;


    }

    else {

      number--;

      cout << " -1" << endl;


      number /= 3;

    }


  }


  while (number != 1);

  cout << number << endl;



  return 0;
}
