set(SOURCES
        main.cpp
        ../05_task/main.cpp
)

add_executable(task01 ${SOURCES})

target_include_directories(task01 PRIVATE .)