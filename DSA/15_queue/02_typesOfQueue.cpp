#include<iostream>
using namespace std;

// Types of Queue :
// There are four different types of queue that are listed as follows -
//01) Simple Queue or Linear Queue
//02) Circular Queue
//03) Priority Queue
//04) Double Ended Queue (or Deque)

//01 Simple Queue or Linear Queue :
// In Linear Queue, an insertion takes place from one end while the deletion
// occurs from another end. The end at which the insertion takes place is known
// as the rear end, and the end at which the deletion takes place is known as
// front end. It strictly follows the FIFO rule.
// The major drawback of using a linear Queue is that insertion is done only from
// the rear end. If the first three elements are deleted from the Queue, we cannot
// insert more elements even though the space is available in a Linear Queue. In
// this case, the linear Queue shows the overflow condition as the rear is
// pointing to the last element of the Queue.


//02 Circular Queue :
// In Circular Queue, all the nodes are represented as circular. It is similar to
// the linear Queue except that the last element of the queue is connected to the
// first element. It is also known as Ring Buffer, as all the ends are connected
// to another end.
// The drawback that occurs in a linear queue is overcome by using the circular
// queue. If the empty space is available in a circular queue, the new element
// can be added in an empty space by simply incrementing the value of rear.
// The main advantage of using the circular queue is better memory utilization.


//03 Priority Queue :
// It is a special type of queue in which the elements are arranged based on the
// priority. It is a special type of queue data structure in which every element
// has a priority associated with it. Suppose some elements occur with the same
// priority, they will be arranged according to the FIFO principle.
// Insertion in priority queue takes place based on the arrival, while deletion
// in the priority queue occurs based on the priority. Priority queue is mainly
// used to implement the CPU scheduling algorithms.


// Double Ended Queue (or Deque) :
// In Deque or Double Ended Queue, insertion and deletion can be done from both
// ends of the queue either from the front or rear. It means that we can insert
// and delete elements from both front and rear ends of the queue. Deque can be
// used as a palindrome checker means that if we read the string from both ends,
// then the string would be the same.
// Deque can be used both as stack and queue as it allows the insertion and
// deletion operations on both ends. Deque can be considered as stack because
// stack follows the LIFO (Last In First Out) principle in which insertion and
// deletion both can be performed only from one end. And in deque, it is possible
// to perform both insertion and deletion from one end, and Deque does not follow
// the FIFO principle.
int main(){
    
    return 0;
}