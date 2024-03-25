#ifndef thanos_h
#define thanos_h
#include <iostream>

#include "heroes.h"

using namespace std;


class Thanos {
private:
  int stones;
  int hp;

public:
  /* constructor and destructor */
  Thanos(int,int);
  void snapFinger();
  void Attack(int);
  int Get_Damaged(int);
  int getHP();
  void operator++();
  ~Thanos();
  //}
};

Thanos::Thanos(int stones, int hp){
    this->stones=stones;
    this->hp=hp;
  cout << "Thanos - The end is near" << endl;
}

Thanos::~Thanos(){
  if(hp<=0){
    cout<<"Thanos is defeated"<<endl;
    cout<<"You won"<<endl;
  }
}

int Thanos::getHP() {
    return hp;
}

// show all hps
 void Thanos::snapFinger() { // Functions นี้ไว้ใช้เช็ค stones ถ้าครบค่อยใช้ function snapped
    int i;

    if(stones == 6){
    cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
    cout << "Thanos - You Should Have Gone For The Head."<<endl;
    cout << "=====Finger Snapped=====" << endl;
    cout << "Every Heros is Disappearing..." << endl;
    cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
  }
   else {
     cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
    cout<<"Thanos now have "<<stones<< " stones and is missing "<<6-stones<<" other stones"<<endl;
     cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
   } 
 }
void Thanos::Attack(int d){
  cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
  cout<<"Thanos has attacked all the heroes dealing "<<d<<" damage to the heroes"<<endl;
  cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
}

  void Thanos::operator++() {
    stones+=1;
    cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
    cout<<"Thanos have earned another stone and is missing "<<6-stones<<" other stones"<<endl;
    cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
} // increase the stone;

int Thanos::Get_Damaged(int d){
  hp = hp - d;
  cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
  cout<<"Thanos has been hit with "<<d<<" damage and has "<<hp<<" hp remaining"<<endl;
  cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
  return hp;
}


#endif
