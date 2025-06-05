#include <unordered_map>
#include <vector>

class Solution {
public:
    int numIdenticalPairs(std::vector<int>& guestList) 
    {
        int n = guestList.size();
        unordered_map<int,int> mpp;
    
       int res = 0;
        for(int i=0; i<n; i++)
        {
            
            mpp[guestList[i]]++;
        }

        for(auto it:mpp)
        {
            int c = it.second;
            res += c*(c-1)/2;
        }
        return res;
      



        //ORRRRRRR
        // int res = 0;
        // for(int i=0; i<n; i++)
        // {
        //      res += mpp[guestList[i]];
        //     mpp[guestList[i]]++;
        // }

        // return res;

        
    }
};
