class Solution {
public:
    bool rotateString(string s, string goal) 
    {
        string s1 = s+s;
        int n = goal.length();
        for(int i=0; i<s.length(); i++) 
        {
            if(s.length() != goal.length())
            return false;
           string temp = s1.substr(i,n);
            if(temp == goal)
            return true;
        }
        
        return false;
    }
};