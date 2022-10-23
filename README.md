Push_Swap
![Screenshot 2022-04-23 at 17-36-49 Intra Projects push_swap](https://user-images.githubusercontent.com/94300378/164946838-a9c06b18-fe98-413b-976e-f58c9c31285c.png)
<img width="655" alt="Ekran Resmi 2022-05-08 ÖS 3 18 09" src="https://user-images.githubusercontent.com/94300378/167295780-a877288e-5cdf-48a5-bfe5-500d995ebdf1.png">


You start with two empty stacks: a and b. You are given a random list of integers via command line arguments.


Only these moves are allowed:

sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
ss : sa and sb at the same time.
pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
rr : ra and rb at the same time.
rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
rrr : rra and rrb at the same time.

At the end, stack b must empty empty and all integers must be in stack a, sorted in ascending order.
