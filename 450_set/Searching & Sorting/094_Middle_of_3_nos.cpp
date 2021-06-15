// Given three distinct numbers A, B and C.
// Find the number with value in middle (Try to do it with minimum comparisons).


class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
       int n1=max(A,B);
       int n2=max(B,C);
       int n3=max(A,C);
       
       
       if(n1==n2)
       {
           return n3;
       }
       else return max(min(A,B),min(B,C));
    }
};
