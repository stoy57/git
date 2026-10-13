import os
import sys
# 请在此输入您的代码
def main():
    data = list(map(int, sys.stdin.read().split()))
    if not data:
        return

    N, K, C, B = data[0], data[1], data[2], data[3]
    A = data[4:4 + N]

    A.sort()

    # 前缀和：prefix[i] 表示前 i 小的 A 之和
    prefix = [0] * (N + 1)
    for i in range(N):
        prefix[i + 1] = prefix[i] + A[i]

    def can(m):
        car_count = (m + K - 1) // K   # 向上取整
        cost = prefix[m] + car_count * C
        return cost <= B

    lo, hi = 0, N
    ans = 0

    while lo <= hi:
        mid = (lo + hi) // 2
        if can(mid):
            ans = mid
            lo = mid + 1
        else:
            hi = mid - 1

    print(ans)

if __name__ == "__main__":
    main()