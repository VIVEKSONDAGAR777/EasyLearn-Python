
# normal variable can store at a time only single value

# create list
names = ["kahan", "darshil", "raees", "ayan", "gautam", "dharmik", "dhruvil"]
dishes = ['pulav', 'pavbhaji', 'dosa']

print("Complete names list:")
print(names)
print("Name at index 0:", names[0])  # kahan
print("Name at index 1:", names[1])  # darshil
print("Name at index 4:", names[4])  # gautam

print("Names from index 4 onward:")
print(names[4:])
print("First two names (index 0 and 1):")
print(names[0:2])

# print(names[8])  # error because list has no 8th position
print("Names at indexes 2, 3, and 4:")
print(names[2:5])

# it will print name list 5 times
print("Names repeated 5 times:")
print(names * 5)
print("Names combined with dishes:")
print(names + dishes)