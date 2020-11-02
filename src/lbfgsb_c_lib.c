#include "lbfgsb_c_lib.h"
#include "lbfgsb.h"

int setulb_portable(int argc, void *argv[])
{
    return setulb(
        ((integer *)argv[0]),
        ((integer *)argv[1]),
        ((double *)argv[2]),
        ((double *)argv[3]),
        ((double *)argv[4]),
        ((integer *)argv[5]),
        ((double *)argv[6]),
        ((double *)argv[7]),
        ((double *)argv[8]),
        ((double *)argv[9]),
        ((double *)argv[10]),
        ((integer *)argv[11]),
        ((integer *)argv[12]),
        ((integer *)argv[13]),
        ((integer *)argv[14]),
        (logical *)argv[15],
        (integer *)argv[16],
        (double *)argv[17]);
}
