
h = int(input())

for i in range(h):
    n, k = map(int, input().split())
    p = n * (n - 1) // 2
    if k == p:
        print(k)
        for j in range(1,n):
            for z in range(j + 1, n + 1):
                print(j, z)
    elif k < p and (p - k) >= (n - 1):
        r = p - k
        print(r)
        for j in range(1, n):
            for z in range(j + 1, n + 1):
                if r != 0:
                    print(j, z)
                    r -= 1
    else:
        print(-1)