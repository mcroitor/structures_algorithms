set SOLVER=solver.exe

if exist %SOLVER% del %SOLVER%

gcc binarysearch.cpp -o %SOLVER% -lstdc++

%SOLVER% < tests/input01.txt > tests/output01.txt
%SOLVER% < tests/input02.txt > tests/output02.txt
%SOLVER% < tests/input03.txt > tests/output03.txt
%SOLVER% < tests/input04.txt > tests/output04.txt
%SOLVER% < tests/input05.txt > tests/output05.txt
%SOLVER% < tests/input06.txt > tests/output06.txt
%SOLVER% < tests/input07.txt > tests/output07.txt
%SOLVER% < tests/input08.txt > tests/output08.txt
%SOLVER% < tests/input09.txt > tests/output09.txt
%SOLVER% < tests/input10.txt > tests/output10.txt
%SOLVER% < tests/input11.txt > tests/output11.txt
%SOLVER% < tests/input12.txt > tests/output12.txt
%SOLVER% < tests/input13.txt > tests/output13.txt
%SOLVER% < tests/input14.txt > tests/output14.txt
%SOLVER% < tests/input15.txt > tests/output15.txt
%SOLVER% < tests/input16.txt > tests/output16.txt
%SOLVER% < tests/input17.txt > tests/output17.txt
%SOLVER% < tests/input18.txt > tests/output18.txt
%SOLVER% < tests/input19.txt > tests/output19.txt
%SOLVER% < tests/input20.txt > tests/output20.txt
