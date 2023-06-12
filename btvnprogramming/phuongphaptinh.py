import numpy as np
from scipy import optimize
def xet_hoi_tu():
    coefficients=[]
    n = int(input("Nhập số phần tử của phương trình:"))
    for i in range(n):
        print("Hệ số thứ",i+1)
        a = float(input())
        coefficients.append(a)
    x_start = float(input("Nhap dau mut"))
    x_end = float(input("Nhap khoang chan"))
    so_mu = float(input("Nhap so mu"))
    polynomial = pow(np.poly1d(coefficients),so_mu)
    print("Ham da thuc vua nhap:")
    print("**********************")
    print(polynomial)
    print("**********************")
    print("Dao ham cua da thuc:")
    derivative = polynomial.deriv()
    print("**********************")
    print(derivative)
    print("**********************")
    min_result= optimize.minimize_scalar(derivative, bounds=(x_start, x_end), method='bounded')
    max_result = optimize.minimize_scalar(lambda x: -derivative(x), bounds=(x_start, x_end), method='bounded')
    min_value = min_result.fun
    max_value = -max_result.fun
    print("Absolute minimum value:", min_value)
    print("Absolute maximum value:", max_value)
    if(abs(min_value) < 1 and abs(max_value)<1):
        return True, polynomial
    else:
        return False, polynomial   
def main():
    dieukienhoitu, polynomial = xet_hoi_tu()
    if (dieukienhoitu ):  
        print("Hàm hội tụ") 
        print("Nhập số lần lặp")     
        n=int(input())
        print("Nhập giá trị ban đầu(đầu mút):")
        x0 = float(input())
        x=x0
        for i in range(n):
            x = np.polyval(polynomial,x)
        print("Nghiệm của phuong trình là: ", x)
    else:
        print("Hàm không hội tụ")
        main()
main()
# x^2+2x-1=0 example
# x = -1/2x^2 +1/2


    
