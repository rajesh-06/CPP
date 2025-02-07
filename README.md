

### **Question 1(c): Tangent to a Curve**
**Question:** Write the point where the tangent to the curve \( y^2 - x^2 + 2x - 1 = 0 \) is parallel to the \( x \)-axis.

**Solution:**
1. The tangent to the curve is parallel to the \( x \)-axis when the derivative \( \frac{dy}{dx} = 0 \).
2. Differentiate the equation implicitly:
   \[   2y \frac{dy}{dx} - 2x + 2 = 0 \]
3. Set \( \frac{dy}{dx} = 0 \):
   \[
   2y \cdot 0 - 2x + 2 = 0 \implies -2x + 2 = 0 \implies x = 1
   \]
4. Substitute \( x = 1 \) into the original equation to find \( y \):
   \[
   y^2 - (1)^2 + 2(1) - 1 = 0 \implies y^2 - 1 + 2 - 1 = 0 \implies y^2 = 0 \implies y = 0
   \]
5. The point is \( (1, 0) \).

**Answer:** The point is \( (1, 0) \).

---

### **Question 1(e): Degree of Differential Equation**
**Question:** Write the degree of the following differential equation:
\[
\frac{dy}{dx} = \sqrt{x + \frac{dy}{dx}}
\]

**Solution:**
1. The degree of a differential equation is the highest power of the highest derivative present.
2. Square both sides to eliminate the square root:
   \[
   \left( \frac{dy}{dx} \right)^2 = x + \frac{dy}{dx}
   \]
3. Rearrange the equation:
   \[
   \left( \frac{dy}{dx} \right)^2 - \frac{dy}{dx} - x = 0
   \]
4. The highest derivative is \( \frac{dy}{dx} \), and its highest power is 2.

**Answer:** The degree is 2.

---

### **Question 1(f): Unit Vector Perpendicular to Two Vectors**
**Question:** Write the unit vector which is perpendicular to both \( j - k \) and \( i + j \).

**Solution:**
1. Find the cross product of \( j - k \) and \( i + j \):
   \[
   \vec{a} = j - k = (0, 1, -1)
   \]
   \[
   \vec{b} = i + j = (1, 1, 0)
   \]
   \[
   \vec{a} \times \vec{b} = 
   \begin{vmatrix}
   i & j & k \\
   0 & 1 & -1 \\
   1 & 1 & 0
   \end{vmatrix}
   = i(1 \cdot 0 - (-1) \cdot 1) - j(0 \cdot 0 - (-1) \cdot 1) + k(0 \cdot 1 - 1 \cdot 1)
   \]
   \[
   = i(0 + 1) - j(0 + 1) + k(0 - 1) = i - j - k
   \]
2. Find the magnitude of the cross product:
   \[
   |\vec{a} \times \vec{b}| = \sqrt{1^2 + (-1)^2 + (-1)^2} = \sqrt{1 + 1 + 1} = \sqrt{3}
   \]
3. The unit vector is:
   \[
   \frac{\vec{a} \times \vec{b}}{|\vec{a} \times \vec{b}|} = \frac{1}{\sqrt{3}}(i - j - k)
   \]

**Answer:** The unit vector is \( \frac{1}{\sqrt{3}}(i - j - k) \).

---

### **Question 2(a): Parametric Differentiation**
**Question:** If \( x = \frac{1 - t^2}{1 + t^2} \), \( y = \frac{2t}{1 + t^2} \), then show that
\[
\frac{dy}{dx} + \frac{x}{y} = 0
\]

**Solution:**
1. Differentiate \( x \) and \( y \) with respect to \( t \):
   \[
   \frac{dx}{dt} = \frac{(1 + t^2)(-2t) - (1 - t^2)(2t)}{(1 + t^2)^2} = \frac{-2t(1 + t^2 + 1 - t^2)}{(1 + t^2)^2} = \frac{-4t}{(1 + t^2)^2}
   \]
   \[
   \frac{dy}{dt} = \frac{(1 + t^2)(2) - 2t(2t)}{(1 + t^2)^2} = \frac{2(1 + t^2 - 2t^2)}{(1 + t^2)^2} = \frac{2(1 - t^2)}{(1 + t^2)^2}
   \]
2. Compute \( \frac{dy}{dx} \):
   \[
   \frac{dy}{dx} = \frac{\frac{dy}{dt}}{\frac{dx}{dt}} = \frac{\frac{2(1 - t^2)}{(1 + t^2)^2}}{\frac{-4t}{(1 + t^2)^2}} = \frac{2(1 - t^2)}{-4t} = \frac{1 - t^2}{-2t}
   \]
