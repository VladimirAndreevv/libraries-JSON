cmake_minimum_required(VERSION 3.10)
project(JSON LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(JSON
    main.cpp
)
set(nlohmann_json_DIR "C:/Users/andrr/vcpkg/installed/x64-mingw-static/share/nlohmann_json/")
find_package(nlohmann_json CONFIG REQUIRED)
set(RapidJSON_DIR "C:/Users/andrr/vcpkg/installed/x64-mingw-static/share/rapidjson")
find_package(RapidJSON CONFIG REQUIRED)
find_package(jsoncpp CONFIG REQUIRED)
set(Boost_DIR "C:/Users/andrr/vcpkg/installed/x64-mingw-static/share/boost")
find_package(Boost REQUIRED COMPONENTS json property_tree)

target_link_libraries(JSON
    PRIVATE
        nlohmann_json::nlohmann_json
        jsoncpp_lib
        Boost::json
        Boost::property_tree
)

target_include_directories(JSON
    PRIVATE
        ${RAPIDJSON_INCLUDE_DIRS}
)
