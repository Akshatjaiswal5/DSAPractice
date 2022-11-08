class Solution {
public:
    string makeGood(string s)
    {
      int n=s.size();
      
      string ans;
      int i;
      for(i=0;i<n-1;i++)
      {
       if(abs(s[i]-s[i+1])!=32)
         ans+=s[i];
       else
         i++;
      }
      if(i!=n)
        ans+=s[i];
      
      if(ans.size()<2) return ans;
      
      for(int i=0;i<ans.size()-1;i++)
      {
       if(abs(ans[i]-ans[i+1])==32)
        return makeGood(ans);
      }
      return ans;  
    }
};