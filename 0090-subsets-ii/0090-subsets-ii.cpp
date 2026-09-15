class Solution {
    vector<int> s;
   
public:
void fn(vector<int> nums,int index,vector<vector<int>>& a)
{
    if (index==nums.size())
    {
        bool p= true;
        vector<int> l=s;
       sort(l.begin(),l.end());
        for(int i=0;i<a.size();i++)
        {
            if (a[i]==l)
            {
                p=false;
                break;
            }
        }
        if (p)
        {
        a.push_back(l);
        }
        return ;
    }
    s.push_back(nums[index]);
    fn(nums,index+1,a);
    s.pop_back();
    fn(nums,index+1,a);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> a;
        fn(nums,0,a);
        
        return a;
    }
};