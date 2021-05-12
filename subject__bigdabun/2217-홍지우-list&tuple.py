#!/usr/bin/env python
# coding: utf-8

# In[4]:


a=[x*x for x in range(1,15)]
print(a)
b=['welcome', 'to', 'python', 'hello', 'world']
print([x[0].upper() for x in b])
c=[x*x for x in range(1,15) if x%2]
print(c)


# In[11]:


d=('red','blue','and','green')
print(d)
print(d[:3])
e=('and','yellow')
print(d+e)

print(d,e)
d,e=e,d
print(d,e)


# In[13]:


def calc(a,b):
    return a+b, a-b
print(calc(3,5)) # is a tuple

