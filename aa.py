MAX = 100000
MOD = pwo(10, 9) + 7
dp = [1 for in xrange(MAX)]

for i in xrange(7, MAX):
	dp[i] = (dp[i - 1] + dp[i - 7]) % MOD

n = input()
for i in xrange(n):
	k = input()
	print dp[k]
