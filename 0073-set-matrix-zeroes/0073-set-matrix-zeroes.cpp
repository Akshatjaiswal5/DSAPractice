class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int x,y,n=matrix.size(),m=matrix[0].size();
      
      bool flag=false;
      for(int i=0;i<n;i++)
      {
       for(int j=0;j<m;j++)
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
      
      for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
          if(matrix[i][j]==0)
          {
            matrix[x][j]=0;
            matrix[i][y]=0;
          }
      
      for(int i=0;i<n;i++)
        if(matrix[i][y]==0&&i!=x)
          for(int j=0;j<m;j++)
              matrix[i][j]=0;
      
      for(int j=0;j<m;j++)
        if(matrix[x][j]==0)
          for(int i=0;i<n;i++)
             matrix[i][j]=0;
      
      for(int i=0;i<n;i++)
        matrix[i][y]=0;
      
      for(int j=0;j<m;j++)
        matrix[x][j]=0;
    }
};