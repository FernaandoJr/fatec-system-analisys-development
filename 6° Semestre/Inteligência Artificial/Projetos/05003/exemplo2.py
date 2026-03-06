import pandas as pd
import numpy as np

data = {
	'nome': ['João', 'Maria', 'Pedro', 'Ana', 'Bruno'],
	'idade': [25, 30, 35, 40, 45],
	'cidade': ['São Paulo', 'Rio de Janeiro', 'Belo Horizonte', 'Brasília', 'Curitiba'],
	'salario': [1000, 2000, 3000, 4000, 5000],
}

df = pd.DataFrame(data)

idades = df['idade']
print(idades)
print(type(idades))

sub_df = df[['nome', 'idade']]
print(sub_df)