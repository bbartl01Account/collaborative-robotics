import numpy as np
import matplotlib.pyplot as plt

def HW2_Plotter():
    kHalf = np.genfromtxt("K_0.5.csv",delimiter=',',dtype=float)
    k1 = np.genfromtxt("K_1.csv",delimiter=',',dtype=float)
    k2 = np.genfromtxt("K_2.csv",delimiter=',',dtype=float)

    time0 = kHalf[:,0]
    time1 = k1[:,0]
    time2 = k2[:,0]

    desiredX = 0.5*np.cos(time0*2*np.pi/10)
    desiredY = 0.5*np.sin(time0*2*np.pi/10)

    figX, axX = plt.subplots(nrows=1, ncols=1)
    axX.plot(time0, desiredX, linewidth=2, label="Desired Trajectory", c="black")
    axX.plot(time0, kHalf[:,1], linewidth=2, label="Trajectory for k = 0.5", c="orange")
    axX.plot(time1, k1[:,1], linewidth=2, label="Trajectory for k = 1", c="green")
    axX.plot(time2, k2[:,1], linewidth=2, label="Trajectory for k = 2", c="cornflowerblue")
    axX.set_xlabel("Time (s)")
    axX.set_ylabel("X Position")
    axX.set_title("Trajectory in X for Various Proportional Gains")
    figX.legend(loc="lower right")
    figX.savefig("FigX.png")

    figY, axY = plt.subplots(nrows=1, ncols=1)
    axY.plot(time0, desiredY, linewidth=2, label="Desired Trajectory", c="black")
    axY.plot(time0, kHalf[:,2], linewidth=2, label="Trajectory for k = 0.5", c="orange")
    axY.plot(time1, k1[:,2], linewidth=2, label="Trajectory for k = 1", c="green")
    axY.plot(time2, k2[:,2], linewidth=2, label="Trajectory for k = 2", c="cornflowerblue")
    axY.set_xlabel("Time (s)")
    axY.set_ylabel("Y Position")
    axY.set_title("Trajectory in Y for Various Proportional Gains")
    figY.legend(loc="lower right")
    figY.savefig("FigY.png")


if __name__ == '__main__':
    HW2_Plotter()