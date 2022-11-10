class Solution {
public:
    string good(string s, int i, int j)
    {
        if(s.length()==j) return s;        
        if(abs(s[i]-s[j])==32)
        {
            
            if(s.length()==2) return "";
            else return good(s.substr(0,i)+s.substr(j+1),0,1);
        }
        else
        {
            return good(s,i+1,j+1);
        }
    }
    string makeGood(string s) {
     return good(s,0,1);
    }
};