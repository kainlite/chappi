set(Main_SRCS
    main.cpp
)

add_executable(chappi
    ${Main_SRCS}
)

# Specify here the libraries this program depends on
target_link_libraries(chappi
)

install(TARGETS chappi DESTINATION bin)