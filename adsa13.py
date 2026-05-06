def min_window(s, p):
    if not s or not p:
        return ""

    from collections import Counter

    need = Counter(p)     # frequency of chars in p
    window = {}
    
    have = 0
    need_count = len(need)
    
    left = 0
    res = [-1, -1]
    res_len = float("inf")

    for right in range(len(s)):
        char = s[right]
        window[char] = window.get(char, 0) + 1

        if char in need and window[char] == need[char]:
            have += 1

        # shrink window
        while have == need_count:
            # update result
            if (right - left + 1) < res_len:
                res = [left, right]
                res_len = right - left + 1

            # remove left char
            window[s[left]] -= 1
            if s[left] in need and window[s[left]] < need[s[left]]:
                have -= 1

            left += 1

    l, r = res
    return s[l:r+1] if res_len != float("inf") else ""



print(min_window("timetopractice", "toc"))   # toprac
print(min_window("zoomlazapzo", "oza"))      # apzo