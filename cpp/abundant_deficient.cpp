#include <iostream>

/*
In number theory, a deficient or deficient number is a number n for which the sum of divisors sigma(n)<2n, or, equivalently, the sum of proper divisors (or aliquot sum) s(n)<n. The value 2n - sigma(n) (or n - s(n)) is called the number's deficiency. In contrast, an abundant number or excessive number is a number for which the sum of its proper divisors is greater than the number itself
*/


using namespace std;

int divisors_sum(int x) {

  int sum = 0;

  for (int i = 1; i <= x; i++) {

    if (x % i == 0) {

      sum += i;

    }

  }

  return sum;

}


int main() {

  int number;

  cout << "Enter a number: ";
  cin >> number;

  int sum = divisors_sum(number);

  if (sum < (2 * number)) {

    cout << "Deficient ";

    cout << (2 * number) - sum << endl;

  }

  else if (sum > (2 * number)) {

    cout << "Abundant ";

    cout << sum - (2 * number) << endl;

  }

  else {

    cout << "Neither" << endl;

  }




  return 0;
}
