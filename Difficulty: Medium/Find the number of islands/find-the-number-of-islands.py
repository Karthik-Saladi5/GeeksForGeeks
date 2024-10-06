#User function Template for python3

class Solution:
    def numIslands(self, grid):
        # code here
        def dfs(i,j,grid):
            n,m=len(grid),len(grid[0])
            if i>=n or j>=m:
                return
            if i<0 or j<0:
                return
            if grid[i][j]==0:
                return
            grid[i][j]=0
            dfs(i,j-1,grid)
            dfs(i,j+1,grid)
            dfs(i-1,j,grid)
            dfs(i+1,j,grid)
            dfs(i+1,j+1,grid)
            dfs(i-1,j-1,grid)
            dfs(i-1,j+1,grid)
            dfs(i+1,j-1,grid)
        n,m=len(grid),len(grid[0])
        c=0
        for i in range(n):
            for j in range(m):
                if grid[i][j]==1:
                    c+=1
                    dfs(i,j,grid)
        return c


#{ 
 # Driver Code Starts
# Driver code
if __name__ == "__main__":
    for _ in range(int(input())):
        n, m = map(int, input().strip().split())
        grid = []
        for i in range(n):
            grid.append([int(i) for i in input().strip().split()])
        obj = Solution()
        print(obj.numIslands(grid))

# } Driver Code Ends