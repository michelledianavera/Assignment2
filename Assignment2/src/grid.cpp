#include <iostream>

using namespace std;


Grid::Grid(int rows, int columns){
  //default constructor]
  rowSize = rows;
  columnSize = columns;
  dash = '-';
  myGrid = new char*[rowSize];
  for (int i = 0; i < rowSize; ++i){

    myGrid[i] = new char[columnSize];
  }

  for(int i = 0; i < rowSize; i++){
    for (int j = 0; j < columnSize; j++){
      myGrid[i][j] = dash;

    }

  }
}
Grid::~Grid(){

  delete myGrid;
}






void Grid::printOut(){
  for (int i = 0; i < rowSize; ++i)
    {
        for (int j = 0; j < columnSize; ++j)
        {
           cout << myGrid[i][j] << ' ';
        }
        cout << endl;
    }

}
