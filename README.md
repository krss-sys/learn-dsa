# 🛡️ learn-dsa: Systems-Oriented DSA in C++

This repository serves as a personal archive for my Data Structures and Algorithms (DSA) learning journey in C++ — with a focus on memory efficiency, systems programming, and low-level optimization.

---

## 📂 Project Structure

Each chapter is broken down into smaller sections (matching my study roadmap), and each section has its own `theory/` and `homework/`:
- `theory/` — Code written while following lectures, exploring concepts, and experimenting.
- `homework/` — Solutions to practice problems and coding challenges.

```text
learn-dsa/
├── README.md
├── PROGRESS.md
├── 01_Systems_Thinking/
│   ├── 1.1_Big_O/
│   │   ├── theory/
│   │   └── homework/
│   ├── 1.2_Master_Theorem/
│   │   ├── theory/
│   │   └── homework/
│   ├── 1.3_Cache_Performance/      (deferred — revisit before 6.6)
│   └── 1.4_Recursion_CallStack/
│       ├── theory/
│       └── homework/
├── 02_Searching_Sorting/
│   ├── 2.1_Linear_Binary_Search/
│   └── ...
├── 03_Advanced_Sorting/
├── 04_Linear_DS/
│   ├── ...
│   └── mini_projects/
│       └── kv_store.cpp
├── 05_Hash_Tables_Strings/
├── 06_Non_Linear_Trees/
│   ├── ...
│   └── mini_projects/
│       └── bplus_tree_index.cpp
├── 07_Non_Linear_Graphs/
├── 08_Advanced_Paradigms/
└── 09_Distributed_Infra/
    ├── ...
    └── mini_projects/
        └── mini_rocksdb.cpp
```

> **Note:** every chapter follows the `X.Y_Section_Name/theory/` + `homework/` pattern above (omitted per-section here for brevity — see `PROGRESS.md` for the full checklist). `mini_projects/` only appears in chapters with a hands-on integration project (Chapters 4, 6, and 9).

---

## 🛠️ Tech Stack & Environment

* **Environment:** Windows Subsystem for Linux (WSL2) - Ubuntu
* **Language Standard:** C++17 / C++20 / C++23 Support
* **Compiler:** GCC (Linux Native)
* **IDE/Editor:** VS Code (with WSL & C/C++ Extension Pack)
* **Version Control:** Git & GitHub Desktop

---

## 📅 Dev Log

### 2026-07-16
- Study: Big-O, Big-Ω, Big-Θ notation; Time/Space trade-off via Two Sum
- Code: Implemented `twoSumBruteForce()` - O(n²) version
- Status: Function done, main() pending
- Next: Complete main(), add optimized O(n) version

---

*The deeper you go, the more powerful C++ becomes.* 🔥