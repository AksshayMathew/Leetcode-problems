class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        
        for (const string &email : emails) {
            string ans;
            bool ignore = false;
            
            for (int i = 0; i < email.size(); i++) {
                char c = email[i];

                if (c == '@') {
                    // Append the rest of the email (domain part) directly
                    ans += email.substr(i);
                    break;
                }

                if (c == '+') {
                    ignore = true; // Ignore everything after '+'
                    continue;
                }

                if (!ignore && c != '.') {
                    ans += c; // Only add valid local part characters
                }
            }
            
            st.insert(ans);
        }
        
        return st.size();
    }
};
