# CGM Lab Assignment 2 – DDA Line Drawing Algorithm

## Aim
To implement the Digital Differential Analyzer (DDA) Line Drawing Algorithm using C++ and the graphics library.

## Objective
To understand and implement the DDA algorithm for drawing a straight line between two given points.

## Software Requirements
- C++ Programming Language
- Visual Studio Code
- MinGW/G++ Compiler
- WinBGIm Graphics Library (`graphics.h`)

## Theory
The Digital Differential Analyzer (DDA) is a line drawing algorithm used in computer graphics to draw a straight line between two points.

It calculates intermediate points using incremental values of x and y coordinates.

## Algorithm
1. Start the program.
2. Enter the starting point `(x1, y1)` and ending point `(x2, y2)`.
3. Calculate `dx = x2 - x1` and `dy = y2 - y1`.
4. Calculate `steps = max(abs(dx), abs(dy))`.
5. Calculate `x_increment = dx / steps` and `y_increment = dy / steps` when steps is nonzero.
6. Initialize the graphics mode.
7. Plot the initial point using `putpixel()`.
8. Increment x and y and plot the intermediate points until the ending point is reached.
9. Close the graphics window.

## Functions Used
- `initgraph()` – Initializes graphics mode.
- `putpixel()` – Plots a pixel on the screen.
- `round()` – Rounds floating-point coordinates.
- `abs()` – Calculates absolute value.
- `closegraph()` – Closes graphics mode.

## Example Input
```text
Enter starting point (x1, y1): 100 100
Enter ending point (x2, y2): 400 300
```

## Expected Output
A straight line is drawn between the points `(100, 100)` and `(400, 300)` using the DDA algorithm.

## How to Run
1. Open `CGLab2.cpp` in VS Code.
2. Make sure the graphics library is configured.
3. Run the program using the configured Run button.
4. Enter the starting and ending coordinates in the terminal.
5. The graphics window will display the DDA line.

## Output Screenshot
![DDA Line Drawing Output](output.png)

## Conclusion
Successfully implemented the DDA Line Drawing Algorithm using C++ and the `graphics.h` library.
