# CLASE 1

## Tipos de operaciones en un TAD

### .Operaciones constructoras: 
Generan todos los datos del tipo que se esta especificando.

---

### .Operaciones observadores: 
Devuelven informacion sobre los datos que se estan especificando.

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

```c++
typedef struct Booleano{
    int a;
}



```