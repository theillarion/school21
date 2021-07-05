#include "header.h"

int main(int argc, char	*argv[])
{
	if (argc == 2 && passed_all_checks(argv[1]) == 1)
	{
		combinations = make_combinations();
		rows = empty_rows(argv[1]);
		cols = empty_cols(argv[1]);
		dest = malloc(sizeof(t_cmb) * 4);
		build(combinations, rows, cols, 0);
		output_struct(dest);
	}
	else
	{
		write(1, "Error\n", 6);
	}
}
