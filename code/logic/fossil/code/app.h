/*
 * -----------------------------------------------------------------------------
 * Project: Fossil Logic
 *
 * This file is part of the Fossil Logic project, which aims to develop high-
 * performance, cross-platform applications and libraries. The code contained
 * herein is subject to the terms and conditions defined in the project license.
 *
 * Author: Michael Gene Brockus (Dreamer)
 *
 * Copyright (C) 2024 Fossil Logic. All rights reserved.
 * -----------------------------------------------------------------------------
 */
#ifndef FOSSIL_APP_CODE_H
#define FOSSIL_APP_CODE_H

#include "commands.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Custom application entry point.
 * This function is the main entry point for the custom application.
 * 
 * @param argc The number of command-line arguments.
 * @param argv The array of command-line arguments.
 * @return 0 if the application runs successfully, non-zero otherwise.
 */
bool app_entry(int argc, char** argv);

#ifdef __cplusplus
}
#endif

#endif /* FOSSIL_APP_CODE_H */
