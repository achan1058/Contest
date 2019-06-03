n = int(input())

for x in range(0, n):
	s,z = input(),input()
	dp = [[0]*(len(s)+1) for i in range(len(z) + 1)]
	dp[0] = [1]*(len(s)+1)

	for i in range(0, len(z)):
		for j in range(0, len(s)):
			dp[i + 1][j + 1] = dp[i + 1][j] + (dp[i][j] if z[i] == s[j] else 0)
	print(dp[len(z)][len(s)])
