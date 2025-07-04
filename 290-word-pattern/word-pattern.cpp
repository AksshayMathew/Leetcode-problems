class Solution {
public:
    bool wordPattern(string pattern, string s)
    {

        int n = s.size();
        string temp = "";
        vector<string> v;
        for(int i=0; i<n; i++)
        {
            if(s[i] ==  ' ')
            {
                v.push_back(temp);
                temp = "";
            }
            else
            {
                temp = temp + s[i];
            }
        }
        v.push_back(temp);  // for the last word


        if(pattern.size() != v.size())
        return false;



        unordered_map<char,string> mpp;
        set<string> st;

        for(int i=0; i<pattern.size(); i++)
        {
            if(mpp.find(pattern[i]) !=  mpp.end())
            {

              if(mpp[pattern[i]] != v[i])
              {
                return false;
              }
              
            }
            else
            {
                if(st.count(v[i])>0)
                return false;
            }


            mpp[pattern[i]] = v[i];
            st.insert(v[i]);
        }


        return true;
    }
};