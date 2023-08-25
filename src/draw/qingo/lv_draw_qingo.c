/**
 * @file lv_draw_qingo.c
 *
 */

/*********************
 *      INCLUDES
 *********************/


#include "../../lv_conf_internal.h"

#if LV_USE_GPU_QINGO

#include "lv_draw_qingo.h"
// #include <src/draw/sw/lv_draw_sw.h>
// #include "lv_draw_qingo_utils.h"
// #include "lv_draw_qingo_priv.h"
// #include "lv_draw_qingo_texture_cache.h"

#include "gui/nanovg/cwrapper/nanovg_wrapper.h"
#include "gui/nanovg/utils/nvg_utils.h"

#include <stdio.h>

/*********************
 *      DEFINES
 *********************/
void lv_draw_qingo_draw_rect(lv_draw_ctx_t * draw_ctx, const lv_draw_rect_dsc_t * dsc, const lv_area_t * coords)
{
printf("lv_draw_qingo_draw_rect\n");
NVGcontext *vg = get_nvg_context();

    // int x = 400, y = 400;
    // drawButton(vg, 0, "AAAAAAA", x + 170, y, 110, 28, nvgRGBA(0, 0, 0, 0));
    // y += 100;
    // drawButton(vg, 0, "Test Test", x + 138, y, 140, 28, nvgRGBA(0, 96, 128, 255));
}

void lv_draw_qingo_draw_letter(lv_draw_ctx_t * draw_ctx, const lv_draw_label_dsc_t * dsc,  const lv_point_t * pos_p,
                             uint32_t letter)
{
printf("lv_draw_qingo_draw_letter\n");

}

lv_res_t lv_draw_qingo_draw_img(struct _lv_draw_ctx_t * draw_ctx, const lv_draw_img_dsc_t * draw_dsc,
                               const lv_area_t * coords, const void * src)
{
printf("lv_draw_qingo_draw_img\n");

}

void lv_draw_qingo_img_decoded(struct _lv_draw_ctx_t * draw_ctx, const lv_draw_img_dsc_t * dsc,
                         const lv_area_t * coords, const uint8_t * map_p, lv_img_cf_t color_format)
{
printf("lv_draw_qingo_img_decoded\n");

}
/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/




void lv_draw_qingo_draw_line(lv_draw_ctx_t * draw_ctx, const lv_draw_line_dsc_t * dsc, const lv_point_t * point1,
                           const lv_point_t * point2)
{
    LV_LOG_INFO("");
printf("lv_draw_qingo_draw_line\n");
}

void lv_draw_qingo_draw_arc(lv_draw_ctx_t * draw_ctx, const lv_draw_arc_dsc_t * dsc, const lv_point_t * center,
                          uint16_t radius, uint16_t start_angle, uint16_t end_angle)
{
    LV_LOG_INFO("");
printf("lv_draw_qingo_draw_arc\n");

}

void lv_draw_qingo_polygon(lv_draw_ctx_t * draw_ctx, const lv_draw_rect_dsc_t * draw_dsc, const lv_point_t * points,
                         uint16_t point_cnt)
{
    LV_LOG_INFO("");
printf("lv_draw_qingo_polygon\n");

}


void lv_draw_qingo_draw_bg(lv_draw_ctx_t * draw_ctx, const lv_draw_rect_dsc_t * dsc, const lv_area_t * coords)
{
    LV_LOG_INFO("");
printf("lv_draw_qingo_draw_bg\n");

}

void lv_draw_qingo_init_ctx(lv_disp_drv_t * disp_drv, lv_draw_ctx_t * draw_ctx)
{
printf("lv_draw_qingo_init_ctx\n");

    lv_draw_qingo_ctx_t * draw_qingo_ctx = (lv_draw_qingo_ctx_t*) draw_ctx;
    lv_memset_00(draw_ctx, sizeof(lv_draw_qingo_ctx_t));

    // draw_qingo_ctx->internals = lv_mem_alloc(sizeof(lv_draw_qingo_context_internals_t));
    // /* TODO(tan): maybe use the standard memset? */
    // lv_memset_00(draw_qingo_ctx->internals, sizeof(lv_draw_qingo_context_internals_t));
    // draw_qingo_ctx->internals->hor = disp_drv->hor_res;
    // draw_qingo_ctx->internals->ver = disp_drv->ver_res;

    // lv_draw_qingo_utils_internals_init(draw_qingo_ctx->internals);

// #if !LV_USE_GPU_QINGO_SW_MIXED
//     draw_qingo_ctx->internals->framebuffer = *(GLuint*)disp_drv->user_data;
// #endif /* !LV_USE_GPU_QINGO_SW_MIXED */

    draw_qingo_ctx->base_draw.draw_rect = lv_draw_qingo_draw_rect;
    draw_qingo_ctx->base_draw.draw_img = lv_draw_qingo_draw_img;
    draw_qingo_ctx->base_draw.draw_letter = lv_draw_qingo_draw_letter;
    draw_qingo_ctx->base_draw.draw_line = lv_draw_qingo_draw_line;
    draw_qingo_ctx->base_draw.draw_arc = lv_draw_qingo_draw_arc;
    draw_qingo_ctx->base_draw.draw_polygon = lv_draw_qingo_polygon;
    draw_qingo_ctx->base_draw.draw_bg = lv_draw_qingo_draw_bg;

    // lv_draw_qingo_texture_cache_init(draw_qingo_ctx);

// #if LV_USE_GPU_QINGO_SW_MIXED
//     draw_qingo_ctx->blend = lv_draw_sw_blend_basic;
// #endif /* LV_USE_GPU_QINGO_SW_MIXED */

}

void lv_draw_qingo_deinit_ctx(lv_disp_drv_t * disp_drv, lv_draw_ctx_t * draw_ctx)
{
printf("lv_draw_qingo_deinit_ctx\n");

    /*TODO: deinit texture cache */
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

#endif /*LV_USE_GPU_QINGO*/
