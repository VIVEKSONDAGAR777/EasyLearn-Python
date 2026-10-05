# concept of tuples
# tuple is a collection of items which is ordered and immutable
# it is written in round brackets ()
# tuple can store different types of values in a single variable

places = ("bhavnagar", "baroda", "rajkot", "ahemdabad", "surat")  # size = 5
#          0          1        2         3         4
# always use () to create tuple
box = (100, True, 'car', 3.14)

print(places)

# display 0th element of tuple
print(places[0])

# display elements from 1st to 3rd position
print(places[1:4])

# display elements from 2nd position to end
print(places[2:])

print(box)
print('good by')