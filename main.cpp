#include <iostream>
#include <cstdlib>
#include <cstring>
#include "heroes.h"
#include "thanos.h"
#include "queue.h"
using namespace std;

int main(int argc, char* argv[]){

Thanos T(0,500);
  heroes *temp, *head;
  string HeroesName[3] = {"Percival","Kenny","Xerxes"};
  int N;
  head = new heroes("Percival",700, 4);
  temp = head;

  cout<<"How many heroes do you want to summon (Max : 3) ? ";
  cin>>N;
  cout<<"We will now summon the "<< N <<" Heroes !"<<endl;
  for(int i=0; i<N-1; i++){
      temp->next = new heroes(HeroesName[i+1], 700-((i+1)*100), 4);
      temp = temp->next;
  }

  temp = head;

  for(int i=0; i<N; i++){
      cout<<"Name: "<<temp->GetName()<<endl;
      cout<<"Health: "<<temp->GetHP()<<endl;
      cout<<"Potions: "<<temp->GetPotion()<<endl;
      temp = temp->next;
  }
  cout<<"The Heroes are now summoned !"<<endl;
  Queue q;
  int k, x, Ultra = 0;
  bool ThanosDefeated = false;
  
  head->next->menu();
  cout<<"You have 1000 Bath for the whole party"<<endl;
  int cash = 1000;
      for(k=0;k<4 && cash>0;k++){
        int item_number;
        int item_qty;
        cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
        cout<<"Enter item number: "<<endl; 
        cin>>item_number;
        
        cout<<"Enter item quantity: "<<endl;
        cin>>item_qty;
        cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
        q.enqueue(item_number,item_qty);
        // cout << i << endl;
             k++;
            
            x=q.dequeue();
              //cout<<"In loop check "<<cash<<endl;
            if(item_number<=0 || item_number>=5){
              cout<<"No Item"<<endl;
            }
            //else{
              cout << "Price: " << x << endl;
              Ultra = Ultra + (x/10);
              cash = cash - x;

              if(cash<x){
                cout<<"You have no money"<<endl;
                //break;
              }
              else{
              cout<<"You have "<< cash <<" left"<< endl;
              //break;
              }
             
            }
  
    head->bubble_sort(N);

  
  cout<<endl; cout<<endl; cout<<endl;
  temp=head;
  cout<<"The Heroes are now sorted from the highest to lowest HP !"<<endl;
  for(int i=0; i<N; i++){
      cout<<"Name: "<<temp->GetName()<<endl;
      cout<<"Health: "<<temp->GetHP()<<endl;
      cout<<"Potions: "<<temp->GetPotion()<<endl;
      temp = temp->next;
  }
  
  
  cout<<"The Heroes are now summoned !"<<endl<<endl;

for(int i = 0; i < 6 && ThanosDefeated == false; i++){
  cout<<"The Heroes are now fighting !"<<endl;
  int action;  // randomly choose an action (0 = attack, 1 = heal)
  cout<<"0 - Attack!!!"<<endl;
  cout<<"1 - Heal!!!"<<endl;
  cin>>action;
  temp = head;

  for(int j = 0; j < N ;j++){
    //heroesArray[j].print_all(1);
    if(action == 0){
      
      temp->Attack(25+Ultra); // attack with 25 power
      T.Get_Damaged(25+Ultra); // Thanos takes 25 damage
      temp = temp->next;
    }
    else {
      temp->Heal(); // hero heals by 20 HP
      temp = temp->next;
    }
  }
  head->SwapHeroes();
  // Thanos attacks all heroes
  temp = head;
  for(int j = 0; j < N; j++){
    int d;
    T.Attack(30);
    temp->Get_Hurt(30);
    temp = temp->next;
  }
  T.operator++();
  T.snapFinger();

 if(T.getHP() <= 0){
   cout<<"─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ───"<<endl;
        cout<<"Thanos has been defeated"<<endl;
        cout<<"Thanos: You guys are too stronge"<<endl;
        cout<<"Kenny: You lost Thanos, why did you do this?"<<endl;
        cout<<"─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ───"<<endl<<endl;
        ThanosDefeated = true;
        break;
   
     }
}
  //Dialog Phase
  cout<<"Thanos: The Universe is suffering, if I don't eliminate half of the universe, one day the resource will be gone!!!"<<endl<<endl;
  cout<<"Kenny: It's not the only solution, Thanos. We have still the other way!!!"<<endl<<endl;
  cout<<"Thanos: And what can I do, huh?"<<endl<<endl;
  
  cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
  cout<<"1 - Why can't you just double the universal resource"<<endl;
  cout<<"2 - There's still people who cannot access the resource"<<endl;
  cout<<"3 - You can't be redeemed, I have to kill you"<<endl;
  cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl<<endl;
  int diag;
  
while(diag != 2){
  int diag;
  cin>>diag;
switch(diag){
  case 1: cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
  cout<<"Thanos: Are you that stupid?, you can't just double the universal resource, civilized creature will use more and more resource unstoppablely"<<endl;
    cout<<"Kenny: I'm sorry, I'm just a simple man"<<endl;
     cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl<<endl;
  break;
  
  case 2: cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
  cout<<"Thanos: You are right, I need to actually help unprivileged people who cannot access the resource instend"<<endl;
    cout<<"Thanos: Thank you so much for the idea, I will do my best to help you"<<endl;
    cout<<"Percival: No problem Thanos, let's play Fortnite and solve world hunger together"<<endl;
     cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl;
  break;

  case 3: cout<<"╔════════════════════════════════════════════════════════════════════════╗"<<endl;
  cout<<"Xerxes: No bro, we can't just kill him, it's immorral"<<endl;
  cout<<"Kenny: I guess so, I'm sorry"<<endl;
   cout<<"╚════════════════════════════════════════════════════════════════════════╝"<<endl<<endl;
  break;
     }
  if(diag == 2) break;
   }
}//call des for A
