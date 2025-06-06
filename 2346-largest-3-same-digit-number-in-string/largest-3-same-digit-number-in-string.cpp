class Solution {
public:
    string largestGoodInteger(string num) 
    {
        int n = num.size();
        string res = "0";
        string word = "";

        for(int i=0; i<n; i++)
        {
            if(num[i] == num[i+1] && num[i] == num[i+2])
            {
                word = num.substr(i,3);
                res = max(res, word);
            }
        }
      

        if(res=="0")
        return "";
        else
        return res;
        

    }
};