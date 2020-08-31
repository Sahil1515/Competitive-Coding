
def formatArray(a,n):
    for i in range(1,n,2):
        if a[i-1]>a[i]:
            temp=a[i]
            a[i]=a[i-1]
            a[i-1]=temp
    return a



#{ 
#  Driver Code Starts

if __name__=="__main__":
    t=int(input())
    for j in range(t):
        n=int(input())
        a=list(map(int,input().split()))
        b=formatArray(a,n)
        flag= 1
        if(len(b)==len(a)):
            for k in range(1,n,2):
                if(b[k]<b[k-1]):
                    flag=0
            if(flag==0):
                print(0)
            else:
                b.sort()
                a.sort()
                for p in range(0,n):
                    if(a[p]!=b[p]):
                        flag=0
                print(flag)
        else:
            print(0)

# } 

# Given an unsorted array arr of size N, 
# rearrange the elements of array such that
#  number at the odd index is greater than
#   the number at the previous even index.
#    The task is to complete the function 
#    formatArray() 
# which will return formatted array.

# Input:
# 2
# 5
# 5 4 3 2 1
# 4
# 4 3 2 1
# Output:
# 1
# 1