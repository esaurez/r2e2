INCLUDE(FindProtobuf)
FIND_PACKAGE(Protobuf REQUIRED)
INCLUDE_DIRECTORIES(${PROTOBUF_INCLUDE_DIR})

set (CMAKE_CXX_FLAGS "${CMAKE_BASE_CXX_FLAGS} -std=c++17")
PROTOBUF_GENERATE_CPP(PROTO_SRC PROTO_HEADER r2e2.proto)
ADD_LIBRARY(r2e2_messages ${PROTO_HEADER} ${PROTO_SRC})

# Create a custom target to generate Protobuf files before building my_main_library
add_custom_target(r2e2_messages_target DEPENDS ${PROTO_SRC} ${PROTO_HEADER})

# Add 'my_protobuf_library' as a dependency to protobuf_target
add_dependencies(r2e2_messages_target r2e2_messages)
