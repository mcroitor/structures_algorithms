set GENERATOR=generator.exe

if exist %GENERATOR% del %GENERATOR%

gcc generator.cpp -o %GENERATOR% -lstdc++

%GENERATOR% 10 > tests/input01.txt
%GENERATOR% 10 > tests/input02.txt
%GENERATOR% 100 > tests/input03.txt
%GENERATOR% 100 > tests/input04.txt
%GENERATOR% 100 > tests/input05.txt
%GENERATOR% 1000 > tests/input06.txt
%GENERATOR% 1000 > tests/input07.txt
%GENERATOR% 1000 > tests/input08.txt
%GENERATOR% 10000 > tests/input09.txt
%GENERATOR% 10000 > tests/input10.txt
%GENERATOR% 10000 > tests/input11.txt
%GENERATOR% 100000 > tests/input12.txt
%GENERATOR% 100000 > tests/input13.txt
%GENERATOR% 100000 > tests/input14.txt
%GENERATOR% 1000000 > tests/input15.txt
%GENERATOR% 1000000 > tests/input16.txt
%GENERATOR% 1000000 > tests/input17.txt
%GENERATOR% 1000000 > tests/input18.txt
%GENERATOR% 1000000 > tests/input19.txt
%GENERATOR% 1000000 > tests/input20.txt