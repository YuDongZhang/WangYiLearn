cmake_minimum_required (VERSION 3.10)
 
project (WangYiLearn)

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 说是输出的可以为中文 目前看没有效果
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")  
 
# aux_source_directory (src SRC_LIST)

# 添加1.2-syntax/1.2.1-class目录下的源文件
aux_source_directory (1.2-syntax/1.2.1-class SRC_CLASS_LIST)
 
include_directories (
    # include
    1.2-syntax/1.2.1-class
    )
 
add_executable (
    main 
    # ${SRC_LIST} 
    ${SRC_CLASS_LIST}
    )


  