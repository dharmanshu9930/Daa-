package today_S20;

import java.util.Arrays;

public class make_all_rows_col_as_0s_using_extra_space {
public static void main(String[] args) {
	int[][] mat = {{2,3,4,0},{3,5,0,7},{1,2,3,4},{8,2,3,4}};
	make_zero(mat);
}

public static void make_zero(int[][] mat) {
	if(mat == null || mat.length == 0) {
		return;
	}
	int m = mat.length;
    int n = mat[0].length;
    boolean row = false, col = false;
	for(int i = 0; i < n; i++) {
		if(mat[0][i] == 0) {
			row = true;
			break;
		}		
	}
	
	for(int j = 0;j < m; j++) {
		if(mat[j][0] == 0) {
			col = true;
			break;
		}	
	}
	
	for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (mat[i][j] == 0) {
                mat[0][j] = mat[i][0] = 0;
            }
        }
    }
	
	for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (mat[0][j] == 0 || mat[i][0] == 0) {
                mat[i][j] = 0;
            }
        }
    }
	for (int i = 0; row && i < n; i++) {
        mat[0][i] = 0;
    }

    // if `colFlag` is true, then assign 0 to all cells of the first column
    for (int i = 0; col && i < m; i++) {
        mat[i][0] = 0;
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j= 0; j < n; j++)
        { 
        	System.out.print(mat[i][j]+" ");
        }
        System.out.println();
    }
}
	
	
}

