class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        unordered_map<int,int> mpp;
        for(int &num1 : arr1)
        {
            mpp[num1]++;
        }

        vector<int> ans;
        for(int &num2: arr2)
        {
            while(mpp[num2]>0)
            {
                ans.push_back(num2);
                mpp[num2]--;
            }
        }

        vector<int> rem;
        for(auto &it:mpp)
        {
           for(int i=0; i<it.second; i++)
            {
                rem.push_back(it.first);
            }
        }

       sort(rem.begin(), rem.end());
       ans.insert(ans.end(), rem.begin(), rem.end());

         return ans;
    }

   
};