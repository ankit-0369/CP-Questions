for _ in range(int(input())):
    xx = int(input())
    l = xx.bit_length() - 1
    a = 1 << l
    b = xx ^ a
    print(b, a)