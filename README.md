# C Programming Practice

A collection of C programs covering core concepts — pointers, recursion, arrays, structs, matrices, and more.

## Repository Structure

```
.
├── 01-basics/              # Calculator, attendance margin calculator
├── 02-pointers/            # Pointer arithmetic, swapping, double pointers
├── 03-recursion/           # Factorial, Fibonacci, digit sum, power
├── 04-arrays/              # Array reversal
├── 05-structs/             # Structs and functions with student data
├── 06-matrices/            # Matrix multiplication (including OpenMP benchmark)
├── 07-projects/            # Tic-tac-toe, triangle patterns
└── Matrix-OpenMP-Benchmark/# OpenMP matrix multiplication performance benchmark
```

## Topics Covered

| Directory | Topics |
|-----------|--------|
| `01-basics` | Arithmetic operations, user input, control flow |
| `02-pointers` | Dereferencing, pointer arithmetic, swapping, double pointers |
| `03-recursion` | Factorial, Fibonacci, digit sum, digit count, power, series |
| `04-arrays` | In-place reversal using two-pointer technique |
| `05-structs` | Struct arrays, computing averages, function pointers |
| `06-matrices` | Manual and OpenMP-parallelized matrix multiplication |
| `07-projects` | Small CLI programs and games |

## Building and Running

Compile any program with `gcc`:

```bash
gcc 01-basics/calculator.c -o calculator
./calculator
```

For OpenMP programs:

```bash
gcc -fopenmp 06-matrices/matrix.c -o matrix
./matrix
```
