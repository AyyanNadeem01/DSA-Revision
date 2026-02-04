# Sorting Algorithms Notes

## 1️⃣ Adaptable Algorithm

**Definition:** An algorithm whose running time improves when the input is already or partially sorted.

**Key Idea:** If the input is “almost sorted”, an adaptable algorithm does **less work**.

**Examples:**

- Insertion Sort → ✅ Adaptable (Best case: O(n))
- Bubble Sort (optimized) → ✅ Adaptable (Stops early if no swaps happen)
- Selection Sort → ❌ Not adaptable (Always O(n²))

**Exam-friendly:**

> Adaptable algorithm: An algorithm whose running time improves when the input is already or partially sorted.

---

## 2️⃣ Stable Algorithm

**Definition:** A sorting algorithm that maintains the relative order of elements with equal keys.

**Key Idea:** Equal values stay in the **same order** as they were originally.

**Example:**
Input (value + label):

```
(5, A)  (3, B)  (5, C)
```

After sorting by value:

- Stable sort result:

```
(3, B)  (5, A)  (5, C)
```

- Unstable sort result:

```
(3, B)  (5, C)  (5, A)
```

**Stable vs Unstable:**

- Bubble Sort → ✅ Stable
- Insertion Sort → ✅ Stable
- Selection Sort → ❌ Not stable

**Exam-friendly:**

> Stable algorithm: A sorting algorithm that maintains the relative order of elements with equal keys.

---

## 🔥 Quick Summary Table

| Property       | Meaning                                       |
| -------------- | --------------------------------------------- |
| Adaptable      | Faster when input is already/partially sorted |
| Stable         | Keeps the order of equal elements             |
| Insertion Sort | Adaptable ✅ Stable ✅                        |
| Bubble Sort    | Adaptable ✅ Stable ✅                        |
| Selection Sort | Adaptable ❌ S                                |
