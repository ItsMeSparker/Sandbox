#include <iostream>
#include <cstdlib>
#include <cstring>
#include "heroes.h"
#include "thanos.h"
#include "queue.h"
using namespace std;

int main(int argc, char* argv[]){

Thanos T(0,500);
int N;

heroes perc("Percival",500,0);
heroes kenn("Kenny",750,0);
heroes xerx("Xerxes",640,0);
heroes heroesArray[3] = {perc, kenn, xerx};
  cout<<"How many heroes do you want to summon (Max : 3) ? ";
  cin>>N;
  cout<<"We will now summon the "<< N <<" Heroes !"<<endl;
  int i;
  for(i=0; i<N; i++){
      heroesArray[i].summon();
      heroesArray[i].print_all(1);
  }

  Queue q;
   int k, x, Ultra;
  
  heroesArray[i].menu();
  cout<<"You have 1000 Bath for the whole party"<<endl;
  int cash = 1000;
  //cin>>Item;

 for(k=1;k<argc;k++){
        if(strcmp(argv[k],"x")==0){
            x=q.dequeue();
            if(x==-1) cout<<"No Item"<<endl;
            else{
              cout << "Price: " << x << endl;
              cash = cash - x;
              cout<<"You have "<< cash <<" left";
              
              if(cash<x){
                cout<<"You have no money"<<endl;
                break;
              }
            }
            continue;
        }
       q.enqueue(atoi(argv[k]),atoi(argv[k+1]));
      // cout << i << endl;
           i++;
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
      heroesArray[j].Attack(25+Ultra); // attack with 25 power
      T.Get_Damaged(25+Ultra); // Thanos takes 25 damage
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

