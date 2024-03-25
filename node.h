#ifndef node_h
#define node_h
class NODE{
     int ord,qty,dmg,pot;
    NODE *nextPtr;
public:
    NODE(int, int);
    ~NODE();
    void set_next(NODE*);
    NODE* get_next();
    int get_order();
    int get_price();
     int get_qty();
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
    return ord;

}

int NODE::get_qty(){
    return qty;

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
        cout<<"You brought Long Sword!!!"<<endl;
        return 100*qty;

    case 2:
        cout<<"You brought Gun!!!"<<endl;
        return 200*qty;

    case 3:
        cout<<"You brought Axe!!!"<<endl;
        return 150*qty;
    case 4:
        cout<<"You brought Steroid!!!"<<endl;
        return 1000*qty;
    
    default:
        break;
    }
}




#endif
