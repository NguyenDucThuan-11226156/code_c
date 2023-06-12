from sympy import symbols, cbrt, diff
import numpy as np
from scipy import optimize
# Define the symbols
x = symbols('x')

# Example polynomial: x^3 + 2x^2 - 1
polynomial = x**3 + 2*x**2 - 1

# Calculate the cube root of the polynomial
cbrt_polynomial = cbrt(polynomial)

# Calculate the derivative of the cube root polynomial
derivative = diff(cbrt_polynomial, x)

# Print the derivative
print("Derivative of the cube root polynomial:")
print(derivative)

