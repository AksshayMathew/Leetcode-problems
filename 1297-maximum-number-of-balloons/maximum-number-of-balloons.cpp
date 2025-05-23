class Solution {
public:
    int maxNumberOfBalloons(string text) 
    {

        unordered_map<char,int> mpp;
        for(char c:text)
        {
            mpp[c]++;
        }

       int res = text.length();

       unordered_map<char,int> ball = {{'b',1},{'a',1},{'l',2},{'o',2},{'n',1}};
       for(auto &it:ball)
       {
        char ch = it.first;
        int req = it.second;
        res = min(res, mpp[ch]/req);
       }

         return res;
    }
   
};