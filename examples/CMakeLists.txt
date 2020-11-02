
function( add_example module name )
	add_executable( ${name} ${name}.c )
	target_link_libraries( ${name} ${module} )
	set_property( TARGET ${name}
		PROPERTY RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}" )
	set_property( TARGET ${name} PROPERTY FOLDER examples )
endfunction()

add_example(lbfgsb_c_lib driver1 driver2 driver3)
