cmake_minimum_required(VERSION 3.12)
project(algoritma-permrograman C)

set(module_dirs
    Modul\ 01\ Pengantar\ Algoritma\ dan\ Pemrograman
    Modul\ 02\ Pemrograman\ Dasar\ C
    Modul\ 03\ Variabel\ Konstanta\ dan\ Tipe\ Data
    Modul\ 04\ Operator
    Modul\ 05\ Flow\ Control\ Decision\ Making
    Modul\ 06\ Flow\ Control\ Looping
    Modul\ 07\ Array
    Modul\ 08\ Fungsi\ dan\ Prosedur
    Modul\ 09\ Pointer
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
