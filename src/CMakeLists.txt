

set( Headers
	lbfgsb.h
)

set( Sources
	lbfgsb.c
	linesearch.c
	linpack.c
	miniCBLAS.c
	print.c
    subalgorithms.c
    timer.c
	lbfgsb_c_lib.def
)

cuda_add_library( lbfgsb_c_lib SHARED
	${Headers}
	${Sources}
)


