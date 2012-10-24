/*++
Copyright (c) 2012 Microsoft Corporation

Module Name:

    default_solver.h

Abstract:

    Wrapps smt::solver as a solver for cmd_context

Author:

    Leonardo (leonardo) 2012-10-21

Notes:

--*/
#ifndef _DEFAULT_SOLVER_H_
#define _DEFAULT_SOLVER_H_

class solver;

solver * mk_default_solver();

#endif