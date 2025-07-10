class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        unordered_map<int, int> freq;
        for(int &num:nums)
        {
            freq[num]++;
        }

        // sort(nums.begin(), nums.end(), [&](int a,int b)
        // {
        //     if(mpp[a] == mpp[b])
        //     {
        //         return a>b;
        //     }
        //     return mpp[a] < mpp[b];
        // });

           vector<pair<int,int>> vec (freq.begin(), freq.end());

           sort(vec.begin(), vec.end(), [](auto &a,auto &b)
        {
            if(a.second == b.second)
            {
                return a.first > b.first;
            }
            return a.second < b.second;
        });


      vector<int>res;
      for(auto &it: vec)
      {
            for(int i=0; i<it.second; i++)
            {
                res.push_back(it.first);
            }
       
      }


      return res;
      
      
    }
};