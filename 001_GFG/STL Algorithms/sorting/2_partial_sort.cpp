#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    vector<int> v = { 1, 3, 1, 10, 3, 3, 7, 7, 8 }; 
  
    partial_sort(v.begin(), v.begin() + 3, v.end()); 
  
    for (int ip : v) { 
        cout << ip << " "; 
    } 
  
    return 0; 
} 