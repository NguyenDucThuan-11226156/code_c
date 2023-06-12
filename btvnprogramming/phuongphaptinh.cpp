#include <iostream>
#include <math.h>

using namespace std;

double single_iterative_method(double (*f)(double), double x0, double tol, int max_iter) {
  double x = x0;
  for (int i = 0; i < max_iter; i++) {
    double x_new = f(x);
    if (abs(x_new - x) < tol) {
      return x_new;
    }
    x = x_new;
  }

  throw "The equation f(x) = 0 did not converge after {} iterations.".format(max_iter);
}

int main() {
  double (*f)(double) = [](double x) { return x * x - 2; };
  double x0 = 1.0;
  double tol = 1e-6;
  int max_iter = 100;

  double x = single_iterative_method(f, x0, tol, max_iter);

  cout << "The solution is x = " << x << endl;

  return 0;
}