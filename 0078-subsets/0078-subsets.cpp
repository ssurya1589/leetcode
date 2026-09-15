class Solution {
    vector<int> s;
public:
void fn(vector<vector<int>>& a , vector<int>nums,int index)
{
    if(index==nums.size())
    {
        a.push_back(s);
        return;
    }
    s.push_back(nums[index]);
    fn(a,nums,index+1);
    s.pop_back();
    fn(a,nums,index+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> a;
        fn(a,nums,0);
        return a;
    }
};