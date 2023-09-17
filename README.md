# cython-cpp
How to call C++ code in Python.

We use an example of dot product. Please also see the video in bilibili: 

* [Python调用C++函数，获得与C++媲美的速度](https://www.bilibili.com/video/BV16a411y7wT/?share_source=copy_web&vd_source=e5431a0889dcfd6827b0e15e12d1bbd5)
* [Cython+NumPy加速法，让你的Python加速百倍](https://www.bilibili.com/video/BV1NF411i74S/?share_source=copy_web&vd_source=e5431a0889dcfd6827b0e15e12d1bbd5)

To run the code in C++,
first compile: `g++ main.cpp _det.cpp -o main`
and run with `./main`

To run the code in Python,
first compile: `python setup.py build_ext --inplace`
then run `python main.py`

