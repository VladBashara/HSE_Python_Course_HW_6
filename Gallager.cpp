#include <iostream>

Matrix generateStartSubmatrix(uint cols, uint rows, uint d)
{
	uint rowDegree = cols / d;
	if (rowDegree * d != cols)
		throw "Matrix isn't regular";

	Matrix matrix = zeros(cols, rows);
	uint step = 0;
	for (uint row = 0; row < rows; row++)
	{
		for (uint col = 0; col < rowDegree; col++)
		{
			matrix[row][step++ % cols] = 1;
		}
	}
	return matrix;
}

Matrix permutateSubmatrix(Matrix matrix)
{
	

	return newMatrix;
}

Matrix makeMatrix(uint n, uint k, uint d)
{
	// Генерируем начальную подматрицу
	auto H_1 = generateStartSubmatrix(n, k, d);

	// Из неё получаем N-1 остальных подматриц, используя перестановки столбцов
	std::vector<auto> H_v(N-1);
	for (auto&& subMatrix : H_v)
		subMatrix.push_back( permutateSubmatrix(H_1) );

	// Объединяем в итоговую матрицу
	EIGEN METHODS
}

int main(int argc, char* argv[])
{
	auto gallagerMatrix = makeMatrix();
}