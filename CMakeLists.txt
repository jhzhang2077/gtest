
    cmake_minimum_required(VERSION 3.6)
    
  include_directories(googletest/include)
  

    project(unittest)
    add_executable(unittest unittest.cpp)
#   target_include_directories(unittest
#RELATIVE_PATH /googletest/include)

    target_link_libraries(unittest
                                   ../googletest/lib/gtestd
                                   ../googletest/lib/gtest_maind
                                   
                                   )
    

    #这个必须放在project的后面
    IF(MSVC)
        message("run here")
        set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
        set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
    endif()
     