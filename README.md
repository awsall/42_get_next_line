*Este proyecto ha sido creado como parte del currículo de 42 por awsall.*

**TABLA DE CONTENIDO**

**Descripción**
**Descripción de las funciones útiles**
**Instrucciones**
**Recursos**
**Uso de IA**

# Descripción

El proyecto **GET_NEXT_LINE** consiste en crear una función en C que lea unalínea desde un descriptor de archivo (file descriptor) cada vez que se llama, permitiéndo leer un archivo de texto de manera secuencial sin importar su tamaño. 
**Conceptos clave**

**Variable static**
ES una variable cuyo valor persiste durante toda la ejecución de un programa. A diferencia de las variables locales que se destruyen al finalizar una función,ella conserva su valor entre llamadas.

**Read**
Es una llamada al sistema de bajoo nivel utilizada para leer datos desde un archivo, un socket o la entrada estándar. Lee un número específico de bytes desde un descriptor de archivo y los almacena en un búfer de memoria. 

# Descripción de las funciones útiles

Estas funciones nos sirve como heramientas para crear nuestra función **Get_Next_Line.c**.

**ft_bzero**
Rellena con bytes de valor zero(0) una porción de memoria. sirve para crear nuestra propia función calloc que es prohibido en este proyecto.

**ft_calloc**
Asigna una memoria de forma dinámica en el heap y la inicializa automáticamente a cero.

**ft_strchr**
Detecta la primera aparición de un carácter específico dentro de una cadena de texto.

**ft_strjoin**
Concatena dos cadenas en una sola cadena.

**ft_strlen**
Sirve para saber la longitud de una cadena.

# Instrucciones
Para compilar se puede utilizar como ejemplo un tomaño de BUFFER_SIZE de 42, 15, 1 ect cc -Wall -Werror -Wextra -D BUFFER_SIZE=42 <archivos>.c.
Se puede también elegir el valor por defecto que se prefería en el get_next_line.h cc -Wall -Werror -Wextra <archivos>.c.

# Recursos

**Explicaciones de los compañeros**

**Google** y **Youtube**

# Uso de IA
**Verificación de código**
Se usa IA para explicar el funcionamiento de cada función.

**Explicación detallada de cada función**
Solicito que verifique mi código y proporcione una explicación de línea para comprender mejor su funcionamiento.


