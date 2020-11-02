

set( Headers
    lbfgsb_c_lib.h
	lbfgsb.h
)

set( Sources
    lbfgsb_c_lib.c
	lbfgsb.c
	linesearch.c
	linpack.c
	miniCBLAS.c
	print.c
    subalgorithms.c
    timer.c
	lbfgsb_c_lib.def
)

add_library( lbfgsb_c_lib SHARED
	${Headers}
	${Sources}
)

set_target_properties( lbfgsb_c_lib
	PROPERTIES
		RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}"
		CXX_VISIBILITY_PRESET hidden
)
