SOLVER=task1.exe

rm -f ${SOLVER}

gcc task1.cpp -o ${SOLVER} -lstdc++

./${SOLVER} < tests/input01.txt > tests/output01.txt
./${SOLVER} < tests/input02.txt > tests/output02.txt
./${SOLVER} < tests/input03.txt > tests/output03.txt
./${SOLVER} < tests/input04.txt > tests/output04.txt
./${SOLVER} < tests/input05.txt > tests/output05.txt
./${SOLVER} < tests/input06.txt > tests/output06.txt
./${SOLVER} < tests/input07.txt > tests/output07.txt
./${SOLVER} < tests/input08.txt > tests/output08.txt
./${SOLVER} < tests/input09.txt > tests/output09.txt
./${SOLVER} < tests/input10.txt > tests/output10.txt
