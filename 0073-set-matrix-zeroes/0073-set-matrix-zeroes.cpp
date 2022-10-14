class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int x,y;
      
      bool flag=false;
      for(int i=0;i<matrix.size();i++)
      {
       for(int j=0;j<matrix[0].size();j++)
        if(matrix[i][j]==0) 
        {
         x=i;y=j;
         flag=true;
         break;
        }
       if(flag)
         break;
      }
      if(!flag)
        return;
      
      for(int i=0;i<matrix.size();i++)
        for(int j=0;j<matrix[0].size();j++)
          if(matrix[i][j]==0)
          {
            matrix[x][j]=0;
            matrix[i][y]=0;
          }
      
      for(int i=0;i<matrix.size();i++)
        if(matrix[i][y]==0&&i!=x)
          for(int j=0;j<matrix[0].size();j++)
              matrix[i][j]=0;
      
      for(int j=0;j<matrix[0].size();j++)
        if(matrix[x][j]==0)
          for(int i=0;i<matrix.size();i++)
             matrix[i][j]=0;
      
      for(int i=0;i<matrix.size();i++)
        matrix[i][y]=0;
      
      for(int j=0;j<matrix[0].size();j++)
        matrix[x][j]=0;
    }
};