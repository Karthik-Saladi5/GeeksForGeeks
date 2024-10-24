#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    def modifyAndRearrangeArr (self, arr) : 
        #Complete the function
        n=len(arr)
        ans=[]
        zeroes=[]
        i=0
        while i<n:
            if i<n-1 and arr[i]==arr[i+1]:
                ans.append(2*arr[i])   
                zeroes.append(0)
                i+=1
            elif arr[i]==0:
                zeroes.append(0)
            else: 
                ans.append(arr[i])
            i+=1
        return ans+zeroes
        


#{ 
 # Driver Code Starts.
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        arr = list(map(int, input().split()))
        ob = Solution()
        ans = ob.modifyAndRearrangeArr(arr)
        print(*ans)
        print("~")
        t -= 1


# } Driver Code Ends