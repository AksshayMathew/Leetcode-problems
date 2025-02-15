class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        unordered_map<int,int> mpp;
        int n = nums.size();
        int k = 0;
 
        for(int i=0; i<n ;i++)
        {
            if(nums[i] != val)
            mpp[nums[i]]++;

        }

        for(auto it:mpp)
        {

           while(it.second --> 0)
            nums[k++] = it.first;
        }

        return k;
        
    }
};