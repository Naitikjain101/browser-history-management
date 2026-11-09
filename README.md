# 🌐 Browser History Management System

A menu-driven **Browser History Management System** developed in C++ using the **Doubly Linked List** data structure. This project simulates basic browser navigation and history management through four independent modules integrated into a single executable program.

## 🚀 Features

The project consists of four independent modules:

### 1. Visit Page Module
- Visit and add new website URLs.
- Dynamically create new linked-list nodes.
- Automatically remove forward history when visiting a new page after navigating backward.

### 2. Back and Forward Navigation Module
- Navigate to previously visited pages.
- Move forward to recently visited pages.
- Maintain the current page using pointer manipulation.
- Handle navigation boundaries safely.

### 3. History Display and Search Module
- Display complete browsing history.
- Highlight the currently active page.
- Search URLs using keywords.
- Support case-insensitive searching.

### 4. History Deletion Module
- Delete a specific history entry by its position.
- Clear the complete browsing history.
- Maintain proper linked-list connections after deletion.
- Automatically update the current page when necessary.

## 🛠️ Technology Stack

| Technology | Purpose |
|---|---|
| C++ | Core programming language |
| Doubly Linked List | Browser history management |
| Pointers | Backward and forward navigation |
| Dynamic Memory Allocation | Runtime node creation |
| OOP | Encapsulation and modular design |

## 📂 Project Structure

```text
Browser-History-Management/
│
├── main.cpp
│
├── include/
│   ├── browser_history.h
│   └── node.h
│
├── modules/
│   ├── visit_page.cpp
│   ├── navigation.cpp
│   ├── history_display_search.cpp
│   └── history_deletion.cpp
│
├── README.md
└── .gitignore
```

## ⚙️ How to Run

### Prerequisites
- C++ compiler (GCC or Clang)
- C++17 support
- Terminal or any C++ IDE

### Step 1: Clone the Repository

```bash
git clone https://github.com/YOUR-USERNAME/Browser-History-Management.git
```

### Step 2: Navigate to the Project

```bash
cd Browser-History-Management
```

### Step 3: Compile All Modules Together

```bash
g++ -std=c++17 main.cpp modules/*.cpp -Iinclude -o browser
```

### Step 4: Execute the Program

**macOS / Linux**
```bash
./browser
```

**Windows (MinGW)**
```bash
g++ -std=c++17 main.cpp modules/*.cpp -Iinclude -o browser.exe
browser.exe
```

## 🖥️ Application Menu

```text
========================================
       BROWSER HISTORY MANAGEMENT
========================================
1. Visit New Page
2. Go Back
3. Go Forward
4. Display Browser History
5. Search History
6. Delete History Entry
7. Clear All History
8. Show Current Page
9. Exit
========================================
Enter your choice:
```

## 🧠 Data Structure Explanation

This project uses a **Doubly Linked List**, where every node contains:

- `url` – Stores the website address.
- `prev` – Points to the previous visited page.
- `next` – Points to the next visited page.

Each node is connected in both directions, making backward and forward navigation efficient.

## ⏱️ Time Complexity

| Operation | Time Complexity |
|---|---|
| Back Navigation | O(1) |
| Forward Navigation | O(1) |
| Visit Page | O(k), where k is the number of forward entries removed |
| Display History | O(n) |
| Search History | O(n) |
| Delete History Entry | O(n) |
| Clear History | O(n) |

## 🎯 Learning Outcomes

Through this project, the following concepts are demonstrated:

- Implementation of Doubly Linked Lists.
- Dynamic memory allocation and deallocation.
- Pointer manipulation and node connections.
- Insertion, deletion, and traversal operations.
- Searching techniques.
- Modular programming in C++.
- Object-Oriented Programming fundamentals.

## ⚠️ Limitations

- Browsing history is stored in memory and is not saved after the program exits.
- This is a console-based simulation, not a real web browser.
- Website URLs are stored as strings; the program does not open websites.

## 👨‍💻 Project Information

**Project
