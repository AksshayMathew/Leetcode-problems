class Solution {
public:
    int numUniqueEmails(vector<string>& emails)
    {

        unordered_set<string> st;
        for(auto it:emails)
        {
            string word = it;
            string ans="";
            for(char c:word)
            {
                if(c == '+' || c == '@')
                break;
                if(c == '.')
                continue;

                ans+=c;
            }

            int req = word.find('@');
            ans += word.substr(req);
            st.insert(ans);

        }

        return st.size();
        
    }
};