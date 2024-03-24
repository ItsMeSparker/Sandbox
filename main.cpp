#include <iostream>
#include <cstdlib>
#include "heroes.h"
#include "thanos.h"

int main(int argc, char* argv[]){

Thanos T(0,500);
int N;

heroes perc("Percival",500,3);
heroes kenn("Kenny",750,5);
heroes xerx("Xerxes",640,1);
heroes heroesArray[3] = {perc, kenn, xerx};
  cout<<"How many heroes do you want to summon (Max : 3) ? ";
  cin>>N;
  cout<<"We will now summon the "<< N <<" Heroes !"<<endl;
  int i;
  for(i=0; i<N; i++){
      heroesArray[i].summon();
      heroesArray[i].print_all(1);
  }

  for(i=0; i<N; i++){
    heroesArray[i].bubble_sort(heroesArray, N);
  }

  cout<<endl; cout<<endl; cout<<endl;
  cout<<"The Heroes are now sorted from the highest to lowest HP !"<<endl;
  for(i=0; i<N; i++){
      heroesArray[i].print_all(1);
  }

  cout<<"The Heroes are now summoned !"<<endl;

for(int i = 0; i < 6; i++){
  cout<<"The Heroes are now fighting !"<<endl;

  for(int j = 0; j < N ;j++){
    heroesArray[j].print_all(1);
    int action = rand() % 2; // randomly choose an action (0 = attack, 1 = heal)
    if(action == 0){
      heroesArray[j].Attack(25); // attack with 25 power
      T.Get_Damaged(25); // Thanos takes 25 damage
    } else {
      heroesArray[j].Heal(); // hero heals by 20 HP
    }
  }
  // Thanos attacks all heroes
  for(int j = 0; j < N; j++){
    int d;
    T.Attack(30);
    heroesArray[j].Get_Hurt(30);

  }
  T.operator++();

  T.snapFinger();

}


}//call des for A

