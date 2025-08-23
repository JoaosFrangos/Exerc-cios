n1 = int(input("Digite o primeiro número: "))
n2 = int(input("Digite o segundo número: "))

if (n1 > n2):
    while n1-1>n2:
        n1 = n1 - 1
        print(n1)
elif (n2 > n1):
    while n2-1>n1:
        n2 = n2 - 1
        print(n2)
else:
    print("Os números são iguais")
