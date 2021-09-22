equacao = input("Equação polonesa reversa: ") # atribui para equacao a string escrita
equacao = equacao.split(" ") # vai salvar em uma sequencia os valores e os operadores individualmente
pilha = [] # variavel utilizada para empilhar e desempilhar

for i in equacao: # percorre a string

    if i.isdigit(): # faz a verificação se é um dígito
        pilha.append(i) # empilha o digito
        continue #pula para o proximo valor da string

    if i == "/":
        a = pilha.pop() # armazena dentro de a um valor desempilhado
        b = pilha.pop() # armazena dentro de b um valor desempilhado
        resultado = float(b) / float(a)  # é feito o calculo com o segundo valor desempilhado e o primeiro
        pilha.append(resultado) # é empilhado novamente o resultado 
        continue
    elif i == "*":
        a = pilha.pop() # armazena dentro de a um valor desempilhado
        b = pilha.pop() # armazena dentro de b um valor desempilhado
        resultado = float(b) * float(a)  # é feito o calculo com o segundo valor desempilhado e o primeiro
        pilha.append(resultado) # é empilhado novamente o resultado 
        continue
    elif i == "+":
        a = pilha.pop() # armazena dentro de a um valor desempilhado
        b = pilha.pop() # armazena dentro de b um valor desempilhado
        resultado = float(b) + float(a)  # é feito o calculo com o segundo valor desempilhado e o primeiro
        pilha.append(resultado) # é empilhado novamente o resultado 
        continue
    elif i == "-":
        a = pilha.pop() # armazena dentro de a um valor desempilhado
        b = pilha.pop() # armazena dentro de b um valor desempilhado
        resultado = float(b) - float(a)  # é feito o calculo com o segundo valor desempilhado e o primeiro
        pilha.append(resultado) # é empilhado novamente o resultado 
        continue
    else:
        print("Notação inválida!") # se encontrar um caracter diferente de dígitos ou operadores + - * /
        exit()  
v = pilha.pop() # desempilha um valor e o armazena em v 
if not pilha: # faz a verificação de a pilha esta vazia
	print(v) # apresenta na tela o resultado depois de desempilhado
else :
	print ("Notação inválida!") # se caso sobrou algo dentro da pilha a equação é invalida
