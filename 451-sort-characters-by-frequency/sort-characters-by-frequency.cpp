class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char,int>mpp;
        int n= s.length();
        for(char c:s)
        {
          mpp[c]++;
        }

        vector<pair<char,int>> vec(mpp.begin(), mpp.end());

        sort(vec.begin(), vec.end(), 
        [](const pair<char,int> &a,const pair<char,int> &b)
        {
           return a.second>b.second;
        });


      string res="";
      for(auto it:vec)
      {
        res.append(it.second,it.first);
      }
      return res;
    }
  
};