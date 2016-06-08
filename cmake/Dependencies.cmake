# This list is required for static linking and exported to PelotonConfig.cmake
set(Peloton_LINKER_LIBS "")

# ---[ Boost
find_package(Boost 1.46 REQUIRED COMPONENTS system filesystem)
include_directories(SYSTEM ${Boost_INCLUDE_DIR})
list(APPEND Peloton_LINKER_LIBS ${Boost_LIBRARIES})

# ---[ Threads
find_package(Threads REQUIRED)
list(APPEND Peloton_LINKER_LIBS ${CMAKE_THREAD_LIBS_INIT})

# ---[ Google-gflags
include("cmake/External/gflags.cmake")
include_directories(SYSTEM ${GFLAGS_INCLUDE_DIRS})
list(APPEND Peloton_LINKER_LIBS ${GFLAGS_LIBRARIES})

# ---[ Google-protobuf
include(cmake/ProtoBuf.cmake)

# ---[ Libevent
find_package(Libevent REQUIRED)
include_directories(SYSTEM ${LIBEVENT_INCLUDE_DIRS})
list(APPEND Peloton_LINKER_LIBS ${LIBEVENT_LIBRARIES})

# ---[ Doxygen
if(BUILD_docs)
  find_package(Doxygen)
endif()

# ---[ Jsoncpp
find_package(Jsoncpp)
include_directories(SYSTEM ${JSONCPP_INCLUDE_DIRS})
list(APPEND Peloton_LINKER_LIBS ${JSONCPP_LIBRARIES})

# ---[ Sanitizers
if("${CMAKE_BUILD_TYPE}" STREQUAL "Debug")
   include(Sanitizer)
#  list(APPEND Peloton_LINKER_LIBS "-ltsan")
endif()

# ---[ Jemalloc
find_package(JeMalloc)
include_directories(SYSTEM ${JEMALLOC_INCLUDE_DIR})
list(APPEND Peloton_LINKER_LIBS ${JEMALLOC_LIBRARIES})

# ---[ Libunwind
find_package(Libunwind REQUIRED)
include_directories(SYSTEM ${LIBUNWIND_INCLUDE_DIRS})
list(APPEND Peloton_LINKER_LIBS ${LIBUNWIND_LIBRARIES})

