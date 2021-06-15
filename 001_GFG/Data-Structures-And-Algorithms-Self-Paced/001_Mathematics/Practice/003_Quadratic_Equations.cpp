class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        
        vector<int> vec;
        
        int x=b*b-4*a*c;
        // cout<<x<<" ";
        if(x>0)
        {
            int root1= floor(( (-b + sqrt(x) ) ) / (2*a));
            int root2= floor(( (-b - sqrt(x) ) ) / (2*a));
            if(root1>root2)
           {
                vec.push_back(root1);
                vec.push_back(root2);
           }
           
           else {
                vec.push_back(root2);
                vec.push_back(root1);
           }
        }
        else if(x==0)
        {
            int root1= (-b+sqrt(x))/(2*a);
            vec.push_back(root1);
            vec.push_back(root1);
        }
        else {
            vec.push_back(-1);
        }
        
        return vec;
    }
};