# for __ in range(int(input())):
#     s=input()
#     lw=[]
#     up=[]
#     la="qwertyuiopasdfghjklzxcvbnm"
#     ua="QWERTYUIOPASDFGHJKLZXCVBNM"
#     a=[]
#     ans=""
#     c=0
#     for i in range(len(s)):
#         if s[i]=="B" and len(up):
#             a[up[-1]]="_"
#             up.pop()
#         elif s[i]=='b' and len(lw):
#             a[lw[-1]]="_"
#             lw.pop()
#         elif s[i]!='b' and s[i]!="B":
#             if s[i] in la:lw.append(c)
#             else:up.append(c)
#             a.append(s[i])
#             c+=1
#     for i in a:
#         if i!='_':ans+=i
#     print(ans)


# t = int(input())
# for _ in range(t):
#     s = input()
#     typed = []
#     for c in s:
#         if c == 'b' and typed and typed[-1].islower():
#             typed.pop()
#         elif c == 'B' and typed and typed[-1].isupper():
#             typed.pop()
#         elif c not in ['b', 'B']:
#             typed.append(c)
#     print(''.join(typed))









n = int(input())
s = input()
freq = [0] * 26

for c in s:
    freq[ord(c) - ord('a')]+= 1

maxFreq = max(freq)
result = 2 * maxFreq - n if maxFreq > n // 2 else 1 if n % 2 == 1 else 0
print(result)