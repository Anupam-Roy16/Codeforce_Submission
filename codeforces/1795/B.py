n=int(input())
for k in range(n):
  p,q=map(int,input().split())
  v=[]
  i=0
  min=100
  max=-1
  t=0
  while i<p:
    r, s = map(int, input().split())
    v1=[]
    v1.append(r)
    v1.append(s)
    if (q>=r and q<=s):
      v.append(v1)
      t=t+1
      if r < min:
        min = r
      if s < min:
        min = s
      if r > max:
        max = r
      if s > max:
        max = s
    i=i+1

  g=0
  if t==0:
    print("NO")
    continue
  for i in range(max+1):
    c=0
    for j in range(len(v)):
      if i>=v[j][0] and i<=v[j][1]:
        c=c+1
    if t==c:
      g=g+1
  if g>1:
    print("NO")
  else:
    print("YES")




