class NumArray {
public:

     vector<int> prefixSum;
    NumArray(vector<int>& nums) 
    {
        int n = nums.size();
       prefixSum = vector<int>(n+1,0);
       for(int i=1; i<n+1; i++)
       {
        prefixSum[i] = prefixSum[i-1] + nums[i-1];
       }

    }
    
    int sumRange(int left, int right) 
    {
        return prefixSum[right+1] - prefixSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */