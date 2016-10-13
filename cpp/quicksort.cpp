#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void quickSort(int array[], int left, int right) {

      int i = left, j = right;

      int tmp;

      int pivot = array[(left + right) / 2];

      while (i <= j) {

            while (array[i] < pivot)

                  i++;

            while (array[j] > pivot)

                  j--;

            if (i <= j) {

                  tmp = array[i];

                  array[i] = array[j];

                  array[j] = tmp;

                  i++;

                  j--;

            }

      };

      if (left < j)

            quickSort(array, left, j);

      if (i < right)

            quickSort(array, i, right);

}

int main() {

  int n = 1000;

  int array[n];

  srand((int) time(0));

  for (int a = 0; a < n; a++) {

    array[a] = rand() % n;


  }



  quickSort(array, 0, n - 1);

  for (int i = 0; i < n; i++) {

    cout << array[i] << " ";

  }

}
