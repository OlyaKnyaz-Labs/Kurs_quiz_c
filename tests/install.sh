echo "Compiling gtests ..."
g++ -Wall -Werror -std=c++1z -Igoogletest/include -Igoogletest -Lgoogletest/lib -o Gtests.exe \
	googletest/lib/libgtest.a \
	googletest/src/gtest-all.cc main.cpp Test.cpp ../src/Check.h ../src/Check.cpp ../src/Body.h ../src/Body.cpp ../src/Menu.h ../src/Menu.cpp -pthread
