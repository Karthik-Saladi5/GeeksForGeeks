#User function Template for python3
class Solution:
	def twoSum(self, arr, target):
		# code here
		arr.sort()
		i=0
		j=len(arr)-1
		n=len(arr)
		while(i<n and j>=0 and i<j):
		    s=arr[i]+arr[j]
		    if(s==target): return True
		    elif(s<target): i+=1
		    else: j-=1
		return False


#{ 
 # Driver Code Starts
#Initial Template for Python 3

#Initial Template for Python 3


def main():
    T = int(input())
    while T > 0:
        x = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.twoSum(arr, x)
        if ans:
            print("true")
        else:
            print("false")
        T -= 1
        print("~")


if __name__ == "__main__":
    main()

# } Driver Code Ends