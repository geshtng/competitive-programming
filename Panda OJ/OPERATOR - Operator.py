t = int(input())

for i in range(1, t+1):
    nums = list(map(int, input().split()))
    print("Kasus #", i,": ", sep='', end='')
    if nums[0] + nums[1] == nums[2]:
        print("+")
    elif nums[0] - nums[1] == nums[2]:
        print("-")
    elif nums[0] * nums[1] == nums[2]:
        print("*")
    elif nums[0] / nums[1] == nums[2]:
        print("/")
    else:
        print("TIDAK ADA SOLUSI")
    