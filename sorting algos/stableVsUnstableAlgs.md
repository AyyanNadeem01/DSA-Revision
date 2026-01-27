# Stable vs Unstable Algorithms

Understanding algorithm stability is very important in sorting. Let's break it down.

---

## 1️⃣ Stable Algorithm

- A sorting algorithm is **stable** if it **keeps the relative order of equal elements the same** as in the original array.
- If two elements are equal, the one that appears first in the input will **still appear first** in the output.

**Example:**

Input array of objects:

```
[ (4, 'A'), (3, 'B'), (4, 'C'), (1, 'D') ]
```

After stable sort (by value):

```
[ (1, 'D'), (3, 'B'), (4, 'A'), (4, 'C') ]
```

✅ Notice `(4, 'A')` comes before `(4, 'C')` — relative order is preserved.

**Examples of stable sorting algorithms:**

- Insertion Sort
- Bubble Sort
- Merge Sort

---

## 2️⃣ Unstable Algorithm

- A sorting algorithm is **unstable** if it **may change the relative order of equal elements**.
- Two elements with the same value could swap positions after sorting.

**Example:**

Input:

```
[ (4, 'A'), (3, 'B'), (4, 'C'), (1, 'D') ]
```

After unstable sort:

```
[ (1, 'D'), (3, 'B'), (4, 'C'), (4, 'A') ]
```

❌ Notice `(4, 'C')` now comes before `(4, 'A')` — relative order is not preserved.

**Examples of unstable sorting algorithms:**

- Selection Sort
- Quick Sort (classic version)
- Heap Sort

---

## Key Takeaways

- Stability matters when your data has **multiple keys**.
- Use **stable algorithms** if you want relative order preserved.
- If order among equal elements doesn't matter, **unstable algorithms** are fine.

**Quick trick:**

- **Selection Sort is unstable** because it swaps elements arbitrarily.
- **Insertion Sort is stable** because it only moves elements to the right, keeping order of equals.

---

💡 You can create small examples to see how stability affects sorting, especially when sorting objects with mul
