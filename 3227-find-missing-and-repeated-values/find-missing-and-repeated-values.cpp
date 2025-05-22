class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        unordered_map<int,int> mpp;
        vector <int> ans;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                mpp[grid[i][j]]++;
            }
        }

       int repeated = 0, missing = 0;
        for(int i=1; i<=n*n; i++)
        {
            int freq = mpp[i];

            if(freq == 2)
            repeated = i;
             if(freq == 0)
            missing = i;
        }

     return {repeated, missing};

        
    }
};