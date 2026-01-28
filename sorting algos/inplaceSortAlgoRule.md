# In-Place Sorting Algorithm

## What is an In-Place Sorting Algorithm?

An **in-place sorting algorithm** is a sorting algorithm that sorts the data **within the same memory space** without using extra memory proportional to the input size.

It uses only a **constant amount of extra space (O(1))**, such as a few temporary variables.

---

## Simple Definition (Exam-Ready)

> **An in-place sorting algorithm sorts the elements using constant extra space and does not require additional memory proportional to the input size.**

---

## Example

```cpp
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
```

Only one extra variable is used, so the algorithm is **in-place**.

---

## In-Place Sorting Algorithms

- Bubble Sort
- Selection Sort
- Insertion Sort
- Quick Sort
- Heap Sort

---

## Not In-Place Sorting Algorithms

- Merge Sort (uses extra arrays)
- Counting Sort (uses frequency array)
- Radix Sort (uses buckets)

---

## Important Note

Using a few temporary variables **does not violate** in-place sorting. The key idea is **no extra memory proportional to the input size**.

---

## One-Line Interview Answer

> **Bubble sort is an in-place sorting algorithm because it sorts the array using constant extra space.**
