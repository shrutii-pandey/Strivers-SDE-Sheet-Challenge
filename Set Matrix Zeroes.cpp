class Solution {
public:
    stack<pair<int,int>> findzero(vector<vector<int>>& matrix)
    {
         stack<pair<int,int>> loc;
        int m = matrix.size();
        int n= matrix[0].size();
     
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    loc.push(make_pair(i,j));
                }
            }
      
        }
        return loc;
    }
    void setZeroes(vector<vector<int>>& matrix) 
    {
       stack<pair<int,int>>  st = findzero(matrix);
    
        int m = matrix.size();
        int n= matrix[0].size();
        while(!st.empty())
        {
            pair<int,int> p = st.top();
          for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==p.first || j==p.second)
                {
                   matrix[i][j]=0;
                }
            }
        }
        st.pop();
        }


    }
};
