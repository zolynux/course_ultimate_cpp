#include <iostream>
using namespace std;

int main()
{
  // Complex Boolean Exp
  int x1 = (5 == 5), x2 = (2 >= 1), x3 = (3 < -1), x4 = (9 >= 5), x5 = (2 != 2);
  cout << "x1 = " << x1 << endl;
  cout << "x2 = " << x2 << endl;
  cout << "x3 = " << x3 << endl;
  cout << "x4 = " << x4 << endl;
  cout << "x5 = " << x5 << endl;
  cout << "((x1 && x2) || (x3 || !(x4)) && !(x5)) = " << ((x1 && x2) || (x3 || !(x4)) && !(x5)) << endl;
}