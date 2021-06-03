#!/usr/bin/env python
# coding: utf-8

# In[72]:


from bs4 import BeautifulSoup as bs
from pprint import pprint
import requests


# In[73]:


html = requests.get('https://weather.naver.com/')
soup = bs(html.text,'html.parser')
#pprint(soup)


# In[74]:


data1 = soup.find('li',{'class':'item_today type_sun'})
#pprint(data1)

data2 = data1.find('em',{'class':'level_text'}).text
print('오늘의 일몰 시간: '+data2)


# In[75]:


data3 = soup.find('dl',{'class':'summary_list'})
#pprint(data3)

data4 = data3.findAll('dd',{'class':'desc'})
#pprint(data4)

A=[data4[i].text for i in range(0,len(data4))]
print(f'강수: {A[0]}, 습도: {A[1]}, 동풍: {A[2]}, 체감: {A[3]}')

