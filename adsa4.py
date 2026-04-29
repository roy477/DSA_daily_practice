def bss(arr):
    l = len(arr)
    res = 0   # initialize

    for i in range(1):
        for j in range(i+1, l):
            res = max(res, arr[j] - arr[i])

    return res

print(bss([6,7,1,2,8,5]))