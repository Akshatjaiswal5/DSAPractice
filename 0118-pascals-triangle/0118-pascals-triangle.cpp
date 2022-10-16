class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
      vector<vector<int>> ans;
      ans.push_back(vector<int>(1,1));
      for(int i=1;i<numRows;i++)
      {
        vector<int> a;
        a.push_back(1);
        for(int j=1;j<i;j++)
         a.push_back(ans[ans.size()-1][j]+ans[ans.size()-1][j-1]);
        a.push_back(1);
        ans.push_back(a);
      }
      return ans;
    }
};