class Solution {
    vector<int>s;
public:
void fn(int index,vector<int>nums,vector<vector<int>>& a,vector<bool>&used)
{
    if (index==nums.size())
    {
        a.push_back(s);
return ;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(!used[i])
        {
            used[i]=true;
            s.push_back(nums[i]);
            fn(index+1,nums,a,used);
            used[i]=false;
            s.pop_back();
            
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>a;
        int l=nums.size();
        vector<bool> used(l,false);
        fn(0,nums,a,used);
        return a;
    }
};