<center><h1> Variables </h1></center>

- [Tipos Fundamentales](#tipos-fundamentales)
  - [bool](#bool)
  - [char](#char)
    - [Tipos de `char`](#tipos-de-char)
    - [Secuencia de escape](#secuencia-de-escape)
  - [Int](#int)
  - [Floating-point](#floating-point)
  - [Void](#void)
- [Tipos utilizando operadores declaradores](#tipos-utilizando-operadores-declaradores)
  - [Pointer types](#pointer-types)
  - [Array types](#array-types)
- [Tipos definidos por usuario](#tipos-definidos-por-usuario)
  - [Data Structure](#data-structure)
  - [Clases](#clases)
  - [Enumeration types](#enumeration-types)
- [Inicializaciones](#inicializaciones)
  - [1. Inicialización por asignación](#1-inicialización-por-asignación)
  - [2. Inicialización por constructor](#2-inicialización-por-constructor)
  - [3. Inicialización por lista](#3-inicialización-por-lista)


# Tipos Fundamentales
 ## bool

El tipo `bool` puede tener o de estos 2 valores `true` o `false`. Las variables de tipo `bool` se recomienda usar para expresar resultados de operaciones lógicas.

Por definición, si quisieramos trabajar con una variable de tipo `bool`; si:

- Es `true`, retornará un 1;
- Es `false`, retornará un 0;

Y tiene un tamaño de 1 byte.

## char

Existen varios set de caracteres y codificación de juegos de caracteres en uso. C++ proporciona una variedad de tipos de caracteres que reflejan esta variedad.

- El comun para América es es código [ASCII](https://elcodigoascii.com.ar/)
- Otro tipo es el código [UNICODE](https://home.unicode.org/)
- Entre otros más

### Tipos de `char`

| Tipo          | Significado                                                                                                                       |
| ------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| char          | Es el char usado por defecto                                                                                                      |
| signed char   | Nos garantiza el signo de la variable, permitiendo contener valores positivos y negativos                                         |
| unsigned char | Similar a char, pero se garantiza que no tiene signo                                                                              |
| wchar_t       | Nos permite soportar el conjunto de caracteres mayores a los del código *ASCII*, y para la implementación de un conjutno regional |
| char16_t      | Tipo para contener un conjunto de caracteres de 16-bit, como UTF-16                                                               |
| char32_t      | Tipo para contener un conjunto de caracteres de 32-bit, como UTF-32                                                               |

> El tipo `char` realiza las mismas funciones que los tipos `signed` y `unsigned`
>
> Los últimos de tipos de `char`, serán vistos en el tema de alias
### Secuencia de escape

| Secuencia<br> de escape | Carácter representado | Significado                                                                   |
| :---------------------: | :-------------------- | ----------------------------------------------------------------------------- |
|           \n            | Salto de línea        | Nueva línea al momento de imprimir                                            |
|           \t            | Tabulador horizontal  | Mueve el cursor a la siguiente posición del tabulador horizontal              |
|           \b            | Retroceso             | Retrocede un espacio                                                          |
|           \r            | Retorno de carro      | Regrese el cursor al inicio de la línea actual y empieza a escribir           |
|           \a            | Alerta                | Emite una alerta                                                              |
|           \\\           | Diagonal inversa      | Inserta el caracter `\\`                                                      |
|           \\'           | Comillas sencilla     | Inserta el signo de `'`                                                       |
|           \\"           | Comillas dobles       | Inserta el signo de `"`                                                       |
|          \nnn           | Número octal          | Se reemplaza el valor de `nnn` por el número que deseamos en base octal       |
|          \xhhh          | Número hexadecimal    | Se reemplaza el valor de `hhh` por el número que deseamos en base hexadecimal |
|           \0            | Carácter nulo         | Inserta el carácter `Null`, el cual se define con un valor de 0               |
|         \uxxxx          | Unicode(UTF-8)        | Inserta el carácter definido hexadecimalmente, definido es el conjunto UTF-8  |
|       \Uxxxxxxxx        | Unicode(UTF-16)       | Inserta el carácter definido hexadecimalmente, definido es el conjunto UTF-16 |

>Los 2 últimos, si se imprime en `std::cout` imprimirá el número definido en forma decimal; este tiene su propia `iostream` de impresión
>y se recomienda usar con el tipo `wchart_t`.
  
## Int

Tipo de datos, que nos permite representar los números enteros; al igual que con el tipo de dato `char`, también existen varios tipos de datos de tipo int.

| Tipo                                                                         |      Equivalencia      | Significador                                                         | Tamaño en bits |
| :--------------------------------------------------------------------------- | :--------------------: | -------------------------------------------------------------------- | :------------: |
| short <br> short int <br> signed short <br> signed short int                 |       short int        | Utilizado para valores pequeños y garantizando el signo              |       2        |
| unsigned short <br> unsigned short int                                       |   unsigned short int   | No nos garantiza el signo; por lo que, solo serán números positivos  |       2        |
| int <br> signed<br> signed int <br>                                          |          int           | El tipo más usado `int`                                              |       4        |
| unsigned <br> unsigned int                                                   |      unsigned int      | No nos garantiza el signo del tipo `int`                             |       4        |
| long <br> long int <br> signed long <br> signed long int                     |        long int        | Para poder agradanar el tamaño que puede almacenar la variable `int` |       4        |
| unsigned long <br> unsigned long int                                         |   unsigned long int    | No nos garantiza el signo                                            |       4        |
| long long <br> long long int <br> signed long long <br> signed long long int |     long long int      | Agrandamos el tipo de almacenamiento de la variable `int`            |       8        |
| unsigned long long <br> unsigned long long int                               | unsigned long long int | No nos garantiza el signo                                            |       8        |
 
También contamos con la librería `<cstdint>`; donde podemos encontrar más tipos `int`, tanto con signo como sin signo. Por ejemplo:
- int64_t => tipo int con 64 bits para almacenar valores
- uint_fast16_t => entero sin signo con exactamente 8 bits
- Y etc.
## Floating-point

Los tipos `floating-point` es la representación de los números de coma flotante.
La representación de estos números en un espacio de memoria fija del computador;
termina siendo algo complejo por la presición que se debe de tener para ciertos casos.

<center>
<div>

| Tipo        | Significador        | Tamaño en bits |
| :---------- | ------------------- | :------------: |
| float       | presición simple    |       4        |
| double      | doble presición     |       8        |
| long double | presición extendida |       8        |

</div>
</center>

## Void

Este tipo de variables, es algo especial; ya que no podemos definir objetos de tipo `void`. 
Utilizado para especificar que una función no devuelve ningún valor o como tipo
base para punteros a objetos de tipo desconocido.

 > Cuando void es usado como puntero nos permite apuntar a una dirección de memoria
 > en específica, y con un casteo nos permite convertir ese valor a un tipo anteriormente definido

# Tipos utilizando operadores declaradores

A parte de los tipos fundamentales, que hemos visto anteriormente, se puede
utilizar otros tipos de variables, que cuando son declarados, se utiliza ciertos
operadores declaradores.
 ## Pointer types
 
 Las variables de tipo punteros almacenan la dirección de memoria de otra variable
 anteriormente definida, siempre que sean del mismo tipo; y tiene 3 propósitos principales:
 
 1. Asignar nuevas variables en el heap
 2. Para funciones a otras funciones
 3. Iterar sobre elementos de otras estructuras de datos.
 
 ```CPP
 int a = 5; // variable simple
 int *b; // puntero
 b = &a; // apunto a la dirección de memoria
 ```

Se profundiza más sobre punteros en los siguiente apuntes: [pointer](../4Punteros/punteros.md)
 ## Array types
 
 Para cualquier tipo fundamental, definido de la siguiente forma:
 ```CPP
 <tipo> T[size];
 ```
 Se convierte en un tipo "array de elementos de tamaño *size* del tipo T". Los
 elementos son indexados desde `0 -> size - 1`.
 
 ```CPP
 int T[3];
 /*
 Para encontrar los números que conforman el array
 T[0]
 T[1]
 T[2]
 */
 ```
 
 Más información sobre los [arrays](../5Arreglos/arreglos.md)
# Tipos definidos por usuario
 ## Data Structure

 Las estructuras(struct), nos permite definir una agrupación de variables en un mismio
 lugar.
 
 ```CPP
 // Definición básica
 struct <nombre>{ // Inicialización del struct
  <tipo> var1;
  <tipo> var2;
  <tipo> var3;
  <tipo> var4;
  <tipo> var5;
 } <nombre1>, <nombre2>, <nombre4>; // Definición de variables de dicho struct
 ```
 
 Ejemplo:

 ```CPP
 struct persona{
  char nombre[30];
  char apellido[30];
  int edad;
  double sueldo;
 };
 ```
 ## Clases
 
 Las clases serán vista en la programación [orientada a objetos]().
 
 ## Enumeration types
 
 Los tipos enumeraciones, se utilizan cuando esperamos que una variable obtenga
 un valor entre un conjunto de posibles valores.o

 ```CPP
 // Sintaxis
 enum <nam>{
  <element1>,
  <element2>,
  <element3>,
  <element4>,
  <element5>, ...
 };
 ```
 Ejemplo1:

 ```CPP
 #include <iostream>
 enum icecream{
  vainilla, // default value is 0
  chocolate, // default value is 1
  butterscotch, // default value is 2
  strawberry, // default value is 3
  oreo // default value is 4
 };

 int main(){
  icecream  helado = vanilla;
  
  if(helado == vanilla){
    std::cout << "This flavor is correct"<< std::endl;
  }else{
    std::cout << "This flavor is incorrect"<< std::endl;
  }

  return 0;
 }
 ```
 Ejemplo2:

 ```CPP
 #include <iostream>

 enum costIcecream{
  vainilla = 5,
  chocolate = 6,
  butterscotch = 7,
  strawberry = 8,
  oreo = 9
 };

 int main(){
  costIcecream  helado1,helado2;

  helado1 = chocolate;
  helado2 = oreo;
  
  if(helado1 > helado2){
    std::cout << "The cost of helado1 is higher than helado2"<< std::endl;
  }else{
    std::cout << "The cost of helado2 is greater than or equal to that of helado1"<< std::endl;
  }
  return 0;
 }
 ```

# Inicializaciones 

Para poder inicializar una variable en `C++`, se puede realizar de 3 formas diferentes.

## 1. Inicialización por asignación

Es la clásica inicialización, donde se declará el tipo que deseamos que tenga nuestra
variable para posteriormente asignarle un valor. Ejemplos:

```CPP
#include <iostream>

struct myVariable{
  double estatura;
  double peso;
}

int main(){
  int var1 = 5;

  myVariable var2;
  var2.estatura = 1.87;
  var2.peso = 77;
}

```

## 2. Inicialización por constructor

 Esta es la inicialización, invocamos al constructor del tipo de la variable que deseamos
 conocer; muy usado la [programación orientada a objetos]().
 
 ```CPP
 int var1(); // var1 = 0
 // Agregar más ejemplos cuando se tenga más información
 ```
## 3. Inicialización por lista
 
 Esta es una forma moderna de inicializar una variables, donde si tiene importancia 
 el orden con que se inicialize los elementos de la variable.
 ```CPP
 int var1{}; // var1 = 0
 // Agregar más ejemplos cuando se tenga más información
 ```
 
 > Nota: Para las variables fundamentales; es indistinto el utilizar cualquiera
 > de las formas de inicialización.
 
