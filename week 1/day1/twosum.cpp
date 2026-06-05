
class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        
        int n=nums.size();
        vector<int>v;

         unordered_map<int,int>m;

         for(int i=0;i<n;i++)
         {
            int a=target-nums[i];
            if(m.find(a) == m.end())
            {
                m[nums[i]]=i;
            }

            else 
            {
                v.push_back(i);
                v.push_back(m[a]);
            }
         }


        return v;
    }
};
