#!/usr/bin/env python
# coding: utf-8

# In[17]:


a={1:11, 2:22, 3:33, 4:44, 5:55}
print(a)
a[2]=200
print(a)

print(a.keys())
print(a.values())
print(a.items())

print(a.get(3))
print(a)
print(a.pop(4))
print(a)

a[4]=0
print(a)

b=sorted(a.items(), key=lambda x: x[1])
print(b)

b=sorted(a.items(), key=lambda x: x[0])
print(b)

a.clear()
print(a)

