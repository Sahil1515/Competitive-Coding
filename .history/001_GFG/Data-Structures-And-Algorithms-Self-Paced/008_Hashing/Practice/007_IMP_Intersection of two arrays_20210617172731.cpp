Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 

Example 1:

Input:
n = 5, m = 3
a[] = {89, 24, 75, 11, 23}
b[] = {89, 2, 4}

Output: 1

Explanation: 
89 is the only element 
in the intersection of two arrays.



class Solution{
    public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        // Your code goes here
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            if(mp[a[i]]>1)
                mp[a[i]]--;
        }
        for(int i=0;i<m;i++)
        {
            // Insert only if there is element present from last array.
            //Else this could lead to error because one array can also contain one ele more than one time
            if(mp[b[i]]==1)
                mp[b[i]]++;
        }
        
        int count=0;
        for(auto ele: mp)
        {
            if(ele.second>1)
            count++;
        }
        return count;
    }
};

Correct Answer.Correct Answer
Execution Time:0.81

// Approch 2

class Solution{
    public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        // Your code goes here
        unordered_map<int,int> mp;
        unordered_set<int> set1;
        unordered_set<int> set2;
        
        for(int i=0;i<n;i++)
        {
            set1.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            set2.insert(b[i]);
        }
        for(auto ele:set1)
        {
            mp[ele]++;
        }
        for(auto ele:set2)
        {
            mp[ele]++;
        }
        
        int count=0;
        for(auto ele: mp)
        {
            if(ele.second>1)
            count++;
        }
        return count;
    }
};


Correct Answer.Correct Answer
Execution Time:1.05