class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string,vector<string>>mpp;

        for(auto it: strs)
        {
            string word = it;
            sort(word.begin(), word.end());
            mpp[word].push_back(it);
        }


        vector<vector<string>> ans;
        for(auto it:mpp)
        {
            ans.push_back(it.second);
        }
        return ans;



        
    }
};