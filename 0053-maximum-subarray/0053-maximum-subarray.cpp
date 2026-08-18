class Solution {
public:
    int fnn1(vector<int>& nums,int low,int mid,int high)
    {
        int left_side=INT_MIN;
        int lsum=0;
        for (int i=mid;i>=low;i--)
        {
            lsum+=nums[i];
            if (lsum>left_side)
            {
                left_side=lsum;
            }
        }
        int right_sum=INT_MIN;
        int rsum=0;
        for (int i=mid+1;i<=high;i++)
        {
            rsum+=nums[i];
            if(rsum>right_sum)
            {
                right_sum=rsum;
            }
        }
        return right_sum+left_side;
    }
    int fn(vector<int>& nums,int low,int high)
    {
        if(low==high)
        {
            return nums[low];
        }
        else
        {
            int mid=(low+high)/2;
            int left_sum=fn(nums,low,mid);
            int right_sum=fn(nums,mid+1,high);
            int crossing_sum=fnn1(nums,low,mid,high);
            return max(crossing_sum,max(left_sum,right_sum));
        }
    }

    int maxSubArray(vector<int>& nums) {
        int x=nums.size();
        int l=fn(nums,0,x-1);
        return l;
    }
};