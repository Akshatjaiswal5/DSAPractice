//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
         if(!st.empty()&&s[i]==st.top())
          st.pop();
         else
          st.push(s[i]);
        }
        if(st.empty()) return "-1";
        string ans;
        while(!st.empty())
        {
         ans+=st.top();
         st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends