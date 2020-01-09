# Programación de robots Lego Mindstorms NXT

Para liberar todo el poder del ladrillo Mindstorms NXT, necesita un entorno de programación que sea más útil que NXT-G, el lenguaje gráfico similar a Labview de National Instruments que viene con el conjunto minorista NXT.

## NXC

NXC es un lenguaje de programación, inventado por **John Hansen**, que fue especialmente diseñado para los robots de Lego.

Para facilitar aún más la escritura de programas, está el Centro de Comando Bricx (**BricxCC**). Esta utilidad ayuda a escribir sus programas, descargarlos al robot, iniciarlos y detenerlos, explorar la memoria flash NXT, convertir archivos de sonido para usar con el ladrillo y mucho más.

BricxCC funciona casi como un procesador de texto, pero con algunos extras. Se trata de un entorno de desarrollo integrado (IDE).

## Instalación

La instalacion del software de LEGO Mindstorms NXT se divide en 2
partes:

1. La instalación del controlador 
2. La instalación deñ Bricx Command Center.

El controlador para el NXT se puede descargar desde el CD de
instalacion o de la siguiente liga:

Bricx Command Center es el software que provee de una interfaz y
de los programas necesarios para programar al NXT. Este se puede
descargar de la siguiente dirección:

http://bricxcc.sourceforge.net/

## Configurar el bricx Command Center

Al ejecutar Bricx, lo primero que observamos es una ventana de
diálogo (figura 1) la cual configuraremos de la siguiente forma:

- Port: USB
- Brick Type: NXT
- Firmware: Standard

## Compilar el programa

Para compilar el programa presione el botón **Compile Program** (F5), la compilación no debe de producir errores.

## Cargar el programa en el robot

Ahora que tenemos compilado el programa, es posible cargarlo al NXT. Basta con presionar Download Program (F6), para que comience a descargarlo.

## Ejecutar el programa

1. Ahora, en el menú del NXT seleccione **My Files**, esta opción
contiene los archivos que se han cargado a la memoria del NXT.
2. Seleccione **Software Files** y luego el nombre que elegimos para el programa que creamos anteriormente).
3. Finalmente Run, para correr el programa.
