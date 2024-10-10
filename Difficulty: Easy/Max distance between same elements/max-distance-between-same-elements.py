class Solution:
    # Your task is to Complete this function
    # functtion should return an integer
    def maxDistance(self, arr):
        # Code here
        n=len(arr)
        freq={}
        for i in range(n):
            if arr[i] not in freq.keys():
                freq[arr[i]]=[i,i] #first,last
            else:
                freq[arr[i]][1]=i
        ans=0
        for i,j in freq.values():
            ans=max(ans,j-i)
        return ans



#{ 
 # Driver Code Starts
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        arr = list(map(int, input().split()))
        ob = Solution()
        print(ob.maxDistance(arr))

# } Driver Code Ends