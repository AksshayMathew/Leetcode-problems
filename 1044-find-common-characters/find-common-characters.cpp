

class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        map<char,int> mpp;

        for(char c:words[0])
        {
           mpp[c]++;
        }
        
        for(int i=1; i<words.size(); i++)
        {
            map<char,int> temp;
            for(char c:words[i])
            {
                temp[c]++;
            }

            for(auto it=mpp.begin(); it!=mpp.end(); )
            {
                it->second = min(it->second,temp[it->first]);
                if(it->second == 0)
                {
                    it = mpp.erase(it);
                }
                else
                {
                    it++;
                }
            }
        }

        vector<string> res;
        for(auto it:mpp)
        {
         for(int i=0; i<it.second; i++)
          {
            string ans = string (1,it.first);
            res.push_back(ans);
          }

        } 

        return res;

        

    }
};
