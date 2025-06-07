class Solution {
public:
    int maxProductDifference(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int first = nums[0]*nums[1];
        int sec = nums[n-1]*nums[n-2];

        return sec - first;
    }
};

// 000000000000000000000RRRRRRRRRRRRRRRRRRR
//     int maxProductDifference(vector<int>& nums) {
//         int max1 = 0, max2 = 0;
//         int min1 = INT_MAX, min2 = INT_MAX;
//         for (int num : nums) {
//             if (num > max1) {
//                 max2 = max1;
//                 max1 = num;
//             } else if (num > max2) {
//                 max2 = num;
//             }
//             if (num < min1) {
//                 min2 = min1;
//                 min1 = num;
//             } else if (num < min2) {
//                 min2 = num;
//             }
//         }
//         return (max1 * max2) - (min1 * min2);
//     }
