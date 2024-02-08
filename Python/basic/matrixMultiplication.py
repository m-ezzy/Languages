# Program to multiply two matrices

# function to print a matrix
def printMatrix(A) : # printMatrix #displayMatrix
	print("____________________")
	for i in range(len(A)) :
		for j in range(len(A[0])) :
			print(A[i][j], end=" ") # end = " " to print in same line
		print() # new line

# function to transpose a matrix
def transposeMatrix(A) :
	B = [[0 for i in range(len(A))] for j in range(len(A[0]))]
	for i in range(len(A)) :
		for j in range(len(A[0])) :
			B[j][i] = A[i][j]
	return B

# function to multiply two matrices using list comprehension
# def multiply2Matrices(A, B): # matrixMultiplication
#   result = [[sum(a*b for a,b in zip(A_row,B_col)) for B_col in zip(*B)] for A_row in A]
#   for r in result:
#     print(r)
# print("The Resultant Matrix Is ::>")
# multiply2Matrices(A, B)

# function to check if two matrices are compatible for multiplication
def checkCompatibilityForMultiplication(A, B): # checkCompatibility #checkMatrixCompatibility
	if len(A[0]) == len(B):
		return True
	else:
		return False

# function to multiply two matrices using nested loops
def multiply2Matrices(A, B): # matrixMultiplication #multiply2Matrices
  C = [ [0] * len(B[0]) ] * len(A)
  # C = [[0 for i in range(len(B[0]))] for j in range(len(A))]

  for i in range(len(A)) : # rows of A # rows of C
    for j in range(len(B[0])) : # columns of B # columns of C
      for k in range(len(A[0])) : # len(A[0]) = len(B) # columns of A # rows of B
        C[i][j] += A[i][k] * B[k][j]
  return C



# main script starts here
# 2x4 matrix
A = [
  [1, 2, 3, 4],
  [4, 5, 6, 7],
]
# 4x3 matrix
B = [
	[77, 80, 90],
	[26, 10, 11],
	[11, 12, 13],
	[13, 14, 15],
]

C = multiply2Matrices(A, B)

printMatrix(A)
printMatrix(B)
printMatrix(C)
