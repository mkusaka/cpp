#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a(5);
  for (int i; i < a.size(); i++) {
    cin >> a.at(i);
  }

  int cnt = 0;
  for (int i; i < a.size() - 1; i++) {
    if (a.at(i) == a.at(i + 1)) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
