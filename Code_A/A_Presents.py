n= int(input())
frnd= list(map(int, input().split()))

res=[0]*n

for i in range(n):
    res[frnd[i] -1] = i+1

print(" ".join(map(str, res)))