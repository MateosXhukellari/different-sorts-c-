# 🚀 The "Big Three" C++ Sorting Algorithms

A collection of the three most fundamental comparison-based sorting algorithms.  
This repository showcases clean and simple **C++ implementations** of:

- Selection Sort 🔍  
- Bubble Sort 🫧  
- Insertion Sort 🃏  

Perfect for beginners learning **Data Structures and Algorithms (DSA)**.

---

## 🛠️ Algorithms Included

### 1. Selection Sort 🔍
Selection Sort divides the array into:
- A **sorted part** (left side)
- An **unsorted part** (right side)

It repeatedly finds the smallest element in the unsorted portion and swaps it with the first unsorted element.

**✅ Best for:**  
Systems where memory writes are costly (minimizes swaps).

---

### 2. Bubble Sort 🫧
Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

This implementation includes an **early-exit optimization**, meaning:
- If no swaps happen in a pass → the array is already sorted.

**✅ Best for:**  
Detecting already sorted or nearly sorted lists.

---

### 3. Insertion Sort 🃏
Insertion Sort builds the sorted array **one element at a time**, inserting each element into its correct position.

**✅ Best for:**  
- Small datasets  
- Nearly sorted arrays  
- Online sorting (data comes in real-time)

---

## 📊 Performance Comparison

| Algorithm        | Best Case  | Average Case | Worst Case | Space Complexity | Stable |
|------------------|-----------|--------------|------------|------------------|--------|
| Selection Sort   | O(n²)     | O(n²)        | O(n²)      | O(1)             | ❌ No  |
| Bubble Sort      | O(n)      | O(n²)        | O(n²)      | O(1)             | ✅ Yes |
| Insertion Sort   | O(n)      | O(n²)        | O(n²)      | O(1)             | ✅ Yes |

---

## 💻 How to Run

### 1. Clone the repository
```bash
git clone https://github.com/your-username/sorting-algorithms-cpp.git
cd sorting-algorithms-cpp

### 2. Compile (example: Selection Sort)
g++ selection_sort.cpp -o selection_sort

### 3. Run the program
./selection_sort

🧠 What I Learned
-Using nested loops for data manipulation
-Optimizing algorithms using boolean flags (Bubble Sort)
-Understanding time vs space complexity trade-offs
-Writing clean and readable C++ implementations

