cdef extern from "_dot.cpp":
    pass

cdef extern from "_dot.h":
    cdef cppclass _Dot:
        _Dot() except +
        _Dot(int, float *) except +
        void _dot(float *, float *, int)