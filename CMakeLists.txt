cmake_minimum_required(VERSION 3.12)
project(algoritma-permrograman C)

set(module_dirs
    Modul\ 1\ Pengantar\ Algoritma\ dan\ Pemrograman
    Modul\ 2\ Pemrograman\ Dasar\ C
    Modul\ 3\ Variabel\ Konstanta\ dan\ Tipe\ Data
    Modul\ 4\ Operator
    Modul\ 5\ Flow\ Control\ Decision\ Making
    Modul\ 6\ Flow\ Control\ Looping
    Modul\ 7\ Array
    Modul\ 8\ Fungsi\ dan\ Prosedur
    Modul\ 9\ Pointer
    Modul\ 10\ Enumerasi\ dan\ Struktur
    Modul\ 11\ File\ Handling\ in\ C
)

foreach(module_dir ${module_dirs})

    file(GLOB sources ${module_dir}/*.c)

    foreach(module_source ${sources})
        get_filename_component(module_name ${module_source} NAME)
        string(REPLACE ".c" "" module_name ${module_name})

        add_executable(${module_name} ${module_source})
        set_target_properties(${module_name} PROPERTIES
                                RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${module_dir}
        )

    endforeach()

endforeach()
