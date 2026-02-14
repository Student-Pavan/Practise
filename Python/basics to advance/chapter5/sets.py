set_ = {0,1,2,3,4,5,6}
set1_ = {7,8,8,9,10,11,12}

e=set()  #empty set ==> s{} creats dictionary


# print(type(set_))

# print(set_.add(34))

# print(set_.remove(1))

# print(set_.pop())

# print(set_.union(set1_))


set_ = {0, 1, 2, 3, 4, 5, 6}
set1_ = {7, 8, 9, 10, 11, 12}

# Adding elements
set_.add(7)
print("After add(7):", set_)

# Removing elements
set_.remove(3)  # Removes 3 (throws error if not found)
print("After remove(3):", set_)

set_.discard(10)  # Removes 10 if present, otherwise does nothing
print("After discard(10):", set_)

popped_item = set_.pop()  # Removes and returns a random element
print("After pop():", set_, "Popped:", popped_item)

set_.clear()  # Clears all elements
print("After clear():", set_)

# Set operations
set_ = {0, 1, 2, 3, 4, 5, 6}
set1_ = {7, 8, 9, 10, 11, 12}

print("Union:", set_.union(set1_))
print("Intersection:", set_.intersection(set1_))
print("Difference:", set_.difference(set1_))
print("Symmetric Difference:", set_.symmetric_difference(set1_))

# Updating sets
set_.update(set1_)
print("After update():", set_)

set_.intersection_update(set1_)
print("After intersection_update():", set_)

set_.difference_update(set1_)
print("After difference_update():", set_)

set_.symmetric_difference_update(set1_)
print("After symmetric_difference_update():", set_)

# Subset, Superset, and Disjoint
setA = {1, 2, 3}
setB = {1, 2, 3, 4, 5}

print("setA is subset of setB:", setA.issubset(setB))
print("setB is superset of setA:", setB.issuperset(setA))
print("setA and set1_ are disjoint:", setA.isdisjoint(set1_))

# Copying a set
set_copy = set_.copy()
print("Copied set:", set_copy)
