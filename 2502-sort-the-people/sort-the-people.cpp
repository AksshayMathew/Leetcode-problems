class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        int n = names.size();
        vector<pair<int, string>> people;

        for (int i = 0; i < n; i++) {
            people.push_back({heights[i], names[i]});
        }

        // Sort by height in descending order
        sort(people.begin(), people.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });

        vector<string> ans;
        for (auto &it : people) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
