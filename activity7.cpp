#include <iostream>
using namespace std;

int main(){
  string name1, name2, name3;
  cout << "Enter three names: " << endl;
  cin >> name1;
  cin.ignore(256, ' ');
  cin >> name2;
  cin.ignore(256, ' ');
  cin >> name3;
  cin.ignore(256, ' ');
  return 0;
}
