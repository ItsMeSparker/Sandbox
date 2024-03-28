#ifndef node_h
#define node_h
class NODE{
     int ord,qty;
    NODE *nextPtr;
public:
    NODE(int, int);
    ~NODE();
    void set_next(NODE*);
    NODE* get_next();
    int get_order();
    int get_price();
     int get_qty();
     void set_order(int);
     void set_qty(int);
};
typedef NODE* NodePtr;


NODE::NODE(int x, int y){
    ord=x;
    qty=y;
    nextPtr=NULL;
    //pPtr =NULL; not using doubly
}
NODE* NODE::get_next(){
    return nextPtr;

}

int NODE::get_order(){
    return this->ord;

}

int NODE::get_qty(){
    return this->qty;

}

void NODE::set_order(int ord){
  this->ord=ord;
}
void NODE::set_qty(int qty){
  this->qty=qty;
}

void NODE::set_next(NODE *t){
     nextPtr=t;

}
NODE::~NODE(){
    //cout<<"deleting "<<ord<<endl;

}

int NODE::get_price(){
    int price;
    switch (ord){
    case 1:
        cout<<"You bought Long Sword!!!"<<endl;
        return 100*qty;

    case 2:
        cout<<"You bought Gun!!!"<<endl;
        return 250*qty;

    case 3:
        cout<<"You bought Warhammer!!!"<<endl;
        return 200*qty;
    case 4:
        cout<<"You bought Steroid!!!"<<endl;
        return 1000*qty;
    
    default:
      return 0;  
      break;
    }
}




#endif
