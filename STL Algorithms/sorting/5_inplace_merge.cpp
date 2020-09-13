#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool descending_sort(int a, int b) {
   return (a > b);
}

int main(void) {
   vector<int> v = {3, 1, 5, 4, 2};

   inplace_merge(v.begin(), v.begin() + 2, v.end(), descending_sort);

   for (auto it = v.begin(); it != v.end(); ++it)
      cout << *it << endl;

   return 0;
}