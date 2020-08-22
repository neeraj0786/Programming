void Solution::setZeroes(vector<vector<int> > &A) {
 bool row_flag = false; 
    bool col_flag = false; 
  
   int R = A.size(),C =A[0].size();
    for (int i = 0; i < R; i++) { 
        for (int j = 0; j < C; j++) { 
            if (i == 0 && A[i][j] == 0) 
                row_flag = true; 
  
            if (j == 0 && A[i][j] == 0) 
                col_flag = true; 
  
            if (A[i][j] == 0) { 
  
                A[0][j] = 0; 
                A[i][0] = 0; 
            } 
        } 
    } 
  
    // Modify the input matrix mat[] using the 
    // first row and first column of Matrix mat 
    for (int i = 1; i < R; i++) { 
        for (int j = 1; j < C; j++) { 
  
            if (A[0][j] == 0 || A[i][0] == 0) { 
                A[i][j] = 0; 
            } 
        } 
    } 
  
    // modify first row if there was any 1 
    if (row_flag == true) { 
        for (int i = 0; i < C; i++) { 
            A[0][i] = 0; 
        } 
    } 
  
    // modify first col if there was any 1 
    if (col_flag == true) { 
        for (int i = 0; i < R; i++) { 
            A[i][0] = 0; 
        } 
    } 
} 

