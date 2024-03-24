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
        heroes(string, int, int);
        void Attack(int);
        void Dead();
        int Heal();
        int Get_Hurt(int);
        int snapped(int);
        void summon();
        void menu();
        int get_hp();
        void bubble_sort(heroes heroesArray[], int);
        ~heroes();

        void set_name(string);
        void set_hp(int);
        void set_potion(int);
        void print_all(int);

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
  cout<<"Long Sword Cost: 100"<<endl;
  cout<<"Gun Cost: 200"<<endl;
  cout<<"Potion Cost: 25"<<endl;
  cout<<"Steroid Cost: 1000"<<endl;
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
        if(temp + 20 < 200){
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

int heroes::get_hp() {
    return hp;
}

void heroes::bubble_sort(heroes heroesArray[], int N){

  bool swapped;
do{
  swapped = false;
  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 - 1 ; j++){
    if(heroesArray[j].get_hp() < heroesArray[j+1].get_hp()){
      heroes temp = heroesArray[j];
      heroesArray[j] = heroesArray[j+1];
      heroesArray[j + 1] = temp;
        swapped=true;
        }    
      }
    }
  } while (swapped);
}

void heroes::set_potion(int p){
  p=potion;
}

void heroes::print_all(int N){
  int i;

  cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
  cout<< " Name: " << name << endl;
  cout<< " HP: " << hp << endl;
  cout<< " Potion: " << potion << endl;
  cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
}

void heroes::summon(){
  cout<<name<<" is summoned with "<<hp<<" hp and "<<potion<<" potion "<<endl;
}
heroes::~heroes(){
}
#endif
