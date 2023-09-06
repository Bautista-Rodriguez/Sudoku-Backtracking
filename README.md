# Sudoku - Generador y solucionador
## Introducción
Este programa se encarga de generar y solucionar distintas posiciones de un Sudoku con el algoritmo de `Backtracking`.
Sudoku es un juego matemático, diseñado a finales de la década de 1970.

![MostrarImg1](readme-rsc/Sudoku0.png)

## Reglas
El objetivo del Sudoku es rellenar una cuadrícula de 9x9 celdas (dividida en regiones de 3x3 celdas) con los números del 1 al 9 de manera tal que:
- No hayan números repetidos en una misma fila.
- No hayan números repetidos en una misma columna.
- No hayan números repetidos en una misma región.
  
## Estructura del código
El código se encarga de generar y resolver distintas posiciones de un Sudoku.
- Para resolver una posición, el programa utiliza la técnica de `Backtracking`, 
- Para generar una posición, se encarga de ordenar de manera aleatoria un vector que contiene los números del 1 al 9. Luego, inserta este vector en una de las primeras tres filas de la cuadrícula. Realiza la misma operación para las siguientes seis filas del Sudoku (de manera que no se repitan números en las columnas) y resuelve la posición. Luego de resolverla, se encarga de eliminar una cierta cantidad de números de la cuadrícula de forma aleatoria.
