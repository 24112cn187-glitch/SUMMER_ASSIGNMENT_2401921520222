class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n=nums.size();


        double sum=0;

        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }

        double average=sum/(double)k;

        double ans=average;
        int j=k;
        int i=0;
        double newavg=ans;

        while(j<n)
        {
            sum=sum+nums[j];
            sum=sum-nums[i];
            newavg=sum/(double)k;
            ans=max(ans,newavg);
            i++;
            j++;
        }

        return ans;
        
    }
};
