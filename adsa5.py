def bss_eff(arr):
    buy = arr[0]
    res=0
    for i in range(1,len(arr)):
        buy = min(buy,arr[i])
        res= max(res,arr[i]-buy)
    return res    
print(bss_eff([5 ,4, 1, 3 , 8, 9]))