for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    count = 0
    prefix_sum = 0

    for element in a:
        if element <= prefix_sum:
            count += 1
        prefix_sum += element
    print(count)
    print(*a)