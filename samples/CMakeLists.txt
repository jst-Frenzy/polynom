# Get all cpp-files in the current directory
file(GLOB samples_list RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)

set(CMAKE_CXX_STANDARD 17)

foreach(sample_filename ${samples_list})
  # Get file name without extension
  get_filename_component(sample ${sample_filename} NAME_WE)

  # Add and configure executable file to be produced
  add_executable(${sample} ${sample_filename})
      set_target_properties(${sample} PROPERTIES
        CXX_STANDARD 17
    )
  target_link_libraries(${sample} parser)
  target_include_directories(${sample}
        PRIVATE
            ${CMAKE_SOURCE_DIR} 
            ${CMAKE_SOURCE_DIR}/parser
            ${CMAKE_SOURCE_DIR}/base
            "D:/antlrGen/antlr-4.13.2/include/antlr4-runtime"
  )
  add_custom_command(TARGET ${sample} POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "D:/antlrGen/antlr-4.13.2/bin/antlr4-runtime.dll"
            $<TARGET_FILE_DIR:${sample}>
  )
  set_target_properties(${sample} PROPERTIES
    OUTPUT_NAME "${sample}"
    PROJECT_LABEL "${sample}"
    RUNTIME_OUTPUT_DIRECTORY "../")
endforeach()