class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count=0;
      for (int i=0;i<nums.size()-1;i++)
      {
        string ppl="";
        string pal="";
        for (int j=i+1;j<nums.size();j++)
        {
            ppl=nums[i]+nums[j];
            pal=nums[j]+nums[i];
            if (ppl==target)
            {
                count+=1;
            }
            if (pal==target)
            {
                count+=1;
            }
        }
      }  
      return count;
    }
};