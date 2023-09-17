#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include <chrono>

#include "_dot.h"

int main() {
	
	srand (time(NULL));

	const int M = 10000;
	const int N = 5000;

	// Initialize the weight w.
	float * w = new float[N];
	for (int i = 0; i < N; i++)
		w[i] = (i + 0.0) / N;

	// Create the dot product operator.
	_Dot D(N, w);

	// Randomly initialize the input matrix.
	float * in_ = new float [M * N];
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			in_[i * N + j] = ((float) rand() / (RAND_MAX));
		}
	}

	// Allocate memory for the output.
	float * out = new float[M];

	// Do the dot product.
	auto start = std::chrono::high_resolution_clock::now();
	D._dot(&in_[0], out, M);
	auto stop = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
	std::cout << static_cast<float>(duration.count()) << " microsecond per operation." << std::endl;

	// Print the results.
	/*
	for (int i = 0; i < M; i++)
		std::cout << out[i] << " ";
	*/

	std::cout << std::endl;
}