#include <iostream>
using namespace std;

int main() {
  int n, i;
  bool isPrime = true;
  cout << "Enter a number: ";
  cin >> n;
  for (i = n - 1; i >= 2; i--) {
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      cout << "The last prime number before " << n << " is " << i << endl;
      break;
    }
    isPrime = true;
  }
  if (!isPrime) {
    cout << "There is no prime number before " << n << endl;
  }
  return 0;
}