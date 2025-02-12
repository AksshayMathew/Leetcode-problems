// class Solution {
// public:
//     bool isAnagram(string s, string t) 
//     {
//     unordered_map<int,int> mpp;
//         int n = s.size();
//         int m = t.size();

//         for(int i=0; i<n; i++)
//         {
//            mpp[s[i]]++;
//         }

//           for(int i=0; i<m; i++)
//         {
//            mpp[t[i]]--;
//         }


//         for(auto it: mpp)
//         {
//             if( (n !=m ) || (it.second != 0) )
//             return false;
//         }

//         return true;
        
//     }
// };


class Solution 
{
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};