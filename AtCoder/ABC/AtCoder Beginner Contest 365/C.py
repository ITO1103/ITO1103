N,M = map(int, input().split())
Max = 0

A = [*map(int, input().split())]

Max = max(A)

if (Max * N) >= M:
    SUUM = int(sum(A)/N)
    while (SUUM * N) > M:
        SUUM -= 1
    print(SUUM)
else:
    print("infinite")