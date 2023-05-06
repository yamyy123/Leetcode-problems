class Solution {
    public:
    int getlivemem(int i,int j,vector<vector<int>>&board)
    {
        int end=0;
        end+=valid(i-1,j-1,board);
        end+=valid(i-1,j,board);
        end+=valid(i-1,j+1,board);
        end+=valid(i,j-1,board);
        end+=valid(i,j+1,board);
        end+=valid(i+1,j-1,board);
        end+=valid(i+1,j,board);
         end+=valid(i+1,j+1,board);
         return end;
    }
    int valid(int i,int j,vector<vector<int>>&board)
    {
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size())
        {
            return 0;
        }
        else{
            return board[i][j];
        }
    }
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>board1=board;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                int cell=board1[i][j];
                int n=getlivemem(i,j,board1);
                if(cell==1)
                {
                    if(n<2)
                    {
                        cell=0;
                    }
                    else if(n==2||n==3)
                    {
                        cell=1;
                    }
                    else if(n>3)
                    {
                        cell=0;
                    }
                }
                else{
                    if(n==3)
                    {
                        cell=1;
                    }
                }
                if(board1[i][j]!=cell)
                {
                    board[i][j]=cell;
                }
            }
        }
    }
};
