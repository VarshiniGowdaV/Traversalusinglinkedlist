cmake_minimum_required(VERSION 3.16)

project(Traversalusinglinkedlist LANGUAGES C)

add_executable(Traversalusinglinkedlist main.c)

include(GNUInstallDirs)
install(TARGETS Traversalusinglinkedlist
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
