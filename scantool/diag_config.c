/*
 * diag_config.c.in is parsed by CMake to generate diag_config.c !
 * Do not edit diag_config.c !
 *
 */

#if defined(__cplusplus)
extern "C" {
#endif
#include <stdlib.h>		//for NULL

extern const struct diag_l0 diag_l0_dumb;
extern const struct diag_l0 diag_l0_br;
extern const struct diag_l0 diag_l0_elm;
extern const struct diag_l0 diag_l0_me;
extern const struct diag_l0 diag_l0_sim;
extern const struct diag_l0 diag_l0_dumbtest;

extern const struct diag_l2_proto diag_l2_proto_iso9141;
extern const struct diag_l2_proto diag_l2_proto_can;
extern const struct diag_l2_proto diag_l2_proto_iso14230;
extern const struct diag_l2_proto diag_l2_proto_mb1;
extern const struct diag_l2_proto diag_l2_proto_raw;
extern const struct diag_l2_proto diag_l2_proto_saej1850;
extern const struct diag_l2_proto diag_l2_proto_vag;
extern const struct diag_l2_proto diag_l2_proto_d2;


/* Hard-coded L3 protos. */
extern const struct diag_l3_proto diag_l3_j1979;
extern const struct diag_l3_proto diag_l3_vag;
extern const struct diag_l3_proto diag_l3_iso14230;

/* Static allocated l0dev_list, since it can be entirely determined at compile-time.
 * The last item must be a NULL ptr to ease iterating.
 */
const struct diag_l0 *l0dev_list[]={
	&diag_l0_dumb,
	&diag_l0_br,
	&diag_l0_elm,
	&diag_l0_me,
	&diag_l0_sim,
	&diag_l0_dumbtest,

	NULL
};

/* Static allocated l2 protocol list */
const struct diag_l2_proto *l2proto_list[] = {
	&diag_l2_proto_iso9141,
	&diag_l2_proto_can,
	&diag_l2_proto_iso14230,
	&diag_l2_proto_mb1,
	&diag_l2_proto_raw,
	&diag_l2_proto_saej1850,
	&diag_l2_proto_vag,
	&diag_l2_proto_d2,

	NULL
};

/* Static allocated L3 protocol list */
const struct diag_l3_proto *diag_l3_protocols[] = {
	&diag_l3_j1979,
	&diag_l3_vag,
	&diag_l3_iso14230,
	NULL
};

#if defined(__cplusplus)
}
#endif
