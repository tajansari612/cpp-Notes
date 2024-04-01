#include<iostream>
using namespace std;

// A linked list is a kind of linear dynamic data structure which we use to
// store data elements. Arrays are also a type of linear data structure
// where the data items are stored in continuous memory blocks.

// Unlike arrays, the linked list does not need to store data elements in
// contiguous memory regions or blocks.

// A linked list is composed of elements known as "Nodes" that are divided
// into two parts. The first component is the part where we store the actual
// data, and the second is a part where we store the pointer to the next
// node. This type of structure is known as a "singly linked list."

//Advantages
//01 Dynamic data structure: A linked list is a dynamic arrangement so it
// can grow and shrink at runtime by allocating and deallocating memory.
// So there is no need to give the initial size of the linked list.

//02 No memory wastage: In the Linked list, efficient memory utilization can
// be achieved since the size of the linked list increase or decrease at run
// time so there is no memory wastage and there is no need to pre-allocate
// the memory.

//03 Implementation: Linear data structures like stacks and queues are often
// easily implemented using a linked list.

//04 Insertion and Deletion Operations: Insertion and deletion operations
// are quite easier in the linked list. There is no need to shift elements
// after the insertion or deletion of an element only the address present in
// the next pointer needs to be updated. 

//05 Flexible: This is because the elements in Linked List  are not stored
// in contiguous memory locations unlike the array.

//06 Efficient for large data: When working with large datasets linked lists
// play a crucial role as it can grow and shrink dynamically.
//07 Scalability: Contains the ability to add or remove elements at any position.


//Disadvantages
//01 Memory usage: More memory is required in the linked list as compared to
// an array. Because in a linked list, a pointer is also required to store
// the address of the next element and it requires extra memory for itself.

//02 Traversal: In a Linked list traversal is more time-consuming as
// compared to an array. Direct access to an element is not possible in a
// linked list as in an array by index. For example, for accessing a node at
// position n, one has to traverse all the nodes before it.

//03 Reverse Traversing: In a singly linked list reverse traversing is not
// possible, but in the case of a doubly-linked list, it can be possible as
// it contains a pointer to the previously connected nodes with each node.
// For performing this extra memory is required for the back pointer hence,
// there is a wastage of memory.

//04 Random Access: Random access is not possible in a linked list due to
// its dynamic memory allocation.

//05 Lower efficiency at times: For certain operations, such as searching
// for an element or iterating through the list, can be slower in a linked
// list.

//06 Complex implementation:  The linked list implementation is more complex
// when compared to array. It requires a complex programming understanding.

//07 Difficult to share data: This is because it is not possible to directly
// access the memory address of an element in a linked list.

//08 Not suited for small dataset: Cannot provide any significant benefits
// on small dataset compare to that of an array.
int main(){
    
    return 0;
}