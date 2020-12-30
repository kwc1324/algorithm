PROG_DIR = ${PWD}
BUILD_DIR = ${PROG_DIR}/build
BIN_DIR = ${PROG_DIR}/bin
INC_DIR = ${PROG_DIR}/include
SRC_DIR = ${PROG_DIR}/src

OBJS = ${BUILD_DIR}/main.o ${BUILD_DIR}/dfs_mat.o ${BUILD_DIR}/init.o ${BUILD_DIR}/insertEdge.o ${BUILD_DIR}/insertVertex.o ${BUILD_DIR}/isEmpty.o ${BUILD_DIR}/isFull.o ${BUILD_DIR}/pop.o ${BUILD_DIR}/push.o

all: ${BIN_DIR}/ExeDFS

${BIN_DIR}/ExeDFS: ${OBJS}
	gcc -o ${BIN_DIR}/ExeDFS ${OBJS}

${BUILD_DIR}/%.o: ${SRC_DIR}/%.c
	gcc -c $< -o $@ -I${INC_DIR}

clean:
	rm -f ${BUILD_DIR}/*.o
	rm -f ${BIN_DIR}/ExeDFS