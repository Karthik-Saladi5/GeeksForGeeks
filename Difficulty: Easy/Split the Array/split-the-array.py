#User function Template for python3
class Solution:
	def countgroup(self,arr): 
		#Complete the function
		MOD=10**9+7
		s=0
		for i in arr:
		    s^=i
		if s!=0:
		    return 0
		n=len(arr)
		return (pow(2,n-1,MOD)-1)%MOD



#{ 
 # Driver Code Starts
if __name__ == "__main__":
    t = int(input())
    while t > 0:
        arr = list(map(int, input().split()))
        ob = Solution()
        res = ob.countgroup(arr)
        print(res)
        t -= 1

# } Driver Code Ends