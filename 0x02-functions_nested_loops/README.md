# (214) 0x02. C - Functions, nested loops
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Julien Barbier

### Description
Introduction to function declarations and definitions, scope of variables, and nested loops.

### Requirements
* You are not allowed to use global variables
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden

### Provided file(s)
* [`_putchar.c`](./_putchar.c) originally [here](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`5-main.c`](./tests/5-main.c) [`6-main.c`](./tests/6-main.c) [`7-main.c`](./tests/7-main.c) [`8-main.c`](./tests/8-main.c) [`9-main.c`](./tests/9-main.c) [`10-main.c`](./tests/10-main.c) [`11-main.c`](./tests/11-main.c) [`100-main.c`](./tests/100-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. _putchar
Write a program that prints `_putchar`, followed by a new line.

* The program should return 0

File(s): [`0-putchar.c`](./0-putchar.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar`

### :white_check_mark: 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a function that prints the alphabet, in lowercase, followed by a new line.

* Prototype: `void print_alphabet(void);`
* You can only use `_putchar` twice in your code

File(s): [`1-alphabet.c`](./1-alphabet.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet`

### :white_check_mark: 2. 10 x alphabet
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

* Prototype: `void print_alphabet_x10(void);`
* You can only use `_putchar` twice in your code

File(s): [`2-print_alphabet_x10.c`](./2-print_alphabet_x10.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10`

### :white_check_mark: 3. islower
Write a function that checks for lowercase character.

* Prototype: `int _islower(int c);`
* Returns 1 if c is lowercase
* Returns 0 otherwise

File(s): [`3-islower.c`](./3-islower.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower`

### :white_check_mark: 4. isalpha
Write a function that checks for alphabetic character.

* Prototype: `int _isalpha(int c);`
* Returns 1 if c is a letter, lowercase or uppercase
* Returns 0 otherwise

File(s): [`4-isalpha.c`](./4-isalpha.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha`

### :white_check_mark: 5. Sign
Write a function that prints the sign of a number.

* Prototype: `int print_sign(int n);`
* Returns 1 and prints `+` if n is greater than zero
* Returns 0 and prints `0` if n is zero
* Returns -1 and prints `-` if n is less than zero

File(s): [`5-sign.c`](./5-sign.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign`

### :white_check_mark: 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
Write a function that computes the absolute value of an integer.

    Prototype: `int _abs(int);`

File(s): [`6-abs.c`](./6-abs.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs`

### :white_check_mark: 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
Write a function that prints the last digit of a number.

* Prototype: `int print_last_digit(int);`
* Returns the value of the last digit

File(s): [`7-print_last_digit.c`](./7-print_last_digit.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit`

### :white_check_mark: 8. I'm federal agent Jack Bauer, and today is the longest day of my life
Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

* Prototype: `void jack_bauer(void);`

File(s): [`8-24_hours.c`](./8-24_hours.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24`

### :white_check_mark: 9. Learn your times table
Write a function that prints the 9 times table, starting with 0.

* Prototype: `void times_table(void);`

File(s): [`9-times_table.c`](./9-times_table.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table`

### :white_check_mark: 10. a + b
Write a function that adds two integers and returns the result.

* Prototype: `int add(int, int);`

File(s): [`10-add.c`](./10-add.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add`

### :white_check_mark: 11. 98 Battery Street, the OG
Write a function that prints all natural numbers from n to 98, followed by a new line.

* Prototype: `void print_to_98(int n);`
* Numbers must be separated by a comma, followed by a space
* Numbers should be printed in order
* The first printed number should be the number passed to your function
* The last printed number should be 98
* You are allowed to use the standard library
---

## Student
* **Alejandro Reginensi** - [alereginensi](github.com/alereginensi)
