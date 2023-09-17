# cython-cpp
How to call C++ code in Python.

We use an example of dot product. Please also see the video in bilibili: 
[Python调用C++函数，获得与C++媲美的速度]([https://duckduckgo.com](https://search.bilibili.com/all?vt=71648091&keyword=cython&from_source=webtop_search&spm_id_from=333.1007&search_source=5)https://search.bilibili.com/all?vt=71648091&keyword=cython&from_source=webtop_search&spm_id_from=333.1007&search_source=5)

To run the code in C++,
first compile: `g++ main.cpp _det.cpp -o main`
and run with `./main`

To run the code in Python,
first compile: `python setup.py build_ext --inplace`
then run `python main.py`
