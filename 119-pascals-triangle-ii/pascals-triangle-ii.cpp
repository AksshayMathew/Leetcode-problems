class Solution {
public:

   
    vector<int> getRow(int rowIndex) 
    {
     vector<int> op = {1};
     for(int i=1; i<=rowIndex; i++)
     {
        int ele = op.back() * 1LL * (rowIndex-i+1)/i ;
        //   int ele = op.back()  * (rowIndex-i+1)/i  * 1LL; WONT WORK
        op.push_back(ele);
     }

     return op;

    }
};
