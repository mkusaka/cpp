#include <string>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

void countStrings(vector<string> s){
  map<string, int> m;
  for (int i = 0; i < s.size(); i++)
  {
    m[s[i]]++;
  }
  map<string, int>::iterator it = m.begin();
  while(it != m.end())
  {
    std::cout << (*it).first << " " << (*it).second << std::endl;
    ++it;
  }
}

int main() {
  vector<string> hoge = {"a", "b", "c"};
  countStrings(hoge);
  return 0;
}
