PROJ_DIR=${PWD}
BUILD_DIR=${PROJ_DIR}/build
INC_DIR=${PROJ_DIR}/include
BIN_DIR=${PROJ_DIR}/bin
SRC_DIR=${PROJ_DIR}/src

OBJS=${BUILD_DIR}/main.o ${BUILD_DIR}/huffmanTree.o ${BUILD_DIR}/sort.o ${BUILD_DIR}/addToNode.o ${BUILD_DIR}/isFull.o ${BUILD_DIR}/isEmpty.o ${BUILD_DIR}/enque.o ${BUILD_DIR}/deque.o ${BUILD_DIR}/calcCode.o

all: ${BIN_DIR}/ExeHuffman
${BIN_DIR}/ExeHuffman: ${OBJS}
	gcc -o ${BIN_DIR}/ExeHuffman ${OBJS} -I${INC_DIR}

${BUILD_DIR}/%.o: ${SRC_DIR}/%.c
	gcc -c $< -o $@ -I${INC_DIR}

clean:
	rm -f ${BIN_DIR}/ExeHuffman
	rm -f ${BUILD_DIR}/*.o