# cook your dish here
def f(a, b):
 c = sum(b)
 if c % a != 0:
    return "No"
 d = c // a
 for e in b:
    g = e - d
 if g % 2 != 0:
    return "No"
    return "Yes"

t = int(input())
for _ in range(t):
 a = int(input())
 b = list(map(int, input().split()))
 i = f(a, b)
 print(i)