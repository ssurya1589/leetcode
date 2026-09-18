class Solution {
    vector<vector<int>> a;
public:
void fn(int index,vector<int> &s,int target,vector<int>& candi,int sum)
{
    if (index>=candi.size())
    {
        if(sum==target)
        {
            a.push_back(s);
        }
        return;
    }
    if (sum+candi[index]<=target)
    {
        s.push_back(candi[index]);
        fn(index,s,target,candi,sum+candi[index]);
        s.pop_back();
    }
    fn(index+1,s,target,candi,sum);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> s;
        fn(0,s,target,candidates,0);
        return a;
    }
};