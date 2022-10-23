#include <iostream>
#include <vector>
using namespace std;

void ask(string s){
  cout << "[*]Is Your Character " << s <<"?\n";
}

void characteris(string s){
  cout << "The character you have choosen is " << s << "\n";

}

int main()
{
  vector <string> name_list = {"Adolf Hitler","Sheikh Mujibur Rahman","Jahir Raihan","Dennis Ritchie","Bill Gates", "Jeff Bejos", "Lionel Messi","Einstein", "Nicola Tesla", "Mark Zuckerberg", "Steve Jobs", "Sheikh Hasina","Angellina Jolly", "Shakib Al Hasan","Virat Kohli", "Mother Teresa"};

  for (int i = 0; i < name_list.size(); i++){
    cout << "[" << i + 1 << "]" << name_list[i] << "\n";
  }
  cout  << "\n";
  cout << "Press 1[YES] or 0[NO]" << endl;
  int choice;
  ask("Male");
  cin >> choice;

  if (choice){
    ask("alive");
    cin >> choice;
    if(choice)//if alive
    {
      ask("a player");
      cin >> choice;
      if(choice)// if a player
      {
        ask("FootBall Player");
        cin >> choice;
        if (choice)//if football player
        {
          characteris("Lenonel Messi");
        }//football palyer end;
        else{
          ask("an allrounder");
          cin >> choice;
          if(choice) {
            characteris("Shakib Al Hasan");
          } else {
            characteris("Virat Kohli");
          }
        }//cricket player

      }//player end;
      else // if not player
          {
            ask("an BusinessMan");
            cin >> choice;
            if(choice){  //bussinessman
                ask("Tech Related");
                cin >> choice;
                if(choice) { // if tech related
                    ask("have any relaion with Microsoft");
                    cin >> choice;
                    if (choice) { //if Microsoft
                        characteris("Bill Gates");
                    }// if Microsoft end;
                    else{ // makrzukarberg
                          ask("have any relation with Facebook");
                          cin >> choice;
                          if(choice) {
                            characteris("Mark Zuckerberg");
                          }
                          else {
                            characteris("Jeff Bejos");
                          }
                    }// mark endl;

                }//tech related end
                else{ // not tech related
                      // under construction
                }
            }//bussinessman end;
            else{ // if not BusinessMan
                  // under construction;
            }
          }// if not player end;
    }
    else//if dead
    {
      ask("was a scientist");
      cin >> choice;
      if (choice) { // if scientist;
        ask("from America");
        cin >> choice;
        if (choice) { //if America
          ask("was Tech related");
          cin >> choice;
          if(choice) {
            characteris("Dennis Ritchie");
          } else {
            characteris("Nicola Tesla");
          }
        }// America end;
        else { // if not america;
          characteris("Einstein");
        }// not america end;

      }//scientist end;
      else{ // if not scientist;
          ask("was businessman");
          cin >> choice;
          if(choice) {
            characteris("Steve Jobs");
          } else {
            ask("was a politicaian");
            cin >> choice;
            if (choice){ // if politicaian
                    ask("was an dictator");
                    cin >> choice;
                    if(choice) {
                      characteris("Adolf Hitler");
                    } else {
                      characteris("Sheikh Mujibur Rahman");
                    }
            }
            else{ // if not politicaian;
                characteris("Jahir Raihan");
            }
          }
      }
    }// if dead end;
  }

  else { // if not male 
      ask("alive");
      cin >> choice;
      if(choice) {
        ask("is an actor");
        cin >> choice;
        if(choice) {
          characteris("Angellina Jolly");    
        } else {
          characteris("Sheikha Hasina");
        }
      }
      else {
          characteris("Mother Teresa");
      }    
      return 0;
  }
  return 0;
}
