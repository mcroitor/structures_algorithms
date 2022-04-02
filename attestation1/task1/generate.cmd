set GENERATOR=generator.exe

if exist %GENERATOR% del %GENERATOR%

gcc generator.cpp -o %GENERATOR% -lstdc++

rem %GENERATOR% 10 > tests/input01.txt
rem %GENERATOR% 10 > tests/input02.txt
rem %GENERATOR% 100 > tests/input03.txt
rem %GENERATOR% 100 > tests/input04.txt
rem %GENERATOR% 1000 > tests/input05.txt
rem %GENERATOR% 1000 > tests/input06.txt
rem %GENERATOR% 10000 > tests/input07.txt
rem %GENERATOR% 10000 > tests/input08.txt
rem %GENERATOR% 100000 > tests/input09.txt
rem %GENERATOR% 100000 > tests/input10.txt
%GENERATOR% 1000000 > tests/input11.txt
%GENERATOR% 1000000 > tests/input12.txt
%GENERATOR% 1000000 > tests/input13.txt
%GENERATOR% 1000000 > tests/input14.txt
%GENERATOR% 1000000 > tests/input15.txt