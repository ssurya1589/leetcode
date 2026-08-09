class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int len = nums.size();
        int r = k%len;
        int l=0;
        
             reverse(nums.begin(),nums.end());
             reverse(nums.begin(),nums.begin()+r);
             reverse(nums.begin()+r,nums.end());
        
    }
};