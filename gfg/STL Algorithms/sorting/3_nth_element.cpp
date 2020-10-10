#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int v[] = { 3, 2, 10, 45, 33, 56, 23, 47 }; 

	// Using nth_element with n as 5 
	nth_element(v, v + 4, v + 8); 

	// Since, n is 5 so 5th element 
	// should be sorted 
	for (int i = 0; i < 8; i++) 
		cout << v[i] << " "; 

	return 0; 
} 
