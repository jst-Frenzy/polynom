file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

add_executable(polynom ${srcs} ${hdrs})