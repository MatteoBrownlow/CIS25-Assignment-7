#include <iostream>
using namespace std;

int main(){
  char array[3][20];
  cout << "Enter a name: " << endl;
  cin >> array[0];
  cout << "Enter a second name: " << endl;
  cin >> array[1];
  cout << "Enter a third name: " << endl;
  cin >> array[2];
  for(int i = 0; array[0][i] != '\0'; i++){
    cout << array[0][i];
  }
  return 0;
}
