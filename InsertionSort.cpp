#include <iostream>
#include <vector>
#include <string>

int main(int argc,char** argv) {
  int n;
  int a;
  std::cin >> n;
  std::vector<int> data;

  for (int i = 0; i < n; ++i) {
    std::cin >> a;
    data.emplace_back(a);
  }

  int key;
  int j;

  for (int i = 1; i < n; ++i) {
    key = data[i];
    j = i - 1;
    while (j >= 0 && data[j] > key) {
      data[j + 1] = data[j];
      --j;
    }
    data[j + 1] = key;
  }

  for (auto x : data) {
    std:: cout << x << ' ';
  }

  return 0;
}