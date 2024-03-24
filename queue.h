
#ifndef queue_h
#define queue_h
#include "node.h"
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(int, int);
    int dequeue();
    Queue();
    //~Queue(); //dequeue all
};


void Queue::enqueue(int x, int y){
  NodePtr new_node= new NODE(x, y);
  int order = new_node -> get_order();
  int quantity = new_node -> get_qty();
if(new_node){ 
    if(size>0)
      tailPtr->set_next(new_node);
    else headPtr = tailPtr = new_node;
   tailPtr=new_node;
   size++;
	
 }
}

int Queue::dequeue(){
  if(headPtr!=NULL){
    NodePtr t=headPtr;
    int value= t->get_price();
    headPtr=headPtr->get_next();
    if(size == 1) 
      headPtr = tailPtr = NULL;
    size--; 
    delete t;
    return value;
  }
  cout<<"Empty queue";
  return -1;
}


Queue::Queue(){
    headPtr = NULL;
    tailPtr = NULL;
    size = 0;
    
}
//Queue::~Queue(){
    //delete all remaning Queue (i.e. DQ all) 
    //cout<<"Your heroes are now ready"<<endl;
    //while(size>0) dequeue();
    
//}


#endif
