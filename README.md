# 🧮 Minimum Spanning Tree Project  
### Using **Prim’s Algorithm** & **Kruskal’s Algorithm** in C++

---

## 📌 **About the Project**

This project implements two fundamental Minimum Spanning Tree (MST) algorithms — **Prim’s** and **Kruskal’s** — using simple and clean C++ code.  
The goal is to demonstrate how MSTs are constructed from a weighted undirected graph using different approaches.

The implementation focuses on **clarity, correctness, and academic simplicity**, avoiding advanced features like classes, structures, or STL.  
All operations are performed using basic arrays to help students clearly understand how the algorithms work internally.

This project was built as part of the **Design and Analysis of Algorithms (DAA)** course assignment.

---

## 🚀 **Features**

- Implements **Prim’s Algorithm** using adjacency matrix  
- Implements **Kruskal’s Algorithm** using simple arrays  
- Accepts user-defined input for:  
  - Number of vertices  
  - Adjacency matrix (for Prim)  
  - Edge list (for Kruskal)  
- Displays each selected MST edge in a neat and readable format  
- Computes and prints **total minimum cost** of the MST  
- Fully ASCII output (no Unicode symbols)  
- Works on **any standard C++ compiler** including g++, VS Code, CodeBlocks, etc.

---

## 🧠 **Algorithms Used**

### **1️⃣ Prim’s Algorithm**
- Starts with a single vertex  
- Repeatedly selects the smallest edge connecting the built MST to a new vertex  
- Best suited for **dense graphs**

### **2️⃣ Kruskal’s Algorithm**
- Sorts all edges by weight  
- Uses **Union-Find (Disjoint Set Union)** to avoid cycles  
- Best suited for **sparse graphs**

---

## 📷 **Program Output Screenshots**
**Prims algorithm output**

<img width="400" height="400" alt="image" src="https://github.com/user-attachments/assets/a897b888-ee1c-4ba3-8457-f588c835ba2a" />

**Krushkals algorithm output**

<img width="400" height="400" alt="image" src="https://github.com/user-attachments/assets/51d769e3-bcb8-4df0-92ad-19ca8233ee0b" />

