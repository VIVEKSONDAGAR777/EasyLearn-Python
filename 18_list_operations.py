# example of list operations
kit = ['books', 200, None, True, False, 3.14]
pockets = []  # empty list

print(kit)
print(pockets)

# we can add new items into list
pockets.append(100)  # add new item at the end of the list
pockets.append(200)  # add new item at the end of the list
pockets.append(500)  # add new item at the end of the list
print(pockets)

# add item at beginning
pockets.insert(0, 15)
pockets.insert(0, 45)
pockets.insert(1, 20)
print(pockets)

# delete 2nd item (remove by position)
pockets.pop(2)
print(pockets)

# remove by value
# pockets.remove(150)
pockets.remove(45)
print(pockets)

pockets[0] = 11  # update or replace value at 0th position
print(pockets)

# remove the entire list
# after delete, the variable no longer exists
# del pockets
# print(pockets)

print("good by")