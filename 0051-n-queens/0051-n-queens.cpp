class Solution {
    int chessboard[20][20];
    vector<string>lpl;
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
    void fn(int index,vector<vector<string>>& wl,int n)
    {
        if (index==n)
        { string s="";
        while(lpl.size()>0)
        {
            lpl.pop_back();
        }
            for (int i=0;i<n;i++)
            {
                
                for (int j=0;j<n;j++)
                {
                if (chessboard[i][j]!=1)
                {
                    s+=".";
                }
                if (chessboard[i][j]==1)
                {
                    s+="Q";
                }
            }
            lpl.push_back(s);
            s="";
            }
            wl.push_back(lpl);
            return ;
        }
        for (int col=0;col<n;col++)
        {
            if(check(index,col,n))
            {
                chessboard[index][col]=1;
                fn(index+1,wl,n);
                chessboard[index][col]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> l;
        fn(0,l,n);
        return l ;
        
    }
};