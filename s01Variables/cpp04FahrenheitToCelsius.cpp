#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int fahrenheit;
  cout << "Please, enter a fahrenheit number: ";
  cin >> fahrenheit;
  cout << "Result of fahrenheit to celsius is: " << (fahrenheit - 32) * 5 / 9;
  return 0;
}
