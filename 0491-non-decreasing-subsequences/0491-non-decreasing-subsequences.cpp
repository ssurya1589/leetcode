class Solution {
    vector<vector<int>>a ;
public:
void fn(int index,vector<int>& n,vector<int>&s)
{
    if (index==n.size())
    {
        a.push_back(s);
        return ;
    }
    if (s.size()==0 || s[s.size()-1]<=n[index] )
    {
    s.push_back(n[index]);
    fn(index+1,n,s);
    s.pop_back();
    }
    fn(index+1,n,s);
}
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> s;
        fn(0,nums,s);
        set <vector<int>> ss(a.begin(),a.end());
        vector<vector<int>> lp(ss.begin(),ss.end());
        
       while (true)
       {int c=1;
        for (int i=0;i<lp.size();i++)
        {
            if (lp[i].size()<2)
            {
                lp.erase(lp.begin()+i);
                c=0;
                break;
            }
            else
            {
                c=1;
            }
        }
            if (c==1)
            {
                break;
            }
       }
        return lp;
    }
};