#!/usr/bin/env python
# coding: utf-8

# In[28]:


s=[1,2,3,4,5,6]
print(s)

s.insert(4, 'Four')
print(s)

print(s[2:4])

s[3]=30
print(s)

s.remove(3)
print(s)

s.reverse()
print(s)

t=s
t[1]=11
print(t)
print(id(s), id(t))

u=s[:]
print('*'+str(id(u))+'*', id(s), id(t))

print(s.index(30))

s.remove('Four')
s.sort()
print(s)

s.sort(reverse=True)
print(s)

