# SEMANA 2

## Tipos de operaciones en un TAD

### .Operaciones constructoras: 
Generan todos los datos del tipo que se esta especificando.

---

### .Operaciones observadores: 
Devuelven informacion sobre los datos que se estan especificando. Devuelve un tipo de dato distinto.

---
### .Operaciones modificadoras: 
El resultado es un dato del mismo tipo que se especifica. 

---



``` 
especificacion NATURALES
usa BOOLEANOS
tipos nat
operaciones

es-par? : nat       -> bool    Observadora
min     : nat nat   -> nat     Modificadora
_mod_   : nat nat   -> nat     Modificadora

variables 
    n, m : nat

ecuaciones 
    cero + m = n
    suc(n) + m = suc(n+m)   
```
</br>

## Codigo en c++
> Crear un nuevo tipo de dato
```c++
typedef struct Booleano {
    int a;
}



```

---
---
</br>

## Estructura de datos
. Es una forma de organizar un conjunto de datos en la memoria de la computadora.

 Pueden ser

* Estaticas: </br>
    Se le asigna de forma preliminar
     
* Dinamicas: </br>
    No se le asigna espacio de memorio de forma preliminar, a medida de que se crea se le asigna memoria

* Lineales: </br>
    Los datos estan uno a continuacion de otro. 

* No lineal: </br>
    Un mismo elemento puede estar conectado con otros a la vez. (Arboles y grafos).

</br>

---
### Listas enlazadas

. Es una estrucutra de datos lineal, formato por un conjunto de elementos llamados **nodos**.

 Pueden ser
 * Listas simplemente enlazadas

    Esta compuesta por nodos.

</br>

<img src = "https://3.bp.blogspot.com/-6EUgwAAj1kU/ThZFDH5QJOI/AAAAAAAAAEM/Rae9N-EvcBo/s1600/enlace+simple.jpg" width = "400px">

> Si pierdes la direccion del primer nodo, fuiste.


#### Cosas pendientes por escribir
* [ ] El codigo en c++ de la creacion de una variable
* [ ] Revisar el codigo que el profe aun no manda
* [ ] Entender las listas enlazadas mediante el codigo 