add_library(Logger logger.cpp)

target_link_libraries(Logger PUBLIC ConsoleUtils)

target_include_directories(Logger PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
  $<INSTALL_INTERFACE:include>
)

install (TARGETS Logger EXPORT LoggerConfig
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(DIRECTORY ../include/ DESTINATION include)

install(EXPORT LoggerConfig
  FILE LoggerConfig.cmake
  DESTINATION lib/cmake/Logger
)
