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

![Fast & Rats](A.jpg)

**Objetivo:**  
Desarrollar y validar un código que siga el trayecto del vehículo, además de indicar el inicio y fin del recorrido mediante 2 leds integrados en la PCB.
**Importancia:**  
Este desafío integra aspectos de hardware y software, siendo un primer paso en la eventual implementación de un sistema de control de lazo cerrado, una versión mas sofisticada de esta idea puede verse en el siguiente video:

[![Texto alternativo](B.jpg)](https://www.youtube.com/watch?v=ZMQbHMgK2rw)
---

## Metodología

### Problema Técnico

El reto consistió en lograr un control preciso del vehículo, dividiendo el trayecto en secciones que faciliten la programación y validación de cada parte (tramos de conducción recta y giros).


### Enfoque Utilizado

- **Segmentación del Trayecto:** Dividir la ruta en seis tramos de conducción recta y cinco giros para facilitar el control preciso.
- **Control Modular:** Desarrollo de funciones independientes que permitan gestionar cada tramo.

![Ruta](C.png)

### Herramientas y Materiales

- **Hardware:**  
    <figure>
    <figcaption>Microcontrolador Arduino Nano</figcaption>
    <img src="D.png" alt="Texto Alternativo" style="width:50%;">
    </figure>

    <figure>
    <figcaption>Módulo controlador de motores L298N H-bridge</figcaption>
    <img src="E.png" alt="Texto Alternativo" style="width:50%;">
    </figure>

    <figure>
    <figcaption>2x Motorreductor DC</figcaption>
    <img src="F.png" alt="Texto Alternativo" style="width:50%;">
    </figure>

    <figure>
    <figcaption>batería de 9 V</figcaption>
    <img src="G.png" alt="Texto Alternativo" style="width:50%;">
    </figure>






- **Software:**  
  - Arduino IDE


---

## Desarrollo

### Hardware

**Diagrama y Esquemas de Conexión:**  
Inserta aquí el diagrama de conexiones del vehículo:


**Justificación de Componentes:**  
- **Microcontrolador:** Permite ejecutar el código de manera eficiente.  
- **Sensores y LED:** Facilitan la detección del inicio y final del trayecto, mejorando la retroalimentación visual.  
- **Batería y Cableado:** Seleccionados para garantizar una alimentación estable durante la operación.

### Software

**Código Implementado:**  
El código se desarrolló siguiendo buenas prácticas de programación, organizando la solución en módulos para gestionar cada sección del trayecto.

Revisa el [código fuente completo en GitHub](https://github.com/CarlosCornejoM/Desafio-1-M0-V).

**Algoritmos y Lógica de Control:**  
- **Segmentación del Trayecto:** Cada tramo y giro se maneja de forma independiente para un control preciso.  
- **Señalización Visual:** Implementación de la activación de un LED para marcar el inicio y final del recorrido.

---

## Pruebas y Validación

### Procedimientos

Se realizaron pruebas en entorno controlado para verificar:

- Precisión en la ejecución de tramos y giros.
- Sincronización entre el movimiento del vehículo y la activación del LED.
- Estabilidad y desempeño del sistema en condiciones reales.

### Resultados Obtenidos

**Tablas y Gráficos:**  
Inserta aquí tablas o gráficos que muestren los resultados obtenidos:


**Video/GIF de Pruebas:**  
Para ilustrar el proceso y los resultados, se puede agregar un video o gif:


### Problemas Encontrados y Soluciones

- **Conexiones inestables en el LED:**  
  *Solución:* Reemplazo de cables defectuosos y uso de un interruptor para asegurar una conexión confiable.

- **Inconsistencias durante giros:**  
  *Solución:* Ajustes en la programación y mejora en el mecanismo de alineación de la rueda loca.

---

## Discusión de Resultados

- **Desempeño del Sistema:** El vehículo siguió la ruta predefinida con precisión, ajustándose correctamente a cada tramo y giro.  
- **Precisión y Errores:** La segmentación permitió identificar errores y corregirlos en tiempo real mediante pruebas y ajustes.  
- **Optimización:**  
  - Implementar un encoder para medir la distancia exacta recorrida.
  - Mejorar la fijación de componentes críticos, como la batería, para evitar desajustes en el movimiento.

---

## Conclusiones

- **Desempeño General:** El sistema cumplió con el objetivo de controlar el movimiento del vehículo a lo largo de la ruta establecida.  
- **Aprendizajes:** Integración de hardware y software para soluciones de control en mecatrónica, destacando la importancia de la segmentación y validación del trayecto.  
- **Mejoras Futuras:**  
  - Refinar el control mediante la implementación de encoders.
  - Evaluar alternativas de hardware para mayor estabilidad y precisión.

---

