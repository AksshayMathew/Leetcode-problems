class Solution {
public:
    int specialArray(vector<int>& nums) 
    {
        int n = nums.size();
        // vector<int> vec(n+1,0);
        unordered_map<int,int>mpp;
        int res = 0;

        for(int i=0; i<n; i++)
        {
              int index = min(n,nums[i]);
            //   vec[index]++;
            mpp[index]++;
        }
      


        for(int i=n; i>=0; i--)
        {
            // res+=vec[i];
            res+=mpp[i];
            if(res == i)
            return i;
        }
       
        return -1;
    }
};



//n^2 APPROACH
//  int n =nums.size();
//         for(int i=0; i<=n; i++)  //i<n is wrong
//         {
//             int cnt = 0;
//             for(int num : nums)
//             {
//                 if(num >= i)
//             {
//                cnt++;
//             }

//             }

//             if(cnt == i)
//              return i;  
        
//         }

       
//         return -1;