class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        unordered_map<string, string> mpp;
        for(auto it:paths)
        {
            mpp[it[0]] = it[1];
    
        }

       string start = paths[0][0];
       while(mpp.find(start) != mpp.end())
       {
            start = mpp[start];

       }

       return start;

        
    }
};