set(Main_SRCS
    main.cpp
)

add_executable(${APP_NAME}
    ${Main_SRCS}
    ${SRCS}
)

# Specify here the libraries this program depends on
target_link_libraries(${APP_NAME}
)

install(TARGETS ${APP_NAME} EXPORT ${APP_NAME} DESTINATION bin)