#User function Template for python3

class Solution:
    def rearrange(self,arr):
        # code here
        neg=[i for i in arr if i<0]
        pos=[i for i in arr if i>=0]
        ans=[]
        i,j=0,0
        for k in range(len(arr)):
            if k%2==0 and i<len(pos):
                ans.append(pos[i])
                i+=1
            elif j<len(neg):
                ans.append(neg[j])
                j+=1
        ans.extend(pos[i:])
        ans.extend(pos[j:])
        for i in range(len(arr)):
            arr[i]=ans[i]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ob.rearrange(arr)
        for x in arr:
            print(x, end=" ")
        print()
        tc -= 1

# } Driver Code Ends