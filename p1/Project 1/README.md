Kevin Tran
#7983091
kevinttran@ucsb.edu
Piazza name: Kevin Tran

The main hurdles for the project were coming to understand the visitor structure.
After understanding that each operation required the implementation
of a new visitor class with a unique visit implementation to carry out
the desired operation, the actual implementations for max and sum were 
trivial, especially given the example print visitor. For max, it was simply
a problem of visiting every node and maintaining a consistent max that was measured
against each node's value. For sum, it was simply a matter of visiting each node
and adding the value to a persistent sum value.