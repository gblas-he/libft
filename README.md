*Este proyecto ha sido creado como parte del currículo de 42 por <gblas-he@student.42madrid.com>.*

---

# Libft - Biblioteca de Funciones en C

## Descripción

**Libft** es el primer proyecto en **42 Madrid** que consiste en recrear algunas funciones de la biblioteca estándar de C. El objetivo principal es entender cómo funcionan estas funciones, cómo implementarlas y aprender a utilizarlas. Además, este proyecto permite profundizar en el manejo de estructuras de datos.

La biblioteca **libft** incluye:
- Funciones de la librería estándar de C.
- Funciones adicionales.
- Funciones para la manipulación de listas.

### Estructura del Proyecto

- **`Makefile`**: Archivo para compilar automáticamente el proyecto.
- **`libft.h`**: Archivo de cabecera que contiene los prototipos de las funciones.
- **`ft_*.c`**: implementaciones de las funciones y listas.

## Instrucciones

### Compilación y Ejecución

1. Clona este repositorio en tu máquina local.
2. Ejecuta el comando `make` para compilar la biblioteca.
3. Puedes eliminar los archivos `.o` con el comando `make clean`.
4. Incluye el archivo `libft.a` en tus proyectos para utilizar las funciones implementadas.

## Descripción Detallada de la Biblioteca

### Funciones de Libc
- `ft_atoi`:	Lee una cadena y, después de ignorar los espacios con `ft_isspace`, guarda la cadena en un entero.
- `ft_bzero`:	Escribe n ceros en la cadena.
- `ft_calloc`: 	Reserva x bloques de y bits de memoria.
- `ft_isalnum`: Devuelve 1 si la entrada es un número o una letra en la tabla ASCII.
- `ft_isalpha`: Devuelve 1 si la entrada es una letra en la tabla ASCII.
- `ft_isascii`: Devuelve si un valor pertenece o no a la tabla ASCII.
- `ft_isdigit`: Devuelve 1 si la entrada es un número en la tabla ASCII.
- `ft_isprint`: Devuelve si un carácter es imprimible.
- `ft_itoa`: 	Guarda el número dado como una cadena (matriz de caracteres).
- `ft_memccpy`: Copia de un punto de memoria a otro, hasta que se copia el carácter especificado o hasta que n bytes se copian.
- `ft_memchr`: 	Busca un carácter coincidente dentro de una parte de la memoria.
- `ft_memcmp`:  Compara dos partes de la memoria y devuelve el valor 0 si son iguales o un valor distinto de cero.
- `ft_memcpy`:  Copia de una parte de la memoria a otra, ignorando posibles superposiciones.
- `ft_memmove`: Copia de una parte de la memoria a otra, evitando posibles superposiciones.
- `ft_memset`: 	Asigna un carácter n veces a una parte de la memoria.
- `ft_putchar_fd`: Imprime un carácter en el descriptor de archivo dado.
- `ft_putendl_fd`: Imprime una cadena seguida de una nueva línea `\n` en un descriptor de archivo determinado.
- `ft_putnbr_fd`: Imprime el número en el descriptor de archivo dado.
- `ft_putstr_fd`: Imprime una cadena en el descriptor de archivo dado.
- `ft_split`: Divide una cadena según un carácter separador determinado.
- `ft_strchr`: Busca un carácter específico dentro de una cadena determinada.
- `ft_strdup`: Ahorra suficiente espacio y duplica una cadena.
- `ft_strjoin`: Concatena dos cadenas asignando primero suficiente espacio.
- `ft_strlcat`: Concatena dos cadenas asegurándose de que terminen con `\0`.
- `ft_strlcpy`: Copia n - 1 bytes de una cadena de origen a una cadena de destino.
- `ft_strlen`: Devuelve la longitud de una cadena.
- `ft_strmapi`: Aplica una función (mapeo) a cada elemento de una cadena.
- `ft_strncmp`: Compara dos cadenas hasta el n-ésimo carácter.
- `ft_strnstr`: Intenta encontrar una subcadena (`needle`) en una segunda cadena (`haystack`) antes de que se alcance el n-ésimo carácter.
- `ft_strrchr`: Busca un carácter determinado en una cadena, leyéndolo de atrás hacia adelante.
- `ft_strtrim`: Elimina las ocurrencias de caracteres en una cadena desde el inicio y el final de otra.
- `ft_substr`: Copia del n-ésimo carácter de una cadena.
- `ft_tolower`: Convierte cada carácter en mayúscula de una cadena en minúscula.
- `ft_toupper`: Convierte cada carácter en minúscula de una cadena en mayúscula.

### Funciones para Listas Enlazadas

```c
typedef struct s_list
{
    void        *content;
    struct s_list   *next;
}               t_list;
```
### Manipulación de listas

- `ft_lstnew`: Crea un nuevo nodo que asigna con `malloc`.
- `ft_lstadd_front`: Agrega un nuevo nodo al comienzo de la lista vinculada.
- `ft_lstsize`: Devuelve el número de elementos de la lista enlazada.
- `ft_lstlast`: Recupera el último nodo de la lista.
- `ft_lstadd_back`: Agrega un nuevo nodo al final de la lista vinculada.
- `ft_lstdelone`: Elimina, libera y aplica la función al contenido de un nodo determinado.
- `ft_lstclear`: Elimina un elemento determinado y todos los elementos posteriores.
- `ft_lstiter`: Aplica una función al contenido de cada nodo de la lista enlazada.
- `ft_lstmap`: Aplica la función a una copia de la lista, liberándola cuando sea necesario.

## Recursos

### Documentación y Referencias
- [Guia de Biblioteca Libft](https://42-cursus.gitbook.io/guide/0-rank-00/libft)
- [Tutoriales de Makefile](https://www.youtube.com/watch?v=BD0giwqBbm0)
- [Documentación de 42 Madrid](https://www.42madrid.com/)

---