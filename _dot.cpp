#include "_dot.h"

_Dot::_Dot() {}

_Dot::_Dot(int n, float * w) {
	this -> w = new float[n];
	this -> n = n;
	memcpy(this -> w, w, n * sizeof(float));
}

void _Dot::_dot(float * in_, float * out, int m) {
	for (int i = 0; i < m; i++) {
		out[i] = 0;
		for (int j = 0; j < n; j++) {
			out[i] += w[j] * in_[i * n + j];
		}
	}
}