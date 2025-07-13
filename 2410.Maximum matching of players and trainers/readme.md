## Approach-
Two Pointers approach with sorting
## Time Complexity-
![Time Complexity](./complexity.png)

## Points to remember-
- First sort both the arrays(trainer and player) using vector.
- initialise a count with zero
- a while loop with condition that while iterating it doesnot excedes the array. (i<players.size() && j<trainers.size())
- Now you can use different conditions like-
  1. players[i]>trainers[j] so just move j++;(As the trainer will be useless now becuase a trainers value should be always greater or equal to player's)
  2. else(i++, j++,count++)