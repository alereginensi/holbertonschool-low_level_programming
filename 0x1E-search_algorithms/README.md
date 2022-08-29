# (295) 0x1E. C - Search Algorithms
Foundations > Low-level programming & Algorithm > Data structures and Algorithms

---

### Project authors
Wilfried Hennuyer

### Description
Introduction to commonly used search algorithms.

### Requirements
* Only `printf` from the standard library is allowed
* Files containing big O notations will use this format:
  * `O(1)`
  * `O(n)`
  * `O(n!)`
  * n*m -> `O(nm)`
  * n squared -> `O(n^2)`
  * sqrt n -> `O(sqrt(n))`
  * log(n) -> `O(log(n))`
  * n * log(n) -> `O(nlog(n))`

### Provided file(s)
* definition of `listint_t` and `skiplist_t` for [`search_algos.h`](./search_algos.h)
* [create_list.c](./create_list.c) [free_list.c](./free_list.c) [print_list.c](./print_list.c)
* [create_skiplist.c](./create_skiplist.c) [free_skiplist.c](./free_skiplist.c) [print_skiplist.c](./print_skiplist.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c)
* [`100-main.c`](./tests/100-main.c) [`101-main.c`](./tests/101-main.c) [`102-main.c`](./tests/102-main.c) [`103-main.c`](./tests/103-main.c) [`104-main.c`](./tests/104-main.c) [`105-main.c`](./tests/105-main.c) [`106-main.c`](./tests/106-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Linear search
Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)

* Prototype: `int linear_search(int *array, size_t size, int value);`
* Where `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in `array`
* And `value` is the value to search for
* Your function must return the first index where `value` is located
* If `value` is not present in `array` or if `array` is `NULL`, your function must return -1
* Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

File(s): [`0-linear.c`](./0-linear.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear`

### :white_check_mark: 1. Binary search
Write a function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)

* Prototype: `int binary_search(int *array, size_t size, int value);`
* Where `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in array
* And `value` is the value to search for
* Your function must return the index where `value` is located
* You can assume that `array` will be sorted in ascending order
* You can assume that `value` won’t appear more than once in `array`
* If `value` is not present in `array` or if `array` is `NULL`, your function must return -1
* You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray)

File(s): [`1-binary.c`](./1-binary.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary`

### :white_check_mark: 2. Big O #0
What is the *time complexity* (worst case) of a linear search in an array of size n?

File(s): [`2-O`](./2-O)

### :white_check_mark: 3. Big O #1
What is the *space complexity* (worst case) of an iterative linear search algorithm in an array of size n?

File(s): [`3-O`](./3-O)

### :white_check_mark: 4. Big O #2
What is the *time complexity* (worst case) of a binary search in an array of size n?

File(s): [`4-O`](./4-O)

### :white_check_mark: 5. Big O #3
What is the *space complexity* (worst case) of a binary search in an array of size n?

File(s): [`5-O`](./5-O)

### :white_check_mark: 6. Big O #4
What is the space complexity of this function / algorithm?
```C
int **allocate_map(int n, int m)
{
    int **map;

    map = malloc(sizeof(int *) * n);
    for (size_t i = 0; i < n; i++)
    {
        map[i] = malloc(sizeof(int) * m);
    }
    return (map);
}
```

File(s): [`6-O`](./6-O)

---

## Student
* **Alejandro Reginensi** - [alereginensi](github.com/alereginensi)
