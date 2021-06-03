#!/usr/bin/env python
# coding: utf-8

# In[201]:


from bs4 import BeautifulSoup as bs
from pprint import pprint
import requests
import pandas as pd


# In[202]:


html = requests.get('https://open.spotify.com/playlist/37i9dQZEVXbNxXF4SkHj9F')
soup = bs(html.text,'html.parser')
#pprint(soup)


# In[203]:


data1 = soup.findAll('li',{'role':'button'})
#pprint(data1)

title1 = soup.findAll('span',{'class':'track-name'})
#pprint(title1)

title = [title1[i].text for i in range(0,len(title1))]
###print(title)

artist1 = soup.findAll('span',{'class':'artists-albums'})
#pprint(artist1)

base = soup.findAll('li', {'tabindex':'0'})
#pprint(base)

B=[]
for i in range(0,len(base)):
    B.append(base[i])

C=[]
S=[]
T=[]
U=[]
for i in range(0,len(B)):
    x = B[i].findAll('a',{'href': re.compile(r'/artist/')})
    #pprint(x)
    X=[]
    for j in range(0,len(x)):
        X.append(x[j].find('span',{'dir':'auto'}).text)
        #print(X)
        
    y = B[i].findAll('a',{'href': re.compile(r'/album/')})
    #pprint(y)
    Y=[]
    for j in range(0,len(y)):
        Y.append(y[j].find('span',{'dir':'auto'}).text)
        #print(Y)
    #print(title[i])
    
    C.append((title[i], ", ".join(X), ", ".join(Y)))
    S.append(title[i])
    T.append(", ".join(X))
    U.append(", ".join(Y))

#print(C)
print('Spotify 대한민국 차트 #1 to #30')
for i in range(0,len(C)):
    print(f'{i+1}. {C[i][0]} | Artist: {C[i][1]} | Album: {C[i][2]}')


# In[208]:


d={'Song': S, 'Artist': T, 'Album': U}
#print(d)
res=pd.DataFrame(d)
res.index+=1
print('Spotify 대한민국 차트 #1~#30')
res


# In[167]:


#artist2 = artist1.find('span',{'dir':'auto'})
#pprint(artist2)
#artist = [ artist2[i].text for i in range(0,len(artist2)) ]
#pprint(artist)

#for i in range(0,len(artist2)):
    #print(artist2[i].text)

#A = [ (artist[3*i], artist[3*i+1], artist[3*i+2]) for i in range(0,len(artist)//3) ]
#print(A)


# In[ ]:




