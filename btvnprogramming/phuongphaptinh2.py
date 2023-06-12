import numpy as np
from scipy import optimize
import math
def xet_hoi_tu():
    coefficients=[]
    n = int(input("Nhập số phần tử của phương trình:"))
    for i in range(n):
        print("Hệ số thứ",i+1)
        a = float(input())
        coefficients.append(a)
    x_start = int(input("Nhap dau mut"))
    x_end = int(input("Nhap khoang chan"))
    bac_can = int(input("Nhap so bac can:"))
    polynomial = np.poly1d(coefficients)
    polynomial2 = np.power(polynomial, 1/ bac_can)
    print("Ham da thuc vua nhap:")
    print("**********************")
    print(polynomial2)
    print("**********************")
    print("Dao ham cua da thuc:")
    derivative = polynomial2.deriv()
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
        # print("Nhập số lần lặp")     
        # n=int(input())
        print("Nhập giá trị ban đầu(đầu mút):")
        x0 = float(input())
        x=x0
        epsi = float(input("Nhap sai so"))
        a= x0
        while (True):
            x = np.polyval(polynomial,x)
            if ((x-a)< epsi):
                break
            a = x
        
        
        print("Nghiệm của phuong trình là: ", x)
    else:
        print("Hàm không hội tụ")
        main()
main()
# x^2+2x-1=0 example
# x = -1/2x^2 +1/2


    
