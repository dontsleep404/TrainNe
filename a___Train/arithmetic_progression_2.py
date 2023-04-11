n, k = map(int, input().split())
a = list(map(int, input().split()))
b = dict()
for i in range(n):
    if(b.get(a[i] - k) == None):
        b[a[i]] = 1
    else:
        b[a[i]] = b[a[i] - k] + 1
print(max(b.values()))