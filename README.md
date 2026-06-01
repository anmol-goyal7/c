# C Basics Learning Archive

This was my C basics learning repository. I used it to learn the fundamentals of C, starting with simple programs for input/output, variables, arithmetic, calculators, and adding or comparing numbers, then moving through functions, arrays, pointers, recursion, strings through character arrays, structs, memory basics with `malloc` and `free`, matrices, and small terminal programs.

I am moving on to DSA now, so this repository is mostly a fundamentals archive. It is no longer my main active learning repo.

## Repository Structure

```text
.
├── 01-basics/                 # Calculator and attendance margin calculator
├── 02-pointers/               # Pointer updates, swaps, pointer arithmetic, double pointers
├── 03-recursion/              # Digit sum/count, factorial, sum, Fibonacci, powers, series terms
├── 04-arrays/                 # Array reversal with dynamic allocation
├── 05-structs/                # Structs, arrays, functions, marks/student examples
├── 06-matrices/               # Matrix multiplication and OpenMP benchmark experiments
├── 07-projects/               # Tic-tac-toe board and triangle pattern practice
└── Matrix-OpenMP-Benchmark/   # Separate matrix OpenMP benchmark project
```

## Topics Covered

| Directory | What is in it |
|-----------|---------------|
| `01-basics` | Basic input/output, arithmetic, `switch`, conditionals, calculator logic, and an attendance margin calculator. |
| `02-pointers` | Passing values by pointer, swapping values, pointer arithmetic over arrays, double pointers, and pointer-based updates. |
| `03-recursion` | Recursive digit sum, digit counting, factorial, sum up to `n`, Fibonacci, exponent calculation, and sequence terms. |
| `04-arrays` | Reading an array, allocating memory with `malloc`, reversing the array in place, and printing with pointer notation. |
| `05-structs` | Functions over arrays, dynamic memory, `struct Student`, averages, and finding the highest marks. |
| `06-matrices` | 2x2 and 3x3 matrix multiplication, larger 1000x1000 matrix experiments, timing, and OpenMP parallel loops. |
| `07-projects` | Small terminal practice programs, including a tic-tac-toe board layout and triangle pattern practice. |
| `Matrix-OpenMP-Benchmark` | A separate OpenMP matrix benchmark project with its own README. |

## Building and Running

Compile an individual program with `gcc`:

```bash
gcc 01-basics/calculator.c -o calculator
./calculator
```

Some matrix files use OpenMP, so compile those with `-fopenmp`:

```bash
gcc -fopenmp 06-matrices/matrix.c -o matrix
./matrix
```

This repo is kept as a record of my C fundamentals practice before moving into DSA.
