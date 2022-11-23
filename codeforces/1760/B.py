x=int(input())
for i in range(x):
    n=int(input())
    s=input()
    s = ''.join(sorted(s))
    print(ord(s[n-1])-96)











