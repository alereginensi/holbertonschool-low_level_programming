# (232) 0x14. C - Bit manipulation
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project authors
Julien Barbier

### Description
Introduction to operations that alter individiual bit values.

### Requirements
* The only C standard library functions allowed are `malloc`, `free`, and `exit`.

### Provided file(s)
* [`_putchar.c`](./_putchar.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`5-main.c`](./tests/5-main.c) [`100-main.c`](./tests/100-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. 0
Write a function that converts a binary number to an unsigned int.

* Prototype: `unsigned int binary_to_uint(const char *b);`
* where `b` is pointing to a string of `0` and `1` chars
* Return: the converted number, or 0 if
    * there is one or more chars in the string `b` that is not 0 or 1
    * `b` is `NULL`

File(s): [`0-binary_to_uint.c`](./0-binary_to_uint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a`

### :white_check_mark: 1. 1
Write a function that prints the binary representation of a number.

* Prototype: `void print_binary(unsigned long int n);`
* You are not allowed to use arrays
* You are not allowed to use `malloc`
* You are not allowed to use the `%` or `/` operators

File(s): [`1-print_binary.c`](./1-print_binary.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b`

### :white_check_mark: 2. 10
Write a function that returns the value of a bit at a given index.

* Prototype: `int get_bit(unsigned long int n, unsigned int index);`
* where `index` is the index, starting from 0 of the bit you want to get
* Returns: the value of the bit at index `index` or -1 if an error occured

File(s): [`2-get_bit.c`](./2-get_bit.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c`

### :white_check_mark: 3. 11
Write a function that sets the value of a bit to 1 at a given index.

* Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
* where `index` is the index, starting from 0 of the bit you want to set
* Returns: 1 if it worked, or -1 if an error occurred

---

## Student
* **Alejandro Reginensi** - [alereginensi](github.com/alereginensi)
