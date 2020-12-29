PROJ_DIR=${PWD}
BUILD_DIR=${PROJ_DIR}/build
BIN_DIR=${PROJ_DIR}/bin
INC_DIR=${PROJ_DIR}/include
SRC_DIR=${PROJ_DIR}/src

OBJS=${BUILD_DIR}/main.o ${BUILD_DIR}/isFull.o ${BUILD_DIR}/isEmpty.o ${BUILD_DIR}/deque.o ${BUILD_DIR}/enque.o ${BUILD_DIR}/bfs_mat.o ${BUILD_DIR}/init.o ${BUILD_DIR}/insertEdge.o ${BUILD_DIR}/insertVertex.o

all: ${BIN_DIR}/ExeBFS

${BIN_DIR}/ExeBFS: ${OBJS}
	gcc -o ${BIN_DIR}/ExeBFS ${OBJS}

${BUILD_DIR}/%.o: ${SRC_DIR}/%.c
	gcc -c $< -o $@ -I${INC_DIR}

clean:
	rm -f ${BUILD_DIR}/*.o
	rm -f ${BIN_DIR}/ExeBFS