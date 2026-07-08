a='codeforces'
t=int(input())
ans=[]
for i in range(t):
    b=input()
    if b in a:
        ans.append('YES')
    else:
        ans.append('NO')
for x in ans:
    print(x)