class Solution {

private:
   
   int perimeter = 0;
   void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<int>>& grid)
   {
        int n = grid.size();
        int m = grid[0].size();

        vis[row][col] = 1;

        int dr[] = {-1,0,1,0};
        int dc[] = {0, 1,0,-1};

        for(int i=0; i<4; i++)
        {
            int nrow = row + dr[i];
            int ncol = col + dc[i];

        if(nrow<0 || nrow>=n || ncol<0 || ncol >=m || grid[nrow][ncol]==0)
        {
            perimeter++;
        }
        else if( !vis[nrow][ncol] && grid[nrow][ncol] == 1)
        {
               dfs(nrow,ncol,vis,grid);     
        }
 
        }

    }


    
public:
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j] && grid[i][j] == 1)
                {
                    dfs(i,j,vis,grid);
                }
            }
        }

        return perimeter;
        
    }
};