/**
 * @file lv_draw_qingo.h
 *
 */

#ifndef LV_DRAW_QINGO_H
#define LV_DRAW_QINGO_H


#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../../lv_conf_internal.h"

#if LV_USE_GPU_QINGO

#include LV_GPU_QINGO_LOADER_INCLUDE_PATH

#include "../lv_draw.h"
#include "../sw/lv_draw_sw_blend.h"
#include "../../core/lv_disp.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/


typedef struct {
    lv_draw_ctx_t base_draw;

    /** Fill an area of the destination buffer with a color*/
    void (*blend)(lv_draw_ctx_t * draw_ctx, const lv_draw_sw_blend_dsc_t * dsc);

    struct lv_draw_qingo_context_internals_t * internals;
} lv_draw_qingo_ctx_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

void lv_draw_qingo_init_ctx(lv_disp_drv_t * disp_drv, lv_draw_ctx_t * draw_ctx);

void lv_draw_qingo_deinit_ctx(lv_disp_drv_t * disp_drv, lv_draw_ctx_t * draw_ctx);


/*======================
 * Add/remove functions
 *=====================*/

/*=====================
 * Setter functions
 *====================*/

/*=====================
 * Getter functions
 *====================*/

/*=====================
 * Other functions
 *====================*/

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_GPU_QINGO*/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_DRAW_QINGO_H*/
