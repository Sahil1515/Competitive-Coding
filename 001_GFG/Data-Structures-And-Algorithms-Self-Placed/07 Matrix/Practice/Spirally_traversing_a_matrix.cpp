
class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
        vector<int> vec;
        
        int topL=0,topR=c-1,bottomL=0,bottomR=r-1;
        
        while(bottomL<=topR && topL<=bottomR)
        {
            // cout<<"hi ";
            if(bottomL<=topR && topL<=bottomR)
            for(int i=bottomL;i<=topR;i++)
            vec.push_back(matrix[topL][i]);
            
            topL++;
            
            if(bottomL<=topR && topL<=bottomR)
            for(int i=topL;i<=bottomR;i++)
            vec.push_back(matrix[i][topR]);
            
            topR--;
            
            if(bottomL<=topR && topL<=bottomR)
            for(int i=topR;i>=bottomL;i--)
            vec.push_back(matrix[bottomR][i]);
            
            bottomR--;
            
           if(bottomL<=topR && topL<=bottomR)
            for(int i=bottomR;i>=topL;i--)
            vec.push_back(matrix[i][bottomL]);
            
            bottomL++;
            
        }
        
        return vec;
    }
};

// 4 marks