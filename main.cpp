#include <iostream>

//
auto print_rows_cols_diagonals() -> void// just printing
{
	int array[4][4] =
	{       /*0  1  2  3*/
		/*0*/{10,20,30,6},
		/*1*/{40,50,60,7},
		/*2*/{70,80,90,7},
		/*3*/{70,80,90,7}
	};
	// printing second row by making the i stay at 1
	std::cout << "- printing second row (if i == 1) " << std::endl;
	for (int i = 0; i <= 3; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			if (i == 1)
				std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
	// printing second col by making the j stay at 1
	std::cout << "- printing second col (if j == 1) " << std::endl;
	//
	for (int i = 0; i <= 3; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			if (j == 1)
				std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
	// printing main diagonal by making if(i==j)
	std::cout << "- printing main diagonal (if i == j) " << std::endl;
	//
	for (int i = 0; i <= 3; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			if (i == j )
				std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
	// printing second diagonal 
	std::cout << "- printing main diagonal (if i+j == size-1) full size not with <= " << std::endl;
	//
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if ( (i+j) == (4-1))
				std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
//
auto swap_col_col() -> void      // swapping columns with other columns
{
	int array[4][4] =
	{       /*0  1  2  3*/
		/*0*/{10,20,30,6},
		/*1*/{40,50,60,7},
		/*2*/{70,80,90,7},
		/*3*/{70,80,90,7}
	};
	// swap first col with last col
	short int temp;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j == 0)
			{
				temp = array[i][j];
				array[i][j] = array[i][3];
				array[i][3] = temp;
			}
		}
	}
	std::cout << "- printing swap first col with last col(if j==0  ) " << std::endl;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << "- printing swap first col with last col(if j==0 ) " << std::endl;

	int array2[4][4] =
	{       /*0  1  2  3*/
		/*0*/{10,20,30,6},
		/*1*/{40,50,60,7},
		/*2*/{70,80,90,7},
		/*3*/{70,80,90,7}
	};
	// to swap 2nd col with 3 col

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j == 0)
			{
				temp = array2[i][1];
				array2[i][1] = array2[i][3];
				array2[i][3] = temp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << array2[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
//
auto swap_row_row() -> void    // swap row row
{
	int array[4][4] =
	{       /*0  1  2  3*/
		/*0*/{10,20,30,6},
		/*1*/{40,50,60,7},
		/*2*/{70,80,90,7},
		/*3*/{70,80,90,7}
	};
	std::cout << "- swapping  first row with last row  (i==0) i is rows , j is columns " << std::endl;
	short int temp;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == 0)
			{
				temp = array[i][j];
				array[i][j] = array[3][j];
				array[3][j] = temp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
//
auto swap_col_row_second() -> void   // swapping row columns with second diagonal
{
	int array[4][4] =
	{       /*0  1  2  3*/
		/*0*/{10,20,30,6},
		/*1*/{40,50,60,7},
		/*2*/{70,80,90,7},
		/*3*/{70,80,90,7}
	};
	std::cout << "- swapping  secondary diagonal second row (i+j = full size -1)   " << std::endl;
	short int temp;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i + j == 4-1)
			{
				temp = array[i][j];
				array[i][j] = array[1][j];
				array[1][j] = temp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
	//
	std::cout << "- swapping  secondary diagonal second col (i+j = full size -1)   " << std::endl;
	int array2[4][4] =
	{       /*0  1  2  3*/
		/*0*/{10,20,30,6},
		/*1*/{40,50,60,7},
		/*2*/{70,80,90,7},
		/*3*/{70,80,90,7}
	};
	//
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i + j == 4 - 1)
			{
				temp = array2[i][j];
				array2[i][j] = array2[i][1];// here you can choose to swap col or row
				array2[i][1] = temp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << array2[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
//
auto swap_row_col_main() -> void    // swapping rows columns with main diagonal
{
	int array[4][4] =
	{       /*0  1  2  3*/
		/*0*/{10,20,30,6},
		/*1*/{40,50,60,7},
		/*2*/{70,80,90,7},
		/*3*/{70,80,90,7}
	};
	std::cout << "- swapping  main diagonal second row   " << std::endl;

	short int temp;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i==j)
			{
				temp = array[i][j];
				array[i][j] = array[1][j];
				array[1][j] = temp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
	// another swap
	int array2[4][4] =
	{       /*0  1  2  3*/
		/*0*/{10,20,30,6},
		/*1*/{40,50,60,7},
		/*2*/{70,80,90,7},
		/*3*/{70,80,90,7}
	};
	std::cout << "- swapping  main diagonal last col   " << std::endl;

	short int temp2;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j)
			{
				temp2 = array2[i][j];
				array2[i][j] = array2[i][3];
				array2[i][3] = temp2;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << array2[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
//
auto swap_main_second_diagonal() -> void    // swapping main with second diagonal
{
	int array[4][4] =
	{       /*0  1  2  3*/
		/*0*/{10,20,30,6},
		/*1*/{40,50,60,7},
		/*2*/{70,80,90,7},
		/*3*/{70,80,90,7}
	};
	std::cout << "- swapping  secondary diagonal with main diagonal if(i+j == full size - 1)   " << std::endl;

	short int temp;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i + j == 4-1)
			{
				temp = array[i][i];
				array[i][i] = array[i][j];
				array[i][j] = temp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
//
auto swap_upperSide_lower() -> void  // swapping upper side with lower side// not finished
{
	int array[4][4] =
	{       /*0  1  2  3*/
		/*0*/{10,20,30,6},
		/*1*/{40,50,60,7},
		/*2*/{70,80,90,7},
		/*3*/{70,80,90,7}
	};
	std::cout << "- swapping upper part with lower part   " << std::endl;
	short int temp;
	for (int i = 0; i < 4/2; i++) // rows stay  from 0-1
	{
		for (int j = 0; j < 4; j++)
		{
			temp = array[i][j];
			array[i][j] = array[i+2][j]; // access row 0+2 and 1+2
			array[i+2][j] = temp;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
//
auto swap_triangles() -> void// swapping upper triangle with lower one
{
	int array[4][4] =
	{       /*0  1  2  3*/
		/*0*/{10,20,30,6},
		/*1*/{40,50,60,7},
		/*2*/{70,80,90,7},
		/*3*/{70,80,90,7}
	};
	std::cout << "- swapping upper triangle with lower triangle   " << std::endl;
	short int temp;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i > j)
			{
				temp = array[i][j];
				array[i][j] = array[j][i];
				array[j][i] = temp;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
//
auto main() -> int
{
	print_rows_cols_diagonals();
	//
	swap_col_col();
	//
	swap_row_row();
	//
	swap_col_row_second();
	//
	swap_row_col_main();
	//
	swap_main_second_diagonal();
	//
	swap_triangles();
	//
	swap_upperSide_lower();
}