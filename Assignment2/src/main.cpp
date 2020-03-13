#include <iostream>
#include "grid.h"
#include "grid.cpp"
using namespace std;


int main(int argc, char **argv){

  cout << "Welcome to the game of life!\n";
  cout << "How many rows would you like? \n";
  int rows;
  int columns;
  cin >> rows;
  cout << "How many columns would you like? \n";
  cin >> columns;
  cout << rows << "\n";
  cout << columns << "\n";

  Grid *g = new Grid(rows,columns);
  g->printOut();


}
