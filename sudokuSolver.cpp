#include <iostream>
#include <string>
using namespace std;

int sudoku[9][9];
void welcome();
void printSudoku();
void inputSudoku();
bool mismaFila(int fila, int columna, int num);
bool mismaColumna(int fila, int columna, int num);
bool mismoBloque(int fila, int columna, int num);
bool solveSudoku(int fila, int columna);

int main(){
    int fila = 0;
    int columna = 0;

    welcome();
    inputSudoku();
    printSudoku();
    solveSudoku(fila,columna);
    cout << endl << "=== SOLUCION ===";
    printSudoku();
    return 0;
  }

void inputSudoku(){
  string cadena;
  string cadena_vacia = "000000000";
  int cadena_i;
  int tam_cadena;
  char caracter;
  for (int i = 0; i < 9; i++) {
    cout << "Introduzca los valores de la fila " << i + 1 << " (los 0 representan los huecos): ";
    cin >> cadena;
    tam_cadena = cadena.size();
    cadena = cadena + cadena_vacia;
    cadena = cadena.substr(0,cadena.length()-tam_cadena);
    cadena_i = atoi(cadena.c_str());
    while(cadena_i<0 || cadena_i > 987654321){
      cout << "Introduzca de nuevo los valores de la fila " << i + 1 << " (los 0 representan los huecos): ";
      cin >> cadena;
      tam_cadena = cadena.size();
      cadena = cadena + cadena_vacia;
      cadena = cadena.substr(0,cadena.length()-tam_cadena);
      cadena_i = atoi(cadena.c_str());
    }
    for(int j= 0;j<9;j++){
      caracter = cadena[j];
      sudoku[i][j] = caracter - '0';
    }
  }
  cout << endl;
}

void printSudoku(){
  cout << endl;
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      cout << sudoku[i][j] << " ";
    }
    cout << endl;
  }
}

bool mismaFila(int fila, int columna, int num){
  for (int i = 0; i < 9; i++) {
    if (sudoku[i][columna] == num) {
      return true;
    }
  }
  return false;
}

bool mismaColumna(int fila, int columna, int num){
  for (int j = 0;j < 9; j++) {
    if (sudoku[fila][j] == num) {
      return true;
    }
  }
  return false;
}

bool mismoBloque(int fila, int columna, int num){

  if(fila < 3){
    fila = 0;
  }else if(fila < 6){
    fila = 3;
  }else {
    fila = 6;
  }

  if(columna < 3){
    columna = 0;
  }else if(columna < 6){
    columna = 3;
  }else {
    columna = 6;
  }

  for (int i = fila; i < fila+3; i++) {
    for (int j = columna; j < columna+3; j++) {
    if (sudoku[i][j] == num) {
      return true;
    }
  }
}
  return false;
}


bool solveSudoku(int fila, int columna){
  int num = 1;
  int filaAuxiliar = 0;
  int columnaAuxiliar = 0;

  if(sudoku[fila][columna] != 0){
    if(fila == 8 && columna == 8){
      return true;
    }

    if(fila < 8){
      fila++;
    }else{
        if(columna < 8){
          fila = 0;
          columna++;
        }
    }

    if(solveSudoku(fila,columna)){
      return true;
    } else {
      return false;
    }
  }

  if(sudoku[fila][columna] == 0){
    while(num<10){
      if(!mismaFila(fila,columna,num) && !mismaColumna(fila,columna,num) && !mismoBloque(fila,columna,num)){
        sudoku[fila][columna] = num;
        if(fila == 8 && columna == 8){
          return true;
        }

        if(fila < 8){
          filaAuxiliar = fila + 1;
        }else{
          if(columna < 8){
            filaAuxiliar = 0;
            columnaAuxiliar = columna + 1;
          }
        }
        if(solveSudoku(filaAuxiliar,columnaAuxiliar)){
          return true;
        }
      }
      num++;
    }
    sudoku[fila][columna] = 0;
    return false;
  }

}
 void welcome(){

cout << "====================================================" << endl <<
" _____       _     _       _____     _" << endl <<
"|   __|_ _ _| |___| |_ _ _|   __|___| |_ _ ___ ___" << endl <<
"|__   | | | . | . | '_| | |__   | . | | | | -_|  _|" << endl <<
"|_____|___|___|___|_,_|___|_____|___|_|__/|___|_|" << endl <<
"================ made by DavidRC ===================" << endl
<< endl;
 }
