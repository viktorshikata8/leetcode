import matplotlib.pyplot as plt
import matplotlib as mpl
import math
import numpy as np

if __name__ == "__main__":
    mpl.style.use('dark_background')

    y = lambda x: np.sin(x)
    fig = plt.subplots()
    x = np.linspace(-3, 3, 100)
    plt.plot(x, y(x))
    plt.show()