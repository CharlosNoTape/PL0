//
//  machine.h
//  PL0
//
//  Created by Charlos Staszeski on 4/28/18.
//  Copyright © 2018 charlosnotape. All rights reserved.
//

#ifndef PL0_MACHINE_H
#define PL0_MACHINE_H

typedef enum {
	LIT = 1,
	RTN,
	LOD,
	STO,
	CAL,
	INC,
	JMP,
	JPC,
	SIO,
	NEG,
	ADD,
	SUB,
	MUL,
	DIV,
	ODD,
	MOD,
	EQL,
	NEQ,
	LSS,
	LEQ,
	GTR,
	GEQ
} OPCode;

typedef struct {

} PCB;

typedef struct {
	OPCode op;
	int r;
	int l;
	int m;
} Instruction;

#endif /* PL0_MACHINE_H */
