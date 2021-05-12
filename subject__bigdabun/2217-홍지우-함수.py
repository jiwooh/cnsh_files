#!/usr/bin/env python
# coding: utf-8

# In[1]:


def order(num, pickle=True, onion=True):
    print('햄버거 {0}개, 피클 {1}, 양파 {2}'.format(num, pickle, onion))

order(1, True, False)
order(2)