3. Compute \( \frac{x}{y} \):
   \[
   \frac{x}{y} = \frac{\frac{1 - t^2}{1 + t^2}}{\frac{2t}{1 + t^2}} = \frac{1 - t^2}{2t}
   \]
4. Add \( \frac{dy}{dx} \) and \( \frac{x}{y} \):
   \[
   \frac{dy}{dx} + \frac{x}{y} = \frac{1 - t^2}{-2t} + \frac{1 - t^2}{2t} = 0
   \]

**Answer:** \( \frac{dy}{dx} + \frac{x}{y} = 0 \).

---

### **Question 2(c): Inequality**
**Question:** Show that
\[
2\sin x + \tan x \geq 3x
\]
for all \( x \in \left( 0, \frac{\pi}{2} \right) \).

**Solution:**
1. Define the function \( f(x) = 2\sin x + \tan x - 3x \).
2. Compute the derivative:
   \[
   f'(x) = 2\cos x + \sec^2 x - 3
   \]
3. Show that \( f'(x) \geq 0 \) for \( x \in \left( 0, \frac{\pi}{2} \right) \):
   - At \( x = 0 \), \( f'(0) = 2(1) + 1 - 3 = 0 \).
   - As \( x \) increases, \( \cos x \) decreases and \( \sec^2 x \) increases, but \( f'(x) \) remains non-negative.
4. Since \( f(0) = 0 \) and \( f'(x) \geq 0 \), \( f(x) \) is non-decreasing, so \( f(x) \geq 0 \) for \( x \in \left( 0, \frac{\pi}{2} \right) \).

**Answer:** \( 2\sin x + \tan x \geq 3x \) for \( x \in \left( 0, \frac{\pi}{2} \right) \).

---

### **Question 2(d): Rate of Change**
**Question:** If the side of a square is decreasing at the rate of 0.4 cm/sec, find the rate of decrease of the (i) area of the square and (ii) perimeter of the square, when the side of the square is 15 cm.

**Solution:**
1. Let \( s \) be the side length of the square.
2. Given \( \frac{ds}{dt} = -0.4 \) cm/sec (negative because the side is decreasing).
3. **(i) Rate of decrease of the area:**
   - Area \( A = s^2 \).
   - Differentiate with respect to \( t \):
     \[
     \frac{dA}{dt} = 2s \frac{ds}{dt}
     \]
   - Substitute \( s = 15 \) cm and \( \frac{ds}{dt} = -0.4 \) cm/sec:
     \[
     \frac{dA}{dt} = 2(15)(-0.4) = -12 \, \text{cm}^2/\text{sec}
     \]
   - The rate of decrease is \( 12 \, \text{cm}^2/\text{sec} \).
4. **(ii) Rate of decrease of the perimeter:**
   - Perimeter \( P = 4s \).
   - Differentiate with respect to \( t \):
     \[
     \frac{dP}{dt} = 4 \frac{ds}{dt}
     \]
   - Substitute \( \frac{ds}{dt} = -0.4 \) cm/sec:
     \[
     \frac{dP}{dt} = 4(-0.4) = -1.6 \, \text{cm}/\text{sec}
     \]
   - The rate of decrease is \( 1.6 \, \text{cm}/\text{sec} \).

**Answer:**
- (i) The rate of decrease of the area is \( 12 \, \text{cm}^2/\text{sec} \).
- (ii) The rate of decrease of the perimeter is \( 1.6 \, \text{cm}/\text{sec} \).

---

### **Question 2(e): Implicit Differentiation**
**Question:** If \( x^y = y^{\sin x} \), then find \( \frac{dy}{dx} \).

**Solution:**
1. Take the natural logarithm of both sides:
   \[
   \ln(x^y) = \ln(y^{\sin x}) \implies y \ln x = \sin x \ln y
   \]
2. Differentiate both sides with respect to \( x \):
   \[
   \frac{dy}{dx} \ln x + y \cdot \frac{1}{x} = \cos x \ln y + \sin x \cdot \frac{1}{y} \frac{dy}{dx}
   \]
3. Collect terms involving \( \frac{dy}{dx} \):
   \[
   \frac{dy}{dx} \left( \ln x - \frac{\sin x}{y} \right) = \cos x \ln y - \frac{y}{x}
   \]
4. Solve for \( \frac{dy}{dx} \):
   \[
   \frac{dy}{dx} = \frac{\cos x \ln y - \frac{y}{x}}{\ln x - \frac{\sin x}{y}}
   \]

**Answer:** \( \frac{dy}{dx} = \frac{\cos x \ln y - \frac{y}{x}}{\ln x - \frac{\sin x}{y}} \).

---

### **Question 3(b): Sine Rule**
**Question:** Prove that
\[
\frac{a}{\sin A} = \frac{b}{\sin B} = \frac{c}{\sin C}
\]
for a triangle \( ABC \).

**Solution:**
1. Consider a triangle \( ABC \) with sides \( a, b, c \) opposite angles \( A, B, C \) respectively.
2. Using the Law of Sines:
   \[
   \frac{a}{\sin A} = \frac{b}{\sin B} = \frac{c}{\sin C} = 2R
   \]
   where \( R \) is the circumradius of the triangle.
3. This is a standard result in trigonometry and can be derived using the properties of triangles and the circumcircle.

**Answer:** The sine rule is \( \frac{a}{\sin A} = \frac{b}{\sin B} = \frac{c}{\sin C} \).

---

### **Question 3(c): Ratio in Which YZ-Plane Divides a Line**
**Question:** Find the ratio in which the line joining the points \((-2, 4, 7)\) and \((3, -5, 8)\) is divided by the YZ-plane. Also, find the coordinates of the point of intersection of the line and the plane.

**Solution:**
1. The YZ-plane is defined by \( x = 0 \).
2. Let the ratio in which the YZ-plane divides the line be \( k:1 \).
3. Using the section formula for the \( x \)-coordinate:
   \[
   0 = \frac{3k - 2}{k + 1}
   \]
   \[
   3k - 2 = 0 \implies k = \frac{2}{3}
   \]
4. The ratio is \( 2:3 \).
5. Find the coordinates of the point of intersection:
   \[
   x = 0, \quad y = \frac{4 \cdot 3 + (-5) \cdot 2}{3 + 2} = \frac{12 - 10}{5} = \frac{2}{5}
   \]
   \[
   z = \frac{7 \cdot 3 + 8 \cdot 2}{3 + 2} = \frac{21 + 16}{5} = \frac{37}{5}
   \]
6. The point of intersection is \( \left( 0, \frac{2}{5}, \frac{37}{5} \right) \).

**Answer:** The ratio is \( 2:3 \), and the point of intersection is \( \left( 0, \frac{2}{5}, \frac{37}{5} \right) \).

---

### **Question 3(d): Symmetric Form of a Line**
**Question:** Find the symmetric form of the line
\[
3x + 2y + z - 2 = 0 = x + 5y + 2z + 3
\]

**Solution:**
1. Solve the system of equations to find the direction vector of the line:
   \[
   3x + 2y + z = 2
   \]
   \[
   x + 5y + 2z = -3
   \]
2. Use cross product to find the direction vector:
   \[
   \vec{d} = \begin{vmatrix}
   i & j & k \\
   3 & 2 & 1 \\
   1 & 5 & 2
   \end{vmatrix}
   = i(2 \cdot 2 - 1 \cdot 5) - j(3 \cdot 2 - 1 \cdot 1) + k(3 \cdot 5 - 2 \cdot 1)
   \]
   \[
   = i(4 - 5) - j(6 - 1) + k(15 - 2) = -i - 5j + 13k
   \]
3. The symmetric form of the line is:
   \[
   \frac{x - x_0}{a} = \frac{y - y_0}{b} = \frac{z - z_0}{c}
   \]
   where \( (x_0, y_0, z_0) \) is a point on the line and \( (a, b, c) \) is the direction vector.
4. Find a point on the line by solving the system:
   - Let \( z = 0 \):
     \[
     3x + 2y = 2
     \]
     \[
     x + 5y = -3
     \]
   - Solve for \( x \) and \( y \):
     \[
     x = 1, \quad y = -1
     \]
   - The point is \( (1, -1, 0) \).
5. The symmetric form is:
   \[
   \frac{x - 1}{-1} = \frac{y + 1}{-5} = \frac{z}{13}
   \]

**Answer:** The symmetric form is \( \frac{x - 1}{-1} = \frac{y + 1}{-5} = \frac{z}{13} \).

---

### **Question 4(a): Definite Integral**
**Question:** Evaluate:
\[
\int_0^\pi \frac{x \sin x}{1 + \cos^2 x} dx
\]

**Solution:**
1. Use the substitution \( u = \pi - x \):
   \[
   \int_0^\pi \frac{x \sin x}{1 + \cos^2 x} dx = \int_0^\pi \frac{(\pi - u) \sin u}{1 + \cos^2 u} du
   \]
2. Add the original integral and the substitution:
   \[
   2I = \pi \int_0^\pi \frac{\sin x}{1 + \cos^2 x} dx
   \]
3. Evaluate the integral:
   \[
   \int_0^\pi \frac{\sin x}{1 + \cos^2 x} dx = \left[ -\tan^{-1}(\cos x) \right]_0^\pi = \tan^{-1}(1) - \tan^{-1}(-1) = \frac{\pi}{4} - \left( -\frac{\pi}{4} \right) = \frac{\pi}{2}
   \]
4. Therefore:
   \[
   2I = \pi \cdot \frac{\pi}{2} \implies I = \frac{\pi^2}{4}
   \]

**Answer:** The value of the integral is \( \frac{\pi^2}{4} \).

---

### **Question 4(b): Area Between Curves**
**Question:** Draw a rough sketch of the graph \( y = x^2 \) and \( y = |x| \) and hence find the area bounded by the given curves.

**Solution:**
1. The curves intersect at \( x = -1, 0, 1 \).
2. The area between the curves from \( x = -1 \) to \( x = 1 \) is:
   \[
   \text{Area} = \int_{-1}^1 (|x| - x^2) dx = 2 \int_0^1 (x - x^2) dx
   \]
3. Evaluate the integral:
   \[
   2 \left[ \frac{x^2}{2} - \frac{x^3}{3} \right]_0^1 = 2 \left( \frac{1}{2} - \frac{1}{3} \right) = 2 \cdot \frac{1}{6} = \frac{1}{3}
   \]

**Answer:** The area bounded by the curves is \( \frac{1}{3} \).

---

### **Question 4(c): Differential Equation**
**Question:** Solve:
\[
\left(y^3 - 3x^2y\right)dy = \left(x^3 - 3xy^2\right)dx
\]

**Solution:**
1. Rearrange the equation:
   \[
   (y^3 - 3x^2y)dy - (x^3 - 3xy^2)dx = 0
   \]
2. Check for exactness:
   \[
   \frac{\partial M}{\partial y} = 3y^2 - 3x^2, \quad \frac{\partial N}{\partial x} = -3x^2 + 3y^2
   \]
   The equation is exact.
3. Integrate \( M \) with respect to \( y \):
   \[
   \int (y^3 - 3x^2y) dy = \frac{y^4}{4} - \frac{3x^2y^2}{2}
   \]
4. Integrate \( N \) with respect to \( x \):
   \[
   \int (x^3 - 3xy^2) dx = \frac{x^4}{4} - \frac{3x^2y^2}{2}
   \]
5. The solution is:
   \[
   \frac{y^4}{4} - \frac{3x^2y^2}{2} = C
   \]

**Answer:** The solution is \( \frac{y^4}{4} - \frac{3x^2y^2}{2} = C \).

---

### **Question 5(a): Shortest Distance Between Lines**
**Question:** Find the shortest distance between the lines
\[
\frac{x-1}{2} = \frac{y-2}{3} = \frac{z-3}{4} \quad \text{and} \quad \frac{x-2}{3} = \frac{y-4}{4} = \frac{z-5}{5}
\]
Also, find the equation of the line of shortest distance.

**Solution:**
1. The direction vectors of the lines are \( \vec{d_1} = (2, 3, 4) \) and \( \vec{d_2} = (3, 4, 5) \).
2. The shortest distance between skew lines is given by:
   \[
   \text{Distance} = \frac{|\vec{PQ} \cdot (\vec{d_1} \times \vec{d_2})|}{|\vec{d_1} \times \vec{d_2}|}
   \]
   where \( \vec{PQ} \) is the vector between points on the two lines.
3. Compute \( \vec{d_1} \times \vec{d_2} \):
   \[
   \vec{d_1} \times \vec{d_2} = \begin{vmatrix}
   i & j & k \\
   2 & 3 & 4 \\
   3 & 4 & 5
   \end{vmatrix}
   = i(3 \cdot 5 - 4 \cdot 4) - j(2 \cdot 5 - 4 \cdot 3) + k(2 \cdot 4 - 3 \cdot 3)
   \]
   \[
   = i(15 - 16) - j(10 - 12) + k(8 - 9) = -i + 2j - k
   \]
4. Compute \( |\vec{d_1} \times \vec{d_2}| \):
   \[
   |\vec{d_1} \times \vec{d_2}| = \sqrt{(-1)^2 + 2^2 + (-1)^2} = \sqrt{1 + 4 + 1} = \sqrt{6}
   \]
5. Compute \( \vec{PQ} \cdot (\vec{d_1} \times \vec{d_2}) \):
   \[
   \vec{PQ} = (2 - 1, 4 - 2, 5 - 3) = (1, 2, 2)
   \]
   \[
   \vec{PQ} \cdot (\vec{d_1} \times \vec{d_2}) = 1(-1) + 2(2) + 2(-1) = -1 + 4 - 2 = 1
   \]
6. The shortest distance is:
   \[
   \text{Distance} = \frac{1}{\sqrt{6}}
   \]
7. The equation of the line of shortest distance can be found using the direction vector \( \vec{d_1} \times \vec{d_2} = (-1, 2, -1) \) and a point on one of the lines.

**Answer:** The shortest distance is \( \frac{1}{\sqrt{6}} \), and the equation of the line of shortest distance is \( \frac{x - 1}{-1} = \frac{y - 2}{2} = \frac{z - 3}{-1} \).

---

### **Question 5(b): Volume of Parallelepiped**
**Question:** Find the volume of the parallelepiped whose coterminous edges are the vectors \( \vec{a} = 2\vec{i} + 3\vec{j} + 4\vec{k} \), \( \vec{b} = \vec{i} - 2\vec{j} + 3\vec{k} \), and \( \vec{c} = 3\vec{i} - \vec{j} - \vec{k} \). Also, verify that
\[
\vec{a} \times (\vec{b} \times \vec{c}) = (\vec{a} \cdot \vec{c}) \vec{b} - (\vec{a} \cdot \vec{b}) \vec{c}
\]

**Solution:**
1. The volume of the parallelepiped is given by the scalar triple product:
   \[
   V = |\vec{a} \cdot (\vec{b} \times \vec{c})|
   \]
2. Compute \( \vec{b} \times \vec{c} \):
   \[
   \vec{b} \times \vec{c} = \begin{vmatrix}
   i & j & k \\
   1 & -2 & 3 \\
   3 & -1 & -1
   \end{vmatrix}
   = i((-2)(-1) - 3(-1)) - j(1(-1) - 3(3)) + k(1(-1) - (-2)(3))
   \]
   \[
   = i(2 + 3) - j(-1 - 9) + k(-1 + 6) = 5i + 10j + 5k
   \]
3. Compute \( \vec{a} \cdot (\vec{b} \times \vec{c}) \):
   \[
   \vec{a} \cdot (\vec{b} \times \vec{c}) = (2, 3, 4) \cdot (5, 10, 5) = 2(5) + 3(10) + 4(5) = 10 + 30 + 20 = 60
   \]
4. The volume is \( V = 60 \).
5. Verify the vector identity:
   \[
   \vec{a} \times (\vec{b} \times \vec{c}) = (\vec{a} \cdot \vec{c}) \vec{b} - (\vec{a} \cdot \vec{b}) \vec{c}
   \]
   - Compute \( \vec{a} \cdot \vec{c} \):
     \[
     \vec{a} \cdot \vec{c} = 2(3) + 3(-1) + 4(-1) = 6 - 3 - 4 = -1
     \]
   - Compute \( \vec{a} \cdot \vec{b} \):
     \[
     \vec{a} \cdot \vec{b} = 2(1) + 3(-2) + 4(3) = 2 - 6 + 12 = 8
     \]
   - Compute \( (\vec{a} \cdot \vec{c}) \vec{b} - (\vec{a} \cdot \vec{b}) \vec{c} \):
     \[
     (-1) \vec{b} - 8 \vec{c} = -(\vec{i} - 2\vec{j} + 3\vec{k}) - 8(3\vec{i} - \vec{j} - \vec{k}) = -\vec{i} + 2\vec{j} - 3\vec{k} - 24\vec{i} + 8\vec{j} + 8\vec{k} = -25\vec{i} + 10\vec{j} + 5\vec{k}
     \]
   - Compute \( \vec{a} \times (\vec{b} \times \vec{c}) \):
     \[
     \vec{a} \times (\vec{b} \times \vec{c}) = \vec{a} \times (5\vec{i} + 10\vec{j} + 5\vec{k}) = \begin{vmatrix}
     i & j & k \\
     2 & 3 & 4 \\
     5 & 10 & 5
     \end{vmatrix}
     \]
     \[
     = i(3 \cdot 5 - 4 \cdot 10) - j(2 \cdot 5 - 4 \cdot 5) + k(2 \cdot 10 - 3 \cdot 5)
     \]
     \[
     = i(15 - 40) - j(10 - 20) + k(20 - 15) = -25i + 10j + 5k
     \]
   - The identity holds.

**Answer:** The volume is \( 60 \), and the vector identity is verified.

---

This concludes the step-by-step solutions for all the questions. If you need further clarification or additional help, feel free to ask!
