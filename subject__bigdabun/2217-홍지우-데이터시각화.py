import matplotlib.pyplot as plt
import numpy as np

fig, ax = plt.subplots(2,2, figsize=(5,5))

ax[0, 0].plot(range(10), 'r:')

x=[1,2,3,4,5,6]
y=[2,7,15,14,8,5]
ax[1, 0].bar(x, y)

x2=np.random.randint(1,16, size=80)
ax[0, 1].hist(x2, bins=16, width=0.5, color='g')

x3=np.random.randn(1,30)
y3=np.random.randn(1,30)
ax[1, 1].scatter(x3, y3, color='y')

plt.show()
