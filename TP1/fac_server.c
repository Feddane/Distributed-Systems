/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "fac.h"
#include <stdio.h>

int *
factoriel_1_svc(S *argp, struct svc_req *rqstp)
{
    static int result = 1;
    int i;

    /*
     * Calculating factorial
     */
    for (i = 1; i <= argp->a; i++) {
        result *= i;
    }

    return &result;
}

