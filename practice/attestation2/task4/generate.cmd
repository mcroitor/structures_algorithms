set GENERATOR=generator.exe

if exist %GENERATOR% del %GENERATOR%

gcc generator.cpp -o %GENERATOR% -lstdc++

rem %GENERATOR% 10 > tests/input01.txt
%GENERATOR% 10 > tests/input02.txt
%GENERATOR% 100 > tests/input03.txt
%GENERATOR% 100 > tests/input04.txt
%GENERATOR% 1000 > tests/input05.txt
%GENERATOR% 1000 > tests/input06.txt
%GENERATOR% 10000 > tests/input07.txt
%GENERATOR% 10000 > tests/input08.txt
%GENERATOR% 100000 > tests/input09.txt
%GENERATOR% 100000 > tests/input10.txt