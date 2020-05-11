# Wrong Answer

nums = list(map(int, input().split()))

x = nums[0] * nums[1]
div = x/9;

s = str('%.11f' % div)

s = s[:-10]

print(s, sep='', end='')
for i in range(10):
    print(s[len(s)-1], sep='', end='')

print()