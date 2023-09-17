# distutils: language = c++
from _dot cimport _Dot

cdef class Dot:
	cdef _Dot D

	def __init__(self, n, w):
		
		cdef float[:] w_view = w
		self.D = _Dot(n, &w_view[0])

	def dot(self, in_, out, m):
		cdef float[:,:] in_view = in_
		cdef float[:] out_view = out
		cdef int m_ = m
		self.D._dot(&in_view[0, 0], &out_view[0], m_)