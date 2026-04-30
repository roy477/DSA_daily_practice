def max_water(arr):
    left=0
    right=len(arr)-1
    fres=0
    while left<right:
        tres=min(arr[left],arr[right])*(right - left)
        fres = max(fres,tres)
        if arr[left] < arr[right]:
            left += 1
        else:
            right -= 1
    return fres
print(max_water([6,1,2,3,5]))