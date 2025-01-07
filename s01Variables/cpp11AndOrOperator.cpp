#include <iostream>
using namespace std;

int main()
{
  // And - Or Operator
  bool x = 5 > 2 && 2 > 3, y = 5 > 2 || 2 > 3;
  cout << "Result of And: " << x << endl
       << "Result of Or: " << y;
}