# (222) 0x0B. C - malloc, free
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Julien Barbier

### Description
Introduction to dynamic vs automatic memory allocation and manual memory management.

### Requirements
* The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden

### Provided file(s)
* [`_putchar.c`](./_putchar.c) originally [here](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`100-main.c`](./tests/100-main.c) [`101-main.c`](./tests/101-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Float like a butterfly, sting like a bee
Write a function that creates an array of chars, and initializes it with a specific char.

* Prototype: `char *create_array(unsigned int size, char c);`
* Returns `NULL` if `size == 0`
* Returns a pointer to the array, or `NULL` if it fails

File(s): [`0-create_array.c`](./0-create_array.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a`

### :white_check_mark: 1. The woman who has no imagination has no wings
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

* Prototype: `char *_strdup(char *str);`
* The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
* Returns `NULL` if `str == NULL`
* On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

File(s): [`1-strdup.c`](./1-strdup.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s`

### :white_check_mark: 2. He who is not courageous enough to take risks will accomplish nothing in life
Write a function that concatenates two strings.

* Prototype: `char *str_concat(char *s1, char *s2);`
* The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
* if `NULL` is passed, treat it as an empty string
* The function should return `NULL` on failure

File(s): [`2-str_concat.c`](./2-str_concat.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o 2-str_concat`

### :white_check_mark: 3. If you even dream of beating me you'd better wake up and apologize
Write a function that returns a pointer to a 2 dimensional array of integers.

* Prototype: `int **alloc_grid(int width, int height);`
* Each element of the grid should be initialized to 0
* The function should return `NULL` on failure
* If `width` or `height` is 0 or negative, return `NULL`

---

## Student
* **Alejandro Reginensi** - [alereginensi](github.com/alereginensi)
