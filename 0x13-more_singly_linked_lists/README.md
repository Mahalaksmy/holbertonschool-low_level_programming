# 0x13. C - More singly linked lists
# General

How to use linked lists.
Start to look for the right source of information without too much help

# Requirements
# General
1- Allowed editors: vi, vim, emacs
2-All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3-All your files should end with a new line
4-A README.md file, at the root of the folder of the project is mandatory
5-Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6-You are not allowed to use global variables
7-No more than 5 functions per file
8-The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
9-You are allowed to use _putchar
10-You don’t have to push _putchar.c, we will use our file. 
11 -Don’t forget to push your header file
12 -All your header files should be include guarded

# More Info

Please use this data structure for this project:

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;