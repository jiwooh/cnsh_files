#!/usr/bin/env python
# coding: utf-8

# In[11]:


letters=['a','b','c','d','e','f','g']
print(letters)
letters.append('i')
print(letters)
letters.remove('b')
print(letters[1], letters[2])
print(letters[-1])
print('b' in letters)
print(type(letters))
print(max(letters), min(letters))
print(len(letters))
print(letters[3:])
print(letters[2::2])

