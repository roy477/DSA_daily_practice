def diff_positions(a):
    if a == []:
        return 0

    even = 0
    odd = 0
    i = 0

    while i < len(a):
        if i % 2 == 0:
            even = even + a[i]
        else:
            odd = odd + a[i]
        i = i + 1

    result = even - odd
    return result

print(diff_positions([4,6,1,3,8]))