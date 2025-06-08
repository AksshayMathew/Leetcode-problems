class Solution {
public:
    int maxScore(string s) 
    {
        int res1 = 0;
        int n= s.size();
        int c_one=0, c_zero=0;
        for(char c:s)
        {
            if(c == '1')
            {
                c_one++;
            }
        }


        for(int  i=0; i<n-1; i++)
        {
            if(s[i] == '0')
            {
                c_zero++;
            }
            if(s[i] == '1')
            {
                c_one--;
            }

           int res = c_zero+c_one;
            res1 = max(res,res1);
        }
        
        return res1;
    }
};