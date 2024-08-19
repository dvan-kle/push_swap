# Push_swap - Sorting Algorithm Visualization

Welcome to **Push_swap**! This project involves creating a program that generates a sequence of operations to sort a stack of integers, using a limited set of operations. The project is designed to test and improve your algorithmic thinking and understanding of sorting techniques in the context of stack manipulation.

## Key Features

- **Stack Operations**: Implements a variety of stack operations (`sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`) to manipulate and sort data.
- **Sorting Algorithm**: Develops an efficient sorting algorithm to sort a stack with the fewest possible operations.
- **Optimized for Performance**: Focuses on minimizing both the total number of operations and the time complexity of the sorting process.

## Installation

To get started with **Push_swap**, follow these steps:

1. Clone the repository:
    ```bash
    git clone https://github.com/dvan-kle/push_swap.git
    ```

2. Navigate to the project directory:
    ```bash
    cd push_swap
    ```

3. Compile the project using the provided Makefile:
    ```bash
    make
    ```

## Usage

### Push_swap Program

The `push_swap` program generates the sequence of operations needed to sort a list of integers.

```bash
./push_swap 3 2 5 1 4
```

## Stack Operations

- `sa`: Swap the first two elements of stack A.
- `sb`: Swap the first two elements of stack B.
- `ss`: Swap the first two elements of both stack A and B.
- `pa`: Push the top element of stack B to stack A.
- `pb`: Push the top element of stack A to stack B.
- `ra`: Rotate stack A up by one.
- `rb`: Rotate stack B up by one.
- `rr`: Rotate both stacks A and B up by one.
- `rra`: Rotate stack A down by one.
- `rrb`: Rotate stack B down by one.
- `rrr`: Rotate both stacks A and B down by one.

## Project Goals

- Develop an efficient and optimized algorithm to sort the stack using the fewest possible operations.
- Enhance problem-solving and algorithmic thinking, particularly in the context of stack manipulation.
