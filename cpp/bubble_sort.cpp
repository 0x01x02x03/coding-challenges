#include <iostream>

using namespace std;

int numbers[8] = {1, 7, 3, 9, 2, 6, 5, 8};

int size = sizeof(numbers) / sizeof(numbers[0]);

int main() {

  for (int j = 0; j < size; j++) {
    for (int i = 0; i < size - 1; i++) {

      if (numbers[i] > numbers[i + 1]) {
        swap(numbers[i], numbers[i + 1] );
      }
    }

  }


  for (int i = 0; i < 8; i++) {
    cout << numbers[i] << endl;

  }

  return 0;
}
