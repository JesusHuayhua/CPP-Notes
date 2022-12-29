<center> <h1> Estructuras De Control </h1></center>

Las estructuras de control más utiliziadas son las siguientes:

- [Selectivas](#selectivas)
  - [Ternary Operators](#ternary-operators)
  - [Switch](#switch)
- [Iterativas](#iterativas)
  - [Itertiva con entrada controlada](#itertiva-con-entrada-controlada)
  - [Itertiva con salida controlada](#itertiva-con-salida-controlada)
  - [Itertiva con iteración controlada](#itertiva-con-iteración-controlada)
- [Logica basic](#logica-basic)


# Selectivas

Tal como su nombre nos lo indica, nos permite realizar una serie de acciones
siempre que se realize un caso u otro:

```C++
// caso 1
if (condition) { // The value of condition is 1
    // content
} else {// The value of expression is condition 1
    // content
}
// caso 2
if (condition1) { // The value of condition1 is 1
    // content
} else if (condition2) {// The value of condition2 is 1 and condition1 is 0
    // content
} // Ninguno de las expressiones es correcta
// content
```
> Caso2: En el caso2 si tanto la condition1 y la condition2 tenga el valor de 1; solo ingresaría a la condition1.

```CPP
#include <iostream>

int main(){
    int var = 5;
    if (var == 10) {
        std::cout << "The value of var is 10" << std::endl;
    } else {
        std::cout << "The value of var is different of 10" << std::endl;
    }
    var = 10;
    if (var < 5) {
        std::cout << "The value of var is minor 10" << std::endl;
    } else if (var > 10) {
        std::cout << "The value of var thant major 10" << std::endl;
    }
    
    // Example negation
    if (var != 10) {
        std::cout << "Negation complete " << std::endl;
    } else {
        std::cout << "Negation no complete " << std::endl;
    }
    
    //Example or
    if (var < 5 || var > 10) {
        std::cout << "Condition OR complete" << std::endl;
    } else {
        std::cout << "Condition OR no complete" << std::endl;
    }

    //Example and
    int var 2 = 10;
    if (var > 5 && var2 < 8) {
        std::cout << "Condition AND complete" << std::endl;
    } else {
        std::cout << "Condition AND no complete" << std::endl;
    }

    return 0;
}
```

## Ternary Operators

Esta condición es muy usada cuando necesitamos asignar el valor a una variable,
dependediendo del caso que se valla a realizar; o para condiciones muy pequeña y
no ocupe demasiado espacio al lmomento de escribir el código.

```CPP
// Sintaxis
                             true       false
<variable> = <condition> ? <result1> : <result2>
```

> La `variable` tomara el valor de `result1`, si `condition` es verdadera, en caso
> contrario tomará el valor de `result2`.

```CPP
//Example 1
int var1 = 6;
var1 = var1 > 5 ? 8 : 4;

//Example 2
int number = 15
bool itsNumber15 = number == 15 ? true : false;

//Example 3.1
number == 15 ? std::cout << "Number is 15"<< std::endl : std::cout << "Number is not 15";
//Example 3.2
number == 15 
? std::cout << "Number is 15"<< std::endl  // Verify don't terminate this line whit ';'
: std::cout << "Number is not 15";
```

## Switch

Al igual que en el caso del `if...else`, también sirve para poder determinar
que es lo que se va a realizar; dentro de unos posibles casos:

```CPP
// Sintaxis
switch(/*test value*/){
    case /*case1*/:
        //body
        break;
    case /*case2*/:
        //body
        break;

        ...

    case /*casen*/:
    default:
        // body
        break;
}
```
Ejemplos:

```CPP
int a = 5;
switch(a){
    case 1:
        ...
        break;
    case 2:
        ...
        break;
    case 4:
        ...
        break;
    case 5:
        ...
        break;
    default:
        ...
        break;
}
```

El uso del `break` sirve para indicar que se va a detener y realizar dicho caso;
en caso no se use se pasará al siguiente `case` que si lo contenga.

El uso del `default`; es el caso que se va a realizar en caso no se cumpla
ninguno de los casos a evaluar; si no existe el caso `default`; simplemente se pasará.

```CPP
int a = 5;
switch(a){
    case 1:
    case 2:
    case 3:
        std::cout << "The possible value of a is(1,2,3): ";
        break;
    case 4:
    case 5:
        function(a);
        break;
    default:
        ...
        break;
}
```
 
 > Un problema con el `switch`; es que no se puede tener llamar a funciones para evaluar
 > el caso; o utilizar expresiones lógicas.

```CPP
// Examples of compiler errors
int a = 5;
switch(a){
    case 1 || 2://error
        ...
        break;
    case function(a)://error
        ...
        break;
}
```

> Pero si se puede utilizar expresiones lógicas, para el caso a evaluar.

```CPP
// Examples of compiler errors
int a = 5;
switch(evaluation(a,...,)){
    case 12.5:
        ...
        break;
    case 'V':
        ...
        break;
    case 'F':
        ...
        break;
    case true:
        ...
        break;
    case false:
        ...
        break;
    case "NAME":
        ...
        break;
    default:
        ...
        break;
}
```
# Iterativas

Las sentencias iterativas son las que nos permite desarrollar la misma acción
una cantidad de `n` veces.

Cuando vallamos a realizar alguna iteración, tenemos que definir cuantas veces
se va a iterar; sino se estaría iterando infinamente, generando un error al momento
de ejecutar el programa.
## Itertiva con entrada controlada

```CPP
// Basic Sintaxis
<variable> // Initialized variable

while (<condition>) { // While the condition is true, se realizará la iteración
    // body
    // iteration execution
}
```
La `condición` tiene que ser verdadera para que se pueda ingresar y ir repetiendo
continuamente, hasta que `condición` sea falsa.

```CPP
//Case 1
int i = 0;
while ( i < 10) {
    std::count << "The value of i is: " << i << std::endl;
    i = i + 1;
    // Aumentamos el valor de 'i', para que se pueda salir de la iteración
}

//Case 2
int i = 10;
while ( i > 0) {
    std::count << "The value of i is: " << i << std::endl;
    i = i - 1;
    // Disminuimos el valor de 'i', para que se pueda salir de la iteración
}
```

## Itertiva con salida controlada

```CPP
// Sintaxis
<variable> // Initialized variable

do {
    //body
    // iteration execution
} while ( <condition> );
```

La tener la condición de salida al final, significa que como mínimo se va a tener
que ingresar como mínmo 1 vez, a la iteración.

```CPP
// Example 1
int i = 0;
do {
    std::count << "The value of i is: " << i << std::endl;
    i = i + 1;
} while ( i < 10 );
// Example 2
do {
    std::count << "The value of i is: " << i << std::endl;
    i = i - 1;
} while ( i > 0 );
```
## Itertiva con iteración controlada

```CPP
// Syntaxis
for ( <initializatin statement>; <condition>; <iteration execution>) {
    // body
}
```

Esta es la iteración más utilizada, ya que nos permita definir la cantidad exacta
de la cantidad de iteración, sin tener que preocuparnos demasiado de que la iteración
se valla a detener.

```CPP
// Example 1
for (int i = 0; i < 10; i++){
    std::cout << "The value of i  is: " << i;
}

// Example 2
for (int i = 10; i > 0; i--){
    std::cout << "The value of i  is: " << i;
}
```

> Consideración, la variable 'i', solo existe durante la iteración.

# Logica basic

Las condiciones para todas las estructuras de contro, son condiciones lógicas,
osea del tipo booleano.

<center>
<div>

|   p   |   q   |  !p   | p \|\| q | p && q |
| :---: | :---: | :---: | :------: | :----: |
|   v   |   v   |   f   |    v     |   v    |
|   v   |   f   |   f   |    v     |   f    |
|   f   |   v   |   v   |    v     |   f    |
|   f   |   f   |   v   |    f     |   f    |

</div>
</center>

> Es recomendable recordar algunas expresiones de la lógica booleana, así como las 
> leyes lógicas para que se pueda tener realizar reducciones a la condición y
> sea más facil entender lo que se necesita.
