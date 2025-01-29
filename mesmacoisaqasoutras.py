def quadrado(num):
    resultado = num * num  # Variável local
    return resultado


def dobro_sem_modificar(num):
    return num * 2


def dobro_modificando(num_ref):
    return num_ref * 2  # Como Python não tem passagem por referência para inteiros, retornamos o novo valor


def soma(a, b):
    return a + b


def soma3(a, b, c):
    return a + b + c


def soma_float(a: float, b: float) -> float:
    return a + b


if __name__ == "__main__":
    num = 5
    print(f"Quadrado de {num}: {quadrado(num)}")
    
    print(f"Dobro de {num} sem modificar: {dobro_sem_modificar(num)}")
    
    num = dobro_modificando(num)
    print(f"Dobro de {num} modificando: {num}")
    
    print(f"Soma de 2 e 3: {soma(2, 3)}")
    print(f"Soma de 1, 2 e 3: {soma3(1, 2, 3)}")
    print(f"Soma de 1.5 e 2.5: {soma_float(1.5, 2.5)}")
