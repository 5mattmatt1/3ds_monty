#include <string.h>
#include <stdint.h>

#include <3ds.h>

#include "py/runtime.h"

static Result _news_last_result;

STATIC mp_obj_t mod_citrus_news_init(void) {
    newsInit();

    return mp_const_none;
}

STATIC mp_obj_t mod_citrus_news_exit(void) {
    newsExit();

    return mp_const_none;
}

STATIC mp_obj_t mod_citrus_news_last_result(void) {
    return mp_obj_new_int(_news_last_result);
}

enum {
    ADD_ARG_TITLE = 0,
    ADD_ARG_MESSAGE,
    ADD_ARG_IMAGE,
    ADD_ARG_IS_JPEG
};

STATIC mp_obj_t mod_citrus_news_add_notification(size_t n_args, const mp_obj_t *args) {
    const char *title = mp_obj_str_get_str(args[ADD_ARG_TITLE]);
    int title_len = strlen(title);
    int title16_len = title_len * 2;
    uint16_t *title16 = m_new(uint16_t, title16_len);
    utf8_to_utf16(title16, (uint8_t *) title, title16_len);

    const char *message = mp_obj_str_get_str(args[ADD_ARG_MESSAGE]);
    int message_len = strlen(message);
    int message16_len = message_len * 2;
    uint16_t *message16 = m_new(uint16_t, message16_len);
    utf8_to_utf16(message16, (uint8_t *) message, message16_len);

    void *image = NULL;
    size_t image_len = 0;
    bool is_jpeg = mp_obj_is_true(args[ADD_ARG_IS_JPEG]);

    mp_obj_type_t *type = mp_obj_get_type(args[3]);
    if (type != &mp_type_NoneType) {
        // load...
        // image_len from byte array
    }

    _news_last_result = NEWS_AddNotification(title16, title_len, message16, message_len, image, image_len, is_jpeg);

    m_del(uint16_t, title16, title16_len);
    m_del(uint16_t, message16, message16_len);

    return mod_citrus_news_last_result();
}

STATIC MP_DEFINE_CONST_FUN_OBJ_0(mod_citrus_news_init_obj, mod_citrus_news_init);
STATIC MP_DEFINE_CONST_FUN_OBJ_0(mod_citrus_news_exit_obj, mod_citrus_news_exit);
STATIC MP_DEFINE_CONST_FUN_OBJ_0(mod_citrus_news_last_result_obj, mod_citrus_news_last_result);
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mod_citrus_news_add_notification_obj, 4, 4, mod_citrus_news_add_notification);

STATIC const mp_rom_map_elem_t mp_module_citrus_news_globals_table[] = {
        // Package Info
        {MP_ROM_QSTR(MP_QSTR___name__),         MP_ROM_QSTR(MP_QSTR_news)},

        // Functions
        {MP_ROM_QSTR(MP_QSTR_init),             MP_ROM_PTR(&mod_citrus_news_init_obj)},
        {MP_ROM_QSTR(MP_QSTR_exit),             MP_ROM_PTR(&mod_citrus_news_exit_obj)},
        {MP_ROM_QSTR(MP_QSTR_last_result),      MP_ROM_PTR(&mod_citrus_news_last_result_obj)},
        {MP_ROM_QSTR(MP_QSTR_add_notification), MP_ROM_PTR(&mod_citrus_news_add_notification_obj)},
};

STATIC MP_DEFINE_CONST_DICT(mp_module_citrus_news_globals, mp_module_citrus_news_globals_table);

const mp_obj_module_t mp_module_citrus_news = {
        .base = {&mp_type_module},
        .name = MP_QSTR_news,
        .globals = (mp_obj_dict_t *) &mp_module_citrus_news_globals,
};