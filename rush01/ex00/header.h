#ifndef HEADER_H
# define HEADER_H

typedef	struct	s_combo
{
	char	x0;
	char	x1;
	char	x2;
	char	x3;
	char	x4;
	char	x5;
}	t_cmb;

t_cmb	*combinations;
t_cmb	*cols;
t_cmb	*rows;
t_cmb	*dest;

# include <unistd.h>
# include <stdlib.h>
# include "empty_cols_rows.c"
# include "combinations.c"
# include "input_data_checks.c"
# include "transp_check_vert.c"
# include "output_matrix.c"
# include "build.c"

#endif
