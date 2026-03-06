import pandas as pd
import numpy as np

data = {
	'nome': ['João', 'Maria', 'Pedro', 'Ana', 'Bruno'],
	'idade': [25, 30, 35, 40, 45],
	'cidade': ['São Paulo', 'Rio de Janeiro', 'Belo Horizonte', 'Brasília', 'Curitiba'],
	'salario': [1000, 2000, 3000, 4000, 5000],
}

df = pd.DataFrame(data)

# print(data)
# print(df)

# mostra as 3 primeiras linhas do dataframe
print(df.head(3)) 

# mostra as 3 últimas linhas do dataframe
print(df.tail(3))

# mostra informações sobre o dataframe
print(df.info()) 