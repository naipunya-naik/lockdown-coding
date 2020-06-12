# Python program to print all 
# prime number in an interval from start to end
p="To Find Prime Numbers from Start to End."
print(p.title())
prime =[]
mini_= int(input("start: "))
if mini_ <= 1:
    mini_= 2
maxi_ = int(input("end: "))
if mini_ > maxi_:
    raise Exception('Minimum cannot be greater Maximum.')
flag = False
for val in range(mini_,maxi_+1): 
    flag=0
    for j in range(2, val):
        if val % j == 0:
            flag = 1
            break
    if flag == 0:
        prime.append(val)
print(prime)
