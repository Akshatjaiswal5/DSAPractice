class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int curr_max=nums[0],ans=nums[0];
      
      for(int i=1;i<nums.size();i++)
      {
        curr_max=max(curr_max+nums[i],nums[i]);
        ans=max(curr_max,ans);
      }
      
      return ans;
    }
};