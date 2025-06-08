class Solution {
public:
    int minOperations(string s) 
    {
        int cnt_start_zero=0, cnt_start_one=0, res = 0;
        int n = s.size();

       for(int i=0 ;i<n; i++)
       {
            char exp_zero = (i%2 == 0)?'0':'1';  //010101
            char exp_one  = (i%2 == 0)?'1':'0';  //101010

            if(s[i] != exp_zero)
            cnt_start_zero++;
            if(s[i] != exp_one)
            cnt_start_one++;

            //    res = min(cnt_start_zero,cnt_start_one); - WRONG

       }
       
       res = min(cnt_start_zero,cnt_start_one);
       return res;
        
    }
};