# Challenge 1:
	- Given an array of numbers, return whether any two sums to K.

	- For example, given [10, 15, 3, 7] and K of 17, return true since 10 + 7 is 17.

	
# Challenge 2:
	- Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i. Solve it without using division and in O(n) time.

	- For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].
	

# Challenge 3:
	- Given the root to a binary tree, implement serialize(root), which serializes the tree into a string, and deserialize(s), which deserializes the string back into the tree.

	
# Challenge 4:
	- Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

	- For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

	- You can modify the input array in-place.

	
# Challenge 5:
	- cons(a, b) constructs a pair, and car(pair) and cdr(pair) returns the first and last element of that pair. For example, car(cons(3, 4)) returns 3, and cdr(cons(3, 4)) returns 4.

	- Given this implementation of cons:

	- def cons(a, b):
		return lambda f : f(a, b)

	- Implement car and cdr.


# Challenge 6:
	- An XOR linked list is a more memory efficient doubly linked list. Instead of each node holding next and prev fields, it holds a field named both, which is a XOR of the next node and the previous node. Implement a XOR linked list; it has an add(element) which adds the element to the end, and a get(index) which returns the node at index.

	- If using a language that has no pointers (such as Python), assume you have access to get_pointer and dereference_pointer functions that converts between nodes and memory addresses.

	
# Challenge 7:
	- Given the mapping a = 1, b = 2, ... z = 26, and an encoded message, count the number of ways it can be decoded.

	- For example, the message '111' would give 3, since it could be decoded as 'aaa, 'ka', and 'ak'.

	
# Challenge 8:
	- A unival tree (which stands for "universal value") is a tree where all nodes have the same value.

	- Given the root to a binary tree, count the number of unival subtrees.
	

# Challenge 9:
	- Given a list of integers, write a function that returns the largest sum of non-adjacent numbers. Numbers can be 0 or negative.

	- For example, [2, 4, 6, 8] should return 12, since we pick 4 and 8. [5, 1, 1, 5] should return 10, since we pick 5 and 5.
	

# Challenge 10:
	- Implement a job scheduler which takes in a function f and an integer n, and calls f after n milliseconds.
