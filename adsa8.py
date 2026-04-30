def max_arr(arr):
    tmax = fmax = arr[0]
    for i in range(1, len(arr)):
        tmax = max(arr[i],arr[i]+tmax)
        fmax = max(tmax,fmax)
        return fmax
    print(max_arr([4,-2,-3,7,-3]))   