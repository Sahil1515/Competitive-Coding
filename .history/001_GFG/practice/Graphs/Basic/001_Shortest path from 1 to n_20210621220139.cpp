





class Solution{   
public:
    int minimumStep(int n){
        //complete the function here
        
        int count=0;
        while(n>1)
        {
            if(n%3==0)
                n=n/3;
            else
                n--;
                
            count++;
        }
        
        return count;
    }
};

Correct Answer.Correct Answer
Execution Time:0.17