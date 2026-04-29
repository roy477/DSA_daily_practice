def psp (arr, d) :
    if len(arr) < 2:
        return -1
    arr.sort()
    if arr[0]+arr[1] <=d:
        return arr[0]*arr[1]
    else:
        return 0

print(psp([7, 34, 67],10))