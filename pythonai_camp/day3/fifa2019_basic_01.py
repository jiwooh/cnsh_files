import sys
import io
sys.stdout=io.TextIOWrapper(sys.stdout.detach(), encoding='utf-8')
sys.stderr=io.TextIOWrapper(sys.stderr.detach(), encoding='utf-8')

import pandas as pd

fifa2019=pd.read_csv("D:\\github\\cnsh_files\\pythonai_camp\\day3\\fifa2019.csv")
'''
print(fifa2019.shape)

print(fifa2019.info())

sub1=fifa2019.loc[14]
print(sub1)

sub2=fifa2019.loc[2:16]
print(sub2)

sub3=fifa2019.loc[:,['Name','Preferred Foot']]
print(sub3)

sub4=fifa2019.iloc[0:10,1:3]
print(sub4)
'''
korean_player=fifa2019['Nationality']=='Korea Republic'
sub5=fifa2019.loc[korean_player]
print(korean_player)
print(sub5)
