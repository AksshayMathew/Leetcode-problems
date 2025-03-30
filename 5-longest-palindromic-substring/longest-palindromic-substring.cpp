class Solution {
public:
    string longestPalindrome(string s)
    {
        int n = s.length();
        if(n == 0)
        return "";

        int maxlen = 1;
        int start=0;

        for(int i=0; i<n; i++)
        {
            int left=i;
            int right=i;
            while(left>=0 && right<n && s[left] == s[right])
            {
                if(right-left+1>maxlen)
                {
                    start = left;
                    maxlen = right-left+1;
                }
                left--;
                right++;
            }






            left = i;
            right = i+1;
           while(left>=0 && right<n && s[left] == s[right])
            {
                if(right-left+1>maxlen)
                {
                    start = left;
                    maxlen = right-left+1;
                }
                left--;
                right++;
            }

        }   

        return(s.substr(start,maxlen));

        
    }
};