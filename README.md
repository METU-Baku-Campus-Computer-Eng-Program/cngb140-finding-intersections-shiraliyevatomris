[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/FGQ8DPIJ)
# Unique Set Intersection

Welcome to your first C assignment/quiz! Today we are working with **Sets**. In mathematics, a set is a collection of **unique** elements. 

### Your Mission
Write a program that:
1. Reads two lists of numbers from the terminal.
2. Finds the **intersection** (numbers that appear in both lists).
3. Ensures the output has **no duplicate numbers**.

### Input Format
- First, the number of elements in Set A, followed by the elements themselves.
- Second, the number of elements in Set B, followed by the elements themselves.

**Example:**
```text
5 1 2 2 3 3
4 2 2 4 5

```

*In this case, Set A is `{1, 2, 3}` and Set B is `{2, 4, 5}`.*

### Expected Output

Print the intersection elements in increasing order separated by a space.

```text
2 

```

### Rules 

1. **No "Fluff" Printfs:** Do not use `printf("Enter size: ")`. The autograder only wants to see the numbers!
2. **Unique Only:** Even if the number `2` appears three times in both sets, it should only show up **once** in your output.
3. **Array Limits:** You can assume neither set will have more than 100 numbers.

### Local Testing

Compile your code:
`gcc student_main.c -o solution`

Run it:
`./solution`

### Submission

Just **push** your code to GitHub!

* Go to the **Actions** tab to see if your code passed the autograder.
* Green check (✅) = Passed.
* Red X (❌) = Failed.
