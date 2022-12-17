#include "helper.hpp"

int main(){
  cout << "#########################################################################" << "\n";
  cout << "#Press [1] For Character, [2] for Cartoon, [3] for Places, [0] for Quit #" << "\n";
  cout << "#########################################################################" << "\n";

  while (1){
  cout << "Which Part You Wanna Play?" << "\n";
  int choice;
  cout << "=> ";
  cin >> choice;
  if (choice == 1)
    RealCharacter();
  else if (choice == 2)
    Cartoon();
  else if (choice == 3)
    Place();
  else
    cout << "Bad Choice" << "\n";

  cout << "Do You Wanna Play Again?" << "\n";
  cout << "=> ";
  int ans;
  cin >> ans;
  if (!ans)
    break;
  }
}
