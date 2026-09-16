class Solution {
    int chessboard[20][20];
public:
bool check(int row,int col,int n)
{
    for (int i=row;i>=0;i--)
    {
        if(chessboard[i][col]==1)
        {
            return false;
        }

    }
    for (int i=row,j=col;i>=0&&j>=0;i--,j--)
    {
        if(chessboard[i][j]==1)
        {
            return false;
        }
    }
    for (int i=row,j=col;i>=0&&j<n;i--,j++)
    {
        if(chessboard[i][j]==1)
        {
            return false;
        }
    }
    return true;

}
    void fn(int index,vector<vector<string>>& wl,int n,int &kjp)
    {
        if (index==n)
        { 
            kjp++;
            return ;
        }
        for (int col=0;col<n;col++)
        {
            if(check(index,col,n))
            {
                chessboard[index][col]=1;
                fn(index+1,wl,n,kjp);
                chessboard[index][col]=0;
            }
        }
    }
    int totalNQueens(int n) {
        int kjp=0;
        vector<vector<string>> l;
        fn(0,l,n,kjp);
        return kjp ;
    }
};