import timeit

setup = """

from dot import Dot
import numpy as np

N = 5000
M = 10000

w = np.arange(N) / N
w = w.astype(np.single)
in_ = np.random.uniform(low=0, high=1, size=[M, N]).astype(np.single)
out = np.zeros([M], dtype=np.single)

D = Dot(N, w)

"""

timeit.timeit(setup=setup, stmt='D.dot(in_, out, M)', number=1)
print(timeit.timeit(setup=setup, stmt='D.dot(in_, out, M)', number=1) * 1e6)
print(timeit.timeit(setup=setup, stmt='np.sum(w * in_, axis=1)', number=1) * 1e6)

