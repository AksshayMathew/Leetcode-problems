class Solution {
    bool isVowel(char c)
    {
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) 
    {
        vector<int> vec;
        int n = words.size();
        vector<int> psum(n+1,0);

        for(int i=0; i<n; i++)
        {
            char start = words[i][0];
            char end = words[i].back();

            if(isVowel(start) && isVowel(end))
            {
                psum[i+1] = psum[i]+1;
            }
            else
            {
                 psum[i+1] = psum[i];
            }
        }

            for(auto &q:queries)
            {
                int res = psum[q[1]+1] - psum[q[0]];
                vec.push_back(res);
            }

          return vec;

    }
};