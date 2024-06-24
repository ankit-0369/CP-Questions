
T = int(input())
for _ in range(T):
    n = int(input())
    l = list(map(int, input().split()))
    res = 0
    l.sort()
    for i in range(1, n + 1):
        res += abs((i - 1) - l[i - 1])
    print(res)