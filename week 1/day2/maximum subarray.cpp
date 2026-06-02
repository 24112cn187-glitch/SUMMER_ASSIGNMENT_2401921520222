class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n= nums.size();
        int sum=0;
        int maxsum=INT_MIN;

        for(int i=0;i<n;i++)
        {
            if(sum<0)
            {
                sum=0;
            }
            sum = sum+nums[i];
            maxsum=max(maxsum,sum);
            
        }

        return maxsum;
        
    }
};
