class Solution {
public:
    vector<int> minOperations(string boxes) 
    {

        int n = boxes.size();
        vector<int> ans(n,0);
        vector<int> left(n,0);
        vector<int> right(n,0);

        int cuml = boxes[0] - '0';
        for(int i=1; i<n; i++)
        {
            left[i] = left[i-1] + cuml;
            cuml = cuml + boxes[i]-'0';

        }

         int cumr = boxes[n-1] - '0';
         for(int i=n-2; i>=0; i--)
        {
            right[i] = right[i+1] + cumr;
             cumr = cumr + boxes[i]-'0';

        }

         for(int i=0;i<n;i++)
        {
            ans[i] = left[i] + right[i];

        }

        return ans;
        
        
    }
};