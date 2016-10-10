#include <iostream>

using namespace std;

//In mathematics, a Ruth–Aaron pair consists of two consecutive integers for which the sums of the prime factors of each integer are equal.

int factors(int n) {
    int sum = 0;
    int z = 2;
    while (z * z <= n) {
        if (n % z == 0) {
            sum += z;
            n /= z;
        } else {
            z++;
        }
    }
    if (n > 1) {
        sum += n;
    }

    return sum;
}

int main() {

  int x, y, sum_x, sum_y;

  cout << "Enter numbers to check: ";

  cin >> x >> y;
  sum_x = factors(x);
  sum_y = factors(y);

  if (sum_x == sum_y) {

    cout << "VALID" << endl;

  }
  else {

    cout << "NOT VALID" << endl;

  }

  return 0;
}
