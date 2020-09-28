import matplotlib.pyplot as plt
import numpy as np
import csv
f=open('age.csv')
data=csv.reader(f)
home=[]
next(data)
data=list(data)

#name=input('지역: ')
name='세종시'
mn=1
result_name=''
result=0
for row in data:
    if name in row[0]:
        home=np.array(list(map(lambda x: int(x.replace(",","")), row[3:]))) / int(row[2].replace(",",""))
for row in data:
    away=np.array(list(map(lambda x: int(x.replace(",","")), row[3:]))) / int(row[2].replace(",",""))
    s=np.sum(home-away)
    if s<mn:
        mn=s
        result_name=row[0]
        reult=away

plt.rc('font', family='Malgun Gothic')
plt.title(name+' 지역과 가장 비슷한 구조를 가진 지역')
plt.style.use('ggplot')
plt.axis([0, 40, 0, 10000])
plt.plot(home, label=name)
plt.plot(result, label=result_name)
plt.legend()
plt.show()
