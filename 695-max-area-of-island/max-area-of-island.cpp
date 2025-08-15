class Solution {

private:
    int dfs(int r, int c, vector<vector<int>>& vis, vector<vector<int>>& grid)
    {
        vis[r][c] = 1;

        int n = grid.size();
        int m = grid[0].size();

        int dr[] = {-1,0,1,0};
        int dc[] = {0,1,0,-1};
        
        int area = 1;
        
        
        for(int i=0; i<4; i++)
        {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && grid[nr][nc] == 1)
            {
                area += dfs(nr,nc,vis,grid);
            }
           
        }

        
        return area;



    }


public:
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {

        int n = grid.size();
        int m = grid[0].size();
        int answer = 0;
        // int area = 0

        vector<vector<int>> vis(n,vector<int>(m,0));

        for(int i=0 ; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j] && grid[i][j] == 1)
                {
                   answer =  max(answer, dfs(i,j,vis,grid));
                //ORRR
                //     area = dfs(i,j,vis,grid);
                //    answer =  max(answer,area);
                // 
                }
            }
        }

        return answer;
        
    }
};