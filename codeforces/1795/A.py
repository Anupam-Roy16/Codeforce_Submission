n=int(input())
for i in range(n):
  p,q=map(int,input().split())
  s1=input()
  s2=input()
  w=0
  e=0
  for i in range(p-1):
    if s1[i]==s1[i+1]:
      w=w+1
  for i in range(q-1):
    if s2[i]==s2[i+1]:
      e=e+1
  if e>1 or w>1:
    print("NO")
  elif w==1 and e==1:
    print("NO")
  elif s1[p-1]==s2[q-1] and (w==1 or e==1):
    print("NO")
  else:
    print("YES")
