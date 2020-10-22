import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

yt=pd.read_csv("D:\\github\\cnsh_files\\pythonai_camp\\day3\\kr_yt_trending.csv")
df=pd.DataFrame.copy(yt.sort_values(by='view_count', ascending=False).head(200))
test_features=['view_count', 'likes']
test_df=pd.DataFrame(df, columns=test_features)
'''
XY=np.array(test_df)
X=XY[:, 1:3]

k=3
C_x=np.random.choice(X[:,0], k)
C_y=np.random.choice(X[:,1], k)
C=np.array(list(zip(C_x, C_y)))
print(C)
'''
for row in data:
	append

view_count=test_df['view_count']
likes=test_df['likes']
plt.title('view_count & likes')
plt.xlabel('view_count')
plt.ylabel('likes')
plt.scatter(view_count, likes, marker='^', c='blue', s=10, label='videos')
plt.scatter(C_x, C_y, marker='*', c='black', s=200, label='centroids')
plt.legend(loc='best')
plt.grid()
plt.show()
