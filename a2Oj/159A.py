t = int(input())
for _ in range(t):
    n, p, L, t = map(int, input().split())
    
    s = 0
    e = n
    
    while e - s > 1:
        mid = (e + s) // 2
        cur = mid * L
        cnt = min(mid * 2, (n + 6) // 7) * t
        cur += cnt
        
        if cur < p:
            s = mid
        else:
            e = mid
            
    print(n - e)

# print(7//2)