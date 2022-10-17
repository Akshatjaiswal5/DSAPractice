class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=nums.size()-1;
        while(o<=t)
        {
          if(nums[o]==2)
          {
            swap(nums[o],nums[t]);
            t--;
          }
          else if(nums[o]==0)
          {
            swap(nums[o],nums[z]);
            z++;;
            o++;
          }
          else
            o++;
        }
    }
};