class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>result;
        unordered_map<int, int>mpp;
        stack<int> st;
        int n1 = nums1.size();
        int n2 = nums2.size();

     for(int i=n2-1; i>=0; i--)
     {
         while(!st.empty() && st.top()<=nums2[i])
        {
           st.pop();  
        }
         mpp[nums2[i]] = st.empty()?-1:st.top();
         st.push(nums2[i]);
     }


        for(int i=0; i<n1; i++)
        {
            result.push_back(mpp[nums1[i]]);
        }

        return result;


    }
};