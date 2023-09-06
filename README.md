# Wordle - Clon
## Introducción
Wordle ([enlace a la página del juego](https://www.nytimes.com/games/wordle/index.html)) es un juego de adivinanza de navegador, en el cual el jugador debe adivinar la palabra secreta realizando suposiciones. Fue desarrollado por Josh Wardle en 2021.

![MostrarImg1](readme-rsc/Wordle1.png)

## Reglas
El jugador tiene seis intentos para adivinar la palabra. Al introducir una suposición, las letras de la palabra cambiarán de color de acuerdo con las siguientes reglas:
- Verde: Si la palabra secreta contiene la letra y además se encuentra en el lugar correcto, la letra cambia de color a verde.
- Amarillo: Si la palabra secreta contiene la letra, pero se encuentra en el lugar incorrecto, la letra cambia de color a amarillo.
- Negro: Si la palabra secreta no contiene la letra, esta cambiará de color a negro.

ACLARACIÓN: siguiendo las reglas del juego original, cuando la palabra insertada tenga una letra repetida y esta letra se encuentre en la palabra solo una vez (por ejemplo, armar y vista), se contará una sola de estas letras al cambiar el color a verde/amarillo, ya que solo aparece una vez en la palabra secreta (en el caso del ejemplo, solo cambiaría de color a amarillo la primera 'a' de la palabra "armar", la segunda cambiaría a color negro).
  
![MostrarImg2](readme-rsc/Wordle2.png)

## Cómo jugar
Se utiliza el teclado para introducir las distintas letras para formar la palabra, pudiendo solo insertar letras. Por conveniencia, se omitió el uso de palabras con la letra 'ñ', y las vocales no pueden llevar tilde (puede haber palabras con tilde como "había", pero al escribirla debe hacerse sin tilde). Para borrar una letra, debe utilizarse la tecla de backspace/retroceso. Al terminarse los intentos o adivinar la palabra, se habilitará un botón de reinicio, que debe ser presionado con el mouse.
  
## Estructura del código
El código se basa en el patrón de arquitectura MVC. 
- Modelo: El modelo se encarga de retornar y cambiar el estado actual de la simulación, así como los datos del tamaño de las celdas, la pantalla, y otros.
- Vista: La vista se encarga de actualizar el estado del modelo una vez que este cambia.
- Controlador: El controlador se encarga de recibir las entradas de usuario y manejarlas para cambiar la simulación. Cuando la simulación debe cambiar, envía un mensaje al modelo para actualizar las celdas, así como un mensaje a la vista para actualizar la interfaz de usuario.

(https://www.diccionariodedudas.com/)

La vista utiliza la biblioteca gráfica Swing para generar la interfaz de usuario.
