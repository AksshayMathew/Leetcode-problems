class Solution {
public:
    bool isPathCrossing(string path) 
    {
       // unordered_set<pair<int,int>> st; WRONG
       set<pair<int,int>> st;

        int x=0,y=0;

        st.insert({x,y});

        for(char c:path)
        {
            if(c == 'N')
            y++;
            if(c == 'S')
            y--;
            if(c == 'E')
            x++;
            if(c == 'W')
            x--;

           
            //st.insert({x,y});   ---- wrong if its here
            if(st.count({x,y})>0)
            {
                return true;
            }

             st.insert({x,y});
            

        }
     
     return false;
        
    }
};