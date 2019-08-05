# Fillit

### Purpose
Fillit is a project which involves discovering and getting acquainted with a recurrent problem in programming: the search of an optimal solution among a very large number of possibilities in a reasonable amount of time. In this project, Tetriminos (Tetris pieces) are given as input and the goal is to determine the smallest square that can fit all of them.

In this project, I was introduced to recursive backtracking and its potential as well as working at the bit level.

My partner for this project was [Joseph Kaplin](https://github.com/jkaplin)

### Usage
There is a *Makefile* included with this repository, so just navigate to the repository's directory and type:

`make`

This will generate a `fillit` executable, which takes a file as an argument:

`./fillit <file1.txt>`

Inside of the file, Tetriminos are represented as text:

```
##..
#...
#...
....

....
##..
#...
#...
```

And the program output uses letters to indicate which piece is which (A is the first piece in the file, B is the second etc...)
```
DDAA
CDDA
CCCA
BBBB
```

#### Wait, what's so special about your Fillit?
For our project, Joseph and I thought out of the box and did all of our comparisons at the bit level.  Our grid was represented as 1s and 0s, and if a piece could fit on the board, we remembered its location.

Also, we noticed a big weakness in our program, where if it was provided a file that had all  identical Teriminos, it was extremely slow.  We used our newly acquired recursive backtracking skills to create a greedy function that could detect these weak edge cases, and make them our fastest test cases, rather than our slowest.

\
\
Want to know more about this project?

Feel free to read the included PDF instructions or reach out and ask a question!


![Grade](https://user-images.githubusercontent.com/29003743/62431622-c4f61500-b6dd-11e9-9690-478b62ccabc9.png)

![Progress](https://user-images.githubusercontent.com/29003743/62431624-c6274200-b6dd-11e9-95f7-a46dfd86433a.png)
