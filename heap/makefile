PROJ_DIR=${PWD}
BUILD_DIR=${PROJ_DIR}/build
BIN_DIR=${PROJ_DIR}/bin
INC_DIR=${PROJ_DIR}/include
SRC_DIR=${PROJ_DIR}/src

OBJS=${BUILD_DIR}/main.o ${BUILD_DIR}/heapify.o ${BUILD_DIR}/findLoc.o ${BUILD_DIR}/swap.o ${BUILD_DIR}/addToHeap.o

all: ${BIN_DIR}/ExeHeap
${BIN_DIR}/ExeHeap: ${OBJS}
	gcc -o ${BIN_DIR}/ExeHeap ${OBJS}

${BUILD_DIR}/%.o: ${SRC_DIR}/%.c
	gcc -c $< -o $@ -I${INC_DIR}

clean:
	rm -f ${BUILD_DIR}/*.o
	rm -f ${BIN_DIR}/ExeHeap