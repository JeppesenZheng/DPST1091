# import numpy as np
# import matplotlib.pyplot as plt
# from itertools import count

# a = np.array([[ 0 ,  0 , 'g', 'g', 'g'], 
#               [ 0 ,  0 ,  0 , 'g', 'g'], 
#               ['d',  0 ,  1 ,  1 , 'g'], 
#               ['d', 'd',  1 ,  1 , 'g'], 
#               ['d', 'd', 'd', 'd', 'g']], dtype=object)

# # we want to build a dictionary mapping objects to integers
# seq2 = count(2) # we don't know in advance how many different objects we'll see
# d = {0:0, 1:1}  # but we know that the integers are either 0 or 1
# for o in a.flatten():  
#     if o not in d: d[o] = next(seq2)

# # with the help of the dictionary, here it is a plottable matrix
# b = np.array([d[x] for x in a.flatten()]).reshape(a.shape)

# N = len(d)
# # to avoid a continuous colorbar, we sample the needed colors
# cmap = plt.cm.get_cmap('viridis', N) 

# # eventually,
# # we can plot the matrix, the colorbar and fix the colorbar labelling
# plt.imshow(b, cmap=cmap)
# cb = plt.colorbar(drawedges=True)
# dc = (N-1)/N
# cb.set_ticks([dc*(n+1/2) for n in range(N)])
# cb.set_ticklabels([v for k, v in sorted((v,k) for k,v in d.items())])

# plt.show()

import matplotlib.pyplot as plt
import numpy as np

# Create a 2D array
array = np.array([[1, 2, 3], 
                  [4, 5, 6], 
                  [7, 8, 9]])

# Set up the plot
fig, ax = plt.subplots()
ax.matshow(array, cmap=plt.cm.Blues)

# Traverse the array and highlight each element
for i in range(array.shape[0]):
    for j in range(array.shape[1]):
        ax.text(j, i, str(array[i, j]), va='center', ha='center')
        ax.matshow(array, cmap=plt.cm.Blues)
        plt.pause(0.5)  # Pause to simulate traversal

plt.show()
