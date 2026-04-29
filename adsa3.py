def rat (r,u,arr) :
    if len(arr)==0:
        return -1
    freq =r*u
    bag =0
    for i in range(len(arr)):
        bag+=arr[i]
        if bag>freq:
            return i+1
        return 0
print(rat(4,2,[2,3,1,4,5,6]))    