n, t = map(int, raw_input().strip().split())
a = map(int, raw_input().strip().split())

ans = 0

while 1:
    s = 0
    rng = 0
    for i in xrange(n):
        if a[i] <= t:
            s += a[i]
            rng += 1

    if rng == 0: break

    ans += (t // s) * rng
    t %= s

    for i in xrange(n):
        if a[i] <= t:
            t -= a[i]
            ans += 1

print ans