from array import *


arr=array('i',[42,56,65,43,23,67,54,33])#o(n)
target=67
for idx in range(len(arr)):
    if arr[idx]== target:
        print(idx)
        break
    else:
        print("not found")

#arr=array('i',[1,2,3,4,5])
#print(arr)
#arr.append(6)
#print(arr)
#arr.insert(0,7)
#print(arr)
#print(arr[5])
#arr.pop(0)
#print(arr)

#arr=array('u',['H','E','L','L'])
#print(arr)
