class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) 
    {
        vector<int> rank(26);
        for(int i=0; i<order.size(); i++)
        {
            rank[order[i]-'a'] = i;
        }

        for(int i=0; i<words.size()-1; i++)
        {
            string &a = words[i];
            string &b = words[i+1];

            int n = min(a.length(), b.length());

            bool different = false;
            for(int j=0; j<n; j++)
            {
                if(a[j] != b[j])
                {
                    if(rank[a[j]-'a'] > rank[b[j]-'a'])
                    {
                      return false;
                    }
                    different = true;
                    break;

                }
            }
            if(!different && a.size()>b.size())
            {
                return false;
            }

        }

        return true; 
    }
};