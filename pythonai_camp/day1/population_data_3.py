import numpy as np
import matplotlib.pyplot as plt
import csv

f=open('age.csv')

data=csv.reader(f)

next(data)

result=[]

#name=input('인구 구조가 알고 싶은 지역을 입력하세요:')
name='반포면'

for row in data:
	if name in row[0]:
		result=np.array(row[3:])#, dtype=int)

print(result)
plt.rc('font', family='Malgun Gothic')
plt.title(name+'지역의 인구 구조')
plt.style.use('ggplot')
plt.plot(result)
plt.show()
