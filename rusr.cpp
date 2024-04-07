#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <string>

using namespace std;

int main() {

  
  string again;

  do{

    srand(static_cast<unsigned int>(time(0)));
    int random_num = rand();


    int bullet = (random_num % 6) + 1;
    int amount = 0;
    string start;
    string stop = "y";
    int money = 0;
     
    

    cout << "********RUSSIAN ROULETTE********" << endl ;

    cout << "\nYou will get 1000$ for each shot!" << endl;
    cout << "Start game?(y/n): " << endl;
    cin >> start;

       if(start != "y"){
        cout << "Okay. Bye." << endl;
        
       }

      if(start == "y")
      {
        cout << "\nSpinning the drum..." << endl;
        sleep(2);
    
    
        while(stop == "y"){
        cout << "Shoot?(y/n): " << endl;
        cin >> stop;
        

      

      if(stop != "y"){
        cout << "\nBye. Your earned money:  " << endl << money << "$" << endl;
      }

      else{
        cout << "*tick..*" << endl;
        amount++;
        }

     
       if(amount == bullet){

        cout << "\n **BANG** \n";
        cout << "\nYou died :(\n";
        stop = 'j';
        sleep(1);
        cout << "Try again?(y/n): " << endl;
        cin >> again;   
        if(again != "y"){
        cout << "Ok. Bye!" << endl;
      }
       
      }
      else if(stop == "y"){
        cout << "You survived!" << endl;
        sleep(1);
        cout << "+1000$\n";
        money += 1000;
      
        }
       }
      }
     } while(again == "y");

      
      
     system("pause");

     return 0;
}