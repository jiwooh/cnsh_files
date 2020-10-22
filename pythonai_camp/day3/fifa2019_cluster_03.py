import pandas as pd
import numpy as np

fifa2019=pd.read_csv("D:\\github\\cnsh_files\\pythonai_camp\\day3\\fifa2019.csv")
df=pd.DataFrame.copy(fifa2019.sort_values(by='Overall', ascending=False).head(200))
test_features=['Name', 'Stamina', 'Dribbling', 'ShortPassing', 'Penalties']
test_df=pd.DataFrame(df, columns=test_features)

XY=np.array(test_df)
X=XY[:, 1:3]

k=3
C_x=np.random.choice(X[:,0], k)
C_y=np.random.choice(X[:,1], k)
C=np.array(list(zip(C_x, C_y)))
print(C)

def Distance(A, B):
	return np.sqrt(np.sum(np.power((A-B), 2)))

C_old=np.zeros(C.shape)
clusters=np.zeros(len(X))
flag=Distance(C, C_old)
print(C_old)
print(flag)

from copy import deepcopy
distances=[]

while flag!=0:
	for i in range(len(X)):
		for j in range(3):
			temp=Distance(X[i], C[j])
			distances.append(temp)
		cluster=np.argmin(distances)
		clusters[i]=cluster
		distances=[]
	C_old=deepcopy(C)
	for i in range(k):
		points=[X[j] for j in range(len(X)) if clusters[j]==i]
		C[i]=np.mean(points)
	flag=Distance(C, C_old)

import matplotlib.pyplot as plt
plt.scatter(X[clusters==0,0], X[clusters==0,1], s=50, c='red', marker='o', edgecolor='black', label='Middle')
plt.scatter(X[clusters==1,0], X[clusters==1,1], s=50, c='yellow', marker='x', edgecolor='black', label='Low')
plt.scatter(X[clusters==2,0], X[clusters==2,1], s=50, c='blue', marker='^', edgecolor='black', label='High')
plt.scatter(C[:, 0], C[:, 1], s=250, c='black', marker='*', edgecolor='black', label='Centroids')
plt.legend()
plt.grid()
plt.show()
