import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

yt21=pd.read_csv("D:\\github\\cnsh_files\\pythonai_camp\\day3\\kr_yt_trending_1021.csv")
df21=pd.DataFrame.copy(yt21.sort_values(by='view_count', ascending=False).head(200))
test_features=['view_count', 'likes']
test_df21=pd.DataFrame(df21, columns=test_features)
vc21=test_df21['view_count']
lk21=test_df21['likes']

yt30=pd.read_csv("D:\\github\\cnsh_files\\pythonai_camp\\day3\\kr_yt_trending_1030.csv")
df30=pd.DataFrame.copy(yt30.sort_values(by='view_count', ascending=False).head(200))
test_df30=pd.DataFrame(df30, columns=test_features)
vc30=test_df30['view_count']
lk30=test_df30['likes']


plt.title('Youtube Trending Korea Viewcount&Likes 1021 VS 1030')
plt.xlabel('view_count')
plt.ylabel('likes')
plt.scatter(vc21, lk21, marker='o', c='blue', s=10, label='1021')
plt.scatter(vc30, lk30, marker='o', c='red', s=10, label='1030')
plt.legend(loc='best')
plt.grid()
plt.show()
