class Solution {
public:
   bool isValidSudoku(vector<vector<char>>& board) {
       
     int height=board.size();
     int width=board[0].size();

     vector<vector<int>> checkRow(height, vector<int> (width+1));
     vector<vector<int>> checkCol(height, vector<int> (width+1));
     vector<vector<int>> checkBox(height, vector<int> (width+1));  

     for(int row=0;row<height;row++){
       for(int col=0;col<width;col++){
           
         if(board[row][col]=='.')
           continue;         
           

         int num=board[row][col]-'0'; 
           
         
         int box=(row/3)*3+(col/3);                
           

         if(checkRow[row][num] || checkCol[col][num] || checkBox[box][num])      
           return false;
          

         checkRow[row][num]=checkCol[col][num]=checkBox[box][num]=1;      
       }
     }
     return true;
  }
};