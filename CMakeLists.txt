cmake_minimum_required(VERSION 3.21)
macro(get_subdirectories result curdir)
    FILE(GLOB children RELATIVE ${curdir} ${curdir}/*)
    SET(dirlist "")
    FOREACH (child ${children})
        IF (IS_DIRECTORY ${curdir}/${child})
            SET(dirlist ${dirlist} ${child})
        ENDIF ()
    ENDFOREACH ()
    SET(${result} ${dirlist})
endmacro()
project("University" VERSION "0.0.1")

# Include sub-projects.
get_subdirectories(SUBDIRS "${CMAKE_CURRENT_SOURCE_DIR}/Projects")

FOREACH (subdir ${SUBDIRS})
    add_subdirectory("Projects/${subdir}")
ENDFOREACH ()
