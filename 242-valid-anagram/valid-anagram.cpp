class Solution {
public:
    bool isAnagram(string s, string t) 
    {
    unordered_map<int,int> mpp;
        int n = s.size();
        int m = t.size();

        if(n != m)
        {
         return false;
        }
      

        for(int i=0; i<n; i++)
        {
           mpp[s[i]]++;
        }

          for(int i=0; i<m; i++)
        {
           mpp[t[i]]--;
        }


        for(auto it: mpp)
        {
            if(it.second != 0)
            return false;
        }

        return true;
        
    }
};


