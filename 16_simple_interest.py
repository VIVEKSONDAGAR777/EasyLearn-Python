# program to calculate simple interest
# take input from user

principal = int(input("enter principal amount:"))
# interest rate
rate = 6.25

# take time from user
time = int(input("enter time in years:"))

# calculate simple interest
interest = (principal * rate * time) / 100

# display the result
print("interest =", interest)