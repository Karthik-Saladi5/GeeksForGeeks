class Solution {
   private:
   
   bool dfs(int i,int j,vector<vector<char>>& mat,int idx,string& word,vector<vector<int>>& visited)
   {
       if(i<0||i>=mat.size()||j<0||j>=mat[0].size()||visited[i][j])return false;
       if(mat[i][j]!=word[idx])return false;
       if(idx==word.length()-1)return true;
       visited[i][j]=1;
       if(dfs(i+1,j,mat,idx+1,word,visited)||dfs(i-1,j,mat,idx+1,word,visited)||
          dfs(i,j+1,mat,idx+1,word,visited)||dfs(i,j-1,mat,idx+1,word,visited))
          {
              return true;
          }
        visited[i][j]=0;
        return false;
   }

  public:
    bool isWordExist(vector<vector<char>> &mat, string &word) {
        // Code here
        int i,j,m,n,len,flag=0;
        m=mat.size();
        n=mat[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
        len=word.length();
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(mat[i][j]==word[0])
                {
                    if(dfs(i,j,mat,0,word,visited))
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)return true;
        else return false;
        
    }
};