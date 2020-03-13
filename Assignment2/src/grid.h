#include <iostream>
using namespace std;

class Grid{
public:

  //default constructor
  Grid();
  Grid(int rows, int columns);
//destructor
  ~Grid();

  //variable declaration
  int rowSize;
  int columnSize;
  char dash;
  //2D array
  char **myGrid;

  //functions
  void printOut();


};
