import pandas as pd
import matplotlib.pyplot as plt

fifa2019=pd.read_csv("D:\\github\\cnsh_files\\pythonai_camp\\day3\\fifa2019.csv")

fifa2019['Preferred Foot'].value_counts().plot(kind='pie')
plt.legend()
plt.show()
