# **Graph Algorithms Library**

## **Overview**

Welcome to the **Graph Algorithms Library**! This project is a comprehensive C library that provides a variety of graph algorithms and utilities, similar to the Standard Template Library (STL) in C++. The library includes implementations of essential graph traversal and pathfinding algorithms, along with utilities for managing graphs and performing file I/O operations. The library is designed to be modular, reusable, and efficient, making it a valuable tool for developers working with graph data structures.

## **Features**

- **Graph Representation:**
  - Support for multiple graph representations, including adjacency lists.
  
- **Algorithms:**
  - **Depth-First Search (DFS)**
  - **Breadth-First Search (BFS)**
  - **Dijkstra's Shortest Path Algorithm**
  - **Bellman-Ford Algorithm**
  - **Minimum Spanning Tree (Prim's and Kruskal's algorithms)**
  - **Floyd-Warshall Algorithm**
  - And more!

- **Utility Functions:**
  - File I/O functions for reading and writing graphs.
  - Memory management utilities for safe and efficient memory operations.

- **Static Library (`libgraph.a`):**
  - Precompiled static library for easy integration into your projects.

## **Project Structure**

```
graph-algorithms-library/
├── include/
│   ├── graph.h          # Core graph data structures and basic operations
│   ├── algorithms.h     # Prototypes for graph algorithms
│   ├── utils.h          # Utility function prototypes (File I/O, memory management, etc.)
├── src/
│   ├── graph.c          # Implementation of core graph data structures and operations
│   ├── algorithms.c     # Implementation of various graph algorithms
│   ├── utils.c          # Implementation of utility functions
├── lib/
│   ├── libgraph.a       # Compiled static library containing all functions and algorithms
├── examples/
│   ├── main.c           # Example usage of the library
├── README.md            # Project documentation
└── Makefile             # Makefile for building the library and example
```

## **Installation and Usage**

### **Building the Library**

1. **Clone the repository:**

   ```bash
   git clone https://github.com/567mayank/C_Project.git
   cd graph-algorithms-library
   ```

2. **Build the static library:**

   ```bash
   make
   ```

   This will compile the source files and generate `libgraph.a` in the `lib/` directory.

### **Using the Library in Your Project**

1. **Include the headers:**
   - In your C files, include the necessary headers:

     ```c
     #include "graph.h"
     #include "algorithms.h"
     #include "utils.h"
     ```

2. **Link the library when compiling your project:**

   ```bash
   gcc -o myprogram myprogram.c -L./lib -lgraph
   ```

3. **Run your program:**

   ```bash
   ./myprogram
   ```

### **Example Usage**

An example program (`main.c`) is provided in the `examples/` directory. This example demonstrates how to create a graph, perform DFS, BFS, and Dijkstra's algorithm, and output the results.

To compile and run the example:

```bash
cd examples
gcc -o example main.c -L../lib -lgraph
./example
```

## **Documentation**

### **Core Functions**

- **Graph Operations (`graph.h` and `graph.c`):**
  - `Graph* createGraph(int numNodes);`
  - `void addEdge(Graph* graph, int src, int dest);`
  - `void removeEdge(Graph* graph, int src, int dest);`
  - `void freeGraph(Graph* graph);`

- **Graph Algorithms (`algorithms.h` and `algorithms.c`):**
  - `void DFS(Graph* graph, int startNode);`
  - `void BFS(Graph* graph, int startNode);`
  - `int* dijkstra(Graph* graph, int startNode);`

- **Utility Functions (`utils.h` and `utils.c`):**
  - `Graph* readGraphFromFile(const char* filename);`
  - `void writeResultsToFile(const char* filename, int* results);`
  - `void* safeMalloc(size_t size);`

### **Adding New Algorithms**

To add a new algorithm:

1. Define the algorithm in `algorithms.h`.
2. Implement the algorithm in `algorithms.c`.
3. Rebuild the library using `make`.

## **Contributing**

Contributions are welcome! If you have ideas for new algorithms, optimizations, or features, feel free to fork the repository and submit a pull request.

## **Contact**

For any questions or suggestions, feel free to reach out via [mayank290404gupta@gmail.com](mailto:email@example.com).