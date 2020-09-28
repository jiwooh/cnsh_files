import pandas as pd
fifa2019=pd.read_csv('D:\\github\\cnsh_files\\pythonai_camp\\day2\\fifa2019.csv')
print(fifa2019.shape)
print(fifa2019.info())
#sub4=fifa2019.loc[0:10,1:3]
#print(sub4)
korea_player=fifa2019["Nationality"] == 'Korea Republic'
sub5=fifa2019.loc[korea_player]
print(korea_player)
print(sub5)
