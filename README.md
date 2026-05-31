# BUBBLES — Aventura Conversacional

**Autoras:** Guadalupe Canga · Nahiara Poltronieri · Camila Troiani

---

## Descripción

Bubbles es una aventura conversacional en consola desarrollada en C++.
El jugador elige entre dos historias con distintos puntos de vista, toma decisiones a lo largo de la trama y llega a uno de los finales posibles según sus elecciones.

---

## Historias disponibles

### 1. Escapa de Mandíbulas
Sos Bubbles, un pez que estaba nadando tranquilo hasta que apareció Mandíbulas.
Tomá decisiones para escapar: huir a la cueva o hacerte el muerto.
Cada camino tiene su propio desenlace.

### 2. La anémona está vacía
Sos Mamá y Papá Pez. Bubbles desapareció.
Buscalo preguntando en el arrecife o consultando al cardumen.
No todo el mundo dice la verdad... y algunos finales son más inesperados que otros.

---

## Finales posibles

Cada historia tiene 3 finales:

| Final | Descripción |
|-------|-------------|
| ✅ Bueno | Todo sale bien. Más o menos. |
| ❌ Malo | Las decisiones tienen consecuencias. |
| ⭐ Secreto | El menos obvio. Vale la pena encontrarlo. |

---

## Compilación y ejecución

Requiere tener instalado `g++`.

```bash
g++ main.cpp -o bubbles
./bubbles
```

---

## Estructuras utilizadas

- `while` — bucle principal del menú y de las historias
- `for` — puntos de suspenso en la historia de la familia
- `switch / case` — navegación entre opciones del menú
- `if / else` con `&&` y `||` — validación de opciones y bifurcaciones narrativas
- `float` — variable `vidaFamilia` que refleja el estado de la familia
- `functions` — cada historia está encapsulada en su propia función (`historiaEscape`, `historiaAnemona`)
- `cin.ignore` — manejo correcto del buffer de entrada

---

## Estructura del código

```
main.cpp
│
├── historiaEscape()    → Aventura 1: Bubbles escapa de Mandíbulas
├── historiaAnemona()   → Aventura 2: La familia busca a Bubbles
└── main()              → Menú principal con título ASCII art
```
