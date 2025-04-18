# Desafío 1 – Ratmóvil 

## Información del Equipo

- **Equipo:** M0-V
- **Integrantes:**  
  - Felipe Neira  
  - Antonia Reijnst  
  - Carlos Cornejo  
  - Carolina Inostroza  
  - Julio Gamboa  

- **Profesor de Cátedra:** Harold Valenzuela  
- **Profesor Auxiliar:** Francisco Cáceres V. / Fernando Navarrete U.  
- **Ayudante:** Valentina Abarca G.


---

## Introducción

En este desafío se plantea el desarrollo de un sistema de control abierto de motores DC mediante el microcontrolador ARDUINO, con el fin de guiar el movimiento de un vehículo a lo largo de una ruta establecida.  

![Fast & Rats](Imagenes/A.jpg)

**Objetivo:**  
Desarrollar y validar un código que siga un trayecto predeterminado, además de indicar el inicio y fin del recorrido mediante 2 leds integrados en la PCB.
**Importancia:**  
Este desafío integra aspectos de básicos hardware y software, siendo un primer paso en la eventual implementación de un sistema de control de lazo cerrado, una versión mas sofisticada de esta idea puede verse en el siguiente video (click en la imagen para ver)

[![Texto alternativo](Imagenes/B.jpg)](https://www.youtube.com/watch?v=ZMQbHMgK2rw)
---

## Metodología

### Problema Técnico

El reto consistió en lograr un control preciso del vehículo, dividiendo el trayecto en secciones que faciliten la programación y validación de cada parte (tramos de conducción recta y giros).


### Enfoque Utilizado

- **Segmentación del Trayecto:** Dividir la ruta en seis tramos de conducción recta y cinco giros para facilitar el control preciso.
- **Control Modular:** Desarrollo de funciones independientes que permitan gestionar cada tramo.

![Ruta](Imagenes/C.png)

### Herramientas y Materiales

- **Hardware:**  
  - Microcontrolador Arduino Nano
  - Módulo controlador de motores L298N H-bridge
  - 2x Motorreductor DC y par de ruedas
  - Batería de 9 V


- **Software:**  
  - Arduino IDE

---

## Desarrollo

### Hardware

**Diagrama y Esquemas de Conexión:**  
![Ruta](Imagenes/esquema.png)


## Caracterización de PWM ##
![señal PWM típica de Arduino a 490Hz, modulada por Duty](Animation.gif)

El control de los motores se realiza mediante driver L298N el cual recibe 2 señales PWM para modular la potencia de cada motor y 4 entradas digitales que determinan la polaridad cambiando así la dirección de rotación.

A continuación se muestra la medición experimental de los pines in1, in2 a 2-6ms de duración, se ha usado otro [Arduino como osciloscipio ](https://github.com/CarlosCornejoM/Osciloscopio-4ch-Arduino)


https://github.com/user-attachments/assets/be1d66df-a479-4d3d-814a-5d817b8ac006



La inversión de las señales in1, in2 se produce al imponer una velocidad negativa (avanzar(-255,6,1) es lo mismo que retroceder(255,6,1)), en este caso se cambia la polaridad del rotor y se usa analogWrite(enA, abs(velocidad)).

---

## Pruebas y Validación

### Procedimientos

Se realizaron pruebas en entorno controlado para verificar:

- Precisión en la ejecución de tramos y giros.
- Estabilidad y desempeño del sistema en condiciones reales.
  
## Registro de Desafio Completado
https://github.com/user-attachments/assets/1001ea79-b7e6-4f0a-bb56-878048dfb4f4
> [!NOTE]
> No se ve bien pero parpadean 3 veces los leds blancos al inicio y final del trayecto.

### Problemas Encontrados y Soluciones

- **Conexiones inestables:**  
  *Solución:* Reemplazo de cables defectuosos y uso de un interruptor para asegurar una conexión confiable.

- **Inconsistencias durante giros:**  
  *Solución:* Ajustes en la programación y mejora en el mecanismo de alineación de la rueda loca.


