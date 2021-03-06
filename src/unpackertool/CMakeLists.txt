
set(UNPACKERTOOL_SOURCES
	arg_handler.cpp
	unpacker.cpp
	plugin_mgr.cpp
)

if(NOT TARGET unpackertool)

	add_executable(unpackertool ${UNPACKERTOOL_SOURCES})
	set_target_properties(unpackertool PROPERTIES OUTPUT_NAME "unpacker")

	# There are multiple cases for linking because of the plugin model and different behavior under Windows and Linux
	# 1. The libraries that are used only in the unpacker core are linked standardly
	# 2. The libraries that are used in plugins under Linux are linked as whole-archives
	# 3. The libraries that are used in plugins under Windows are linked to plugins themselves in plugins/*/CMakeLists.txt
	# 4. The libraries that are used both by core and plugins need to be linked as whole-archive under Linux, and under Windows like in 1 and 3 simultaneously
	target_link_libraries(unpackertool cpdetect)
	if(UNIX)
		target_link_libraries(unpackertool -rdynamic -Wl,-whole-archive tl-cpputils unpacker loader pelib -Wl,-no-whole-archive dl)
	elseif(MSVC)
		target_link_libraries(unpackertool shlwapi)
	endif()

	install(TARGETS unpackertool RUNTIME DESTINATION bin)

	# Plugins.
	add_subdirectory(plugins)

endif()
