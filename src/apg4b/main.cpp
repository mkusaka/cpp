#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  int N;
  cin >> N;

  int cnt = 0;
  int rest = 0;

  while (N > 0) {
    if (N % 2 > 0) {
      rest = N;
      break;
    }

    N = N / 2;
    cnt++;
  }
  cout << N << " は " << cnt << "回2で割れた" << endl << "2で割り切った残りは " << rest << endl;
}
