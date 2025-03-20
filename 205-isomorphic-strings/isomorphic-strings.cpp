class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char,char> mpp;
        unordered_map<char,char> ppm;

        for(int i=0; i<s.length(); i++)
        {
            char c1 = s[i];
            char c2 = t[i];

            if ((mpp.count(c1)!=0 && mpp[c1]!=c2) || (ppm.count(c2)!=0 && ppm[c2]!=c1))
            return false;

             mpp[c1] = c2;
             ppm[c2] = c1;
        }

       return true;

    }
};