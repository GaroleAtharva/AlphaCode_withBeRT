 // image by 90 Degree  
#include <bits/stdc++.h> 
using namespace std; 
void displayMatrix(unsigned int const *p,  
                    unsigned int row,  
                   unsigned int col);  
                      
void rotate(unsigned int *pS,  
            unsigned int *pD,  
            unsigned int row,  
            unsigned int col);  
              
void displayMatrix(unsigned int const *p,  
                   unsigned int r,  
                   unsigned int c)  
{  
    unsigned int row, col;  
    cout << "\n\n";  
  
    for (row = 0; row < r; row++)  
    {  
        for (col = 0; col < c; col++)  
            cout << * (p + row * c + col) << "\t";  
        cout << "\n";  
    }  
  
    cout << "\n\n";  
}  
  
void rotate(unsigned int *pS,  
            unsigned int *pD,  
            unsigned int row,  
            unsigned int col)  
{  
    unsigned int r, c;  
    for (r = 0; r < row; r++)  
    {  
        for (c = 0; c < col; c++)  
        {  
            *(pD + c * row + (row - r - 1)) =  
                        *(pS + r * col + c);  
        }  
    }  
}  
    
int main()  
{  
      
    // declarations  
    unsigned int image[][4] = {{1, 2, 3, 4},  
                               {5, 6, 7, 8},  
                               {9, 10, 11, 12}};  
    unsigned int *pSource;  
    unsigned int *pDestination;  
    unsigned int m, n;  
  
    // setting initial values  
    // and memory allocation  
    m = 3, n = 4, pSource = (unsigned int *)image;  
    pDestination = (unsigned int *)malloc
                   (sizeof(int) * m * n);  
  
    // process each buffer  
    displayMatrix(pSource, m, n);  
  
    rotate(pSource, pDestination, m, n);  
  
    displayMatrix(pDestination, n, m);  
  
    free(pDestination);  
  
    return 0;  
}
