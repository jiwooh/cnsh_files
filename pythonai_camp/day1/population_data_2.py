import matplotlib.pyplot as plt
import csv
f=open('age.csv')

data=csv.reader(f)

result=[]

#name=input('인구 구조가 알고 싶은 지역을 입력하세요:')
name='반포면'

for row in data:
	if name in row[0]:
		for i in row[3:]:
			result.append(int(i.replace(",","")))

print(result)
plt.title(name+'지역의 인구 구조')
plt.style.use('ggplot')
plt.plot(result)
plt.show()
