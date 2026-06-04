class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
         vector<int>ans;

        int minr=0;
        int maxr=m-1;
        int minc=0;
        int maxc=n-1;

        while(minc<=maxc && minr<=maxr)
        {

        for(int i=minc;i<=maxc;i++)
        {
            ans.push_back(matrix[minr][i]);
        }

        minr++;

        
        for(int i=minr;i<=maxr;i++)
        {
            ans.push_back(matrix[i][maxc]);
        }
        maxc--;

        
        if (minr <= maxr){ for(int i=maxc;i>=minc;i--)
        {
            ans.push_back(matrix[maxr][i]);
        }
        }

        maxr--;

        
        if (minc <= maxc){ for(int i=maxr;i>=minr;i--)
        {
            ans.push_back(matrix[i][minc]);
        }

        minc++;
        }
        }

        return ans;
        
    }
};
