#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a;

  cin >> a;
  vector<int> b = { 1, 2, 3, 4 };

  int cnt = 0;
  for (int x : b) {
    if (x == a) {
      cnt++;
    }
  }

  cout << "同一の個数は: " << cnt << endl;
}
