# Sum Of Squares

## Algorithm

Algorithm: SumOfSquares

    <!-- initialize a variable to store sum of squares -->
    sum_of_squares = 0

    <!-- collect numbers -->
    Read numbers

    <!-- iterate through numbers -->
    For each number in inputSet:
        <!-- Calculate square and add to sum_of_squares -->
        square = number * number
        sum_of_squares = sum_of_squares + square

    <!-- display sum -->
    print sum

End Algorithm

## Flowchart

```mermaid
graph TD
  A[Initialize sum_of_squares = 0] --Input: Array or list of numbers--> B
  B[Initialize numbers = input_numbers] --> C
  C{For each number in numbers} --Yes--> D
  D[Calculate square = number * number] --> E
  E[Add square to sum_of_squares] --> F
  F{Next number} --Yes--> D
  C --No--> G[Output: Sum of squares]
```
