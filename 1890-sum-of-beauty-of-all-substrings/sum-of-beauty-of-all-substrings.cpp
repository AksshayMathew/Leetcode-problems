class Solution {
public:
    int beautySum(string s)
    {
        
        int n = s.length();
        int res = 0;

        for(int i=0; i<n; i++)
        {
            unordered_map<char,int> mpp;
            for(int j=i; j<n; j++)
            {

                mpp[s[j]]++;
        
                int maxi = INT_MIN;
                int mini = INT_MAX;

               for(auto it:mpp)
               {
                  int cnt = it.second;
                  maxi = max(maxi,cnt);
                  mini = min(mini,cnt);
               }

                int beauty = maxi - mini;
                res = res+beauty; 
        }
          
     }
         return res;  
    }
};