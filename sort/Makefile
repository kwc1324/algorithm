PROJ_DIR=${PWD}
BUILD_DIR=${PROJ_DIR}/build
BIN_DIR=${PROJ_DIR}/bin
SRC_DIR=${PROJ_DIR}/src
INC_DIR=${PROJ_DIR}/include

OBJS=${BUILD_DIR}/main.o ${BUILD_DIR}/bubble.o ${BUILD_DIR}/printAll.o ${BUILD_DIR}/selection.o

all: ${BIN_DIR}/sort

${BIN_DIR}/sort: ${OBJS}
	gcc -o ${BIN_DIR}/sort ${OBJS}

${BUILD_DIR}/%.o: ${SRC_DIR}/%.c
	gcc -c $< -o $@ -I${INC_DIR}

clean:
	rm -f ${BUILD_DIR}/*.o
	rm -f ${BIN_DIR}/sort