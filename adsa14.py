def next_great (arr):
    n= len(arr)
    stk =[]
    res = [-1]*n
    for i in range(n-1, -1,  -1):
        while stk and stk[-1] <= arr[i]:
            stk.pop()
        if stk:
            res[i] = stk[-1]    
        stk.append(arr[i])
    return res

print(next_great([3,1,6,7,2,8]))  