/* 
 * File:   pstoufr2cpca.h
 * Author: richter
 *
 * Created on 22. Januar 2015, 07:33
 */

#ifndef PSTOUFR2CPCA_H
#define	PSTOUFR2CPCA_H

int pstoufr2cpca_main(int argc, char *argv[]);
int pstoufr2cpca(int num_opt, int copies, char* user, char* title,
        int ifd, cups_option_t *p_cups_opt, char *cmd_arg[], const log4c_category_t *LOGGER);

#endif	/* PSTOUFR2CPCA_H */

