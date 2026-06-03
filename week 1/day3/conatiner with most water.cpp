class Solution {
public:
    int maxArea(vector<int>& height) {

        int n=height.size();
        int i=0;
        int j=n-1;
        long long  maxw=0;

        while(i<j)
        {
            long long ans=(long long) (min(height[i],height[j])*(j-i));
            maxw=max(maxw,ans);

            if(height[i]<=height[j]) i++;
            
            else if (height[i]>height[j]) j--;
        }

        return maxw;
    }
};
