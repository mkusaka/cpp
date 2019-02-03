#include <iostream>
#include <cassert>
#include <vector>

int main()
{
  // int型を要素とする可変長配列の変数を定義し、
  // 初期状態の要素を設定
  std::vector<int> v = {1, 99, 4};

  v[1] = 3;                   // 1番目の要素を参照し、書き換える
  v.push_back(5);             // 末尾に値5を追加
  v.insert(v.begin() + 1, 2); // 1番目に値2を挿入

  int *p = v.data();           // 内部表現のポインタを取得
  std::size_t size = v.size(); // 要素数を取得
  assert(p[0] == 1);
  assert(size == 5u);

  // 各要素に対して操作を行う
  for (int x : v)
  {
    std::cout << x << std::endl;
  }
}
