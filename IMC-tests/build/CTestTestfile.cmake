# CMake generated Testfile for 
# Source directory: /workspaces/IMC/IMC-tests
# Build directory: /workspaces/IMC/IMC-tests/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_imc "/workspaces/IMC/IMC-tests/build/test_imc")
set_tests_properties(test_imc PROPERTIES  _BACKTRACE_TRIPLES "/workspaces/IMC/IMC-tests/CMakeLists.txt;27;add_test;/workspaces/IMC/IMC-tests/CMakeLists.txt;0;")
subdirs("googletest")
