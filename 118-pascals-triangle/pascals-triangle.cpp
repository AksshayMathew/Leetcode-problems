class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {

       vector<vector<int>>ans;
       for(int n=0; n<numRows;  n++)
       {

        vector<int> ansRow;
        ansRow.push_back(1);
        int val = 1;

        for(int r=1; r<=n; r++)
          {
            val = val *(n-r+1)/(r);
            ansRow.push_back(val);
          }

           ans.push_back(ansRow);
       }

       return ans;

     

    }
};