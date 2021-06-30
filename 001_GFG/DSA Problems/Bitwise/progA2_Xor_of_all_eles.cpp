// Given a list A having N positive 
// elements. The task to create another
//  list such as ith element is XOR of
//   all elements of  A except A[i].

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1), Where N is the
//  size of the input array




#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{
public:
    vector<int> getXor(vector<int> A, int N)
    {
        // Write your Code here
        int sum=0;
        vector<int> vec;
        
        for(auto ele : A)
        sum=sum^ele;
        
        for(int i=0;i<A.size();i++)
        {
            vec.push_back(sum^A[i]);
        }
        
        return vec;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N ;
        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        Solution ob;
        vector<int> B = ob.getXor(A, N);
        for(int i = 0 ; i < N ; i++)
        {
            cout << B[i] <<" ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends




// Execution Time:0.41