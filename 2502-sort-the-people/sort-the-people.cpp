class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        int n = heights.size();
        unordered_map<int,string> mpp;

        for(int i=0; i<n; i++)
        {
            mpp[heights[i]] = names[i];
        }
        vector<pair<int, string>> vec(mpp.begin(), mpp.end());

        // for (int i = 0; i < n; i++) {
        //     people.push_back({heights[i], names[i]});
        // }

        // Sort by height in descending order
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });

        vector<string> ans;
        for (auto &it : vec) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
