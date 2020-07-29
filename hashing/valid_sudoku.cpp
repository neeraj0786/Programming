int Solution::isValidSudoku(const vector<string> &A) {
    unordered_map<int,unordered_set<char>> row,col,subcell;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if(A[i][j]!='.')
            {
                if(row[i].find(A[i][j])!=row[i].end()||col[j].find(A[i][j])!=col[j].end())
                return 0;
                int s = (j/3)+10*(i/3);
                if(subcell[s].find(A[i][j])!=subcell[s].end())
                return 0;
                row[i].insert(A[i][j]);
                col[j].insert(A[i][j]);
                subcell[s].insert(A[i][j]);
            }
        }
    }
    return 1;
}

