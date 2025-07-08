class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        unordered_map<int,string> mpp;
        int n = heights.size();
        for(int i=0; i<n; i++)
        {
            mpp[heights[i]] = names[i];
        }
        sort(heights.rbegin(), heights.rend());

        vector<string> ans;
        for(int i=0; i<n; i++)
        {
            ans.push_back(mpp[heights[i]]);
        }

        return ans;
    }
    
};