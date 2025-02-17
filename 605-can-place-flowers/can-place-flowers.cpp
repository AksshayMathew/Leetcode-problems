
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int s  = flowerbed.size();
        int cnt = 0;

      if(s==1)
      {
        if(flowerbed[0] == 0 && n<=1)
         return true ;
        else if(flowerbed[0] == 1 && n==0)
        return true; 
        else
        return false;
      }
     

       if(flowerbed[0]==0  && flowerbed[1]==0)
       {
        flowerbed[0] = 1;
        cnt++;
       }


        for(int i=1; i<s-1; i++)
        {
            if( flowerbed[i] == 0 )
            {
                if(flowerbed[i+1] == 0 && flowerbed[i-1] == 0)
                {
                   
                    flowerbed[i] = 1;
                     cnt++;
                }

            }
               
        }

  
       if(flowerbed[s-1]==0 && flowerbed[s-2]==0)
       {
        flowerbed[s-1] = 1;
        cnt++;
       }

        return (cnt>=n);
    }
};