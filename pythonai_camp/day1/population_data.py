import matplotlib.pyplot as plt
import csv
f=open('age.csv')

data=csv.reader(f)

result=[]

for row in data:
	if '반포면' in row[0]:
		for i in row[5:]:
			result.append(i)

print(result)
plt.style.use('ggplot')
plt.plot(result)
plt.show()
