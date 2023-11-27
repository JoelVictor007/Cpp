def exponent(x,y):
    if (y==0):
        return 1
    if (y%2==0):
        return exponent(x,y//2)*exponent(x,y//2)
    
    return x*exponent(x,y//2)*exponent(x,y//2)

def Cubic_Sum_Digits(num):
    if type(num)!=int or num<0:
        return print("Please provide valid number")
    cube_sum_digits=0

    while num>0:
        mod=num%10
        cube_sum_digits=cube_sum_digits+exponent(mod,3)
        num=num//10
    return print(cube_sum_digits)
Cubic_Sum_Digits(253)
    