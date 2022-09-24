class Solution {
public:
    bool check(vector<vector<char>>& board, int i, int j, char val) {

    for( int h=0;h<9;h++)
        {
        if(board[i][h]==val) return false; /* check row */
        if(board[h][j]==val) return false; /* check col */
        if(board[i-i%3+h/3][j-j%3+h%3]==val)return false; /* check cube */
        }
        
    return true;
}
    bool solve(vector<vector<char>> &board, int i, int j)
{
    if(i==9) return true;
    if(j==9) return solve(board, i+1, 0);
    if(board[i][j] != '.') return solve(board, i, j+1);

    for(char c='1'; c<='9'; c++)
    {
        if(check(board, i, j, c))
        {
            board[i][j] = c;
            if(solve(board, i, j+1)) return true;
            board[i][j] = '.';
        }
    }
        
    return false;
}
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};