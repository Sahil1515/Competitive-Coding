// C++ code to demonstrate the working of 
// push_heap() and pop_heap() 
#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 

	vector<int> v1 = {20, 30, 40, 25, 15}; 
	
	// Converting vector into a heap 
	make_heap(v1.begin(), v1.end()); 

	cout << "The maximum element of heap is : "; 
	cout << v1.front() << endl; 

	v1.push_back(50); 
	
	// using push_heap() to reorder elements 
	push_heap(v1.begin(), v1.end()); 

	cout << "The maximum element of heap after push is : "; 
	cout << v1.front() << endl; 
	
	// using pop_heap() to delete maximum element 
    // This just takes max element to the end of the vector.
    // So we need to delete it explicitly
	pop_heap(v1.begin(), v1.end()); 

    cout<<v1.size()<<"\n";
    
	v1.pop_back(); 

    cout<<v1.size()<<"\n";

	cout << "The maximum element of heap after pop is : "; 
	cout << v1.front() << endl; 
	
	return 0; 
} 
