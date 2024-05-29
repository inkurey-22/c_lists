# C-lists_lib

## Description

This is one of my personal projects.
It's a library made to help managing linked lists in C language.

## Functions

- `list_t *create(void *data)`: Creates and returns a node with the data given as parameter.
- `void append_node(list_t **list, void *data)`: Creates and appends a node containing the given data to the end of the list.
- `void add_to_top(list_t **list, void *data)`: Creates and adds a node containing the given data to the top of the list.
- `void insert_node_at(list_t **list, void *data, int const index)`: Creates and inserts a node containing the given data at the given index.
- `void merge_sort(list_t **list)`: Sorts the list using the merge sort algorithm.
- `list_t *reverse_list(list_t *list)`: Reverses the list and returns the new head.
- `list_t *find_node(list_t *list, void const *ref)`: Returns the node containing the data given as parameter.
- `int list_size(list_t *list)`: Returns the size of the list.
- `void remove_node(list_t **list, void const *data, void (*free_data)(void *))`: Removes the node containing the data given as parameter.
- `void free_list(list_t **list, void (*free_data)(void *data))`: Frees the list and all its nodes.

## Usage

To use this library: 
- add the `/include/C-lists.h` file to your project's include directory.
- add the `/list_lib` directory to your project's root.
- Call the Makefile with your own Makefile.
- And voilà! You can now use the functions in your project.