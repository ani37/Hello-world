s = raw_input()
n = len(s)

ans = 0
for i in xrange(n - 1):
	if s[i] != s[i + 1]: ans += 1

print ans