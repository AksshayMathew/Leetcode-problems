class Solution {
public:
    vector<int> minOperations(string boxes) 
    {

        int n = boxes.size();
        vector<int> ans(n,0);
        vector<int> left(n,0);
        vector<int> right(n,0);

        int reml = boxes[0] - '0';
        for(int i=1; i<n; i++)
        {
            left[i] = left[i-1] + reml;
            reml = reml + boxes[i]-'0';

        }

         int remr = boxes[n-1] - '0';
         for(int i=n-2; i>=0; i--)
        {
            right[i] = right[i+1] + remr;
             remr = remr + boxes[i]-'0';

        }

         for(int i=0;i<n;i++)
        {
            ans[i] = left[i] + right[i];

        }

        return ans;
        
        
    }
};