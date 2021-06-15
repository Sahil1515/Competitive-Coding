




# def checkerFunc(lst,n):
#     sum = 0

#     dict_map={}
     
#     for i in range(0, len(lst)):    
#        sum = sum + lst[i]
#        dict_map[lst[i]]=0

#     print(dict_map)
#     print(sum)

#     if sum%n!=0:
#         return -1


#     for i in range(n):
#         dict_map[lst[i]]=dict_map[lst[i]]+1

#     print(dict_map)

#     ans=0

#     for ele in dict_map.keys():
#         print(dict_map[ele],ele)
#         if dict_map[ele] > ans:
#             ans=dict_map[ele]
    

#     print(n-ans)

#     return (n-ans)
     
    

# lst = []

# if __name__ == "__main__" :
    
#     inp=input()
#     lst = [int(i) for i in inp.split()][:len(inp)]
#     print(lst)
    
#     print(checkerFunc(lst,len(lst)))





# #include <bits/stdc++.h>
#    int minMoves(vector<int>& nums) {
#       int n = nums.size();
#       if (n == 0)
#          return 0;
#       sort(nums.begin(), nums.end());
#       int ans = 0;
#       for (int i = 0; i < n; i++) {
#          ans += nums[i] - nums[0];
#       }
#       return ans;
#    }



# def checkerFunc(lst):
#     n=len(lst)

#     if n==0:
#         return -1

#     lst.sort()

#     ans=0

#     for i in range(n):
#         ans=ans+lst[i]-lst[0]

#     return ans-1

# lst = []

# if __name__ == "__main__" :
    
#     inp=input()
#     lst = [int(i) for i in inp.split()][:len(inp)]
#     print(lst)
    
#     print(checkerFunc(lst))



# d=[int(i) for i in input().split()]
# s=sum(d)
# result=0
# if s%len(d)==0:
#   for i in range(len(d)):
#     if d[i]<(s//len(d)):
#       result=result+((s//len(d))-d[i])
#   print(result,end='')
# else:
#   print('-1',end='')





arr=[]