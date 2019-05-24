#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a;

  cin >> a;
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  int cnt = 0;
  for (int j = 0; j < data.size(); j++) {
    if (data.at(j) == a) {
      cnt++;
    }
  }

  cout << "同一の個数は: " << cnt << endl;
}
