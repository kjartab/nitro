
include_directories(nrt/include)
include_directories(nitf/include)

if (WIN32)
      add_definitions("-DNRT_MODULE_EXPORTS=1")
      add_definitions("-DNITF_MODULE_EXPORTS=1")
endif()

add_sources(nrt/source/*.c)
add_sources(nitf/source/*.c)

add_library(${NITF_C_LIB_NAME} SHARED ${SRC})


install(TARGETS ${NITF_C_LIB_NAME}
  RUNTIME DESTINATION ${NITRO_BIN_SUBDIR}
  LIBRARY DESTINATION ${NITRO_LIB_SUBDIR}
  ARCHIVE DESTINATION ${NITRO_LIB_SUBDIR})


