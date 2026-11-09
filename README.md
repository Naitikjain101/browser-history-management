# Browser History Management System

A menu-driven C++ DSA project that manages browser history using a **Doubly Linked List**.

## Modules

1. **Visit Page** — adds a URL. Visiting a new page after navigating backward removes the forward history.
2. **Back and Forward Navigation** — moves through the previous and next nodes in constant time.
3. **History Display and Search** — displays all visited URLs, marks the current page, and searches URLs without case sensitivity.
4. **History Deletion** — deletes a selected entry or clears the complete history.

## Project structure

```text
Browser-History-Management/
├── main.cpp
├── include/
│   ├── browser_history.h
│   └── node.h
├── modules/
│   ├── visit_page.cpp
│   ├── navigation.cpp
│   ├── history_display_search.cpp
│   └── history_deletion.cpp
├── README.md
└── .gitignore
```

## Requirements

- C++11 or later
- g++ or clang++

## Compile

Run this command from the project root:

```bash
g++ -std=c++17 main.cpp modules/*.cpp -Iinclude -o browser
```

## Run

On macOS/Linux:

```bash
./browser
```

On Windows (MinGW):

```bash
g++ -std=c++17 main.cpp modules/*.cpp -Iinclude -o browser.exe
browser.exe
```

## DSA concepts

- Doubly Linked List
- Dynamic memory allocation (`new` and `delete`)
- Pointer manipulation
- Traversal, insertion and deletion
- Searching

## Time complexity

| Operation | Time complexity |
|---|---:|
| Back / Forward | O(1) |
| Visit page (excluding discarded forward entries) | O(k), where k is the number of forward entries removed |
| Display history | O(n) |
| Search history | O(n) |
| Delete by position | O(n) |
| Clear history | O(n) |

## Notes

- All modules are compiled together into one executable.
- Only `main.cpp` contains the program entry point (`main()`).
- The project stores history in memory; it does not persist history after the program exits.
# browser-history-management
