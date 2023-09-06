# Game of Life
## Introducción
El juego de la vida (Conway's game of life) es un juego de cero jugadores, el cual determina sus próximos estados a partir de un estado inicial y sin necesidad de una interacción externa. Fue creado por el matemático John Conway en 1970.

![MostrarGif](GOF2gif.gif)


##Reglas
Las celdas se ajustan a las siguientes reglas:
- Nace: Si una célula muerta tiene exactamente 3 células vecinas vivas "nace" (es decir, al turno siguiente estará viva).
- Muere: una célula viva puede morir por uno de 2 casos:
- - Sobrepoblación: si tiene más de tres vecinos alrededor.
- - Aislamiento: si tiene solo un vecino alrededor o ninguno.
- Vive: una célula se mantiene viva si tiene 2 o 3 vecinos a su alrededor.
  
## Cómo jugar
Para poder jugar, se utilizan las siguientes teclas del teclado:
- S(del inglés "Slower"): Ralentiza la velocidad a la que la simulación cambia de estado.
- D (del inglés "Delete"): Borra el estado actual de la simulación.
- F (del inglés "Faster"): Acelera la velocidad a la que la simulación cambia de estado.
- P (del inglés "Pause"): Pausa/despausa la simulación.
- Botón izq. del mouse: activa/desactiva la celda que se presiona.
  
ACLARACIÓN: El botón izq. y la tecla 'D' solo funcionan cuando el juego está en pausa.
