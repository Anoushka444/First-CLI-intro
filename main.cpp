#include <iostream>
#include <string>

using namespace std;

int main()
{
  int i, a[10];

  for (i = 0; i < 11; i++)
  {
    cin >> i;
  }
  for (auto i : a, )
  {
    cout << i;
  }
  return 0;
}
