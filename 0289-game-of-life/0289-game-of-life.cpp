class Solution
{
    public:
        int help(vector<vector < int>> &board, int i, int j, int m, int n)
        {
            int cnt = 0;
           	//up
            if (i > 0)
            {
                if (board[i - 1][j] == 1 || board[i - 1][j] == 3) cnt++;
            }
           	//left
            if (j > 0)
            {
                if (board[i][j - 1] == 1 || board[i][j - 1] == 3) cnt++;
            }
           	//right
            if (j < n-1)
            {
                if (board[i][j + 1] == 1 || board[i][j + 1] == 3) cnt++;
            }
           	//down
            if (i < m-1)
            {
                if (board[i + 1][j] == 1 || board[i + 1][j] == 3) cnt++;
            }
           	//left-up diagonal
            if (i > 0 && j > 0)
            {
                if (board[i - 1][j - 1] == 1 || board[i - 1][j - 1] == 3) cnt++;
            }	//left-down diagonal
            if (i < m-1 && j > 0)
            {
                if (board[i + 1][j - 1] == 1 || board[i + 1][j - 1] == 3) cnt++;
            }
           	//right-up diagonal
            if (i > 0 && j < n-1)
            {
                if (board[i - 1][j + 1] == 1 || board[i - 1][j + 1] == 3) cnt++;
            }
            if (i < m-1 && j < n-1)
            {
                if (board[i + 1][j + 1] == 1 || board[i + 1][j + 1] == 3) cnt++;
            }
            return cnt;
        }
    void gameOfLife(vector<vector < int>> &board)
    {
        int m = board.size();
        int n = board[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int ln = help(board, i, j, m, n);
                if (board[i][j] == 0) {
                    if(ln==3){
                        board[i][j]=2;
                    }
                }
                else
                if(board[i][j]==1){
                    if(ln<2 || ln>3){
                        board[i][j]=3;
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==2)
                    board[i][j]=1;
                else
                    if(board[i][j]==3)
                        board[i][j]=0;
            }
            
        }
    }
};