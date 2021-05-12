#!/usr/bin/env python
# coding: utf-8

# In[8]:


a=set([1,2,3,4,5])
print(a)
a=set([1,2,3,1,2,3,4,5])
print(a)

if 1 in a:
    print('a 안에 1 존재')

a.add(46)
print(a)
a.remove(3)
print(a)

a={1,2,3}
b={3,2,1}
print(a==b)

a={1,2,4,6,9,14,26}
print(max(a), min(a), sorted(a), sum(a))


# In[10]:


b={1,2,3,4}
c={3,4,5}

print(b&c, b.intersection(c)) #교집합
print(b-c, b.difference(c)) #차집합
print(b^c, b.symmetric_difference(c)) #대칭차집합


# In[12]:


f=open('hello.txt', 'w')
f.write('Hello World!')
f.close()


# In[13]:


f=open('hello.txt', 'r')
s=f.read()
print(s)
f.close()


# In[14]:


num=5040
divisors=[]
for i in range(2, num):
    if num%i==0:
        divisors.append(i)
print(num, '의 진약수 :', divisors)

