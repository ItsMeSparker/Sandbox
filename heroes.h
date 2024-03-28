#ifndef heroes_h
#define heroes_h
#include <iostream>
#include <iomanip>
#include "thanos.h"

using namespace std;

class heroes{
private:
        string name;
        int hp;
        int potion;

public :
        heroes *next;
        heroes(string, int, int);
        void Attack(int);
        void Dead();
        int Heal();
        int Get_Hurt(int);
        int snapped(int);
        void summon();
        void menu();
        void bubble_sort(int);
        ~heroes();

        string GetName();
        int GetHP();
        int GetPotion();
        void set_name(string);
        void set_hp(int);
        void set_potion(int);
        void SwapHeroes();
        //void print_all(int);

};

heroes::heroes(string n,int h,int p){
  this->name=n;
  this->hp=h;
  this->potion=p;
}

void heroes::Attack(int d){

  cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
  cout<<name<<" has weakened Thanos by "<<d<<" hp"<<endl;
  cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
}

void heroes::Dead(){
    if(hp<=0) 
    cout<<name<<" has fallen !"<<endl;
  delete this;
}

void heroes::menu(){
  cout<<"╔══════════════════════════════════ SHOP ══════════════════════════════════╗"<<endl;
  cout<<"In order to battle, you must purchase the Item"<<endl;
  cout<<"Item per purchas will equip the whole party"<<endl;
  cout<<"(1) Long Sword Cost: 100"<<endl;
  cout<<"(2) Gun Cost: 250"<<endl;
  cout<<"(3) Warhammer Cost: 200"<<endl;
  cout<<"(4) Steroid Cost: 1000"<<endl;
  cout<<"╚══════════════════════════════════════════════════════════════════════════╝"<<endl;
}

int heroes::Get_Hurt(int d){
  hp-=d;
  cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
  cout<<name<<" has been hurt by " <<d<<"hp and has "<<hp<<" remaining "<<endl;
  return hp;
  cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
}

int heroes::Heal(){
    int temp = hp;

    if(potion > 0){
        if(temp + 20 < 500){
            hp += 20;
            potion--;
    cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
      cout<<"Yay! "<<name<<" has healed to "<<hp<<" and has "<<potion<<" potion remaining"<<endl;
    cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
            return hp; // Return hp value
        } else {
    cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
            cout  << "Your already at max hp" << endl;
    cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
        }
    } else {
  cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
        cout << "Sadly, you ran out of potion" << endl;
    cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
    }
    return potion; // Return potion value
    cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
}

int heroes::snapped(int hp){
  hp/=2;

  cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
  cout<<"Thanos has snapped his finger"<<endl;
  cout<<name<<"hp has been reduced by half and has "<<hp<< " hp remaining"<<endl;
  cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
  return hp;
}

void heroes::set_name(string n){
  n=name;
}

void heroes::set_hp(int h){
  h=hp;
}

string heroes::GetName(){
    return name;
}

int heroes::GetHP(){
    return hp;
}

int heroes::GetPotion(){
    return potion;
}

void heroes::bubble_sort(int N){

  bool swapped;
do{
  swapped = false;
  heroes *temp= this;
  for(int i = 0 ; i < N-1 ; i++){
    for(int j = 0 ; j < N-i-1 ; j++){
    if(temp->GetHP() < temp->next->GetHP()){
      string tempName = temp->GetName();
      temp->set_name(temp->next->GetName());
      temp->next->set_name(tempName);

      int tempHP = temp->GetHP();
      temp->set_hp(temp->next->GetHP());
      temp->next->set_hp(tempHP);

      int tempPotion = temp->GetPotion();
      temp->set_potion(temp->next->GetPotion());
      temp->next->set_potion(tempPotion);
      swapped=true;
        }    
      temp = temp->next;
      }
    temp=this;
    }
  } while (swapped);
} 

void heroes::set_potion(int p){
  p=potion;
}
/*
void heroes::print_all(int N){
  int i;

  cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
  cout<< " Name: " << name << endl;
  cout<< " HP: " << hp << endl;
  cout<< " Potion: " << potion << endl;
  cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
}
*/
void heroes::SwapHeroes() {
   heroes* temp = this;
    while (temp != nullptr && temp->next != nullptr) {
        string tempName = temp->GetName();
        temp->set_name(temp->next->GetName());
        temp->next->set_name(tempName);

        int tempHP = temp->GetHP();
        temp->set_hp(temp->next->GetHP());
        temp->next->set_hp(tempHP);

        int tempPotion = temp->GetPotion();
        temp->set_potion(temp->next->GetPotion());
        temp->next->set_potion(tempPotion);

        temp = temp->next;
    }
}


void heroes::summon(){
  cout<<name<<" is summoned with "<<hp<<" hp and "<<potion<<" potion "<<endl;
}
heroes::~heroes(){
}
#endif
