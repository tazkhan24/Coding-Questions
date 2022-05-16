struct Point{
    int x;
    int y;
    int cnt;
};


class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int dx[8]={1,1,1,-1,-1,-1,0,0};
        int dy[8]={1,0,-1,1,-1,0,1,-1};
        
        if(grid[0][0] == 1)
            return -1;
        
        int rows = grid.size();
        int cols = grid[0].size();
        queue<Point> q;
        q.push({0,0,1});
        
        grid[0][0]=-1;
        
        while(!q.empty() ){
            
            Point p = q.front();
            q.pop();
            
            if(p.x == rows-1 && p.y == cols-1)
                return p.cnt;
            
            for(int i=0;i<8;i++){
                int x = p.x+dx[i];
                int y = p.y+dy[i];
                
                if(x>=0 && y>=0 && x<rows && y<cols && grid[x][y] == 0)
                {
                    q.push({x,y,p.cnt+1});
                    grid[x][y]=-1;
                }
            }
            
        }
        return -1;
    }
};