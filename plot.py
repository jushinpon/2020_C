import numpy as np
import matplotlib.pyplot as plt
from matplotlib.ticker import MaxNLocator

savename = "test.jpg"

data = np.genfromtxt("./sin.txt", names=True)
plt.gca().xaxis.set_major_locator(MaxNLocator(integer=True))
#plt.gca().yaxis.set_major_locator(MaxNLocator(integer=True))

plt.plot(data['rad'], data['sinbararea'], label='sin bar area',marker='o',markevery= 20, linewidth=0.1, markersize=1)
#plt.plot(data['rad'], data['cos'], label='cos',marker='v',markevery= 20, linewidth=0.1, markersize=1)
#plt.plot(data['Day'], data['improvement'], label='Improvement',marker='o',markevery= 20, linewidth=1.5, markersize=10)
#plt.plot(data['Day'], data['test1'], label='test1',marker='v',markevery= 1, linewidth=1.5, markersize=10)
plt.legend()
plt.xlabel('rad')
plt.ylabel('sin bar area')
#plt.ylabel('sin or cos')
=======
data = np.genfromtxt("./test.txt", names=True)
plt.gca().xaxis.set_major_locator(MaxNLocator(integer=True))
#plt.gca().yaxis.set_major_locator(MaxNLocator(integer=True))

plt.plot(data['Day'], data['improvement'], label='Improvement',marker='o',markevery= 20, linewidth=1.5, markersize=10)
#plt.plot(data['Day'], data['test1'], label='test1',marker='v',markevery= 1, linewidth=1.5, markersize=10)
plt.legend()
plt.xlabel('Day')
plt.ylabel('Improvement')

#plt.savefig(savename)
#plt.grid()
plt.show()
