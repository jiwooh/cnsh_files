import numpy as np
import matplotlib.pyplot as plt
import PIL.Image as pilimg

im1=pilimg.open('D:\\github\\cnsh_files\\pythonai_camp\\day2\\moon.jpg')
im2=pilimg.open('D:\\github\\cnsh_files\\pythonai_camp\\day2\\rabbit.jpg')
im3=pilimg.open('D:\\github\\cnsh_files\\pythonai_camp\\day2\\brothers.jpg')

pix1=np.array(im1)

resizeX2=pix1.shape[1]/2
if (pix1.shape[1]%2 > 0):
	resizeX1=pix1.shape[1]/2 + 1
else:
	resizeX1=pix1.shape[1]/2
im2=im2.resize((int(resizeX1), int(pix1.shape[0])))
pix2=np.array(im2)

im3=im3.resize((int(resizeX2), int(pix1.shape[0])))
pix3=np.array(im3)

pix4=np.concatenate((pix2, pix3), axis=1)

pix1=(1/255)*pix1
pix4=(1/255)*pix4

weight=0.3

pix5=pix1*weight + pix4*(1-weight)
pix6=pix4*weight + pix1*(1-weight)

plt.subplot(141)
plt.imshow(pix1)
plt.axis('off')
plt.title('background', fontsize=10)

plt.subplot(142)
plt.imshow(pix4)
plt.axis('off')
plt.title('pictures of result', fontsize=10)

plt.subplot(143)
plt.imshow(pix5)
plt.axis('off')
plt.title('70% blended', fontsize=10)

plt.subplot(144)
plt.imshow(pix6)
plt.axis('off')
plt.title('30% blended', fontsize=10)

plt.show()

pix5=pix5*255
im5=pilimg.fromarray(pix5.astype(np.uint8))
im5.save('D:\\github\\cnsh_files\\pythonai_camp\\day2\\BlendedPic_70.png')

pix6=pix6*255
im6=pilimg.fromarray(pix6.astype(np.uint8))
im6.save('D:\\github\\cnsh_files\\pythonai_camp\\day2\\BlendedPic_30.png')
