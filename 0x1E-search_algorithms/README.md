# Project: 0x1E. C - Search Algorithms

## Resources

#### Read or watch:

* [Search algorithm](https://intranet.alxswe.com/rltoken/ap2kuRv8qrUMyQ0-MY3EXw)
* [Space complexity (1)](https://intranet.alxswe.com/rltoken/QK9ENdoTyqGs0d4_M3XE3g)
## Learning Objectives

### General

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs
## Tasks

| Task | File |
| ---- | ---- |
| 0. Linear search | [0-linear.c](./0-linear.c) |
| 1. Binary search | [1-binary.c](./1-binary.c) |
| 2. Big O #0 | [2-O](./2-O) |
| 3. Big O #1 | [3-O](./3-O) |
| 4. Big O #2 | [4-O](./4-O) |
| 5. Big O #3 | [5-O](./5-O) |
| 6. Big O #4 | [6-O](./6-O) |
| 7. Jump search | [100-jump.c](./100-jump.c) |
| 8. Big O #5 | [101-O](./101-O) |
| 9. Interpolation search | [102-interpolation.c](./102-interpolation.c) |
| 10. Exponential search | [103-exponential.c](./103-exponential.c) |
| 11. Advanced binary search | [104-advanced_binary.c](./104-advanced_binary.c) |
| 12. Jump search in a singly linked list | [105-jump_list.c](./105-jump_list.c) |
| 13. Linear search in a skip list | [106-linear_skip.c](./106-linear_skip.c) |
| 14. Big O #6 | [107-O](./107-O) |
| 15. Big O #7 | [108-O](./108-O) |
## Search Algorithms

A search algorithm is a method or technique used to find a specific item or element within a collection of data. It is commonly used in computer science and programming to efficiently locate desired information.

### Linear Search

Linear search is a simple search algorithm that sequentially checks each element in a list until a match is found or the end of the list is reached. It is suitable for small-sized or unsorted data sets, but its time complexity is O(n), where n is the number of elements in the list.

### Binary Search

Binary search is a more efficient search algorithm that works on sorted lists. It repeatedly divides the search space in half by comparing the target value with the middle element of the list. If the middle element is equal to the target, the search is successful. Otherwise, the search continues in the left or right half of the list, depending on the comparison result. Binary search has a time complexity of O(log n), making it suitable for large-sized or sorted data sets.

### Other Search Algorithms

- Jump Search: A search algorithm that works on sorted lists by jumping ahead a fixed number of steps and then performing linear search in the remaining subarray.
- Interpolation Search: A search algorithm that works on uniformly distributed sorted lists by estimating the position of the target element based on the values of the first and last elements.
- Exponential Search: A search algorithm that works on sorted lists by exponentially increasing the search range until the target element is found or the end of the list is reached.
- Advanced Binary Search: A modified version of binary search that finds the first occurrence of a target element in a sorted list.
- Jump Search in a Singly Linked List: A search algorithm that works on sorted singly linked lists by jumping ahead a fixed number of steps and then performing linear search in the remaining sub-list.
- Linear Search in a Skip List: A search algorithm that works on sorted skip lists by performing linear search in the levels of the skip list.

These search algorithms have different time complexities and are suitable for different scenarios. Choosing the appropriate search algorithm depends on factors such as the size of the data set, whether it is sorted or unsorted, and the specific requirements of the problem at hand.
