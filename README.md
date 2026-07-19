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
│   ├── part_01/
│   │   ├── theory/
│   │   └── homework/
│   ├── part_02/
│   │   ├── theory/
│   │   └── homework/
│   ├── part_03/      (deferred — revisit before 6.6)
│   └── part_04/
│       ├── theory/
│       └── homework/
├── 02_Searching_Sorting/
│   ├── part_01/
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

> **Note:** See `PROGRESS.md` for the full checklist. `mini_projects/` only appears in chapters with a hands-on integration project (Chapters 4, 6, and 9).

### 🔎 Chapter Scope (clarification)

Folder names are fixed for structural/design reasons, so here's what each chapter *actually* covers content-wise:

| Folder | Actual Scope |
|---|---|
| `01_Systems_Thinking` | Complexity analysis (Big-O), Recursion |
| `02_Searching_Sorting` | Search & Sort fundamentals |
| `03_Advanced_Sorting` | Advanced sorting, Divide & Conquer |
| `04_Linear_DS` | Linear data structures |
| `05_Hash_Tables_Strings` | Hash Tables, String algorithms |
| `06_Non_Linear_Trees` | Trees (incl. B-Tree, see dependency note below) |
| `07_Non_Linear_Graphs` | Graphs |
| `08_Advanced_Paradigms` | Advanced algorithmic paradigms |
| `09_Distributed_Infra` | **Infrastructure-oriented DSA only** (e.g. storage/indexing structures). Distributed *systems design* topics (Quorum, Vector Clocks, Gossip, 2PC) are explicitly **out of scope** here — that's a separate track. |

> ⚠️ **Dependency reminder:** `01/part_03` (Cache) is deferred and **must be revisited before `06.6` (B-Tree)** — B-Tree indexing concepts build on the cache material.

---

## 🛠️ Tech Stack & Environment

* **Environment:** Windows Subsystem for Linux (WSL2) - Ubuntu
* **Language Standard:** C++17 / C++20 / C++23 Support
* **Compiler:** GCC (Linux Native)
* **IDE/Editor:** VS Code (with WSL & C/C++ Extension Pack)
* **Version Control:** Git & GitHub Desktop

---

## 📅 Dev Log

Format: `[Chapter/Part] — what was studied / coded / practiced`

- **[01/part_01]**
  - Study: O(n) and O(n log n) definitions and examples
  - Code: timMax(), tinhTong() for O(n); moPhongNLogN() for O(n log n)
  - Exercise: Combined exercise done
  - Status: DONE 1.1.2 and 1.1.3
  - Next: 1.1.4 O(n²)

---
*The deeper you go, the more powerful C++ becomes.* 🔥