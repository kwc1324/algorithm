PROJ_DIR=${PWD}
BUILD_DIR=${PROJ_DIR}/build
BIN_DIR=${PROJ_DIR}/bin
INC_DIR=${PROJ_DIR}/include
SRC_DIR=${PROJ_DIR}/src

OBJS=${BUILD_DIR}/main.o ${BUILD_DIR}/kru.o ${BUILD_DIR}/init.o ${BUILD_DIR}/checkVisit.o ${BUILD_DIR}/insertEdge.o

all: ${BIN_DIR}/ExeKruskal

${BIN_DIR}/ExeKruskal: ${OBJS}
	gcc -o ${BIN_DIR}/ExeKruskal ${OBJS}

${BUILD_DIR}/%.o: ${SRC_DIR}/%.c
	gcc -c $< -o $@ -I${INC_DIR}

clean:
	rm -f ${BUILD_DIR}/*.o
	rm -f ${BIN_DIR}/ExeKruskal