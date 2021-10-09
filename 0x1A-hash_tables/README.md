# 0x1A. C - Hash tables

## General

* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them:
> Hash Table is a data structure which stores data in an 
> associative manner. In hash table, the data is stored in
> an array format where each data value has its own unique
> index value. Access of data becomes very fast, if we know
> the index of the desired data.

* What is a collision and what are the main ways of dealing with collisions in the context of a hash table.
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

# Important

## Python Dictionaries
Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type d = {'a': 1, 'b': 2}, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about how dictionaries are implemented in Python 2.7

Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. Read more here.