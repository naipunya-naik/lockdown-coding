start = int(input("Enter the start of the range: "))
end = int(input("Enter the end of the range: "))
for num in range(start, end):
    if num < 0:
        print(num)
