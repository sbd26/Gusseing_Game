#include <iostream>
#include <vector>
using namespace std;



void ask(string s){
  cout << "Is Your Character " << s <<" ?\n";
}

void characteris(string s){
  cout << "Your Character is " << s << "\n";

}


int main()
{
  vector <string> name_list = {"Bill Gates","Lionel Messi", "Mark Zuckerberg", "Steve Jobs", "Sheikh Hasina", "Shakib Al Hasan"};

  for (int i = 0; i < name_list.size(); i++){
    cout << name_list[i] << " ";
  }
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
          cout << "Your character is Lionel Messi" << endl;
          return 0;
        }//football palyer end;
        else{
          cout << "Your Character is Shakib Al Hasan" << endl;
          return 0;
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
                          characteris("Mark Zuckerberg");
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
      cout << "Your character is Steve Jobs" << endl;
      return 0;
    }

  }



  return 0;
}
