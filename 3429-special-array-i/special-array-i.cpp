class Solution {
public:
    bool isArraySpecial(vector<int>& nums)
    {
        int n = nums.size();
        for(int i=1; i<n; i++)
        {
            int curr = nums[i]%2;
            int prev = nums[i-1]%2;
            if(curr == prev)
            {
              return false;
              break;
            }
            
        }
        
        return true;
    }
};