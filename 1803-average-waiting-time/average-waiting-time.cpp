class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) 
    {
        int n = customers.size();
        int currTime = 1;  // given in Q
        double Totalwait = 0;

        for(auto &vec:customers)
        {
            int arrTime = vec[0];
            int cookTime = vec[1];

            if(arrTime > currTime)
            {
                currTime  = arrTime;
            }

            int waitTime = currTime + cookTime - arrTime; 
            Totalwait += waitTime;

            currTime += cookTime;

        }

          return Totalwait/n;
        
    }
};