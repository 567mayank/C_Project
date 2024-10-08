# **Graph Algorithms Library**

## **Overview**

Welcome to the **Graph Algorithms Library**! This project is a comprehensive C library that provides a variety of graph algorithms and utilities, similar to the Standard Template Library (STL) in C++. The library includes implementations of essential graph traversal and pathfinding algorithms. The library is designed to be modular, reusable, efficient and generic making it a valuable tool for developers working with graph data structures.

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

- **Static Library (`libgraph.a`):**
  - Precompiled static library for easy integration into your projects.

## **Project Structure**

```
graph-algorithms-library/
├── include/
│   ├── graph.h            # Core graph data structures and basic operations
│   ├── algorithms.h       # Prototypes for graph algorithms
│   ├── disjointSetUnion.h # Prototypes for Disjoint Set Union
├── src/
│   ├── graph.c            # Implementation of core graph data structures and operations
│   ├── algorithms.c       # Implementation of various graph algorithms
│   ├── disjointSetUnion.c # Implementation of Disjoint Set Unoin functions
├── lib/
│   ├── libgraph.a         # Compiled static library containing all functions and algorithms
├── examples/
│   ├── main.c             # Example usage of the library
└── README.md              # Project documentation
```

## **Installation and Usage**

### **Building the Library**

1. **Clone the repository:**

   ```bash
   git clone https://github.com/567mayank/C_Project.git
   cd graph-algorithms-library
   ```

### **Using the Library in Your Project**

1. **Include the headers:**
   - In your C files, include the necessary headers:

     ```c
     #include "graph.h"
     #include "algorithms.h"
     #include "utils.h"
     ```
2. **Compile the main program**

   ```bash
   gcc -c main.c -Iinclude -o main.o
   ```

3. **Link the library when compiling your project:**

   ```bash
   gcc -o myprogram myprogram.c -L./lib -lgraph
   ```

4. **Run your program:**

   ```bash
   ./myprogram
   ```

### **Example Usage**

An example program (`main.c`) is provided in the `examples/` directory. This example demonstrates how to create a graph, perform DFS, BFS, and Dijkstra's algorithm, and output the results.

To compile and run the example:

```bash
cd examples
gcc -o example main.c -I../include -L../lib -lgraph
./example
```

## **Documentation**

### **Core Functions**

- **Graph Operations (`graph.h` and `graph.c`):**
  - `Graph* createGraph(int numNodes,size_t dataSize,int (*edgeFinder)(const void*),int (*wieghtFinder)(const void*));`
  - `void addEdge(Graph* graph, int src, void* dest);`
  - `void freeGraph(Graph* graph);`

- **Graph Algorithms (`algorithms.h` and `algorithms.c`):**
  - `void DFS(Graph* graph, int startNode);`
  - `void BFS(Graph* graph, int startNode);`
  - `int** floydWarshal(Graph* graph);`

- **Disjoint Set Union Functions (`disjointSetUnion.h` and `disjointSetUnion.c`):**
  - `DSU* createDSU(int n,int (*edgeFinder)(const void*));`
  - `void unionDSU(DSU*ds,void* u,void* v);`
  - `int sameComponent(DSU*ds,void* u,void* v);`

  For more detailed information and usage examples, please refer to the complete documentation available at : [Graph Algorithms Documentation](https://light-sovereign-3b7.notion.site/Graph-Algorithms-Documentation-189d0769f6e34c879872f6f226fcd3c9)

### **Adding New Algorithms**

To add a new algorithm:

1. Define the algorithm in `algorithms.h`.
2. Implement the algorithm in `algorithms.c`.

## **Contributing**

Contributions are welcome! If you have ideas for new algorithms, optimizations, or features, feel free to fork the repository and submit a pull request.

## **Contact**

For any questions or suggestions, feel free to reach out via [mayank290404gupta@gmail.com](mailto:mayank290404gupta@gmail.com).