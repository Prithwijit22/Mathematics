def add(a,b):
    return a+b

def substract(a,b):
    return a-b

if __name__ == "__main__":
    x = input("Enter a symbol:")
    a = int(input("Enter a number: "))
    b = int(input("Enter another number: "))
    if x == "+":
        print(add(a,b))
    else:
        print(substract(a,b))
    print("Hello I am a Chhagol")