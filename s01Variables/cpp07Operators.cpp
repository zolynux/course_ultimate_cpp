#include <iostream>
using namespace std;

int main()
{
  int x = 2;
  x += 5;
  cout << x << endl;

  x = 2;
  x++;
  cout << x << endl;

  x = 2;
  x--;
  cout << x << endl;

  x = 2;
  cout << 4 * x++ << endl;
  cout << 4 * ++x << endl;
  cout << x << endl;

  x = 2;
  cout << 4 * x-- << endl;
  cout << 4 * --x << endl;
  cout << x << endl;

  int y = 8;
  x = 4;
  x += 5;
  x = -y;
  cout << x << endl;
}
