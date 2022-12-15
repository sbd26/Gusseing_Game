#include <iostream>
#include <vector>
using namespace std;

void ask(string s){
  cout << "[*]Is Your Character " << s <<"?\n";
}

void characteris(string s){
  cout << "The character you have choosen is " << s << "\n";
}
void nomatch(){
  cout << "No Match Found Please Try Again" << "\n";
}


void Cartoon(){
  int ans;
  ask("male");
  cin >> ans;
  if ( ans ){
    //if male;
    ask("cat");
    cin >> ans;
    if ( ans ){
      // if cat;
        ask("has red nose");
        cin >> ans;
        if (ans){
          ask("Super Power");
          cin >> ans;
          if(!ans)
          characteris("Oggy");
          else{
            characteris("Doreamon");
          }
        }
        else
        {
          characteris("Tom");
        }
    } // cat end

    else{
      // if not cat
      
      ask("Human");
      cin >> ans;
      if (ans){
        //if human;
        ask("can run fast");
        cin >> ans;
        if (ans){
          //if run fast then ninja hatori and ben10
          ask("any watch");
          cin >> ans;
          if (!ans){
            //ninja hatori
            ask("Belong From Ninja Family");
            cin >> ans;
            if (ans){
              characteris("Ninja Hatori");
            }
            else
            {
              cout <<"Does Your Character Like Laddu?" << "\n";
              cin >> ans;
              if (!ans){
                cout << "No Match Found Please Try Again" << "\n";
              }
              else
                characteris("Chota Bheem");
            }
          }
          else{
            //if not watch
            ask("Has Alien Powers");
            cin >> ans;
            if (!ans){
              cout << "No Match Found Please Try Again" << "\n";
            }
            else{
              ask("can Transfrom into any Alien");
              cin >> ans;
              if (!ans){
                cout << "No Match Found Please Try Again" << "\n";
              }
              else
                characteris("Ben10");
            }
          }
        }//if run fast end ninja hatori and ben 10
        else{
          ask("can make anyone happy");
          cin >> ans;
          if (!ans){
            cout << "No Match Found Please Try Again" << "\n";
          }
          else{
            //trying for mr bean;
            ask("has any friend");
            cin >> ans;
            if (!ans){
              cout << "No Match Found Please Try Again" << "\n";
            }
            else{
              ask("has any Doll");
              cin >> ans;
              if (ans)
                characteris("Mr Bean");
              else
                cout << "No Match Found Please Try Again" << "\n";
            }

          }
        }
      } // human end;
      else{
        ask("is Brown Color");
        cin >> ans;
        if (ans != 1){
          ask("Can Figh");
          cin >> ans;
          if (!ans)
            nomatch();
          else{
            ask("Know KungFu");
            cin >> ans;
            if(!ans)
              nomatch();
            else
            {
              ask("Belong from Panda");
              cin >> ans;
              if(ans)
              characteris("Poo");
              else
                nomatch();
            }
          }
        }
        else{
          ask("a Rat");
          cin >> ans;
          if (ans){
            characteris("Jerry");
          }
          else{
            ask("can Talk");
            cin >> ans;
            if (!ans) nomatch();
            else{
              ask("a Tiger");
              cin >> ans;
              if (!ans) nomatch();
              else
                characteris("Halum");
            }
          }
        }
      }

    }





  } // if male endl;

  else{
    // if not male
    ask("Belong From Village");
    cin >> ans;
    if (!ans)
      nomatch();
    else{
      ask("is sponsored By Unicef");
      cin >> ans;
      if (!ans)
        nomatch();
      else{
        characteris("Meena");
      }
    }

  }


}

void RealCharacter(){

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
      return;
  }
}

int main()
{
  RealCharacter();
  Cartoon();
}
