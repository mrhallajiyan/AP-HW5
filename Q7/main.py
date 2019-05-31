INPUT = [int(x) for x in input("Enter Your Numbers Please:").split()]
print(*sorted(set([item for item in INPUT if(item % 6 == 0 and (INPUT.index(item) + 1) % 6 == 0)])))
