# SudokuSolver
Algoritmo que resuelve el Sudoku que le pases como entrada
### Ejecutar Programa

Para ejecutar el programa debemos de descargar el código fuente y compilarlo (en mi caso uso g++).

```bash
$ g++ sudokuSolver.cpp -o sudokuSolver 
```

Una vez compilado, tan solo tenemos que ejecutarlo

```bash
./sudokuSolver
```

### Datos de Entrada

Cuando ejecutamos el programa, la consola preguntará que introduzcas la primera fila del sudoku *los **huecos** están representados con **0.***

Un ejemplo de entrada sería 

```bash
-Introduzca los valores de la fila 1 (los 0 representan los huecos):530070000
-Introduzca los valores de la fila 2 (los 0 representan los huecos):600195000
-Introduzca los valores de la fila 3 (los 0 representan los huecos):098000060
-Introduzca los valores de la fila 4 (los 0 representan los huecos):800060003
-Introduzca los valores de la fila 5 (los 0 representan los huecos):400803001
-Introduzca los valores de la fila 6 (los 0 representan los huecos):700020006
-Introduzca los valores de la fila 7 (los 0 representan los huecos):060000280
-Introduzca los valores de la fila 8 (los 0 representan los huecos):000419005
-Introduzca los valores de la fila 9 (los 0 representan los huecos):000080079
```

equivalente al sudoku mostrado en la imagen:

![https://upload.wikimedia.org/wikipedia/commons/f/ff/Sudoku-by-L2G-20050714.svg](https://upload.wikimedia.org/wikipedia/commons/f/ff/Sudoku-by-L2G-20050714.svg)

### Datos de Salida

Una vez introducido todos los datos, la solución del sudoku se mostrará automáticamente en la terminal.
