class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {

       int n = nums.size();
       int lsum = 0;
       int rsum = 0;
       int total = 0;
       for(int i=0; i<n; i++)
       {
        total += nums[i];
       }

       for(int i=0; i<n; i++)
       {
        rsum = total - lsum - nums[i];
        if(lsum == rsum)
        return i;
        lsum+=nums[i];
       }

     return -1;
       



    }
  
};