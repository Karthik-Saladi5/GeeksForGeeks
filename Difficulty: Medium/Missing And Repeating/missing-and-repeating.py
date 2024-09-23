#User function Template for python3
from collections import Counter
class Solution:
    def findTwoElement( self,arr): 
        # code here
        dic=Counter(arr)
        rep=-1
        a=b=-1
        for i in range(1,n+1):
            if dic[i]==0:
                a=i
            elif dic[i]>1:
                b=i
        return [b,a]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.findTwoElement(arr)
        print(str(ans[0]) + " " + str(ans[1]))
        tc = tc - 1

# } Driver Code Ends