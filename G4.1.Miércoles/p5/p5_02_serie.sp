Es to es  una  demo<EOL> '\n' -> 6 espacios

Léxico
  car: Carácter;
  contador: Entero;
Algoritmo
  Leer(car);
  Mientras car != <EOL> Hacer
     Si car = ' ' entonces
        contador <- contador + 1;
     Fin_Si   
     Leer(car);
  Fin_mientras
Fin.


Léxico
  car: Carácter;
  contador: Entero;
Algoritmo
  contador <- 0;
  Leer(car);
  Repetir
     Leer(car);
     Si car = ' ' entonces
        contador <- contador + 1;
     Fin_Si   
  Hasta_que (car=EOL)
Fin.
