add_library (Hello 
  Speaker.h
  Speaker.cpp)

install (TARGETS Hello DESTINATION bin)
install (FILES Speaker.h DESTINATION include)
