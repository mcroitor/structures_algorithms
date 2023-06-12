CC=g++
SRC=solver.cpp
APP=solver

BINDIR=./bin
TESTSDIR=./tests


all: prepare build

prepare:
	mkdir -p ${BINDIR}

build:
	${CC} ${SRC} -o ${BINDIR}/${APP}

sort:
	${CC} sorter.cpp -o ${BINDIR}/sorter
	${BINDIR}/sorter < ${TESTSDIR}/input01.txt > ${TESTSDIR}/in01.txt
	${BINDIR}/sorter < ${TESTSDIR}/input02.txt > ${TESTSDIR}/in02.txt
	${BINDIR}/sorter < ${TESTSDIR}/input03.txt > ${TESTSDIR}/in03.txt
	${BINDIR}/sorter < ${TESTSDIR}/input04.txt > ${TESTSDIR}/in04.txt
	${BINDIR}/sorter < ${TESTSDIR}/input05.txt > ${TESTSDIR}/in05.txt
	${BINDIR}/sorter < ${TESTSDIR}/input06.txt > ${TESTSDIR}/in06.txt
	${BINDIR}/sorter < ${TESTSDIR}/input07.txt > ${TESTSDIR}/in07.txt
	${BINDIR}/sorter < ${TESTSDIR}/input08.txt > ${TESTSDIR}/in08.txt
	${BINDIR}/sorter < ${TESTSDIR}/input09.txt > ${TESTSDIR}/in09.txt
	${BINDIR}/sorter < ${TESTSDIR}/input10.txt > ${TESTSDIR}/in10.txt

solve:
	${BINDIR}/${APP} < ${TESTSDIR}/in01.txt > ${TESTSDIR}/output01.txt
	${BINDIR}/${APP} < ${TESTSDIR}/in02.txt > ${TESTSDIR}/output02.txt
	${BINDIR}/${APP} < ${TESTSDIR}/in03.txt > ${TESTSDIR}/output03.txt
	${BINDIR}/${APP} < ${TESTSDIR}/in04.txt > ${TESTSDIR}/output04.txt
	${BINDIR}/${APP} < ${TESTSDIR}/in05.txt > ${TESTSDIR}/output05.txt
	${BINDIR}/${APP} < ${TESTSDIR}/in06.txt > ${TESTSDIR}/output06.txt
	${BINDIR}/${APP} < ${TESTSDIR}/in07.txt > ${TESTSDIR}/output07.txt
	${BINDIR}/${APP} < ${TESTSDIR}/in08.txt > ${TESTSDIR}/output08.txt
	${BINDIR}/${APP} < ${TESTSDIR}/in09.txt > ${TESTSDIR}/output09.txt
	${BINDIR}/${APP} < ${TESTSDIR}/in10.txt > ${TESTSDIR}/output10.txt
