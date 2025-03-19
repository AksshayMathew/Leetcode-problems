class Solution {
public:
    string largestOddNumber(string num) 
    {
        string res = "";
        int n = num.size();
        int i = 0, j=n-1;
        for(j=n-1; j>=0; j--)
        {
            if(num[j] % 2 != 0)
            {
                break;
            }

        }  

        return num.substr(0,j+1);

        
    }
};