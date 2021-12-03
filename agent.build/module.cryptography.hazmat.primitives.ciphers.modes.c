/* Generated code for Python module 'cryptography.hazmat.primitives.ciphers.modes'
 * created by Nuitka version 0.6.17.4
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_cryptography$hazmat$primitives$ciphers$modes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$ciphers$modes;
PyDictObject *moduledict_cryptography$hazmat$primitives$ciphers$modes;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[146];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[146];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("cryptography.hazmat.primitives.ciphers.modes"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 146; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$primitives$ciphers$modes(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 146; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ac9e577e2e9c99e46bdd982ad53cecc9;
static PyCodeObject *codeobj_0fe682c7f98995e2bae130e763ea8bd5;
static PyCodeObject *codeobj_e086e586187b36e770102799e9a209b9;
static PyCodeObject *codeobj_d7aac1c8aa4293f875eb572ae322b044;
static PyCodeObject *codeobj_3bfdffde26eb4ecd0e1beeddfac71dad;
static PyCodeObject *codeobj_fa64be86c2e11e97e330233f245e1be2;
static PyCodeObject *codeobj_6676c2a2aac851fe12750cefb836e847;
static PyCodeObject *codeobj_1e90cd6a7a9d29ce0499b7224501bec8;
static PyCodeObject *codeobj_b078d51a10c214620858912f546e454a;
static PyCodeObject *codeobj_b455301bb33a4bac9c5cc638cb795e26;
static PyCodeObject *codeobj_cd543ef248bb511e48046877d162e78d;
static PyCodeObject *codeobj_8ac0f00eaca6bca171f4d0c0e3006f3c;
static PyCodeObject *codeobj_a42cd339370d9fd588bfeb9ffec48fbe;
static PyCodeObject *codeobj_e4a0f3e1a3c3481b58ed55a4df694ed5;
static PyCodeObject *codeobj_7f0ff6817eaeab2c64081990faee378f;
static PyCodeObject *codeobj_876cf0473ab698636fd8e174223e4c36;
static PyCodeObject *codeobj_9fe6d4cf24f961cf9d9ea29d17db345b;
static PyCodeObject *codeobj_278eaf480d38e436febffe38c96da89e;
static PyCodeObject *codeobj_86e8954f64d0203b81e749149b8931e7;
static PyCodeObject *codeobj_0acc6c801e6904ebf9c3b079ccb56651;
static PyCodeObject *codeobj_59932e799b539caf7316a8ad5c2a1360;
static PyCodeObject *codeobj_4ecc7917bbd66a448a15677758f5e9cf;
static PyCodeObject *codeobj_782b9a4aca1776bea8aeaca4211f67aa;
static PyCodeObject *codeobj_9fdceb70895320096eaa9d1883d79387;
static PyCodeObject *codeobj_b11ba3375df787b3314f59087ae1db52;
static PyCodeObject *codeobj_47e99638d67ace0070809cf7aa371cb9;
static PyCodeObject *codeobj_f4d49efb04be6e6247757b419b495ca5;
static PyCodeObject *codeobj_ffb5dcf9b702b8087a98bef40baba753;
static PyCodeObject *codeobj_469b229e38b5327275be5647757fdba8;
static PyCodeObject *codeobj_35c8fb009d4c2e646cf649b5ebb2098a;
static PyCodeObject *codeobj_bbe531743ca72b7b45bb93c554490c91;
static PyCodeObject *codeobj_af326ad06f18611459434eb63a409310;
static PyCodeObject *codeobj_7c6e786139710bfbe43ae6200e21191b;
static PyCodeObject *codeobj_79e5efec09659b850d2aceb392f09153;
static PyCodeObject *codeobj_7be761c491bd31af893638f6ca85e6fb;
static PyCodeObject *codeobj_7a3c220d88c7b0a710fcde7a0fb341da;
static PyCodeObject *codeobj_2661cf015dc73b2c4b50cc155003edc6;
static PyCodeObject *codeobj_198c3d79841ad43a3204583da5ea00f5;
static PyCodeObject *codeobj_73f4541775452d4cd9781643c1a2dcb2;
static PyCodeObject *codeobj_0785a5b789d8b6403d070078364d4bad;
static PyCodeObject *codeobj_7ecdf3caa1529b5b5bf2df70bb65e202;
static PyCodeObject *codeobj_bebf84c81d91b44cc80fbdfd62a92f39;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[135]); CHECK_OBJECT(module_filename_obj);
    codeobj_ac9e577e2e9c99e46bdd982ad53cecc9 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[136], NULL, NULL, 0, 0, 0);
    codeobj_0fe682c7f98995e2bae130e763ea8bd5 = MAKE_CODEOBJECT(module_filename_obj, 92, CO_NOFREE, mod_consts[99], mod_consts[137], NULL, 0, 0, 0);
    codeobj_e086e586187b36e770102799e9a209b9 = MAKE_CODEOBJECT(module_filename_obj, 149, CO_NOFREE, mod_consts[113], mod_consts[137], NULL, 0, 0, 0);
    codeobj_d7aac1c8aa4293f875eb572ae322b044 = MAKE_CODEOBJECT(module_filename_obj, 163, CO_NOFREE, mod_consts[116], mod_consts[137], NULL, 0, 0, 0);
    codeobj_3bfdffde26eb4ecd0e1beeddfac71dad = MAKE_CODEOBJECT(module_filename_obj, 177, CO_NOFREE, mod_consts[119], mod_consts[137], NULL, 0, 0, 0);
    codeobj_fa64be86c2e11e97e330233f245e1be2 = MAKE_CODEOBJECT(module_filename_obj, 129, CO_NOFREE, mod_consts[109], mod_consts[137], NULL, 0, 0, 0);
    codeobj_6676c2a2aac851fe12750cefb836e847 = MAKE_CODEOBJECT(module_filename_obj, 193, CO_NOFREE, mod_consts[123], mod_consts[137], NULL, 0, 0, 0);
    codeobj_1e90cd6a7a9d29ce0499b7224501bec8 = MAKE_CODEOBJECT(module_filename_obj, 17, CO_NOFREE, mod_consts[67], mod_consts[137], NULL, 0, 0, 0);
    codeobj_b078d51a10c214620858912f546e454a = MAKE_CODEOBJECT(module_filename_obj, 56, CO_NOFREE, mod_consts[93], mod_consts[137], NULL, 0, 0, 0);
    codeobj_b455301bb33a4bac9c5cc638cb795e26 = MAKE_CODEOBJECT(module_filename_obj, 32, CO_NOFREE, mod_consts[80], mod_consts[137], NULL, 0, 0, 0);
    codeobj_cd543ef248bb511e48046877d162e78d = MAKE_CODEOBJECT(module_filename_obj, 48, CO_NOFREE, mod_consts[89], mod_consts[137], NULL, 0, 0, 0);
    codeobj_8ac0f00eaca6bca171f4d0c0e3006f3c = MAKE_CODEOBJECT(module_filename_obj, 40, CO_NOFREE, mod_consts[85], mod_consts[137], NULL, 0, 0, 0);
    codeobj_a42cd339370d9fd588bfeb9ffec48fbe = MAKE_CODEOBJECT(module_filename_obj, 135, CO_NOFREE, mod_consts[110], mod_consts[137], NULL, 0, 0, 0);
    codeobj_e4a0f3e1a3c3481b58ed55a4df694ed5 = MAKE_CODEOBJECT(module_filename_obj, 106, CO_NOFREE, mod_consts[105], mod_consts[137], NULL, 0, 0, 0);
    codeobj_7f0ff6817eaeab2c64081990faee378f = MAKE_CODEOBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[138], NULL, 2, 0, 0);
    codeobj_876cf0473ab698636fd8e174223e4c36 = MAKE_CODEOBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[138], NULL, 2, 0, 0);
    codeobj_9fe6d4cf24f961cf9d9ea29d17db345b = MAKE_CODEOBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[138], NULL, 2, 0, 0);
    codeobj_278eaf480d38e436febffe38c96da89e = MAKE_CODEOBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[138], NULL, 2, 0, 0);
    codeobj_86e8954f64d0203b81e749149b8931e7 = MAKE_CODEOBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[139], NULL, 4, 0, 0);
    codeobj_0acc6c801e6904ebf9c3b079ccb56651 = MAKE_CODEOBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[140], NULL, 2, 0, 0);
    codeobj_59932e799b539caf7316a8ad5c2a1360 = MAKE_CODEOBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[141], NULL, 2, 0, 0);
    codeobj_4ecc7917bbd66a448a15677758f5e9cf = MAKE_CODEOBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[142], NULL, 2, 0, 0);
    codeobj_782b9a4aca1776bea8aeaca4211f67aa = MAKE_CODEOBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[142], NULL, 2, 0, 0);
    codeobj_9fdceb70895320096eaa9d1883d79387 = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[142], NULL, 2, 0, 0);
    codeobj_b11ba3375df787b3314f59087ae1db52 = MAKE_CODEOBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[143], NULL, 3, 0, 0);
    codeobj_47e99638d67ace0070809cf7aa371cb9 = MAKE_CODEOBJECT(module_filename_obj, 34, CO_NOFREE, mod_consts[5], mod_consts[144], NULL, 1, 0, 0);
    codeobj_f4d49efb04be6e6247757b419b495ca5 = MAKE_CODEOBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[144], NULL, 1, 0, 0);
    codeobj_ffb5dcf9b702b8087a98bef40baba753 = MAKE_CODEOBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[144], NULL, 1, 0, 0);
    codeobj_469b229e38b5327275be5647757fdba8 = MAKE_CODEOBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[144], NULL, 1, 0, 0);
    codeobj_35c8fb009d4c2e646cf649b5ebb2098a = MAKE_CODEOBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[144], NULL, 1, 0, 0);
    codeobj_bbe531743ca72b7b45bb93c554490c91 = MAKE_CODEOBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[144], NULL, 1, 0, 0);
    codeobj_af326ad06f18611459434eb63a409310 = MAKE_CODEOBJECT(module_filename_obj, 19, CO_NOFREE, mod_consts[2], mod_consts[144], NULL, 1, 0, 0);
    codeobj_7c6e786139710bfbe43ae6200e21191b = MAKE_CODEOBJECT(module_filename_obj, 50, CO_NOFREE, mod_consts[22], mod_consts[144], NULL, 1, 0, 0);
    codeobj_79e5efec09659b850d2aceb392f09153 = MAKE_CODEOBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[144], NULL, 1, 0, 0);
    codeobj_7be761c491bd31af893638f6ca85e6fb = MAKE_CODEOBJECT(module_filename_obj, 58, CO_NOFREE, mod_consts[28], mod_consts[144], NULL, 1, 0, 0);
    codeobj_7a3c220d88c7b0a710fcde7a0fb341da = MAKE_CODEOBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[144], NULL, 1, 0, 0);
    codeobj_2661cf015dc73b2c4b50cc155003edc6 = MAKE_CODEOBJECT(module_filename_obj, 42, CO_NOFREE, mod_consts[16], mod_consts[144], NULL, 1, 0, 0);
    codeobj_198c3d79841ad43a3204583da5ea00f5 = MAKE_CODEOBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[144], NULL, 1, 0, 0);
    codeobj_73f4541775452d4cd9781643c1a2dcb2 = MAKE_CODEOBJECT(module_filename_obj, 25, CO_NOFREE, mod_consts[77], mod_consts[142], NULL, 2, 0, 0);
    codeobj_0785a5b789d8b6403d070078364d4bad = MAKE_CODEOBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[142], NULL, 2, 0, 0);
    codeobj_7ecdf3caa1529b5b5bf2df70bb65e202 = MAKE_CODEOBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[142], NULL, 2, 0, 0);
    codeobj_bebf84c81d91b44cc80fbdfd62a92f39 = MAKE_CODEOBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[145], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__10__check_iv_and_key_length();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__11___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__12_initialization_vector(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__13___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__14_tweak(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__15_validate_for_algorithm(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__16___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__17_initialization_vector(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__18___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__19_initialization_vector(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__1_name(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__20___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__21_initialization_vector(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__22___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__23_nonce(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__24_validate_for_algorithm(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__25___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__26_tag(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__27_initialization_vector(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__28_validate_for_algorithm(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__2_validate_for_algorithm(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__3_initialization_vector(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__4_tweak(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__5_nonce(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__6_tag(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__7__check_aes_key_length();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__8__check_iv_length();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__9__check_nonce_length(PyObject *annotations);


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__7__check_aes_key_length(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    struct Nuitka_FrameObject *frame_4ecc7917bbd66a448a15677758f5e9cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ecc7917bbd66a448a15677758f5e9cf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4ecc7917bbd66a448a15677758f5e9cf)) {
        Py_XDECREF(cache_frame_4ecc7917bbd66a448a15677758f5e9cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ecc7917bbd66a448a15677758f5e9cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ecc7917bbd66a448a15677758f5e9cf = MAKE_FUNCTION_FRAME(codeobj_4ecc7917bbd66a448a15677758f5e9cf, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4ecc7917bbd66a448a15677758f5e9cf->m_type_description == NULL);
    frame_4ecc7917bbd66a448a15677758f5e9cf = cache_frame_4ecc7917bbd66a448a15677758f5e9cf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4ecc7917bbd66a448a15677758f5e9cf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4ecc7917bbd66a448a15677758f5e9cf) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tmp_and_left_value_1_object_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_tmp_and_right_value_1_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_algorithm);
        tmp_expression_name_1 = par_algorithm;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[1];
        tmp_tmp_and_left_value_1_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_and_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_and_left_value_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_left_value_1_object_1);

            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_1_object_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_algorithm);
        tmp_expression_name_2 = par_algorithm;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[2]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[3];
        tmp_tmp_and_right_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_and_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_and_right_value_1_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_1_object_1);

            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_right_value_1_object_1);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[4];
        frame_4ecc7917bbd66a448a15677758f5e9cf->m_frame.f_lineno = 66;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 66;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ecc7917bbd66a448a15677758f5e9cf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ecc7917bbd66a448a15677758f5e9cf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ecc7917bbd66a448a15677758f5e9cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ecc7917bbd66a448a15677758f5e9cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ecc7917bbd66a448a15677758f5e9cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ecc7917bbd66a448a15677758f5e9cf,
        type_description_1,
        par_self,
        par_algorithm
    );


    // Release cached frame if used for exception.
    if (frame_4ecc7917bbd66a448a15677758f5e9cf == cache_frame_4ecc7917bbd66a448a15677758f5e9cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4ecc7917bbd66a448a15677758f5e9cf);
        cache_frame_4ecc7917bbd66a448a15677758f5e9cf = NULL;
    }

    assertFrameObject(frame_4ecc7917bbd66a448a15677758f5e9cf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__8__check_iv_length(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    struct Nuitka_FrameObject *frame_9fdceb70895320096eaa9d1883d79387;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9fdceb70895320096eaa9d1883d79387 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9fdceb70895320096eaa9d1883d79387)) {
        Py_XDECREF(cache_frame_9fdceb70895320096eaa9d1883d79387);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9fdceb70895320096eaa9d1883d79387 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9fdceb70895320096eaa9d1883d79387 = MAKE_FUNCTION_FRAME(codeobj_9fdceb70895320096eaa9d1883d79387, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9fdceb70895320096eaa9d1883d79387->m_type_description == NULL);
    frame_9fdceb70895320096eaa9d1883d79387 = cache_frame_9fdceb70895320096eaa9d1883d79387;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9fdceb70895320096eaa9d1883d79387);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9fdceb70895320096eaa9d1883d79387) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[6];
        tmp_compexpr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        CHECK_OBJECT(par_algorithm);
        tmp_expression_name_2 = par_algorithm;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_5;
        tmp_expression_name_3 = mod_consts[8];
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[9]);
        assert(!(tmp_called_name_1 == NULL));
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[5]);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[2]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9fdceb70895320096eaa9d1883d79387->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9fdceb70895320096eaa9d1883d79387->m_frame.f_lineno = 73;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 73;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fdceb70895320096eaa9d1883d79387);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fdceb70895320096eaa9d1883d79387);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9fdceb70895320096eaa9d1883d79387, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fdceb70895320096eaa9d1883d79387->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fdceb70895320096eaa9d1883d79387, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9fdceb70895320096eaa9d1883d79387,
        type_description_1,
        par_self,
        par_algorithm
    );


    // Release cached frame if used for exception.
    if (frame_9fdceb70895320096eaa9d1883d79387 == cache_frame_9fdceb70895320096eaa9d1883d79387) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9fdceb70895320096eaa9d1883d79387);
        cache_frame_9fdceb70895320096eaa9d1883d79387 = NULL;
    }

    assertFrameObject(frame_9fdceb70895320096eaa9d1883d79387);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__9__check_nonce_length(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nonce = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_algorithm = python_pars[2];
    struct Nuitka_FrameObject *frame_b11ba3375df787b3314f59087ae1db52;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b11ba3375df787b3314f59087ae1db52 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b11ba3375df787b3314f59087ae1db52)) {
        Py_XDECREF(cache_frame_b11ba3375df787b3314f59087ae1db52);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b11ba3375df787b3314f59087ae1db52 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b11ba3375df787b3314f59087ae1db52 = MAKE_FUNCTION_FRAME(codeobj_b11ba3375df787b3314f59087ae1db52, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b11ba3375df787b3314f59087ae1db52->m_type_description == NULL);
    frame_b11ba3375df787b3314f59087ae1db52 = cache_frame_b11ba3375df787b3314f59087ae1db52;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b11ba3375df787b3314f59087ae1db52);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b11ba3375df787b3314f59087ae1db52) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_nonce);
        tmp_len_arg_1 = par_nonce;
        tmp_left_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[6];
        tmp_compexpr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        CHECK_OBJECT(par_algorithm);
        tmp_expression_name_1 = par_algorithm;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[7]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_args_element_name_2;
        tmp_expression_name_2 = mod_consts[10];
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[9]);
        assert(!(tmp_called_name_1 == NULL));
        CHECK_OBJECT(par_nonce);
        tmp_len_arg_2 = par_nonce;
        tmp_args_element_name_1 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_name_2 = par_name;
        frame_b11ba3375df787b3314f59087ae1db52->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_b11ba3375df787b3314f59087ae1db52->m_frame.f_lineno = 82;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 82;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b11ba3375df787b3314f59087ae1db52);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b11ba3375df787b3314f59087ae1db52);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b11ba3375df787b3314f59087ae1db52, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b11ba3375df787b3314f59087ae1db52->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b11ba3375df787b3314f59087ae1db52, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b11ba3375df787b3314f59087ae1db52,
        type_description_1,
        par_nonce,
        par_name,
        par_algorithm
    );


    // Release cached frame if used for exception.
    if (frame_b11ba3375df787b3314f59087ae1db52 == cache_frame_b11ba3375df787b3314f59087ae1db52) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b11ba3375df787b3314f59087ae1db52);
        cache_frame_b11ba3375df787b3314f59087ae1db52 = NULL;
    }

    assertFrameObject(frame_b11ba3375df787b3314f59087ae1db52);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_nonce);
    Py_DECREF(par_nonce);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_nonce);
    Py_DECREF(par_nonce);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__10__check_iv_and_key_length(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    struct Nuitka_FrameObject *frame_782b9a4aca1776bea8aeaca4211f67aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_782b9a4aca1776bea8aeaca4211f67aa = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_782b9a4aca1776bea8aeaca4211f67aa)) {
        Py_XDECREF(cache_frame_782b9a4aca1776bea8aeaca4211f67aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_782b9a4aca1776bea8aeaca4211f67aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_782b9a4aca1776bea8aeaca4211f67aa = MAKE_FUNCTION_FRAME(codeobj_782b9a4aca1776bea8aeaca4211f67aa, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_782b9a4aca1776bea8aeaca4211f67aa->m_type_description == NULL);
    frame_782b9a4aca1776bea8aeaca4211f67aa = cache_frame_782b9a4aca1776bea8aeaca4211f67aa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_782b9a4aca1776bea8aeaca4211f67aa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_782b9a4aca1776bea8aeaca4211f67aa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT(par_algorithm);
        tmp_args_element_name_2 = par_algorithm;
        frame_782b9a4aca1776bea8aeaca4211f67aa->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_name_3 = par_self;
        CHECK_OBJECT(par_algorithm);
        tmp_args_element_name_4 = par_algorithm;
        frame_782b9a4aca1776bea8aeaca4211f67aa->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_782b9a4aca1776bea8aeaca4211f67aa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_782b9a4aca1776bea8aeaca4211f67aa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_782b9a4aca1776bea8aeaca4211f67aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_782b9a4aca1776bea8aeaca4211f67aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_782b9a4aca1776bea8aeaca4211f67aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_782b9a4aca1776bea8aeaca4211f67aa,
        type_description_1,
        par_self,
        par_algorithm
    );


    // Release cached frame if used for exception.
    if (frame_782b9a4aca1776bea8aeaca4211f67aa == cache_frame_782b9a4aca1776bea8aeaca4211f67aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_782b9a4aca1776bea8aeaca4211f67aa);
        cache_frame_782b9a4aca1776bea8aeaca4211f67aa = NULL;
    }

    assertFrameObject(frame_782b9a4aca1776bea8aeaca4211f67aa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__11___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_initialization_vector = python_pars[1];
    struct Nuitka_FrameObject *frame_7f0ff6817eaeab2c64081990faee378f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7f0ff6817eaeab2c64081990faee378f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f0ff6817eaeab2c64081990faee378f)) {
        Py_XDECREF(cache_frame_7f0ff6817eaeab2c64081990faee378f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f0ff6817eaeab2c64081990faee378f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f0ff6817eaeab2c64081990faee378f = MAKE_FUNCTION_FRAME(codeobj_7f0ff6817eaeab2c64081990faee378f, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7f0ff6817eaeab2c64081990faee378f->m_type_description == NULL);
    frame_7f0ff6817eaeab2c64081990faee378f = cache_frame_7f0ff6817eaeab2c64081990faee378f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7f0ff6817eaeab2c64081990faee378f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7f0ff6817eaeab2c64081990faee378f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[5];
        CHECK_OBJECT(par_initialization_vector);
        tmp_args_element_name_2 = par_initialization_vector;
        frame_7f0ff6817eaeab2c64081990faee378f->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[14],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_initialization_vector);
        tmp_assattr_value_1 = par_initialization_vector;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f0ff6817eaeab2c64081990faee378f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f0ff6817eaeab2c64081990faee378f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f0ff6817eaeab2c64081990faee378f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f0ff6817eaeab2c64081990faee378f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f0ff6817eaeab2c64081990faee378f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f0ff6817eaeab2c64081990faee378f,
        type_description_1,
        par_self,
        par_initialization_vector
    );


    // Release cached frame if used for exception.
    if (frame_7f0ff6817eaeab2c64081990faee378f == cache_frame_7f0ff6817eaeab2c64081990faee378f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7f0ff6817eaeab2c64081990faee378f);
        cache_frame_7f0ff6817eaeab2c64081990faee378f = NULL;
    }

    assertFrameObject(frame_7f0ff6817eaeab2c64081990faee378f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_initialization_vector);
    Py_DECREF(par_initialization_vector);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_initialization_vector);
    Py_DECREF(par_initialization_vector);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__12_initialization_vector(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f4d49efb04be6e6247757b419b495ca5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f4d49efb04be6e6247757b419b495ca5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f4d49efb04be6e6247757b419b495ca5)) {
        Py_XDECREF(cache_frame_f4d49efb04be6e6247757b419b495ca5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4d49efb04be6e6247757b419b495ca5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4d49efb04be6e6247757b419b495ca5 = MAKE_FUNCTION_FRAME(codeobj_f4d49efb04be6e6247757b419b495ca5, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f4d49efb04be6e6247757b419b495ca5->m_type_description == NULL);
    frame_f4d49efb04be6e6247757b419b495ca5 = cache_frame_f4d49efb04be6e6247757b419b495ca5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f4d49efb04be6e6247757b419b495ca5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f4d49efb04be6e6247757b419b495ca5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[15]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f4d49efb04be6e6247757b419b495ca5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f4d49efb04be6e6247757b419b495ca5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f4d49efb04be6e6247757b419b495ca5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f4d49efb04be6e6247757b419b495ca5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4d49efb04be6e6247757b419b495ca5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4d49efb04be6e6247757b419b495ca5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4d49efb04be6e6247757b419b495ca5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f4d49efb04be6e6247757b419b495ca5 == cache_frame_f4d49efb04be6e6247757b419b495ca5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f4d49efb04be6e6247757b419b495ca5);
        cache_frame_f4d49efb04be6e6247757b419b495ca5 = NULL;
    }

    assertFrameObject(frame_f4d49efb04be6e6247757b419b495ca5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__13___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_tweak = python_pars[1];
    struct Nuitka_FrameObject *frame_59932e799b539caf7316a8ad5c2a1360;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_59932e799b539caf7316a8ad5c2a1360 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_59932e799b539caf7316a8ad5c2a1360)) {
        Py_XDECREF(cache_frame_59932e799b539caf7316a8ad5c2a1360);

#if _DEBUG_REFCOUNTS
        if (cache_frame_59932e799b539caf7316a8ad5c2a1360 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_59932e799b539caf7316a8ad5c2a1360 = MAKE_FUNCTION_FRAME(codeobj_59932e799b539caf7316a8ad5c2a1360, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_59932e799b539caf7316a8ad5c2a1360->m_type_description == NULL);
    frame_59932e799b539caf7316a8ad5c2a1360 = cache_frame_59932e799b539caf7316a8ad5c2a1360;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_59932e799b539caf7316a8ad5c2a1360);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_59932e799b539caf7316a8ad5c2a1360) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[16];
        CHECK_OBJECT(par_tweak);
        tmp_args_element_name_2 = par_tweak;
        frame_59932e799b539caf7316a8ad5c2a1360->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[14],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        CHECK_OBJECT(par_tweak);
        tmp_len_arg_1 = par_tweak;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[17];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_tmp_condition_result_1_object_1 == NULL));
        tmp_condition_result_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[18];
        frame_59932e799b539caf7316a8ad5c2a1360->m_frame.f_lineno = 113;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 113;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_tweak);
        tmp_assattr_value_1 = par_tweak;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_59932e799b539caf7316a8ad5c2a1360);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_59932e799b539caf7316a8ad5c2a1360);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_59932e799b539caf7316a8ad5c2a1360, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_59932e799b539caf7316a8ad5c2a1360->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_59932e799b539caf7316a8ad5c2a1360, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_59932e799b539caf7316a8ad5c2a1360,
        type_description_1,
        par_self,
        par_tweak
    );


    // Release cached frame if used for exception.
    if (frame_59932e799b539caf7316a8ad5c2a1360 == cache_frame_59932e799b539caf7316a8ad5c2a1360) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_59932e799b539caf7316a8ad5c2a1360);
        cache_frame_59932e799b539caf7316a8ad5c2a1360 = NULL;
    }

    assertFrameObject(frame_59932e799b539caf7316a8ad5c2a1360);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_tweak);
    Py_DECREF(par_tweak);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_tweak);
    Py_DECREF(par_tweak);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__14_tweak(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_198c3d79841ad43a3204583da5ea00f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_198c3d79841ad43a3204583da5ea00f5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_198c3d79841ad43a3204583da5ea00f5)) {
        Py_XDECREF(cache_frame_198c3d79841ad43a3204583da5ea00f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_198c3d79841ad43a3204583da5ea00f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_198c3d79841ad43a3204583da5ea00f5 = MAKE_FUNCTION_FRAME(codeobj_198c3d79841ad43a3204583da5ea00f5, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_198c3d79841ad43a3204583da5ea00f5->m_type_description == NULL);
    frame_198c3d79841ad43a3204583da5ea00f5 = cache_frame_198c3d79841ad43a3204583da5ea00f5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_198c3d79841ad43a3204583da5ea00f5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_198c3d79841ad43a3204583da5ea00f5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[19]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_198c3d79841ad43a3204583da5ea00f5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_198c3d79841ad43a3204583da5ea00f5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_198c3d79841ad43a3204583da5ea00f5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_198c3d79841ad43a3204583da5ea00f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_198c3d79841ad43a3204583da5ea00f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_198c3d79841ad43a3204583da5ea00f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_198c3d79841ad43a3204583da5ea00f5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_198c3d79841ad43a3204583da5ea00f5 == cache_frame_198c3d79841ad43a3204583da5ea00f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_198c3d79841ad43a3204583da5ea00f5);
        cache_frame_198c3d79841ad43a3204583da5ea00f5 = NULL;
    }

    assertFrameObject(frame_198c3d79841ad43a3204583da5ea00f5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__15_validate_for_algorithm(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    struct Nuitka_FrameObject *frame_0785a5b789d8b6403d070078364d4bad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0785a5b789d8b6403d070078364d4bad = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0785a5b789d8b6403d070078364d4bad)) {
        Py_XDECREF(cache_frame_0785a5b789d8b6403d070078364d4bad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0785a5b789d8b6403d070078364d4bad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0785a5b789d8b6403d070078364d4bad = MAKE_FUNCTION_FRAME(codeobj_0785a5b789d8b6403d070078364d4bad, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0785a5b789d8b6403d070078364d4bad->m_type_description == NULL);
    frame_0785a5b789d8b6403d070078364d4bad = cache_frame_0785a5b789d8b6403d070078364d4bad;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0785a5b789d8b6403d070078364d4bad);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0785a5b789d8b6403d070078364d4bad) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_algorithm);
        tmp_expression_name_1 = par_algorithm;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[20];
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[21];
        frame_0785a5b789d8b6403d070078364d4bad->m_frame.f_lineno = 123;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 123;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0785a5b789d8b6403d070078364d4bad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0785a5b789d8b6403d070078364d4bad);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0785a5b789d8b6403d070078364d4bad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0785a5b789d8b6403d070078364d4bad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0785a5b789d8b6403d070078364d4bad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0785a5b789d8b6403d070078364d4bad,
        type_description_1,
        par_self,
        par_algorithm
    );


    // Release cached frame if used for exception.
    if (frame_0785a5b789d8b6403d070078364d4bad == cache_frame_0785a5b789d8b6403d070078364d4bad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0785a5b789d8b6403d070078364d4bad);
        cache_frame_0785a5b789d8b6403d070078364d4bad = NULL;
    }

    assertFrameObject(frame_0785a5b789d8b6403d070078364d4bad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__16___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_initialization_vector = python_pars[1];
    struct Nuitka_FrameObject *frame_876cf0473ab698636fd8e174223e4c36;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_876cf0473ab698636fd8e174223e4c36 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_876cf0473ab698636fd8e174223e4c36)) {
        Py_XDECREF(cache_frame_876cf0473ab698636fd8e174223e4c36);

#if _DEBUG_REFCOUNTS
        if (cache_frame_876cf0473ab698636fd8e174223e4c36 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_876cf0473ab698636fd8e174223e4c36 = MAKE_FUNCTION_FRAME(codeobj_876cf0473ab698636fd8e174223e4c36, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_876cf0473ab698636fd8e174223e4c36->m_type_description == NULL);
    frame_876cf0473ab698636fd8e174223e4c36 = cache_frame_876cf0473ab698636fd8e174223e4c36;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_876cf0473ab698636fd8e174223e4c36);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_876cf0473ab698636fd8e174223e4c36) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[5];
        CHECK_OBJECT(par_initialization_vector);
        tmp_args_element_name_2 = par_initialization_vector;
        frame_876cf0473ab698636fd8e174223e4c36->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[14],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_initialization_vector);
        tmp_assattr_value_1 = par_initialization_vector;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_876cf0473ab698636fd8e174223e4c36);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_876cf0473ab698636fd8e174223e4c36);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_876cf0473ab698636fd8e174223e4c36, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_876cf0473ab698636fd8e174223e4c36->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_876cf0473ab698636fd8e174223e4c36, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_876cf0473ab698636fd8e174223e4c36,
        type_description_1,
        par_self,
        par_initialization_vector
    );


    // Release cached frame if used for exception.
    if (frame_876cf0473ab698636fd8e174223e4c36 == cache_frame_876cf0473ab698636fd8e174223e4c36) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_876cf0473ab698636fd8e174223e4c36);
        cache_frame_876cf0473ab698636fd8e174223e4c36 = NULL;
    }

    assertFrameObject(frame_876cf0473ab698636fd8e174223e4c36);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_initialization_vector);
    Py_DECREF(par_initialization_vector);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_initialization_vector);
    Py_DECREF(par_initialization_vector);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__17_initialization_vector(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ffb5dcf9b702b8087a98bef40baba753;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ffb5dcf9b702b8087a98bef40baba753 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ffb5dcf9b702b8087a98bef40baba753)) {
        Py_XDECREF(cache_frame_ffb5dcf9b702b8087a98bef40baba753);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ffb5dcf9b702b8087a98bef40baba753 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ffb5dcf9b702b8087a98bef40baba753 = MAKE_FUNCTION_FRAME(codeobj_ffb5dcf9b702b8087a98bef40baba753, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ffb5dcf9b702b8087a98bef40baba753->m_type_description == NULL);
    frame_ffb5dcf9b702b8087a98bef40baba753 = cache_frame_ffb5dcf9b702b8087a98bef40baba753;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ffb5dcf9b702b8087a98bef40baba753);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ffb5dcf9b702b8087a98bef40baba753) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[15]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffb5dcf9b702b8087a98bef40baba753);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffb5dcf9b702b8087a98bef40baba753);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffb5dcf9b702b8087a98bef40baba753);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ffb5dcf9b702b8087a98bef40baba753, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ffb5dcf9b702b8087a98bef40baba753->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffb5dcf9b702b8087a98bef40baba753, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ffb5dcf9b702b8087a98bef40baba753,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ffb5dcf9b702b8087a98bef40baba753 == cache_frame_ffb5dcf9b702b8087a98bef40baba753) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ffb5dcf9b702b8087a98bef40baba753);
        cache_frame_ffb5dcf9b702b8087a98bef40baba753 = NULL;
    }

    assertFrameObject(frame_ffb5dcf9b702b8087a98bef40baba753);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__18___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_initialization_vector = python_pars[1];
    struct Nuitka_FrameObject *frame_9fe6d4cf24f961cf9d9ea29d17db345b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9fe6d4cf24f961cf9d9ea29d17db345b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9fe6d4cf24f961cf9d9ea29d17db345b)) {
        Py_XDECREF(cache_frame_9fe6d4cf24f961cf9d9ea29d17db345b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9fe6d4cf24f961cf9d9ea29d17db345b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9fe6d4cf24f961cf9d9ea29d17db345b = MAKE_FUNCTION_FRAME(codeobj_9fe6d4cf24f961cf9d9ea29d17db345b, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9fe6d4cf24f961cf9d9ea29d17db345b->m_type_description == NULL);
    frame_9fe6d4cf24f961cf9d9ea29d17db345b = cache_frame_9fe6d4cf24f961cf9d9ea29d17db345b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9fe6d4cf24f961cf9d9ea29d17db345b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9fe6d4cf24f961cf9d9ea29d17db345b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[5];
        CHECK_OBJECT(par_initialization_vector);
        tmp_args_element_name_2 = par_initialization_vector;
        frame_9fe6d4cf24f961cf9d9ea29d17db345b->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[14],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_initialization_vector);
        tmp_assattr_value_1 = par_initialization_vector;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fe6d4cf24f961cf9d9ea29d17db345b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fe6d4cf24f961cf9d9ea29d17db345b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9fe6d4cf24f961cf9d9ea29d17db345b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fe6d4cf24f961cf9d9ea29d17db345b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fe6d4cf24f961cf9d9ea29d17db345b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9fe6d4cf24f961cf9d9ea29d17db345b,
        type_description_1,
        par_self,
        par_initialization_vector
    );


    // Release cached frame if used for exception.
    if (frame_9fe6d4cf24f961cf9d9ea29d17db345b == cache_frame_9fe6d4cf24f961cf9d9ea29d17db345b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9fe6d4cf24f961cf9d9ea29d17db345b);
        cache_frame_9fe6d4cf24f961cf9d9ea29d17db345b = NULL;
    }

    assertFrameObject(frame_9fe6d4cf24f961cf9d9ea29d17db345b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_initialization_vector);
    Py_DECREF(par_initialization_vector);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_initialization_vector);
    Py_DECREF(par_initialization_vector);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__19_initialization_vector(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_469b229e38b5327275be5647757fdba8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_469b229e38b5327275be5647757fdba8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_469b229e38b5327275be5647757fdba8)) {
        Py_XDECREF(cache_frame_469b229e38b5327275be5647757fdba8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_469b229e38b5327275be5647757fdba8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_469b229e38b5327275be5647757fdba8 = MAKE_FUNCTION_FRAME(codeobj_469b229e38b5327275be5647757fdba8, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_469b229e38b5327275be5647757fdba8->m_type_description == NULL);
    frame_469b229e38b5327275be5647757fdba8 = cache_frame_469b229e38b5327275be5647757fdba8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_469b229e38b5327275be5647757fdba8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_469b229e38b5327275be5647757fdba8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[15]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_469b229e38b5327275be5647757fdba8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_469b229e38b5327275be5647757fdba8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_469b229e38b5327275be5647757fdba8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_469b229e38b5327275be5647757fdba8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_469b229e38b5327275be5647757fdba8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_469b229e38b5327275be5647757fdba8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_469b229e38b5327275be5647757fdba8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_469b229e38b5327275be5647757fdba8 == cache_frame_469b229e38b5327275be5647757fdba8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_469b229e38b5327275be5647757fdba8);
        cache_frame_469b229e38b5327275be5647757fdba8 = NULL;
    }

    assertFrameObject(frame_469b229e38b5327275be5647757fdba8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__20___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_initialization_vector = python_pars[1];
    struct Nuitka_FrameObject *frame_278eaf480d38e436febffe38c96da89e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_278eaf480d38e436febffe38c96da89e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_278eaf480d38e436febffe38c96da89e)) {
        Py_XDECREF(cache_frame_278eaf480d38e436febffe38c96da89e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_278eaf480d38e436febffe38c96da89e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_278eaf480d38e436febffe38c96da89e = MAKE_FUNCTION_FRAME(codeobj_278eaf480d38e436febffe38c96da89e, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_278eaf480d38e436febffe38c96da89e->m_type_description == NULL);
    frame_278eaf480d38e436febffe38c96da89e = cache_frame_278eaf480d38e436febffe38c96da89e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_278eaf480d38e436febffe38c96da89e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_278eaf480d38e436febffe38c96da89e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[5];
        CHECK_OBJECT(par_initialization_vector);
        tmp_args_element_name_2 = par_initialization_vector;
        frame_278eaf480d38e436febffe38c96da89e->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[14],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_initialization_vector);
        tmp_assattr_value_1 = par_initialization_vector;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_278eaf480d38e436febffe38c96da89e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_278eaf480d38e436febffe38c96da89e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_278eaf480d38e436febffe38c96da89e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_278eaf480d38e436febffe38c96da89e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_278eaf480d38e436febffe38c96da89e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_278eaf480d38e436febffe38c96da89e,
        type_description_1,
        par_self,
        par_initialization_vector
    );


    // Release cached frame if used for exception.
    if (frame_278eaf480d38e436febffe38c96da89e == cache_frame_278eaf480d38e436febffe38c96da89e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_278eaf480d38e436febffe38c96da89e);
        cache_frame_278eaf480d38e436febffe38c96da89e = NULL;
    }

    assertFrameObject(frame_278eaf480d38e436febffe38c96da89e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_initialization_vector);
    Py_DECREF(par_initialization_vector);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_initialization_vector);
    Py_DECREF(par_initialization_vector);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__21_initialization_vector(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_35c8fb009d4c2e646cf649b5ebb2098a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_35c8fb009d4c2e646cf649b5ebb2098a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_35c8fb009d4c2e646cf649b5ebb2098a)) {
        Py_XDECREF(cache_frame_35c8fb009d4c2e646cf649b5ebb2098a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_35c8fb009d4c2e646cf649b5ebb2098a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_35c8fb009d4c2e646cf649b5ebb2098a = MAKE_FUNCTION_FRAME(codeobj_35c8fb009d4c2e646cf649b5ebb2098a, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_35c8fb009d4c2e646cf649b5ebb2098a->m_type_description == NULL);
    frame_35c8fb009d4c2e646cf649b5ebb2098a = cache_frame_35c8fb009d4c2e646cf649b5ebb2098a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_35c8fb009d4c2e646cf649b5ebb2098a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_35c8fb009d4c2e646cf649b5ebb2098a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[15]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35c8fb009d4c2e646cf649b5ebb2098a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_35c8fb009d4c2e646cf649b5ebb2098a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35c8fb009d4c2e646cf649b5ebb2098a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_35c8fb009d4c2e646cf649b5ebb2098a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_35c8fb009d4c2e646cf649b5ebb2098a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35c8fb009d4c2e646cf649b5ebb2098a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_35c8fb009d4c2e646cf649b5ebb2098a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_35c8fb009d4c2e646cf649b5ebb2098a == cache_frame_35c8fb009d4c2e646cf649b5ebb2098a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_35c8fb009d4c2e646cf649b5ebb2098a);
        cache_frame_35c8fb009d4c2e646cf649b5ebb2098a = NULL;
    }

    assertFrameObject(frame_35c8fb009d4c2e646cf649b5ebb2098a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__22___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_nonce = python_pars[1];
    struct Nuitka_FrameObject *frame_0acc6c801e6904ebf9c3b079ccb56651;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0acc6c801e6904ebf9c3b079ccb56651 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0acc6c801e6904ebf9c3b079ccb56651)) {
        Py_XDECREF(cache_frame_0acc6c801e6904ebf9c3b079ccb56651);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0acc6c801e6904ebf9c3b079ccb56651 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0acc6c801e6904ebf9c3b079ccb56651 = MAKE_FUNCTION_FRAME(codeobj_0acc6c801e6904ebf9c3b079ccb56651, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0acc6c801e6904ebf9c3b079ccb56651->m_type_description == NULL);
    frame_0acc6c801e6904ebf9c3b079ccb56651 = cache_frame_0acc6c801e6904ebf9c3b079ccb56651;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0acc6c801e6904ebf9c3b079ccb56651);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0acc6c801e6904ebf9c3b079ccb56651) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[22];
        CHECK_OBJECT(par_nonce);
        tmp_args_element_name_2 = par_nonce;
        frame_0acc6c801e6904ebf9c3b079ccb56651->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[14],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_nonce);
        tmp_assattr_value_1 = par_nonce;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[23], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0acc6c801e6904ebf9c3b079ccb56651);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0acc6c801e6904ebf9c3b079ccb56651);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0acc6c801e6904ebf9c3b079ccb56651, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0acc6c801e6904ebf9c3b079ccb56651->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0acc6c801e6904ebf9c3b079ccb56651, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0acc6c801e6904ebf9c3b079ccb56651,
        type_description_1,
        par_self,
        par_nonce
    );


    // Release cached frame if used for exception.
    if (frame_0acc6c801e6904ebf9c3b079ccb56651 == cache_frame_0acc6c801e6904ebf9c3b079ccb56651) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0acc6c801e6904ebf9c3b079ccb56651);
        cache_frame_0acc6c801e6904ebf9c3b079ccb56651 = NULL;
    }

    assertFrameObject(frame_0acc6c801e6904ebf9c3b079ccb56651);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_nonce);
    Py_DECREF(par_nonce);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_nonce);
    Py_DECREF(par_nonce);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__23_nonce(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_79e5efec09659b850d2aceb392f09153;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_79e5efec09659b850d2aceb392f09153 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_79e5efec09659b850d2aceb392f09153)) {
        Py_XDECREF(cache_frame_79e5efec09659b850d2aceb392f09153);

#if _DEBUG_REFCOUNTS
        if (cache_frame_79e5efec09659b850d2aceb392f09153 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_79e5efec09659b850d2aceb392f09153 = MAKE_FUNCTION_FRAME(codeobj_79e5efec09659b850d2aceb392f09153, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_79e5efec09659b850d2aceb392f09153->m_type_description == NULL);
    frame_79e5efec09659b850d2aceb392f09153 = cache_frame_79e5efec09659b850d2aceb392f09153;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_79e5efec09659b850d2aceb392f09153);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_79e5efec09659b850d2aceb392f09153) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[23]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_79e5efec09659b850d2aceb392f09153);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_79e5efec09659b850d2aceb392f09153);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_79e5efec09659b850d2aceb392f09153);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_79e5efec09659b850d2aceb392f09153, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_79e5efec09659b850d2aceb392f09153->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79e5efec09659b850d2aceb392f09153, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_79e5efec09659b850d2aceb392f09153,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_79e5efec09659b850d2aceb392f09153 == cache_frame_79e5efec09659b850d2aceb392f09153) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_79e5efec09659b850d2aceb392f09153);
        cache_frame_79e5efec09659b850d2aceb392f09153 = NULL;
    }

    assertFrameObject(frame_79e5efec09659b850d2aceb392f09153);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__24_validate_for_algorithm(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    struct Nuitka_FrameObject *frame_7ecdf3caa1529b5b5bf2df70bb65e202;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ecdf3caa1529b5b5bf2df70bb65e202 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ecdf3caa1529b5b5bf2df70bb65e202)) {
        Py_XDECREF(cache_frame_7ecdf3caa1529b5b5bf2df70bb65e202);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ecdf3caa1529b5b5bf2df70bb65e202 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ecdf3caa1529b5b5bf2df70bb65e202 = MAKE_FUNCTION_FRAME(codeobj_7ecdf3caa1529b5b5bf2df70bb65e202, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7ecdf3caa1529b5b5bf2df70bb65e202->m_type_description == NULL);
    frame_7ecdf3caa1529b5b5bf2df70bb65e202 = cache_frame_7ecdf3caa1529b5b5bf2df70bb65e202;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7ecdf3caa1529b5b5bf2df70bb65e202);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7ecdf3caa1529b5b5bf2df70bb65e202) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT(par_algorithm);
        tmp_args_element_name_2 = par_algorithm;
        frame_7ecdf3caa1529b5b5bf2df70bb65e202->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[22]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[2]);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_algorithm);
        tmp_args_element_name_5 = par_algorithm;
        frame_7ecdf3caa1529b5b5bf2df70bb65e202->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7ecdf3caa1529b5b5bf2df70bb65e202);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7ecdf3caa1529b5b5bf2df70bb65e202);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7ecdf3caa1529b5b5bf2df70bb65e202, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ecdf3caa1529b5b5bf2df70bb65e202->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ecdf3caa1529b5b5bf2df70bb65e202, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ecdf3caa1529b5b5bf2df70bb65e202,
        type_description_1,
        par_self,
        par_algorithm
    );


    // Release cached frame if used for exception.
    if (frame_7ecdf3caa1529b5b5bf2df70bb65e202 == cache_frame_7ecdf3caa1529b5b5bf2df70bb65e202) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7ecdf3caa1529b5b5bf2df70bb65e202);
        cache_frame_7ecdf3caa1529b5b5bf2df70bb65e202 = NULL;
    }

    assertFrameObject(frame_7ecdf3caa1529b5b5bf2df70bb65e202);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__25___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_initialization_vector = python_pars[1];
    PyObject *par_tag = python_pars[2];
    PyObject *par_min_tag_length = python_pars[3];
    struct Nuitka_FrameObject *frame_86e8954f64d0203b81e749149b8931e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_86e8954f64d0203b81e749149b8931e7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_86e8954f64d0203b81e749149b8931e7)) {
        Py_XDECREF(cache_frame_86e8954f64d0203b81e749149b8931e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_86e8954f64d0203b81e749149b8931e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_86e8954f64d0203b81e749149b8931e7 = MAKE_FUNCTION_FRAME(codeobj_86e8954f64d0203b81e749149b8931e7, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_86e8954f64d0203b81e749149b8931e7->m_type_description == NULL);
    frame_86e8954f64d0203b81e749149b8931e7 = cache_frame_86e8954f64d0203b81e749149b8931e7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_86e8954f64d0203b81e749149b8931e7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_86e8954f64d0203b81e749149b8931e7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[5];
        CHECK_OBJECT(par_initialization_vector);
        tmp_args_element_name_2 = par_initialization_vector;
        frame_86e8954f64d0203b81e749149b8931e7->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[14],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_or_left_value_1_object_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_tmp_or_right_value_1_object_1;
        CHECK_OBJECT(par_initialization_vector);
        tmp_len_arg_1 = par_initialization_vector;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[6];
        tmp_tmp_or_left_value_1_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_tmp_or_left_value_1_object_1 == NULL));
        tmp_or_left_value_1 = CHECK_IF_TRUE(tmp_tmp_or_left_value_1_object_1) == 1;
        Py_DECREF(tmp_tmp_or_left_value_1_object_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_initialization_vector);
        tmp_len_arg_2 = par_initialization_vector;
        tmp_compexpr_left_2 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[25];
        tmp_tmp_or_right_value_1_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        assert(!(tmp_tmp_or_right_value_1_object_1 == NULL));
        tmp_or_right_value_1 = CHECK_IF_TRUE(tmp_tmp_or_right_value_1_object_1) == 1;
        Py_DECREF(tmp_tmp_or_right_value_1_object_1);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[26];
        frame_86e8954f64d0203b81e749149b8931e7->m_frame.f_lineno = 208;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 208;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_initialization_vector);
        tmp_assattr_value_1 = par_initialization_vector;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(par_tag);
        tmp_compexpr_left_3 = par_tag;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = mod_consts[28];
        CHECK_OBJECT(par_tag);
        tmp_args_element_name_4 = par_tag;
        frame_86e8954f64d0203b81e749149b8931e7->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_min_tag_length);
        tmp_compexpr_left_4 = par_min_tag_length;
        tmp_compexpr_right_4 = mod_consts[29];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[30];
        frame_86e8954f64d0203b81e749149b8931e7->m_frame.f_lineno = 216;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 216;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_tag);
        tmp_len_arg_3 = par_tag;
        tmp_compexpr_left_5 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_min_tag_length);
        tmp_compexpr_right_5 = par_min_tag_length;
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_5;
        tmp_called_instance_3 = mod_consts[31];
        CHECK_OBJECT(par_min_tag_length);
        tmp_args_element_name_5 = par_min_tag_length;
        frame_86e8954f64d0203b81e749149b8931e7->m_frame.f_lineno = 219;
        tmp_make_exception_arg_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[9], tmp_args_element_name_5);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_86e8954f64d0203b81e749149b8931e7->m_frame.f_lineno = 218;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 218;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        if (par_tag == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_2 = par_tag;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[32], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_min_tag_length);
        tmp_assattr_value_3 = par_min_tag_length;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[33], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_86e8954f64d0203b81e749149b8931e7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_86e8954f64d0203b81e749149b8931e7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_86e8954f64d0203b81e749149b8931e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_86e8954f64d0203b81e749149b8931e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_86e8954f64d0203b81e749149b8931e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_86e8954f64d0203b81e749149b8931e7,
        type_description_1,
        par_self,
        par_initialization_vector,
        par_tag,
        par_min_tag_length
    );


    // Release cached frame if used for exception.
    if (frame_86e8954f64d0203b81e749149b8931e7 == cache_frame_86e8954f64d0203b81e749149b8931e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_86e8954f64d0203b81e749149b8931e7);
        cache_frame_86e8954f64d0203b81e749149b8931e7 = NULL;
    }

    assertFrameObject(frame_86e8954f64d0203b81e749149b8931e7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_initialization_vector);
    Py_DECREF(par_initialization_vector);
    CHECK_OBJECT(par_tag);
    Py_DECREF(par_tag);
    CHECK_OBJECT(par_min_tag_length);
    Py_DECREF(par_min_tag_length);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_initialization_vector);
    Py_DECREF(par_initialization_vector);
    CHECK_OBJECT(par_tag);
    Py_DECREF(par_tag);
    CHECK_OBJECT(par_min_tag_length);
    Py_DECREF(par_min_tag_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__26_tag(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7a3c220d88c7b0a710fcde7a0fb341da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a3c220d88c7b0a710fcde7a0fb341da = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a3c220d88c7b0a710fcde7a0fb341da)) {
        Py_XDECREF(cache_frame_7a3c220d88c7b0a710fcde7a0fb341da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a3c220d88c7b0a710fcde7a0fb341da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a3c220d88c7b0a710fcde7a0fb341da = MAKE_FUNCTION_FRAME(codeobj_7a3c220d88c7b0a710fcde7a0fb341da, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7a3c220d88c7b0a710fcde7a0fb341da->m_type_description == NULL);
    frame_7a3c220d88c7b0a710fcde7a0fb341da = cache_frame_7a3c220d88c7b0a710fcde7a0fb341da;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7a3c220d88c7b0a710fcde7a0fb341da);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7a3c220d88c7b0a710fcde7a0fb341da) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[32]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a3c220d88c7b0a710fcde7a0fb341da);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a3c220d88c7b0a710fcde7a0fb341da);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a3c220d88c7b0a710fcde7a0fb341da);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7a3c220d88c7b0a710fcde7a0fb341da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a3c220d88c7b0a710fcde7a0fb341da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a3c220d88c7b0a710fcde7a0fb341da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a3c220d88c7b0a710fcde7a0fb341da,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7a3c220d88c7b0a710fcde7a0fb341da == cache_frame_7a3c220d88c7b0a710fcde7a0fb341da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7a3c220d88c7b0a710fcde7a0fb341da);
        cache_frame_7a3c220d88c7b0a710fcde7a0fb341da = NULL;
    }

    assertFrameObject(frame_7a3c220d88c7b0a710fcde7a0fb341da);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__27_initialization_vector(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bbe531743ca72b7b45bb93c554490c91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bbe531743ca72b7b45bb93c554490c91 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bbe531743ca72b7b45bb93c554490c91)) {
        Py_XDECREF(cache_frame_bbe531743ca72b7b45bb93c554490c91);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bbe531743ca72b7b45bb93c554490c91 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bbe531743ca72b7b45bb93c554490c91 = MAKE_FUNCTION_FRAME(codeobj_bbe531743ca72b7b45bb93c554490c91, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bbe531743ca72b7b45bb93c554490c91->m_type_description == NULL);
    frame_bbe531743ca72b7b45bb93c554490c91 = cache_frame_bbe531743ca72b7b45bb93c554490c91;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bbe531743ca72b7b45bb93c554490c91);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bbe531743ca72b7b45bb93c554490c91) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[15]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bbe531743ca72b7b45bb93c554490c91);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bbe531743ca72b7b45bb93c554490c91);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bbe531743ca72b7b45bb93c554490c91);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bbe531743ca72b7b45bb93c554490c91, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bbe531743ca72b7b45bb93c554490c91->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bbe531743ca72b7b45bb93c554490c91, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bbe531743ca72b7b45bb93c554490c91,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bbe531743ca72b7b45bb93c554490c91 == cache_frame_bbe531743ca72b7b45bb93c554490c91) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bbe531743ca72b7b45bb93c554490c91);
        cache_frame_bbe531743ca72b7b45bb93c554490c91 = NULL;
    }

    assertFrameObject(frame_bbe531743ca72b7b45bb93c554490c91);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function__28_validate_for_algorithm(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    PyObject *var_block_size_bytes = NULL;
    struct Nuitka_FrameObject *frame_bebf84c81d91b44cc80fbdfd62a92f39;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_bebf84c81d91b44cc80fbdfd62a92f39 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bebf84c81d91b44cc80fbdfd62a92f39)) {
        Py_XDECREF(cache_frame_bebf84c81d91b44cc80fbdfd62a92f39);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bebf84c81d91b44cc80fbdfd62a92f39 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bebf84c81d91b44cc80fbdfd62a92f39 = MAKE_FUNCTION_FRAME(codeobj_bebf84c81d91b44cc80fbdfd62a92f39, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bebf84c81d91b44cc80fbdfd62a92f39->m_type_description == NULL);
    frame_bebf84c81d91b44cc80fbdfd62a92f39 = cache_frame_bebf84c81d91b44cc80fbdfd62a92f39;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bebf84c81d91b44cc80fbdfd62a92f39);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bebf84c81d91b44cc80fbdfd62a92f39) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT(par_algorithm);
        tmp_args_element_name_2 = par_algorithm;
        frame_bebf84c81d91b44cc80fbdfd62a92f39->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_algorithm);
        tmp_isinstance_inst_1 = par_algorithm;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = mod_consts[36];
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[38]);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_bebf84c81d91b44cc80fbdfd62a92f39->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_4);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 237;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_algorithm);
        tmp_expression_name_2 = par_algorithm;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[6];
        tmp_assign_source_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_block_size_bytes == NULL);
        var_block_size_bytes = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_tmp_and_right_value_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[32]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[32]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_block_size_bytes);
        tmp_compexpr_right_2 = var_block_size_bytes;
        tmp_tmp_and_right_value_1_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_and_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_and_right_value_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_1_object_1);

            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_right_value_1_object_1);
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_5;
        tmp_called_instance_1 = mod_consts[39];
        CHECK_OBJECT(var_block_size_bytes);
        tmp_args_element_name_5 = var_block_size_bytes;
        frame_bebf84c81d91b44cc80fbdfd62a92f39->m_frame.f_lineno = 244;
        tmp_make_exception_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[9], tmp_args_element_name_5);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_bebf84c81d91b44cc80fbdfd62a92f39->m_frame.f_lineno = 243;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 243;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bebf84c81d91b44cc80fbdfd62a92f39);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bebf84c81d91b44cc80fbdfd62a92f39);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bebf84c81d91b44cc80fbdfd62a92f39, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bebf84c81d91b44cc80fbdfd62a92f39->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bebf84c81d91b44cc80fbdfd62a92f39, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bebf84c81d91b44cc80fbdfd62a92f39,
        type_description_1,
        par_self,
        par_algorithm,
        var_block_size_bytes
    );


    // Release cached frame if used for exception.
    if (frame_bebf84c81d91b44cc80fbdfd62a92f39 == cache_frame_bebf84c81d91b44cc80fbdfd62a92f39) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bebf84c81d91b44cc80fbdfd62a92f39);
        cache_frame_bebf84c81d91b44cc80fbdfd62a92f39 = NULL;
    }

    assertFrameObject(frame_bebf84c81d91b44cc80fbdfd62a92f39);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_block_size_bytes);
    Py_DECREF(var_block_size_bytes);
    var_block_size_bytes = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_block_size_bytes);
    var_block_size_bytes = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__10__check_iv_and_key_length() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__10__check_iv_and_key_length,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_782b9a4aca1776bea8aeaca4211f67aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__11___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__11___init__,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_7f0ff6817eaeab2c64081990faee378f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__12_initialization_vector(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__12_initialization_vector,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_f4d49efb04be6e6247757b419b495ca5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__13___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__13___init__,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_59932e799b539caf7316a8ad5c2a1360,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__14_tweak(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__14_tweak,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_198c3d79841ad43a3204583da5ea00f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__15_validate_for_algorithm(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__15_validate_for_algorithm,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_0785a5b789d8b6403d070078364d4bad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__16___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__16___init__,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_876cf0473ab698636fd8e174223e4c36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__17_initialization_vector(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__17_initialization_vector,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_ffb5dcf9b702b8087a98bef40baba753,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__18___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__18___init__,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_9fe6d4cf24f961cf9d9ea29d17db345b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__19_initialization_vector(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__19_initialization_vector,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_469b229e38b5327275be5647757fdba8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__1_name(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_af326ad06f18611459434eb63a409310,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        mod_consts[72],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__20___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__20___init__,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_278eaf480d38e436febffe38c96da89e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__21_initialization_vector(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__21_initialization_vector,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_35c8fb009d4c2e646cf649b5ebb2098a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__22___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__22___init__,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_0acc6c801e6904ebf9c3b079ccb56651,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__23_nonce(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__23_nonce,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_79e5efec09659b850d2aceb392f09153,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__24_validate_for_algorithm(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__24_validate_for_algorithm,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_7ecdf3caa1529b5b5bf2df70bb65e202,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__25___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__25___init__,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_86e8954f64d0203b81e749149b8931e7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__26_tag(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__26_tag,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_7a3c220d88c7b0a710fcde7a0fb341da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__27_initialization_vector(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__27_initialization_vector,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_bbe531743ca72b7b45bb93c554490c91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__28_validate_for_algorithm(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__28_validate_for_algorithm,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_bebf84c81d91b44cc80fbdfd62a92f39,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__2_validate_for_algorithm(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_73f4541775452d4cd9781643c1a2dcb2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        mod_consts[76],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__3_initialization_vector(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[83],
#endif
        codeobj_47e99638d67ace0070809cf7aa371cb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        mod_consts[82],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__4_tweak(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_2661cf015dc73b2c4b50cc155003edc6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        mod_consts[86],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__5_nonce(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_7c6e786139710bfbe43ae6200e21191b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        mod_consts[90],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__6_tag(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_7be761c491bd31af893638f6ca85e6fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        mod_consts[95],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__7__check_aes_key_length() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__7__check_aes_key_length,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4ecc7917bbd66a448a15677758f5e9cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__8__check_iv_length() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__8__check_iv_length,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9fdceb70895320096eaa9d1883d79387,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__9__check_nonce_length(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function__9__check_nonce_length,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b11ba3375df787b3314f59087ae1db52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_cryptography$hazmat$primitives$ciphers$modes[] = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__7__check_aes_key_length,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__8__check_iv_length,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__9__check_nonce_length,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__10__check_iv_and_key_length,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__11___init__,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__12_initialization_vector,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__13___init__,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__14_tweak,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__15_validate_for_algorithm,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__16___init__,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__17_initialization_vector,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__18___init__,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__19_initialization_vector,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__20___init__,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__21_initialization_vector,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__22___init__,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__23_nonce,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__24_validate_for_algorithm,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__25___init__,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__26_tag,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__27_initialization_vector,
    impl_cryptography$hazmat$primitives$ciphers$modes$$$function__28_validate_for_algorithm,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_cryptography$hazmat$primitives$ciphers$modes;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_cryptography$hazmat$primitives$ciphers$modes) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_cryptography$hazmat$primitives$ciphers$modes[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_cryptography$hazmat$primitives$ciphers$modes(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    module_cryptography$hazmat$primitives$ciphers$modes = module;

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

    _initSlotCompare();
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.primitives.ciphers.modes: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.primitives.ciphers.modes: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.primitives.ciphers.modes: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$primitives$ciphers$modes\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cryptography$hazmat$primitives$ciphers$modes = MODULE_DICT(module_cryptography$hazmat$primitives$ciphers$modes);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_cryptography$hazmat$primitives$ciphers$modes,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$ciphers$modes,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$ciphers$modes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$ciphers$modes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$ciphers$modes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$primitives$ciphers$modes);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cryptography$hazmat$primitives$ciphers$modes);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__bases_orig = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__bases_orig = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_ac9e577e2e9c99e46bdd982ad53cecc9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_1e90cd6a7a9d29ce0499b7224501bec8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_1e90cd6a7a9d29ce0499b7224501bec8_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$modes$$$class__2_ModeWithInitializationVector_32 = NULL;
    struct Nuitka_FrameObject *frame_b455301bb33a4bac9c5cc638cb795e26_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_b455301bb33a4bac9c5cc638cb795e26_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$modes$$$class__3_ModeWithTweak_40 = NULL;
    struct Nuitka_FrameObject *frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$modes$$$class__4_ModeWithNonce_48 = NULL;
    struct Nuitka_FrameObject *frame_cd543ef248bb511e48046877d162e78d_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_cd543ef248bb511e48046877d162e78d_5 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$modes$$$class__5_ModeWithAuthenticationTag_56 = NULL;
    struct Nuitka_FrameObject *frame_b078d51a10c214620858912f546e454a_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_b078d51a10c214620858912f546e454a_6 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92 = NULL;
    struct Nuitka_FrameObject *frame_0fe682c7f98995e2bae130e763ea8bd5_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0fe682c7f98995e2bae130e763ea8bd5_7 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106 = NULL;
    struct Nuitka_FrameObject *frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$modes$$$class__8_ECB_129 = NULL;
    struct Nuitka_FrameObject *frame_fa64be86c2e11e97e330233f245e1be2_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_fa64be86c2e11e97e330233f245e1be2_9 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135 = NULL;
    struct Nuitka_FrameObject *frame_a42cd339370d9fd588bfeb9ffec48fbe_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a42cd339370d9fd588bfeb9ffec48fbe_10 = NULL;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149 = NULL;
    struct Nuitka_FrameObject *frame_e086e586187b36e770102799e9a209b9_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e086e586187b36e770102799e9a209b9_11 = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163 = NULL;
    struct Nuitka_FrameObject *frame_d7aac1c8aa4293f875eb572ae322b044_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d7aac1c8aa4293f875eb572ae322b044_12 = NULL;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177 = NULL;
    struct Nuitka_FrameObject *frame_3bfdffde26eb4ecd0e1beeddfac71dad_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3bfdffde26eb4ecd0e1beeddfac71dad_13 = NULL;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193 = NULL;
    struct Nuitka_FrameObject *frame_6676c2a2aac851fe12750cefb836e847_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6676c2a2aac851fe12750cefb836e847_14 = NULL;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_ac9e577e2e9c99e46bdd982ad53cecc9 = MAKE_MODULE_FRAME(codeobj_ac9e577e2e9c99e46bdd982ad53cecc9, module_cryptography$hazmat$primitives$ciphers$modes);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_ac9e577e2e9c99e46bdd982ad53cecc9);
    assert(Py_REFCNT(frame_ac9e577e2e9c99e46bdd982ad53cecc9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[43], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[44], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[46];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$modes;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[47];
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 6;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[48];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$modes;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[47];
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 7;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[49];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$modes;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[50];
        tmp_level_name_3 = mod_consts[47];
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 9;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$modes,
                mod_consts[13],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[51];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$modes;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[52];
        tmp_level_name_4 = mod_consts[47];
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 10;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$modes,
                mod_consts[35],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[35]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$modes,
                mod_consts[37],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[37]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_9);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[53];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$modes;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[54];
        tmp_level_name_5 = mod_consts[47];
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 11;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$modes,
                mod_consts[34],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[34]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$modes,
                mod_consts[55],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[55]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_12);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_1;
        tmp_dict_key_1 = mod_consts[56];
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[57]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        tmp_assign_source_13 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[56];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_1:;
        tmp_bases_name_1 = mod_consts[58];
        tmp_assign_source_14 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[56];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 17;

        goto try_except_handler_3;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[59]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[59]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        tmp_args_name_1 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 17;
        tmp_assign_source_15 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[61]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[63];
        tmp_getattr_default_1 = mod_consts[64];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_name_5 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[63]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 17;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_5;
        }
        if (isFrameUnusable(cache_frame_1e90cd6a7a9d29ce0499b7224501bec8_2)) {
            Py_XDECREF(cache_frame_1e90cd6a7a9d29ce0499b7224501bec8_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1e90cd6a7a9d29ce0499b7224501bec8_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1e90cd6a7a9d29ce0499b7224501bec8_2 = MAKE_FUNCTION_FRAME(codeobj_1e90cd6a7a9d29ce0499b7224501bec8, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_1e90cd6a7a9d29ce0499b7224501bec8_2->m_type_description == NULL);
        frame_1e90cd6a7a9d29ce0499b7224501bec8_2 = cache_frame_1e90cd6a7a9d29ce0499b7224501bec8_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_1e90cd6a7a9d29ce0499b7224501bec8_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_1e90cd6a7a9d29ce0499b7224501bec8_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_expression_name_6;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_expression_name_6 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17, mod_consts[46]);

            if (tmp_expression_name_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[46]);

                    if (unlikely(tmp_expression_name_6 == NULL)) {
                        tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
                    }

                    if (tmp_expression_name_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 18;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_name_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[69]);
            Py_DECREF(tmp_expression_name_6);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[70];
            tmp_dict_value_2 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17, mod_consts[71]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_name_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__1_name(tmp_annotations_1);

            frame_1e90cd6a7a9d29ce0499b7224501bec8_2->m_frame.f_lineno = 18;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17, mod_consts[2], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_expression_name_7;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_expression_name_7 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17, mod_consts[46]);

            if (tmp_expression_name_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[46]);

                    if (unlikely(tmp_expression_name_7 == NULL)) {
                        tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
                    }

                    if (tmp_expression_name_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 24;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_name_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[74]);
            Py_DECREF(tmp_expression_name_7);
            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_3 = mod_consts[75];
            tmp_dict_value_3 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17, mod_consts[55]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[55]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_3);

                        exception_lineno = 25;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[70];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_name_2 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__2_validate_for_algorithm(tmp_annotations_2);

            frame_1e90cd6a7a9d29ce0499b7224501bec8_2->m_frame.f_lineno = 24;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1e90cd6a7a9d29ce0499b7224501bec8_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1e90cd6a7a9d29ce0499b7224501bec8_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1e90cd6a7a9d29ce0499b7224501bec8_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1e90cd6a7a9d29ce0499b7224501bec8_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1e90cd6a7a9d29ce0499b7224501bec8_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1e90cd6a7a9d29ce0499b7224501bec8_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_1e90cd6a7a9d29ce0499b7224501bec8_2 == cache_frame_1e90cd6a7a9d29ce0499b7224501bec8_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_1e90cd6a7a9d29ce0499b7224501bec8_2);
            cache_frame_1e90cd6a7a9d29ce0499b7224501bec8_2 = NULL;
        }

        assertFrameObject(frame_1e90cd6a7a9d29ce0499b7224501bec8_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[67];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[58];
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 17;
            tmp_assign_source_18 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__1_Mode_17 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 17;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_17);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_name_8;
        tmp_dict_key_4 = mod_consts[56];
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[57]);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        tmp_assign_source_19 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_arg_name_4;
        PyObject *tmp_dict_arg_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[56];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_2:;
        tmp_bases_name_2 = mod_consts[58];
        tmp_assign_source_20 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_arg_name_6;
        tmp_key_name_6 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[56];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 32;

        goto try_except_handler_6;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_9 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_9, mod_consts[59]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_name_3;
        PyObject *tmp_kwargs_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_10 = tmp_class_creation_2__metaclass;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[59]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        tmp_args_name_3 = mod_consts[79];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 32;
        tmp_assign_source_21 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_5);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_11;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_11 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_11, mod_consts[61]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[63];
        tmp_getattr_default_2 = mod_consts[64];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_12;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_name_12 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_12 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[63]);
            Py_DECREF(tmp_expression_name_12);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 32;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_22;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_cryptography$hazmat$primitives$ciphers$modes$$$class__2_ModeWithInitializationVector_32 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__2_ModeWithInitializationVector_32, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__2_ModeWithInitializationVector_32, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        if (isFrameUnusable(cache_frame_b455301bb33a4bac9c5cc638cb795e26_3)) {
            Py_XDECREF(cache_frame_b455301bb33a4bac9c5cc638cb795e26_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b455301bb33a4bac9c5cc638cb795e26_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b455301bb33a4bac9c5cc638cb795e26_3 = MAKE_FUNCTION_FRAME(codeobj_b455301bb33a4bac9c5cc638cb795e26, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_b455301bb33a4bac9c5cc638cb795e26_3->m_type_description == NULL);
        frame_b455301bb33a4bac9c5cc638cb795e26_3 = cache_frame_b455301bb33a4bac9c5cc638cb795e26_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_b455301bb33a4bac9c5cc638cb795e26_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_b455301bb33a4bac9c5cc638cb795e26_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_expression_name_13;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_expression_name_13 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__2_ModeWithInitializationVector_32, mod_consts[46]);

            if (tmp_expression_name_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[46]);

                    if (unlikely(tmp_expression_name_13 == NULL)) {
                        tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
                    }

                    if (tmp_expression_name_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 33;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_name_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[69]);
            Py_DECREF(tmp_expression_name_13);
            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_5 = mod_consts[70];
            tmp_dict_value_5 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__2_ModeWithInitializationVector_32, mod_consts[81]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_name_3 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__3_initialization_vector(tmp_annotations_3);

            frame_b455301bb33a4bac9c5cc638cb795e26_3->m_frame.f_lineno = 33;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_3);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__2_ModeWithInitializationVector_32, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b455301bb33a4bac9c5cc638cb795e26_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b455301bb33a4bac9c5cc638cb795e26_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b455301bb33a4bac9c5cc638cb795e26_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b455301bb33a4bac9c5cc638cb795e26_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b455301bb33a4bac9c5cc638cb795e26_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b455301bb33a4bac9c5cc638cb795e26_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_b455301bb33a4bac9c5cc638cb795e26_3 == cache_frame_b455301bb33a4bac9c5cc638cb795e26_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_b455301bb33a4bac9c5cc638cb795e26_3);
            cache_frame_b455301bb33a4bac9c5cc638cb795e26_3 = NULL;
        }

        assertFrameObject(frame_b455301bb33a4bac9c5cc638cb795e26_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_7 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_4 = mod_consts[80];
            tmp_args_name_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[58];
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_cryptography$hazmat$primitives$ciphers$modes$$$class__2_ModeWithInitializationVector_32;
            PyTuple_SET_ITEM0(tmp_args_name_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 32;
            tmp_assign_source_24 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_4, tmp_kwargs_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_23 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__2_ModeWithInitializationVector_32);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__2_ModeWithInitializationVector_32 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__2_ModeWithInitializationVector_32);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__2_ModeWithInitializationVector_32 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 32;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_23);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_name_14;
        tmp_dict_key_6 = mod_consts[56];
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_9;
        }
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[57]);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_9;
        }
        tmp_assign_source_25 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_arg_name_7;
        PyObject *tmp_dict_arg_name_8;
        PyObject *tmp_key_name_8;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_7, tmp_key_name_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = mod_consts[56];
        tmp_metaclass_name_3 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_8, tmp_key_name_8);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_9;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_3);
        condexpr_end_3:;
        tmp_bases_name_3 = mod_consts[58];
        tmp_assign_source_26 = SELECT_METACLASS(tmp_metaclass_name_3, tmp_bases_name_3);
        Py_DECREF(tmp_metaclass_name_3);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_26;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_arg_name_9;
        tmp_key_name_9 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_9, tmp_key_name_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[56];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 40;

        goto try_except_handler_9;
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_name_15;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_15 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_15, mod_consts[59]);
        tmp_condition_result_11 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_name_5;
        PyObject *tmp_kwargs_name_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_16 = tmp_class_creation_3__metaclass;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[59]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_9;
        }
        tmp_args_name_5 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_name_5 = tmp_class_creation_3__class_decl_dict;
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 40;
        tmp_assign_source_27 = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_5, tmp_kwargs_name_5);
        Py_DECREF(tmp_called_name_8);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_expression_name_17;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_name_17 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_17, mod_consts[61]);
        tmp_operand_name_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_9;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_name_3 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[63];
        tmp_getattr_default_3 = mod_consts[64];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_9;
        }
        tmp_right_name_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_18;
            PyObject *tmp_type_arg_3;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_3 = tmp_class_creation_3__prepared;
            tmp_expression_name_18 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_expression_name_18 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[63]);
            Py_DECREF(tmp_expression_name_18);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_name_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 40;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_28;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_29;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_cryptography$hazmat$primitives$ciphers$modes$$$class__3_ModeWithTweak_40 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__3_ModeWithTweak_40, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__3_ModeWithTweak_40, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_11;
        }
        if (isFrameUnusable(cache_frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4)) {
            Py_XDECREF(cache_frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4 = MAKE_FUNCTION_FRAME(codeobj_8ac0f00eaca6bca171f4d0c0e3006f3c, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4->m_type_description == NULL);
        frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4 = cache_frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_9;
            PyObject *tmp_expression_name_19;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_expression_name_19 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__3_ModeWithTweak_40, mod_consts[46]);

            if (tmp_expression_name_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[46]);

                    if (unlikely(tmp_expression_name_19 == NULL)) {
                        tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
                    }

                    if (tmp_expression_name_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_name_19);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[69]);
            Py_DECREF(tmp_expression_name_19);
            if (tmp_called_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_7 = mod_consts[70];
            tmp_dict_value_7 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__3_ModeWithTweak_40, mod_consts[81]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_name_4 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__4_tweak(tmp_annotations_4);

            frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4->m_frame.f_lineno = 41;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_4);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__3_ModeWithTweak_40, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4 == cache_frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4);
            cache_frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4 = NULL;
        }

        assertFrameObject(frame_8ac0f00eaca6bca171f4d0c0e3006f3c_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_name_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_name_10 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_6 = mod_consts[85];
            tmp_args_name_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_6, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[58];
            PyTuple_SET_ITEM0(tmp_args_name_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_cryptography$hazmat$primitives$ciphers$modes$$$class__3_ModeWithTweak_40;
            PyTuple_SET_ITEM0(tmp_args_name_6, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 40;
            tmp_assign_source_30 = CALL_FUNCTION(tmp_called_name_10, tmp_args_name_6, tmp_kwargs_name_6);
            Py_DECREF(tmp_args_name_6);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_30;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_29 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_29);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__3_ModeWithTweak_40);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__3_ModeWithTweak_40 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__3_ModeWithTweak_40);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__3_ModeWithTweak_40 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 40;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_29);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_name_20;
        tmp_dict_key_8 = mod_consts[56];
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_12;
        }
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[57]);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_12;
        }
        tmp_assign_source_31 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_31, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_arg_name_10;
        PyObject *tmp_dict_arg_name_11;
        PyObject *tmp_key_name_11;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_10, tmp_key_name_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = mod_consts[56];
        tmp_metaclass_name_4 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_11, tmp_key_name_11);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_12;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_4);
        condexpr_end_4:;
        tmp_bases_name_4 = mod_consts[58];
        tmp_assign_source_32 = SELECT_METACLASS(tmp_metaclass_name_4, tmp_bases_name_4);
        Py_DECREF(tmp_metaclass_name_4);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_arg_name_12;
        tmp_key_name_12 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_12, tmp_key_name_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[56];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 48;

        goto try_except_handler_12;
    }
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_expression_name_21;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_21 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_21, mod_consts[59]);
        tmp_condition_result_15 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_args_name_7;
        PyObject *tmp_kwargs_name_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_22 = tmp_class_creation_4__metaclass;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[59]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_12;
        }
        tmp_args_name_7 = mod_consts[88];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_name_7 = tmp_class_creation_4__class_decl_dict;
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 48;
        tmp_assign_source_33 = CALL_FUNCTION(tmp_called_name_11, tmp_args_name_7, tmp_kwargs_name_7);
        Py_DECREF(tmp_called_name_11);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_expression_name_23;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_name_23 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_23, mod_consts[61]);
        tmp_operand_name_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_12;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_left_name_4 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[63];
        tmp_getattr_default_4 = mod_consts[64];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_12;
        }
        tmp_right_name_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_24;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_4 = tmp_class_creation_4__prepared;
            tmp_expression_name_24 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_name_24 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[63]);
            Py_DECREF(tmp_expression_name_24);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_right_name_4, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_right_name_4);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_12;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 48;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_12;
    }
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_34;
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_cryptography$hazmat$primitives$ciphers$modes$$$class__4_ModeWithNonce_48 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__4_ModeWithNonce_48, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__4_ModeWithNonce_48, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_14;
        }
        if (isFrameUnusable(cache_frame_cd543ef248bb511e48046877d162e78d_5)) {
            Py_XDECREF(cache_frame_cd543ef248bb511e48046877d162e78d_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_cd543ef248bb511e48046877d162e78d_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_cd543ef248bb511e48046877d162e78d_5 = MAKE_FUNCTION_FRAME(codeobj_cd543ef248bb511e48046877d162e78d, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_cd543ef248bb511e48046877d162e78d_5->m_type_description == NULL);
        frame_cd543ef248bb511e48046877d162e78d_5 = cache_frame_cd543ef248bb511e48046877d162e78d_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_cd543ef248bb511e48046877d162e78d_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_cd543ef248bb511e48046877d162e78d_5) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_12;
            PyObject *tmp_expression_name_25;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_expression_name_25 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__4_ModeWithNonce_48, mod_consts[46]);

            if (tmp_expression_name_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[46]);

                    if (unlikely(tmp_expression_name_25 == NULL)) {
                        tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
                    }

                    if (tmp_expression_name_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_name_25);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[69]);
            Py_DECREF(tmp_expression_name_25);
            if (tmp_called_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dict_key_9 = mod_consts[70];
            tmp_dict_value_9 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__4_ModeWithNonce_48, mod_consts[81]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_name_5 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__5_nonce(tmp_annotations_5);

            frame_cd543ef248bb511e48046877d162e78d_5->m_frame.f_lineno = 49;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__4_ModeWithNonce_48, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cd543ef248bb511e48046877d162e78d_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cd543ef248bb511e48046877d162e78d_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cd543ef248bb511e48046877d162e78d_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cd543ef248bb511e48046877d162e78d_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cd543ef248bb511e48046877d162e78d_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cd543ef248bb511e48046877d162e78d_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_cd543ef248bb511e48046877d162e78d_5 == cache_frame_cd543ef248bb511e48046877d162e78d_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_cd543ef248bb511e48046877d162e78d_5);
            cache_frame_cd543ef248bb511e48046877d162e78d_5 = NULL;
        }

        assertFrameObject(frame_cd543ef248bb511e48046877d162e78d_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_14;
        skip_nested_handling_4:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_name_13;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_name_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_name_13 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_8 = mod_consts[89];
            tmp_args_name_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_8, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[58];
            PyTuple_SET_ITEM0(tmp_args_name_8, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_cryptography$hazmat$primitives$ciphers$modes$$$class__4_ModeWithNonce_48;
            PyTuple_SET_ITEM0(tmp_args_name_8, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 48;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_name_13, tmp_args_name_8, tmp_kwargs_name_8);
            Py_DECREF(tmp_args_name_8);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto try_except_handler_14;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_35 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__4_ModeWithNonce_48);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__4_ModeWithNonce_48 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__4_ModeWithNonce_48);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__4_ModeWithNonce_48 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 48;
        goto try_except_handler_12;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_35);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_name_26;
        tmp_dict_key_10 = mod_consts[56];
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_15;
        }
        tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[57]);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_15;
        }
        tmp_assign_source_37 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_name_5;
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_arg_name_13;
        PyObject *tmp_dict_arg_name_14;
        PyObject *tmp_key_name_14;
        PyObject *tmp_bases_name_5;
        tmp_key_name_13 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_13, tmp_key_name_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_name_14 = mod_consts[56];
        tmp_metaclass_name_5 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_14, tmp_key_name_14);
        if (tmp_metaclass_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_15;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_5);
        condexpr_end_5:;
        tmp_bases_name_5 = mod_consts[58];
        tmp_assign_source_38 = SELECT_METACLASS(tmp_metaclass_name_5, tmp_bases_name_5);
        Py_DECREF(tmp_metaclass_name_5);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_arg_name_15;
        tmp_key_name_15 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_15, tmp_key_name_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[56];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 56;

        goto try_except_handler_15;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_expression_name_27;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_27 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_27, mod_consts[59]);
        tmp_condition_result_19 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_args_name_9;
        PyObject *tmp_kwargs_name_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_28 = tmp_class_creation_5__metaclass;
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[59]);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_15;
        }
        tmp_args_name_9 = mod_consts[92];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_name_9 = tmp_class_creation_5__class_decl_dict;
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 56;
        tmp_assign_source_39 = CALL_FUNCTION(tmp_called_name_14, tmp_args_name_9, tmp_kwargs_name_9);
        Py_DECREF(tmp_called_name_14);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_expression_name_29;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_name_29 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_29, mod_consts[61]);
        tmp_operand_name_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_15;
        }
        tmp_condition_result_20 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_left_name_5 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[63];
        tmp_getattr_default_5 = mod_consts[64];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_15;
        }
        tmp_right_name_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_30;
            PyObject *tmp_type_arg_5;
            PyTuple_SET_ITEM(tmp_right_name_5, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_5 = tmp_class_creation_5__prepared;
            tmp_expression_name_30 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_expression_name_30 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[63]);
            Py_DECREF(tmp_expression_name_30);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_right_name_5, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_right_name_5);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 56;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = PyDict_New();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_40;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_cryptography$hazmat$primitives$ciphers$modes$$$class__5_ModeWithAuthenticationTag_56 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__5_ModeWithAuthenticationTag_56, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__5_ModeWithAuthenticationTag_56, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_17;
        }
        if (isFrameUnusable(cache_frame_b078d51a10c214620858912f546e454a_6)) {
            Py_XDECREF(cache_frame_b078d51a10c214620858912f546e454a_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b078d51a10c214620858912f546e454a_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b078d51a10c214620858912f546e454a_6 = MAKE_FUNCTION_FRAME(codeobj_b078d51a10c214620858912f546e454a, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_b078d51a10c214620858912f546e454a_6->m_type_description == NULL);
        frame_b078d51a10c214620858912f546e454a_6 = cache_frame_b078d51a10c214620858912f546e454a_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_b078d51a10c214620858912f546e454a_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_b078d51a10c214620858912f546e454a_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_15;
            PyObject *tmp_expression_name_31;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_name_32;
            PyObject *tmp_expression_name_33;
            PyObject *tmp_subscript_name_1;
            tmp_expression_name_31 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__5_ModeWithAuthenticationTag_56, mod_consts[46]);

            if (tmp_expression_name_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[46]);

                    if (unlikely(tmp_expression_name_31 == NULL)) {
                        tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
                    }

                    if (tmp_expression_name_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 57;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_name_31);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[69]);
            Py_DECREF(tmp_expression_name_31);
            if (tmp_called_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_dict_key_11 = mod_consts[70];
            tmp_expression_name_33 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__5_ModeWithAuthenticationTag_56, mod_consts[48]);

            if (tmp_expression_name_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[48]);

                    if (unlikely(tmp_expression_name_33 == NULL)) {
                        tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                    }

                    if (tmp_expression_name_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_15);

                        exception_lineno = 58;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_name_33);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_expression_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[94]);
            Py_DECREF(tmp_expression_name_33);
            if (tmp_expression_name_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_15);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_name_1 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__5_ModeWithAuthenticationTag_56, mod_consts[81]);

            if (tmp_subscript_name_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_name_1 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_subscript_name_1);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_32, tmp_subscript_name_1);
            Py_DECREF(tmp_expression_name_32);
            Py_DECREF(tmp_subscript_name_1);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_15);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_name_6 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__6_tag(tmp_annotations_6);

            frame_b078d51a10c214620858912f546e454a_6->m_frame.f_lineno = 57;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_6);
            Py_DECREF(tmp_called_name_15);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__5_ModeWithAuthenticationTag_56, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b078d51a10c214620858912f546e454a_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b078d51a10c214620858912f546e454a_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b078d51a10c214620858912f546e454a_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b078d51a10c214620858912f546e454a_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b078d51a10c214620858912f546e454a_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b078d51a10c214620858912f546e454a_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_b078d51a10c214620858912f546e454a_6 == cache_frame_b078d51a10c214620858912f546e454a_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_b078d51a10c214620858912f546e454a_6);
            cache_frame_b078d51a10c214620858912f546e454a_6 = NULL;
        }

        assertFrameObject(frame_b078d51a10c214620858912f546e454a_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_17;
        skip_nested_handling_5:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_name_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_name_16 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_10 = mod_consts[93];
            tmp_args_name_10 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_10, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[58];
            PyTuple_SET_ITEM0(tmp_args_name_10, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_cryptography$hazmat$primitives$ciphers$modes$$$class__5_ModeWithAuthenticationTag_56;
            PyTuple_SET_ITEM0(tmp_args_name_10, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 56;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_name_16, tmp_args_name_10, tmp_kwargs_name_10);
            Py_DECREF(tmp_args_name_10);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto try_except_handler_17;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_41 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__5_ModeWithAuthenticationTag_56);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__5_ModeWithAuthenticationTag_56 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__5_ModeWithAuthenticationTag_56);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__5_ModeWithAuthenticationTag_56 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 56;
        goto try_except_handler_15;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_41);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__7__check_aes_key_length();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__8__check_iv_length();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_annotations_7;
        tmp_annotations_7 = PyDict_Copy(mod_consts[97]);


        tmp_assign_source_45 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__9__check_nonce_length(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__10__check_iv_and_key_length();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_46);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_18;
        }
        tmp_assign_source_47 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_assign_source_47, 0, tmp_tuple_element_11);
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_47, 1, tmp_tuple_element_11);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_assign_source_47);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_48 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = PyDict_New();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_metaclass_name_6;
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_key_name_16;
        PyObject *tmp_dict_arg_name_16;
        PyObject *tmp_dict_arg_name_17;
        PyObject *tmp_key_name_17;
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_6;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_6;
        tmp_key_name_16 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_16, tmp_key_name_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_name_17 = mod_consts[56];
        tmp_metaclass_name_6 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_17, tmp_key_name_17);
        if (tmp_metaclass_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_18;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_18;
        }
        tmp_condition_result_22 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_name_34 = tmp_class_creation_6__bases;
        tmp_subscript_name_2 = mod_consts[47];
        tmp_type_arg_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_34, tmp_subscript_name_2, 0);
        if (tmp_type_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_18;
        }
        tmp_metaclass_name_6 = BUILTIN_TYPE1(tmp_type_arg_6);
        Py_DECREF(tmp_type_arg_6);
        if (tmp_metaclass_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_18;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_6);
        condexpr_end_7:;
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_name_6 = tmp_class_creation_6__bases;
        tmp_assign_source_50 = SELECT_METACLASS(tmp_metaclass_name_6, tmp_bases_name_6);
        Py_DECREF(tmp_metaclass_name_6);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_50;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_key_name_18;
        PyObject *tmp_dict_arg_name_18;
        tmp_key_name_18 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_18, tmp_key_name_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = mod_consts[56];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 92;

        goto try_except_handler_18;
    }
    branch_no_16:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_expression_name_35;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_name_35 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_35, mod_consts[59]);
        tmp_condition_result_24 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_args_name_11;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_name_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_name_36 = tmp_class_creation_6__metaclass;
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[59]);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_18;
        }
        tmp_tuple_element_12 = mod_consts[99];
        tmp_args_name_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_11, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_12 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_name_11, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_name_11 = tmp_class_creation_6__class_decl_dict;
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 92;
        tmp_assign_source_51 = CALL_FUNCTION(tmp_called_name_17, tmp_args_name_11, tmp_kwargs_name_11);
        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_name_11);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_51;
    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_expression_name_37;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_name_37 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_37, mod_consts[61]);
        tmp_operand_name_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_18;
        }
        tmp_condition_result_25 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_left_name_6 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[63];
        tmp_getattr_default_6 = mod_consts[64];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_18;
        }
        tmp_right_name_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_38;
            PyObject *tmp_type_arg_7;
            PyTuple_SET_ITEM(tmp_right_name_6, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_7 = tmp_class_creation_6__prepared;
            tmp_expression_name_38 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_expression_name_38 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[63]);
            Py_DECREF(tmp_expression_name_38);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_right_name_6, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_right_name_6);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_18;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 92;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_18;
    }
    branch_no_18:;
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = PyDict_New();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_52;
    }
    branch_end_17:;
    {
        PyObject *tmp_assign_source_53;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_20;
        }
        if (isFrameUnusable(cache_frame_0fe682c7f98995e2bae130e763ea8bd5_7)) {
            Py_XDECREF(cache_frame_0fe682c7f98995e2bae130e763ea8bd5_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0fe682c7f98995e2bae130e763ea8bd5_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0fe682c7f98995e2bae130e763ea8bd5_7 = MAKE_FUNCTION_FRAME(codeobj_0fe682c7f98995e2bae130e763ea8bd5, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0fe682c7f98995e2bae130e763ea8bd5_7->m_type_description == NULL);
        frame_0fe682c7f98995e2bae130e763ea8bd5_7 = cache_frame_0fe682c7f98995e2bae130e763ea8bd5_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0fe682c7f98995e2bae130e763ea8bd5_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0fe682c7f98995e2bae130e763ea8bd5_7) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_dict_key_12 = mod_consts[5];
            tmp_dict_value_12 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92, mod_consts[81]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__11___init__(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_called_name_18;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_called_name_19;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_res = MAPPING_HAS_ITEM(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92, mod_consts[102]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_26 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_name_18 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92, mod_consts[102]);

            if (unlikely(tmp_called_name_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[102]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_called_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_dict_key_13 = mod_consts[70];
            tmp_dict_value_13 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92, mod_consts[81]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_13);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_name_7 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__12_initialization_vector(tmp_annotations_9);

            frame_0fe682c7f98995e2bae130e763ea8bd5_7->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_7);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_name_19 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_14 = mod_consts[70];
            tmp_dict_value_14 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92, mod_consts[81]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_args_element_name_8 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__12_initialization_vector(tmp_annotations_10);

            frame_0fe682c7f98995e2bae130e763ea8bd5_7->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_8);
            Py_DECREF(tmp_args_element_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        tmp_dictset_value = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92, mod_consts[98]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[98]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 103;
                    type_description_2 = "o";
                    goto frame_exception_exit_7;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_7;
            }
        }

        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0fe682c7f98995e2bae130e763ea8bd5_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0fe682c7f98995e2bae130e763ea8bd5_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0fe682c7f98995e2bae130e763ea8bd5_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0fe682c7f98995e2bae130e763ea8bd5_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0fe682c7f98995e2bae130e763ea8bd5_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0fe682c7f98995e2bae130e763ea8bd5_7,
            type_description_2,
            outline_5_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_0fe682c7f98995e2bae130e763ea8bd5_7 == cache_frame_0fe682c7f98995e2bae130e763ea8bd5_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0fe682c7f98995e2bae130e763ea8bd5_7);
            cache_frame_0fe682c7f98995e2bae130e763ea8bd5_7 = NULL;
        }

        assertFrameObject(frame_0fe682c7f98995e2bae130e763ea8bd5_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_20;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_compexpr_left_1 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_compexpr_right_1 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_27 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto try_except_handler_20;
            }
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
            assert(tmp_condition_result_27 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_19:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_20;
        }
        branch_no_19:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_called_name_20;
            PyObject *tmp_args_name_12;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_name_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_name_20 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_14 = mod_consts[99];
            tmp_args_name_12 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_12, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_14 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_name_12, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92;
            PyTuple_SET_ITEM0(tmp_args_name_12, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_name_12 = tmp_class_creation_6__class_decl_dict;
            frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 92;
            tmp_assign_source_54 = CALL_FUNCTION(tmp_called_name_20, tmp_args_name_12, tmp_kwargs_name_12);
            Py_DECREF(tmp_args_name_12);
            if (tmp_assign_source_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto try_except_handler_20;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_54;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_53 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_53);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92 = NULL;
        goto try_return_handler_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__6_CBC_92 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 92;
        goto try_except_handler_18;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_53);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_tuple_element_15;
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_21;
        }
        tmp_assign_source_55 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_15);
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_55, 1, tmp_tuple_element_15);
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_assign_source_55);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_56 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = PyDict_New();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_metaclass_name_7;
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_arg_name_19;
        PyObject *tmp_dict_arg_name_20;
        PyObject *tmp_key_name_20;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_8;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_7;
        tmp_key_name_19 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_19, tmp_key_name_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_28 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_name_20 = mod_consts[56];
        tmp_metaclass_name_7 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_20, tmp_key_name_20);
        if (tmp_metaclass_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_21;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_21;
        }
        tmp_condition_result_29 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_name_39 = tmp_class_creation_7__bases;
        tmp_subscript_name_3 = mod_consts[47];
        tmp_type_arg_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_39, tmp_subscript_name_3, 0);
        if (tmp_type_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_21;
        }
        tmp_metaclass_name_7 = BUILTIN_TYPE1(tmp_type_arg_8);
        Py_DECREF(tmp_type_arg_8);
        if (tmp_metaclass_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_21;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_7);
        condexpr_end_10:;
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_name_7 = tmp_class_creation_7__bases;
        tmp_assign_source_58 = SELECT_METACLASS(tmp_metaclass_name_7, tmp_bases_name_7);
        Py_DECREF(tmp_metaclass_name_7);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_58;
    }
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_arg_name_21;
        tmp_key_name_21 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_21, tmp_key_name_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_30 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = mod_consts[56];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 106;

        goto try_except_handler_21;
    }
    branch_no_20:;
    {
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_expression_name_40;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_name_40 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_40, mod_consts[59]);
        tmp_condition_result_31 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_args_name_13;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_name_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_name_41 = tmp_class_creation_7__metaclass;
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[59]);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_21;
        }
        tmp_tuple_element_16 = mod_consts[105];
        tmp_args_name_13 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_13, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_16 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_name_13, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_name_13 = tmp_class_creation_7__class_decl_dict;
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 106;
        tmp_assign_source_59 = CALL_FUNCTION(tmp_called_name_21, tmp_args_name_13, tmp_kwargs_name_13);
        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_name_13);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_59;
    }
    {
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_operand_name_7;
        PyObject *tmp_expression_name_42;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_name_42 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_42, mod_consts[61]);
        tmp_operand_name_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_21;
        }
        tmp_condition_result_32 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_left_name_7 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[63];
        tmp_getattr_default_7 = mod_consts[64];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_21;
        }
        tmp_right_name_7 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_43;
            PyObject *tmp_type_arg_9;
            PyTuple_SET_ITEM(tmp_right_name_7, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_9 = tmp_class_creation_7__prepared;
            tmp_expression_name_43 = BUILTIN_TYPE1(tmp_type_arg_9);
            assert(!(tmp_expression_name_43 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[63]);
            Py_DECREF(tmp_expression_name_43);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_right_name_7, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_right_name_7);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_right_name_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_21;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 106;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_21;
    }
    branch_no_22:;
    goto branch_end_21;
    branch_no_21:;
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = PyDict_New();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_60;
    }
    branch_end_21:;
    {
        PyObject *tmp_assign_source_61;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_23;
        }
        if (isFrameUnusable(cache_frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8)) {
            Py_XDECREF(cache_frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8 = MAKE_FUNCTION_FRAME(codeobj_e4a0f3e1a3c3481b58ed55a4df694ed5, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8->m_type_description == NULL);
        frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8 = cache_frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_dict_key_15 = mod_consts[16];
            tmp_dict_value_15 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106, mod_consts[81]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__13___init__(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            nuitka_bool tmp_condition_result_33;
            PyObject *tmp_called_name_22;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_called_name_23;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            tmp_res = MAPPING_HAS_ITEM(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106, mod_consts[102]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_condition_result_33 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_name_22 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106, mod_consts[102]);

            if (unlikely(tmp_called_name_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[102]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_called_name_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_dict_key_16 = mod_consts[70];
            tmp_dict_value_16 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106, mod_consts[81]);

            if (tmp_dict_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_16 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_16);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__14_tweak(tmp_annotations_12);

            frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8->m_frame.f_lineno = 117;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_9);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_name_23 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_17 = mod_consts[70];
            tmp_dict_value_17 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106, mod_consts[81]);

            if (tmp_dict_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_17 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_17);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_args_element_name_10 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__14_tweak(tmp_annotations_13);

            frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8->m_frame.f_lineno = 117;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_10);
            Py_DECREF(tmp_args_element_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            tmp_dict_key_18 = mod_consts[75];
            tmp_dict_value_18 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106, mod_consts[55]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[55]);

                    if (unlikely(tmp_dict_value_18 == NULL)) {
                        tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
                    }

                    if (tmp_dict_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 121;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_dict_value_18);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_annotations_14 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[70];
            tmp_dict_value_18 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__15_validate_for_algorithm(tmp_annotations_14);

            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8 == cache_frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8);
            cache_frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8 = NULL;
        }

        assertFrameObject(frame_e4a0f3e1a3c3481b58ed55a4df694ed5_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_23;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_34;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_compexpr_left_2 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_compexpr_right_2 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_34 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_condition_result_34 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto try_except_handler_23;
            }
            if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
                goto branch_yes_23;
            } else {
                goto branch_no_23;
            }
            assert(tmp_condition_result_34 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_23:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_23;
        }
        branch_no_23:;
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_called_name_24;
            PyObject *tmp_args_name_14;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_name_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_name_24 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_18 = mod_consts[105];
            tmp_args_name_14 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_14, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_18 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_name_14, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106;
            PyTuple_SET_ITEM0(tmp_args_name_14, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_name_14 = tmp_class_creation_7__class_decl_dict;
            frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 106;
            tmp_assign_source_62 = CALL_FUNCTION(tmp_called_name_24, tmp_args_name_14, tmp_kwargs_name_14);
            Py_DECREF(tmp_args_name_14);
            if (tmp_assign_source_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto try_except_handler_23;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_62;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_61 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_61);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106 = NULL;
        goto try_return_handler_22;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__7_XTS_106 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 106;
        goto try_except_handler_21;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_61);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_tuple_element_19;
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        tmp_assign_source_63 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_63, 0, tmp_tuple_element_19);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_64 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = PyDict_New();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_metaclass_name_8;
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_key_name_22;
        PyObject *tmp_dict_arg_name_22;
        PyObject *tmp_dict_arg_name_23;
        PyObject *tmp_key_name_23;
        nuitka_bool tmp_condition_result_36;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_10;
        PyObject *tmp_expression_name_44;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_8;
        tmp_key_name_22 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_22, tmp_key_name_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_35 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_name_23 = mod_consts[56];
        tmp_metaclass_name_8 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_23, tmp_key_name_23);
        if (tmp_metaclass_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        tmp_condition_result_36 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_name_44 = tmp_class_creation_8__bases;
        tmp_subscript_name_4 = mod_consts[47];
        tmp_type_arg_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_44, tmp_subscript_name_4, 0);
        if (tmp_type_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        tmp_metaclass_name_8 = BUILTIN_TYPE1(tmp_type_arg_10);
        Py_DECREF(tmp_type_arg_10);
        if (tmp_metaclass_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_metaclass_name_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_8);
        condexpr_end_13:;
        condexpr_end_12:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_name_8 = tmp_class_creation_8__bases;
        tmp_assign_source_66 = SELECT_METACLASS(tmp_metaclass_name_8, tmp_bases_name_8);
        Py_DECREF(tmp_metaclass_name_8);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_66;
    }
    {
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_key_name_24;
        PyObject *tmp_dict_arg_name_24;
        tmp_key_name_24 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_24, tmp_key_name_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
    tmp_dictdel_key = mod_consts[56];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 129;

        goto try_except_handler_24;
    }
    branch_no_24:;
    {
        nuitka_bool tmp_condition_result_38;
        PyObject *tmp_expression_name_45;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_name_45 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_45, mod_consts[59]);
        tmp_condition_result_38 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_46;
        PyObject *tmp_args_name_15;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_name_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_name_46 = tmp_class_creation_8__metaclass;
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_46, mod_consts[59]);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        tmp_tuple_element_20 = mod_consts[109];
        tmp_args_name_15 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_15, 0, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_20 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_name_15, 1, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_name_15 = tmp_class_creation_8__class_decl_dict;
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 129;
        tmp_assign_source_67 = CALL_FUNCTION(tmp_called_name_25, tmp_args_name_15, tmp_kwargs_name_15);
        Py_DECREF(tmp_called_name_25);
        Py_DECREF(tmp_args_name_15);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_67;
    }
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_operand_name_8;
        PyObject *tmp_expression_name_47;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_name_47 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_47, mod_consts[61]);
        tmp_operand_name_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        tmp_condition_result_39 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_left_name_8 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[63];
        tmp_getattr_default_8 = mod_consts[64];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        tmp_right_name_8 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_48;
            PyObject *tmp_type_arg_11;
            PyTuple_SET_ITEM(tmp_right_name_8, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_11 = tmp_class_creation_8__prepared;
            tmp_expression_name_48 = BUILTIN_TYPE1(tmp_type_arg_11);
            assert(!(tmp_expression_name_48 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_48, mod_consts[63]);
            Py_DECREF(tmp_expression_name_48);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_right_name_8, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_right_name_8);
        goto try_except_handler_24;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_right_name_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 129;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_24;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = PyDict_New();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_68;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_69;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_cryptography$hazmat$primitives$ciphers$modes$$$class__8_ECB_129 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__8_ECB_129, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_26;
        }
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__8_ECB_129, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_26;
        }
        if (isFrameUnusable(cache_frame_fa64be86c2e11e97e330233f245e1be2_9)) {
            Py_XDECREF(cache_frame_fa64be86c2e11e97e330233f245e1be2_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_fa64be86c2e11e97e330233f245e1be2_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_fa64be86c2e11e97e330233f245e1be2_9 = MAKE_FUNCTION_FRAME(codeobj_fa64be86c2e11e97e330233f245e1be2, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_fa64be86c2e11e97e330233f245e1be2_9->m_type_description == NULL);
        frame_fa64be86c2e11e97e330233f245e1be2_9 = cache_frame_fa64be86c2e11e97e330233f245e1be2_9;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_fa64be86c2e11e97e330233f245e1be2_9);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_fa64be86c2e11e97e330233f245e1be2_9) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__8_ECB_129, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }
        tmp_dictset_value = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__8_ECB_129, mod_consts[11]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[11]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 132;
                    type_description_2 = "o";
                    goto frame_exception_exit_9;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_9;
            }
        }

        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__8_ECB_129, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fa64be86c2e11e97e330233f245e1be2_9);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fa64be86c2e11e97e330233f245e1be2_9);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fa64be86c2e11e97e330233f245e1be2_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fa64be86c2e11e97e330233f245e1be2_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fa64be86c2e11e97e330233f245e1be2_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fa64be86c2e11e97e330233f245e1be2_9,
            type_description_2,
            outline_7_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_fa64be86c2e11e97e330233f245e1be2_9 == cache_frame_fa64be86c2e11e97e330233f245e1be2_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_fa64be86c2e11e97e330233f245e1be2_9);
            cache_frame_fa64be86c2e11e97e330233f245e1be2_9 = NULL;
        }

        assertFrameObject(frame_fa64be86c2e11e97e330233f245e1be2_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_26;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_40;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_compexpr_left_3 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_compexpr_right_3 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto try_except_handler_26;
            }
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
            assert(tmp_condition_result_40 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_27:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__8_ECB_129, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_26;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_called_name_26;
            PyObject *tmp_args_name_16;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_name_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_name_26 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_22 = mod_consts[109];
            tmp_args_name_16 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_16, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_22 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_name_16, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = locals_cryptography$hazmat$primitives$ciphers$modes$$$class__8_ECB_129;
            PyTuple_SET_ITEM0(tmp_args_name_16, 2, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_name_16 = tmp_class_creation_8__class_decl_dict;
            frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 129;
            tmp_assign_source_70 = CALL_FUNCTION(tmp_called_name_26, tmp_args_name_16, tmp_kwargs_name_16);
            Py_DECREF(tmp_args_name_16);
            if (tmp_assign_source_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto try_except_handler_26;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_70;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_69 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_69);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__8_ECB_129);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__8_ECB_129 = NULL;
        goto try_return_handler_25;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__8_ECB_129);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__8_ECB_129 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto try_except_handler_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 129;
        goto try_except_handler_24;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_69);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_tuple_element_23;
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_tuple_element_23 == NULL)) {
            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        tmp_assign_source_71 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_assign_source_71, 0, tmp_tuple_element_23);
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_23 == NULL)) {
            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto tuple_build_exception_11;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_71, 1, tmp_tuple_element_23);
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_assign_source_71);
        goto try_except_handler_27;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_72 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = PyDict_New();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_metaclass_name_9;
        nuitka_bool tmp_condition_result_41;
        PyObject *tmp_key_name_25;
        PyObject *tmp_dict_arg_name_25;
        PyObject *tmp_dict_arg_name_26;
        PyObject *tmp_key_name_26;
        nuitka_bool tmp_condition_result_42;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_12;
        PyObject *tmp_expression_name_49;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_bases_name_9;
        tmp_key_name_25 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_25 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_25, tmp_key_name_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_41 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_26 = tmp_class_creation_9__class_decl_dict;
        tmp_key_name_26 = mod_consts[56];
        tmp_metaclass_name_9 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_26, tmp_key_name_26);
        if (tmp_metaclass_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        tmp_condition_result_42 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_name_49 = tmp_class_creation_9__bases;
        tmp_subscript_name_5 = mod_consts[47];
        tmp_type_arg_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_49, tmp_subscript_name_5, 0);
        if (tmp_type_arg_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        tmp_metaclass_name_9 = BUILTIN_TYPE1(tmp_type_arg_12);
        Py_DECREF(tmp_type_arg_12);
        if (tmp_metaclass_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        tmp_metaclass_name_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_9);
        condexpr_end_15:;
        condexpr_end_14:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_name_9 = tmp_class_creation_9__bases;
        tmp_assign_source_74 = SELECT_METACLASS(tmp_metaclass_name_9, tmp_bases_name_9);
        Py_DECREF(tmp_metaclass_name_9);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_74;
    }
    {
        nuitka_bool tmp_condition_result_43;
        PyObject *tmp_key_name_27;
        PyObject *tmp_dict_arg_name_27;
        tmp_key_name_27 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_27 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_27, tmp_key_name_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;
    tmp_dictdel_key = mod_consts[56];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 135;

        goto try_except_handler_27;
    }
    branch_no_28:;
    {
        nuitka_bool tmp_condition_result_44;
        PyObject *tmp_expression_name_50;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_name_50 = tmp_class_creation_9__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_50, mod_consts[59]);
        tmp_condition_result_44 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_name_27;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_args_name_17;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_kwargs_name_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_name_51 = tmp_class_creation_9__metaclass;
        tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, mod_consts[59]);
        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        tmp_tuple_element_24 = mod_consts[110];
        tmp_args_name_17 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_17, 0, tmp_tuple_element_24);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_24 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_name_17, 1, tmp_tuple_element_24);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_name_17 = tmp_class_creation_9__class_decl_dict;
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 135;
        tmp_assign_source_75 = CALL_FUNCTION(tmp_called_name_27, tmp_args_name_17, tmp_kwargs_name_17);
        Py_DECREF(tmp_called_name_27);
        Py_DECREF(tmp_args_name_17);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_75;
    }
    {
        nuitka_bool tmp_condition_result_45;
        PyObject *tmp_operand_name_9;
        PyObject *tmp_expression_name_52;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_name_52 = tmp_class_creation_9__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_52, mod_consts[61]);
        tmp_operand_name_9 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        tmp_condition_result_45 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_left_name_9 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
        tmp_getattr_attr_9 = mod_consts[63];
        tmp_getattr_default_9 = mod_consts[64];
        tmp_tuple_element_25 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        tmp_right_name_9 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_53;
            PyObject *tmp_type_arg_13;
            PyTuple_SET_ITEM(tmp_right_name_9, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_13 = tmp_class_creation_9__prepared;
            tmp_expression_name_53 = BUILTIN_TYPE1(tmp_type_arg_13);
            assert(!(tmp_expression_name_53 == NULL));
            tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_53, mod_consts[63]);
            Py_DECREF(tmp_expression_name_53);
            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_right_name_9, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_right_name_9);
        goto try_except_handler_27;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_right_name_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 135;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_27;
    }
    branch_no_30:;
    goto branch_end_29;
    branch_no_29:;
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = PyDict_New();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_76;
    }
    branch_end_29:;
    {
        PyObject *tmp_assign_source_77;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_29;
        }
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_29;
        }
        if (isFrameUnusable(cache_frame_a42cd339370d9fd588bfeb9ffec48fbe_10)) {
            Py_XDECREF(cache_frame_a42cd339370d9fd588bfeb9ffec48fbe_10);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a42cd339370d9fd588bfeb9ffec48fbe_10 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a42cd339370d9fd588bfeb9ffec48fbe_10 = MAKE_FUNCTION_FRAME(codeobj_a42cd339370d9fd588bfeb9ffec48fbe, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a42cd339370d9fd588bfeb9ffec48fbe_10->m_type_description == NULL);
        frame_a42cd339370d9fd588bfeb9ffec48fbe_10 = cache_frame_a42cd339370d9fd588bfeb9ffec48fbe_10;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_a42cd339370d9fd588bfeb9ffec48fbe_10);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a42cd339370d9fd588bfeb9ffec48fbe_10) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_2 = "o";
            goto frame_exception_exit_10;
        }
        {
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            tmp_dict_key_19 = mod_consts[5];
            tmp_dict_value_19 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135, mod_consts[81]);

            if (tmp_dict_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_19 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_19);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__16___init__(tmp_annotations_15);

            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            nuitka_bool tmp_condition_result_46;
            PyObject *tmp_called_name_28;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_called_name_29;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            tmp_res = MAPPING_HAS_ITEM(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135, mod_consts[102]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_condition_result_46 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_16;
            } else {
                goto condexpr_false_16;
            }
            condexpr_true_16:;
            tmp_called_name_28 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135, mod_consts[102]);

            if (unlikely(tmp_called_name_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[102]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }

            if (tmp_called_name_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_dict_key_20 = mod_consts[70];
            tmp_dict_value_20 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135, mod_consts[81]);

            if (tmp_dict_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_20 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_20);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_args_element_name_11 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__17_initialization_vector(tmp_annotations_16);

            frame_a42cd339370d9fd588bfeb9ffec48fbe_10->m_frame.f_lineno = 142;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_28, tmp_args_element_name_11);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_args_element_name_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_name_29 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_21 = mod_consts[70];
            tmp_dict_value_21 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135, mod_consts[81]);

            if (tmp_dict_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_21 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_21);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_args_element_name_12 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__17_initialization_vector(tmp_annotations_17);

            frame_a42cd339370d9fd588bfeb9ffec48fbe_10->m_frame.f_lineno = 142;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_12);
            Py_DECREF(tmp_args_element_name_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            condexpr_end_16:;
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        tmp_dictset_value = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135, mod_consts[98]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[98]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 146;
                    type_description_2 = "o";
                    goto frame_exception_exit_10;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_10;
            }
        }

        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "o";
            goto frame_exception_exit_10;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a42cd339370d9fd588bfeb9ffec48fbe_10);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a42cd339370d9fd588bfeb9ffec48fbe_10);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a42cd339370d9fd588bfeb9ffec48fbe_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a42cd339370d9fd588bfeb9ffec48fbe_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a42cd339370d9fd588bfeb9ffec48fbe_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a42cd339370d9fd588bfeb9ffec48fbe_10,
            type_description_2,
            outline_8_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_a42cd339370d9fd588bfeb9ffec48fbe_10 == cache_frame_a42cd339370d9fd588bfeb9ffec48fbe_10) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a42cd339370d9fd588bfeb9ffec48fbe_10);
            cache_frame_a42cd339370d9fd588bfeb9ffec48fbe_10 = NULL;
        }

        assertFrameObject(frame_a42cd339370d9fd588bfeb9ffec48fbe_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;

        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_29;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_47;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_compexpr_left_4 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_compexpr_right_4 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_47 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_4, tmp_compexpr_right_4);
            if (tmp_condition_result_47 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto try_except_handler_29;
            }
            if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
                goto branch_yes_31;
            } else {
                goto branch_no_31;
            }
            assert(tmp_condition_result_47 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_31:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_29;
        }
        branch_no_31:;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_called_name_30;
            PyObject *tmp_args_name_18;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_name_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_name_30 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_26 = mod_consts[110];
            tmp_args_name_18 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_18, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_26 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_name_18, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135;
            PyTuple_SET_ITEM0(tmp_args_name_18, 2, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_name_18 = tmp_class_creation_9__class_decl_dict;
            frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 135;
            tmp_assign_source_78 = CALL_FUNCTION(tmp_called_name_30, tmp_args_name_18, tmp_kwargs_name_18);
            Py_DECREF(tmp_args_name_18);
            if (tmp_assign_source_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto try_except_handler_29;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_78;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_77 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_77);
        goto try_return_handler_29;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135 = NULL;
        goto try_return_handler_28;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__9_OFB_135 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_28;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 135;
        goto try_except_handler_27;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_77);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_tuple_element_27;
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_30;
        }
        tmp_assign_source_79 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_assign_source_79, 0, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto tuple_build_exception_13;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_79, 1, tmp_tuple_element_27);
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_assign_source_79);
        goto try_except_handler_30;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_80 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = PyDict_New();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_metaclass_name_10;
        nuitka_bool tmp_condition_result_48;
        PyObject *tmp_key_name_28;
        PyObject *tmp_dict_arg_name_28;
        PyObject *tmp_dict_arg_name_29;
        PyObject *tmp_key_name_29;
        nuitka_bool tmp_condition_result_49;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_14;
        PyObject *tmp_expression_name_54;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_bases_name_10;
        tmp_key_name_28 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_28 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_28, tmp_key_name_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_48 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_29 = tmp_class_creation_10__class_decl_dict;
        tmp_key_name_29 = mod_consts[56];
        tmp_metaclass_name_10 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_29, tmp_key_name_29);
        if (tmp_metaclass_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_30;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_30;
        }
        tmp_condition_result_49 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_name_54 = tmp_class_creation_10__bases;
        tmp_subscript_name_6 = mod_consts[47];
        tmp_type_arg_14 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_54, tmp_subscript_name_6, 0);
        if (tmp_type_arg_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_30;
        }
        tmp_metaclass_name_10 = BUILTIN_TYPE1(tmp_type_arg_14);
        Py_DECREF(tmp_type_arg_14);
        if (tmp_metaclass_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_30;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_name_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_10);
        condexpr_end_18:;
        condexpr_end_17:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_name_10 = tmp_class_creation_10__bases;
        tmp_assign_source_82 = SELECT_METACLASS(tmp_metaclass_name_10, tmp_bases_name_10);
        Py_DECREF(tmp_metaclass_name_10);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_82;
    }
    {
        nuitka_bool tmp_condition_result_50;
        PyObject *tmp_key_name_30;
        PyObject *tmp_dict_arg_name_30;
        tmp_key_name_30 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_30 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_30, tmp_key_name_30);
        assert(!(tmp_res == -1));
        tmp_condition_result_50 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;
    tmp_dictdel_key = mod_consts[56];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 149;

        goto try_except_handler_30;
    }
    branch_no_32:;
    {
        nuitka_bool tmp_condition_result_51;
        PyObject *tmp_expression_name_55;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_name_55 = tmp_class_creation_10__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_55, mod_consts[59]);
        tmp_condition_result_51 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_name_31;
        PyObject *tmp_expression_name_56;
        PyObject *tmp_args_name_19;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_kwargs_name_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_name_56 = tmp_class_creation_10__metaclass;
        tmp_called_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, mod_consts[59]);
        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_30;
        }
        tmp_tuple_element_28 = mod_consts[113];
        tmp_args_name_19 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_19, 0, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_28 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_name_19, 1, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_name_19 = tmp_class_creation_10__class_decl_dict;
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 149;
        tmp_assign_source_83 = CALL_FUNCTION(tmp_called_name_31, tmp_args_name_19, tmp_kwargs_name_19);
        Py_DECREF(tmp_called_name_31);
        Py_DECREF(tmp_args_name_19);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_83;
    }
    {
        nuitka_bool tmp_condition_result_52;
        PyObject *tmp_operand_name_10;
        PyObject *tmp_expression_name_57;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_name_57 = tmp_class_creation_10__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_57, mod_consts[61]);
        tmp_operand_name_10 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_30;
        }
        tmp_condition_result_52 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_getattr_target_10;
        PyObject *tmp_getattr_attr_10;
        PyObject *tmp_getattr_default_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_left_name_10 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_getattr_target_10 = tmp_class_creation_10__metaclass;
        tmp_getattr_attr_10 = mod_consts[63];
        tmp_getattr_default_10 = mod_consts[64];
        tmp_tuple_element_29 = BUILTIN_GETATTR(tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10);
        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_30;
        }
        tmp_right_name_10 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_58;
            PyObject *tmp_type_arg_15;
            PyTuple_SET_ITEM(tmp_right_name_10, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_15 = tmp_class_creation_10__prepared;
            tmp_expression_name_58 = BUILTIN_TYPE1(tmp_type_arg_15);
            assert(!(tmp_expression_name_58 == NULL));
            tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_58, mod_consts[63]);
            Py_DECREF(tmp_expression_name_58);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_right_name_10, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_right_name_10);
        goto try_except_handler_30;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_right_name_10);
        if (tmp_raise_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_30;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 149;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_30;
    }
    branch_no_34:;
    goto branch_end_33;
    branch_no_33:;
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = PyDict_New();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_84;
    }
    branch_end_33:;
    {
        PyObject *tmp_assign_source_85;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_32;
        }
        tmp_dictset_value = mod_consts[113];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_32;
        }
        if (isFrameUnusable(cache_frame_e086e586187b36e770102799e9a209b9_11)) {
            Py_XDECREF(cache_frame_e086e586187b36e770102799e9a209b9_11);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e086e586187b36e770102799e9a209b9_11 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e086e586187b36e770102799e9a209b9_11 = MAKE_FUNCTION_FRAME(codeobj_e086e586187b36e770102799e9a209b9, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_e086e586187b36e770102799e9a209b9_11->m_type_description == NULL);
        frame_e086e586187b36e770102799e9a209b9_11 = cache_frame_e086e586187b36e770102799e9a209b9_11;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_e086e586187b36e770102799e9a209b9_11);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_e086e586187b36e770102799e9a209b9_11) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[113];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }
        {
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            tmp_dict_key_22 = mod_consts[5];
            tmp_dict_value_22 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149, mod_consts[81]);

            if (tmp_dict_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_22 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_22);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__18___init__(tmp_annotations_18);

            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            nuitka_bool tmp_condition_result_53;
            PyObject *tmp_called_name_32;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_called_name_33;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            tmp_res = MAPPING_HAS_ITEM(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149, mod_consts[102]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_condition_result_53 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_19;
            } else {
                goto condexpr_false_19;
            }
            condexpr_true_19:;
            tmp_called_name_32 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149, mod_consts[102]);

            if (unlikely(tmp_called_name_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[102]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }

            if (tmp_called_name_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_dict_key_23 = mod_consts[70];
            tmp_dict_value_23 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149, mod_consts[81]);

            if (tmp_dict_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_23 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_23);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_args_element_name_13 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__19_initialization_vector(tmp_annotations_19);

            frame_e086e586187b36e770102799e9a209b9_11->m_frame.f_lineno = 156;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, tmp_args_element_name_13);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_args_element_name_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            goto condexpr_end_19;
            condexpr_false_19:;
            tmp_called_name_33 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_24 = mod_consts[70];
            tmp_dict_value_24 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149, mod_consts[81]);

            if (tmp_dict_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_24 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_24);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_args_element_name_14 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__19_initialization_vector(tmp_annotations_20);

            frame_e086e586187b36e770102799e9a209b9_11->m_frame.f_lineno = 156;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, tmp_args_element_name_14);
            Py_DECREF(tmp_args_element_name_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            condexpr_end_19:;
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        tmp_dictset_value = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149, mod_consts[98]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[98]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 160;
                    type_description_2 = "o";
                    goto frame_exception_exit_11;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_11;
            }
        }

        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e086e586187b36e770102799e9a209b9_11);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;

        frame_exception_exit_11:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e086e586187b36e770102799e9a209b9_11);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e086e586187b36e770102799e9a209b9_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e086e586187b36e770102799e9a209b9_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e086e586187b36e770102799e9a209b9_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e086e586187b36e770102799e9a209b9_11,
            type_description_2,
            outline_9_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_e086e586187b36e770102799e9a209b9_11 == cache_frame_e086e586187b36e770102799e9a209b9_11) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_e086e586187b36e770102799e9a209b9_11);
            cache_frame_e086e586187b36e770102799e9a209b9_11 = NULL;
        }

        assertFrameObject(frame_e086e586187b36e770102799e9a209b9_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;

        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_32;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_54;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_compexpr_left_5 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_compexpr_right_5 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_54 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_condition_result_54 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto try_except_handler_32;
            }
            if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
                goto branch_yes_35;
            } else {
                goto branch_no_35;
            }
            assert(tmp_condition_result_54 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_35:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_32;
        }
        branch_no_35:;
        {
            PyObject *tmp_assign_source_86;
            PyObject *tmp_called_name_34;
            PyObject *tmp_args_name_20;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kwargs_name_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_name_34 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_30 = mod_consts[113];
            tmp_args_name_20 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_20, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_30 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_name_20, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149;
            PyTuple_SET_ITEM0(tmp_args_name_20, 2, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_name_20 = tmp_class_creation_10__class_decl_dict;
            frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 149;
            tmp_assign_source_86 = CALL_FUNCTION(tmp_called_name_34, tmp_args_name_20, tmp_kwargs_name_20);
            Py_DECREF(tmp_args_name_20);
            if (tmp_assign_source_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto try_except_handler_32;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_86;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_85 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_85);
        goto try_return_handler_32;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149 = NULL;
        goto try_return_handler_31;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__10_CFB_149 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto try_except_handler_31;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 149;
        goto try_except_handler_30;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_85);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_10__bases_orig);
    Py_DECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_tuple_element_31;
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_tuple_element_31 == NULL)) {
            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_tuple_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_33;
        }
        tmp_assign_source_87 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_assign_source_87, 0, tmp_tuple_element_31);
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_31 == NULL)) {
            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto tuple_build_exception_15;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_87, 1, tmp_tuple_element_31);
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_assign_source_87);
        goto try_except_handler_33;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_88 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = PyDict_New();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_metaclass_name_11;
        nuitka_bool tmp_condition_result_55;
        PyObject *tmp_key_name_31;
        PyObject *tmp_dict_arg_name_31;
        PyObject *tmp_dict_arg_name_32;
        PyObject *tmp_key_name_32;
        nuitka_bool tmp_condition_result_56;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_16;
        PyObject *tmp_expression_name_59;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_bases_name_11;
        tmp_key_name_31 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_name_31 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_31, tmp_key_name_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_55 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_20;
        } else {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_name_32 = tmp_class_creation_11__class_decl_dict;
        tmp_key_name_32 = mod_consts[56];
        tmp_metaclass_name_11 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_32, tmp_key_name_32);
        if (tmp_metaclass_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_33;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_33;
        }
        tmp_condition_result_56 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_21;
        } else {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_name_59 = tmp_class_creation_11__bases;
        tmp_subscript_name_7 = mod_consts[47];
        tmp_type_arg_16 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_59, tmp_subscript_name_7, 0);
        if (tmp_type_arg_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_33;
        }
        tmp_metaclass_name_11 = BUILTIN_TYPE1(tmp_type_arg_16);
        Py_DECREF(tmp_type_arg_16);
        if (tmp_metaclass_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_33;
        }
        goto condexpr_end_21;
        condexpr_false_21:;
        tmp_metaclass_name_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_11);
        condexpr_end_21:;
        condexpr_end_20:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_name_11 = tmp_class_creation_11__bases;
        tmp_assign_source_90 = SELECT_METACLASS(tmp_metaclass_name_11, tmp_bases_name_11);
        Py_DECREF(tmp_metaclass_name_11);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_90;
    }
    {
        nuitka_bool tmp_condition_result_57;
        PyObject *tmp_key_name_33;
        PyObject *tmp_dict_arg_name_33;
        tmp_key_name_33 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_name_33 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_33, tmp_key_name_33);
        assert(!(tmp_res == -1));
        tmp_condition_result_57 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;
    tmp_dictdel_key = mod_consts[56];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 163;

        goto try_except_handler_33;
    }
    branch_no_36:;
    {
        nuitka_bool tmp_condition_result_58;
        PyObject *tmp_expression_name_60;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_name_60 = tmp_class_creation_11__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_60, mod_consts[59]);
        tmp_condition_result_58 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_name_35;
        PyObject *tmp_expression_name_61;
        PyObject *tmp_args_name_21;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_kwargs_name_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_name_61 = tmp_class_creation_11__metaclass;
        tmp_called_name_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_61, mod_consts[59]);
        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_33;
        }
        tmp_tuple_element_32 = mod_consts[116];
        tmp_args_name_21 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_21, 0, tmp_tuple_element_32);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_32 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_name_21, 1, tmp_tuple_element_32);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_name_21 = tmp_class_creation_11__class_decl_dict;
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 163;
        tmp_assign_source_91 = CALL_FUNCTION(tmp_called_name_35, tmp_args_name_21, tmp_kwargs_name_21);
        Py_DECREF(tmp_called_name_35);
        Py_DECREF(tmp_args_name_21);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_91;
    }
    {
        nuitka_bool tmp_condition_result_59;
        PyObject *tmp_operand_name_11;
        PyObject *tmp_expression_name_62;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_name_62 = tmp_class_creation_11__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_62, mod_consts[61]);
        tmp_operand_name_11 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_33;
        }
        tmp_condition_result_59 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_59 == NUITKA_BOOL_TRUE) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_getattr_target_11;
        PyObject *tmp_getattr_attr_11;
        PyObject *tmp_getattr_default_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_left_name_11 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_getattr_target_11 = tmp_class_creation_11__metaclass;
        tmp_getattr_attr_11 = mod_consts[63];
        tmp_getattr_default_11 = mod_consts[64];
        tmp_tuple_element_33 = BUILTIN_GETATTR(tmp_getattr_target_11, tmp_getattr_attr_11, tmp_getattr_default_11);
        if (tmp_tuple_element_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_33;
        }
        tmp_right_name_11 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_63;
            PyObject *tmp_type_arg_17;
            PyTuple_SET_ITEM(tmp_right_name_11, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_17 = tmp_class_creation_11__prepared;
            tmp_expression_name_63 = BUILTIN_TYPE1(tmp_type_arg_17);
            assert(!(tmp_expression_name_63 == NULL));
            tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[63]);
            Py_DECREF(tmp_expression_name_63);
            if (tmp_tuple_element_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_right_name_11, 1, tmp_tuple_element_33);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_right_name_11);
        goto try_except_handler_33;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_11, tmp_right_name_11);
        Py_DECREF(tmp_right_name_11);
        if (tmp_raise_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_33;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 163;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_33;
    }
    branch_no_38:;
    goto branch_end_37;
    branch_no_37:;
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = PyDict_New();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_92;
    }
    branch_end_37:;
    {
        PyObject *tmp_assign_source_93;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_35;
        }
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_35;
        }
        if (isFrameUnusable(cache_frame_d7aac1c8aa4293f875eb572ae322b044_12)) {
            Py_XDECREF(cache_frame_d7aac1c8aa4293f875eb572ae322b044_12);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d7aac1c8aa4293f875eb572ae322b044_12 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d7aac1c8aa4293f875eb572ae322b044_12 = MAKE_FUNCTION_FRAME(codeobj_d7aac1c8aa4293f875eb572ae322b044, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d7aac1c8aa4293f875eb572ae322b044_12->m_type_description == NULL);
        frame_d7aac1c8aa4293f875eb572ae322b044_12 = cache_frame_d7aac1c8aa4293f875eb572ae322b044_12;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d7aac1c8aa4293f875eb572ae322b044_12);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d7aac1c8aa4293f875eb572ae322b044_12) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_2 = "o";
            goto frame_exception_exit_12;
        }
        {
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            tmp_dict_key_25 = mod_consts[5];
            tmp_dict_value_25 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163, mod_consts[81]);

            if (tmp_dict_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_25 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_25);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__20___init__(tmp_annotations_21);

            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            nuitka_bool tmp_condition_result_60;
            PyObject *tmp_called_name_36;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            PyObject *tmp_called_name_37;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            tmp_res = MAPPING_HAS_ITEM(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163, mod_consts[102]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_condition_result_60 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_22;
            } else {
                goto condexpr_false_22;
            }
            condexpr_true_22:;
            tmp_called_name_36 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163, mod_consts[102]);

            if (unlikely(tmp_called_name_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[102]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }

            if (tmp_called_name_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_dict_key_26 = mod_consts[70];
            tmp_dict_value_26 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163, mod_consts[81]);

            if (tmp_dict_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_26 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_26);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));


            tmp_args_element_name_15 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__21_initialization_vector(tmp_annotations_22);

            frame_d7aac1c8aa4293f875eb572ae322b044_12->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_36, tmp_args_element_name_15);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_args_element_name_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            goto condexpr_end_22;
            condexpr_false_22:;
            tmp_called_name_37 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_27 = mod_consts[70];
            tmp_dict_value_27 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163, mod_consts[81]);

            if (tmp_dict_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_27 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_27);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));


            tmp_args_element_name_16 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__21_initialization_vector(tmp_annotations_23);

            frame_d7aac1c8aa4293f875eb572ae322b044_12->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_37, tmp_args_element_name_16);
            Py_DECREF(tmp_args_element_name_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            condexpr_end_22:;
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        tmp_dictset_value = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163, mod_consts[98]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[98]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    type_description_2 = "o";
                    goto frame_exception_exit_12;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_12;
            }
        }

        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_2 = "o";
            goto frame_exception_exit_12;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d7aac1c8aa4293f875eb572ae322b044_12);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;

        frame_exception_exit_12:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d7aac1c8aa4293f875eb572ae322b044_12);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d7aac1c8aa4293f875eb572ae322b044_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d7aac1c8aa4293f875eb572ae322b044_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d7aac1c8aa4293f875eb572ae322b044_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d7aac1c8aa4293f875eb572ae322b044_12,
            type_description_2,
            outline_10_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_d7aac1c8aa4293f875eb572ae322b044_12 == cache_frame_d7aac1c8aa4293f875eb572ae322b044_12) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d7aac1c8aa4293f875eb572ae322b044_12);
            cache_frame_d7aac1c8aa4293f875eb572ae322b044_12 = NULL;
        }

        assertFrameObject(frame_d7aac1c8aa4293f875eb572ae322b044_12);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_11;

        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_35;
        skip_nested_handling_11:;
        {
            nuitka_bool tmp_condition_result_61;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_compexpr_left_6 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_compexpr_right_6 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_61 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_6, tmp_compexpr_right_6);
            if (tmp_condition_result_61 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto try_except_handler_35;
            }
            if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
                goto branch_yes_39;
            } else {
                goto branch_no_39;
            }
            assert(tmp_condition_result_61 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_39:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_35;
        }
        branch_no_39:;
        {
            PyObject *tmp_assign_source_94;
            PyObject *tmp_called_name_38;
            PyObject *tmp_args_name_22;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_kwargs_name_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_name_38 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_34 = mod_consts[116];
            tmp_args_name_22 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_22, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_34 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_name_22, 1, tmp_tuple_element_34);
            tmp_tuple_element_34 = locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163;
            PyTuple_SET_ITEM0(tmp_args_name_22, 2, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_name_22 = tmp_class_creation_11__class_decl_dict;
            frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 163;
            tmp_assign_source_94 = CALL_FUNCTION(tmp_called_name_38, tmp_args_name_22, tmp_kwargs_name_22);
            Py_DECREF(tmp_args_name_22);
            if (tmp_assign_source_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto try_except_handler_35;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_94;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_93 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_93);
        goto try_return_handler_35;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163 = NULL;
        goto try_return_handler_34;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__11_CFB8_163 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto try_except_handler_34;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 163;
        goto try_except_handler_33;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_93);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_tuple_element_35;
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_tuple_element_35 == NULL)) {
            tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_tuple_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_36;
        }
        tmp_assign_source_95 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_assign_source_95, 0, tmp_tuple_element_35);
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_tuple_element_35 == NULL)) {
            tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_tuple_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto tuple_build_exception_17;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_95, 1, tmp_tuple_element_35);
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_assign_source_95);
        goto try_except_handler_36;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        assert(tmp_class_creation_12__bases_orig == NULL);
        tmp_class_creation_12__bases_orig = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_12__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_96 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = PyDict_New();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_metaclass_name_12;
        nuitka_bool tmp_condition_result_62;
        PyObject *tmp_key_name_34;
        PyObject *tmp_dict_arg_name_34;
        PyObject *tmp_dict_arg_name_35;
        PyObject *tmp_key_name_35;
        nuitka_bool tmp_condition_result_63;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_18;
        PyObject *tmp_expression_name_64;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_bases_name_12;
        tmp_key_name_34 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_name_34 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_34, tmp_key_name_34);
        assert(!(tmp_res == -1));
        tmp_condition_result_62 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_62 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_23;
        } else {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_name_35 = tmp_class_creation_12__class_decl_dict;
        tmp_key_name_35 = mod_consts[56];
        tmp_metaclass_name_12 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_35, tmp_key_name_35);
        if (tmp_metaclass_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_36;
        }
        goto condexpr_end_23;
        condexpr_false_23:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_36;
        }
        tmp_condition_result_63 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_63 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_24;
        } else {
            goto condexpr_false_24;
        }
        condexpr_true_24:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_name_64 = tmp_class_creation_12__bases;
        tmp_subscript_name_8 = mod_consts[47];
        tmp_type_arg_18 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_64, tmp_subscript_name_8, 0);
        if (tmp_type_arg_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_36;
        }
        tmp_metaclass_name_12 = BUILTIN_TYPE1(tmp_type_arg_18);
        Py_DECREF(tmp_type_arg_18);
        if (tmp_metaclass_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_36;
        }
        goto condexpr_end_24;
        condexpr_false_24:;
        tmp_metaclass_name_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_12);
        condexpr_end_24:;
        condexpr_end_23:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_name_12 = tmp_class_creation_12__bases;
        tmp_assign_source_98 = SELECT_METACLASS(tmp_metaclass_name_12, tmp_bases_name_12);
        Py_DECREF(tmp_metaclass_name_12);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_98;
    }
    {
        nuitka_bool tmp_condition_result_64;
        PyObject *tmp_key_name_36;
        PyObject *tmp_dict_arg_name_36;
        tmp_key_name_36 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_name_36 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_36, tmp_key_name_36);
        assert(!(tmp_res == -1));
        tmp_condition_result_64 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;
    tmp_dictdel_key = mod_consts[56];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 177;

        goto try_except_handler_36;
    }
    branch_no_40:;
    {
        nuitka_bool tmp_condition_result_65;
        PyObject *tmp_expression_name_65;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_name_65 = tmp_class_creation_12__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_65, mod_consts[59]);
        tmp_condition_result_65 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_name_39;
        PyObject *tmp_expression_name_66;
        PyObject *tmp_args_name_23;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_kwargs_name_23;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_name_66 = tmp_class_creation_12__metaclass;
        tmp_called_name_39 = LOOKUP_ATTRIBUTE(tmp_expression_name_66, mod_consts[59]);
        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_36;
        }
        tmp_tuple_element_36 = mod_consts[119];
        tmp_args_name_23 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_23, 0, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_36 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_name_23, 1, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_name_23 = tmp_class_creation_12__class_decl_dict;
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 177;
        tmp_assign_source_99 = CALL_FUNCTION(tmp_called_name_39, tmp_args_name_23, tmp_kwargs_name_23);
        Py_DECREF(tmp_called_name_39);
        Py_DECREF(tmp_args_name_23);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_99;
    }
    {
        nuitka_bool tmp_condition_result_66;
        PyObject *tmp_operand_name_12;
        PyObject *tmp_expression_name_67;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_name_67 = tmp_class_creation_12__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_67, mod_consts[61]);
        tmp_operand_name_12 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_36;
        }
        tmp_condition_result_66 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_66 == NUITKA_BOOL_TRUE) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_getattr_target_12;
        PyObject *tmp_getattr_attr_12;
        PyObject *tmp_getattr_default_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_left_name_12 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_getattr_target_12 = tmp_class_creation_12__metaclass;
        tmp_getattr_attr_12 = mod_consts[63];
        tmp_getattr_default_12 = mod_consts[64];
        tmp_tuple_element_37 = BUILTIN_GETATTR(tmp_getattr_target_12, tmp_getattr_attr_12, tmp_getattr_default_12);
        if (tmp_tuple_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_36;
        }
        tmp_right_name_12 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_68;
            PyObject *tmp_type_arg_19;
            PyTuple_SET_ITEM(tmp_right_name_12, 0, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_19 = tmp_class_creation_12__prepared;
            tmp_expression_name_68 = BUILTIN_TYPE1(tmp_type_arg_19);
            assert(!(tmp_expression_name_68 == NULL));
            tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tmp_expression_name_68, mod_consts[63]);
            Py_DECREF(tmp_expression_name_68);
            if (tmp_tuple_element_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_right_name_12, 1, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_right_name_12);
        goto try_except_handler_36;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_12, tmp_right_name_12);
        Py_DECREF(tmp_right_name_12);
        if (tmp_raise_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_36;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 177;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_36;
    }
    branch_no_42:;
    goto branch_end_41;
    branch_no_41:;
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = PyDict_New();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_100;
    }
    branch_end_41:;
    {
        PyObject *tmp_assign_source_101;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_38;
        }
        tmp_dictset_value = mod_consts[119];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_38;
        }
        if (isFrameUnusable(cache_frame_3bfdffde26eb4ecd0e1beeddfac71dad_13)) {
            Py_XDECREF(cache_frame_3bfdffde26eb4ecd0e1beeddfac71dad_13);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3bfdffde26eb4ecd0e1beeddfac71dad_13 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3bfdffde26eb4ecd0e1beeddfac71dad_13 = MAKE_FUNCTION_FRAME(codeobj_3bfdffde26eb4ecd0e1beeddfac71dad, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_3bfdffde26eb4ecd0e1beeddfac71dad_13->m_type_description == NULL);
        frame_3bfdffde26eb4ecd0e1beeddfac71dad_13 = cache_frame_3bfdffde26eb4ecd0e1beeddfac71dad_13;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_3bfdffde26eb4ecd0e1beeddfac71dad_13);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_3bfdffde26eb4ecd0e1beeddfac71dad_13) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[119];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_2 = "o";
            goto frame_exception_exit_13;
        }
        {
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            tmp_dict_key_28 = mod_consts[22];
            tmp_dict_value_28 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177, mod_consts[81]);

            if (tmp_dict_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_28 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_28);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__22___init__(tmp_annotations_24);

            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            nuitka_bool tmp_condition_result_67;
            PyObject *tmp_called_name_40;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            PyObject *tmp_called_name_41;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            tmp_res = MAPPING_HAS_ITEM(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177, mod_consts[102]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_condition_result_67 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_67 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_25;
            } else {
                goto condexpr_false_25;
            }
            condexpr_true_25:;
            tmp_called_name_40 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177, mod_consts[102]);

            if (unlikely(tmp_called_name_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[102]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }

            if (tmp_called_name_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_dict_key_29 = mod_consts[70];
            tmp_dict_value_29 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177, mod_consts[81]);

            if (tmp_dict_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_29 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_29);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            tmp_annotations_25 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));


            tmp_args_element_name_17 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__23_nonce(tmp_annotations_25);

            frame_3bfdffde26eb4ecd0e1beeddfac71dad_13->m_frame.f_lineno = 184;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_40, tmp_args_element_name_17);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_args_element_name_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            goto condexpr_end_25;
            condexpr_false_25:;
            tmp_called_name_41 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_30 = mod_consts[70];
            tmp_dict_value_30 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177, mod_consts[81]);

            if (tmp_dict_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_30 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_30);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));


            tmp_args_element_name_18 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__23_nonce(tmp_annotations_26);

            frame_3bfdffde26eb4ecd0e1beeddfac71dad_13->m_frame.f_lineno = 184;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_41, tmp_args_element_name_18);
            Py_DECREF(tmp_args_element_name_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            condexpr_end_25:;
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            tmp_dict_key_31 = mod_consts[75];
            tmp_dict_value_31 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177, mod_consts[55]);

            if (tmp_dict_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[55]);

                    if (unlikely(tmp_dict_value_31 == NULL)) {
                        tmp_dict_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
                    }

                    if (tmp_dict_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 188;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_dict_value_31);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            tmp_annotations_27 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[70];
            tmp_dict_value_31 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_31, tmp_dict_value_31);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__24_validate_for_algorithm(tmp_annotations_27);

            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3bfdffde26eb4ecd0e1beeddfac71dad_13);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_12;

        frame_exception_exit_13:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3bfdffde26eb4ecd0e1beeddfac71dad_13);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3bfdffde26eb4ecd0e1beeddfac71dad_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3bfdffde26eb4ecd0e1beeddfac71dad_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3bfdffde26eb4ecd0e1beeddfac71dad_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3bfdffde26eb4ecd0e1beeddfac71dad_13,
            type_description_2,
            outline_11_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_3bfdffde26eb4ecd0e1beeddfac71dad_13 == cache_frame_3bfdffde26eb4ecd0e1beeddfac71dad_13) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_3bfdffde26eb4ecd0e1beeddfac71dad_13);
            cache_frame_3bfdffde26eb4ecd0e1beeddfac71dad_13 = NULL;
        }

        assertFrameObject(frame_3bfdffde26eb4ecd0e1beeddfac71dad_13);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_12;

        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_38;
        skip_nested_handling_12:;
        {
            nuitka_bool tmp_condition_result_68;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_compexpr_left_7 = tmp_class_creation_12__bases;
            CHECK_OBJECT(tmp_class_creation_12__bases_orig);
            tmp_compexpr_right_7 = tmp_class_creation_12__bases_orig;
            tmp_condition_result_68 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_7, tmp_compexpr_right_7);
            if (tmp_condition_result_68 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto try_except_handler_38;
            }
            if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
                goto branch_yes_43;
            } else {
                goto branch_no_43;
            }
            assert(tmp_condition_result_68 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_43:;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dictset_value = tmp_class_creation_12__bases_orig;
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_38;
        }
        branch_no_43:;
        {
            PyObject *tmp_assign_source_102;
            PyObject *tmp_called_name_42;
            PyObject *tmp_args_name_24;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_kwargs_name_24;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_name_42 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_38 = mod_consts[119];
            tmp_args_name_24 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_24, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_38 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_name_24, 1, tmp_tuple_element_38);
            tmp_tuple_element_38 = locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177;
            PyTuple_SET_ITEM0(tmp_args_name_24, 2, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_name_24 = tmp_class_creation_12__class_decl_dict;
            frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 177;
            tmp_assign_source_102 = CALL_FUNCTION(tmp_called_name_42, tmp_args_name_24, tmp_kwargs_name_24);
            Py_DECREF(tmp_args_name_24);
            if (tmp_assign_source_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto try_except_handler_38;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_102;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_101 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_101);
        goto try_return_handler_38;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177 = NULL;
        goto try_return_handler_37;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__12_CTR_177 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto try_except_handler_37;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 177;
        goto try_except_handler_36;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_101);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_12__bases_orig);
    Py_DECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_tuple_element_39;
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_tuple_element_39 == NULL)) {
            tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_tuple_element_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_39;
        }
        tmp_assign_source_103 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_assign_source_103, 0, tmp_tuple_element_39);
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_39 == NULL)) {
            tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto tuple_build_exception_19;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_103, 1, tmp_tuple_element_39);
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_tuple_element_39 == NULL)) {
            tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_tuple_element_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto tuple_build_exception_19;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_103, 2, tmp_tuple_element_39);
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_assign_source_103);
        goto try_except_handler_39;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        assert(tmp_class_creation_13__bases_orig == NULL);
        tmp_class_creation_13__bases_orig = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_13__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_104 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = PyDict_New();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_105;
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_metaclass_name_13;
        nuitka_bool tmp_condition_result_69;
        PyObject *tmp_key_name_37;
        PyObject *tmp_dict_arg_name_37;
        PyObject *tmp_dict_arg_name_38;
        PyObject *tmp_key_name_38;
        nuitka_bool tmp_condition_result_70;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_20;
        PyObject *tmp_expression_name_69;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_bases_name_13;
        tmp_key_name_37 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_name_37 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_37, tmp_key_name_37);
        assert(!(tmp_res == -1));
        tmp_condition_result_69 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_26;
        } else {
            goto condexpr_false_26;
        }
        condexpr_true_26:;
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_name_38 = tmp_class_creation_13__class_decl_dict;
        tmp_key_name_38 = mod_consts[56];
        tmp_metaclass_name_13 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_38, tmp_key_name_38);
        if (tmp_metaclass_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_39;
        }
        goto condexpr_end_26;
        condexpr_false_26:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_13__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_39;
        }
        tmp_condition_result_70 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_70 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_27;
        } else {
            goto condexpr_false_27;
        }
        condexpr_true_27:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_expression_name_69 = tmp_class_creation_13__bases;
        tmp_subscript_name_9 = mod_consts[47];
        tmp_type_arg_20 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_69, tmp_subscript_name_9, 0);
        if (tmp_type_arg_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_39;
        }
        tmp_metaclass_name_13 = BUILTIN_TYPE1(tmp_type_arg_20);
        Py_DECREF(tmp_type_arg_20);
        if (tmp_metaclass_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_39;
        }
        goto condexpr_end_27;
        condexpr_false_27:;
        tmp_metaclass_name_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_13);
        condexpr_end_27:;
        condexpr_end_26:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_bases_name_13 = tmp_class_creation_13__bases;
        tmp_assign_source_106 = SELECT_METACLASS(tmp_metaclass_name_13, tmp_bases_name_13);
        Py_DECREF(tmp_metaclass_name_13);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_106;
    }
    {
        nuitka_bool tmp_condition_result_71;
        PyObject *tmp_key_name_39;
        PyObject *tmp_dict_arg_name_39;
        tmp_key_name_39 = mod_consts[56];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_name_39 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_39, tmp_key_name_39);
        assert(!(tmp_res == -1));
        tmp_condition_result_71 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_71 == NUITKA_BOOL_TRUE) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;
    tmp_dictdel_key = mod_consts[56];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 193;

        goto try_except_handler_39;
    }
    branch_no_44:;
    {
        nuitka_bool tmp_condition_result_72;
        PyObject *tmp_expression_name_70;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_name_70 = tmp_class_creation_13__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_70, mod_consts[59]);
        tmp_condition_result_72 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_name_43;
        PyObject *tmp_expression_name_71;
        PyObject *tmp_args_name_25;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_kwargs_name_25;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_name_71 = tmp_class_creation_13__metaclass;
        tmp_called_name_43 = LOOKUP_ATTRIBUTE(tmp_expression_name_71, mod_consts[59]);
        if (tmp_called_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_39;
        }
        tmp_tuple_element_40 = mod_consts[123];
        tmp_args_name_25 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_25, 0, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_tuple_element_40 = tmp_class_creation_13__bases;
        PyTuple_SET_ITEM0(tmp_args_name_25, 1, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_name_25 = tmp_class_creation_13__class_decl_dict;
        frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 193;
        tmp_assign_source_107 = CALL_FUNCTION(tmp_called_name_43, tmp_args_name_25, tmp_kwargs_name_25);
        Py_DECREF(tmp_called_name_43);
        Py_DECREF(tmp_args_name_25);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_107;
    }
    {
        nuitka_bool tmp_condition_result_73;
        PyObject *tmp_operand_name_13;
        PyObject *tmp_expression_name_72;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_name_72 = tmp_class_creation_13__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_72, mod_consts[61]);
        tmp_operand_name_13 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_39;
        }
        tmp_condition_result_73 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_getattr_target_13;
        PyObject *tmp_getattr_attr_13;
        PyObject *tmp_getattr_default_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_left_name_13 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_getattr_target_13 = tmp_class_creation_13__metaclass;
        tmp_getattr_attr_13 = mod_consts[63];
        tmp_getattr_default_13 = mod_consts[64];
        tmp_tuple_element_41 = BUILTIN_GETATTR(tmp_getattr_target_13, tmp_getattr_attr_13, tmp_getattr_default_13);
        if (tmp_tuple_element_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_39;
        }
        tmp_right_name_13 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_73;
            PyObject *tmp_type_arg_21;
            PyTuple_SET_ITEM(tmp_right_name_13, 0, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_21 = tmp_class_creation_13__prepared;
            tmp_expression_name_73 = BUILTIN_TYPE1(tmp_type_arg_21);
            assert(!(tmp_expression_name_73 == NULL));
            tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_73, mod_consts[63]);
            Py_DECREF(tmp_expression_name_73);
            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_right_name_13, 1, tmp_tuple_element_41);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_right_name_13);
        goto try_except_handler_39;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_right_name_13);
        if (tmp_raise_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_39;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 193;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_39;
    }
    branch_no_46:;
    goto branch_end_45;
    branch_no_45:;
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = PyDict_New();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_108;
    }
    branch_end_45:;
    {
        PyObject *tmp_assign_source_109;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_41;
        }
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_41;
        }
        if (isFrameUnusable(cache_frame_6676c2a2aac851fe12750cefb836e847_14)) {
            Py_XDECREF(cache_frame_6676c2a2aac851fe12750cefb836e847_14);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6676c2a2aac851fe12750cefb836e847_14 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6676c2a2aac851fe12750cefb836e847_14 = MAKE_FUNCTION_FRAME(codeobj_6676c2a2aac851fe12750cefb836e847, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6676c2a2aac851fe12750cefb836e847_14->m_type_description == NULL);
        frame_6676c2a2aac851fe12750cefb836e847_14 = cache_frame_6676c2a2aac851fe12750cefb836e847_14;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6676c2a2aac851fe12750cefb836e847_14);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6676c2a2aac851fe12750cefb836e847_14) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_2 = "o";
            goto frame_exception_exit_14;
        }
        tmp_dictset_value = mod_consts[124];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[125], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_2 = "o";
            goto frame_exception_exit_14;
        }
        tmp_dictset_value = mod_consts[126];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[127], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_2 = "o";
            goto frame_exception_exit_14;
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_28;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            tmp_defaults_1 = mod_consts[128];
            tmp_dict_key_32 = mod_consts[5];
            tmp_dict_value_32 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[81]);

            if (tmp_dict_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_32 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_32);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            tmp_annotations_28 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_name_74;
                PyObject *tmp_expression_name_75;
                PyObject *tmp_subscript_name_10;
                tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_32, tmp_dict_value_32);
                Py_DECREF(tmp_dict_value_32);
                assert(!(tmp_res != 0));
                tmp_dict_key_32 = mod_consts[28];
                tmp_expression_name_75 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[48]);

                if (tmp_expression_name_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_name_75 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[48]);

                        if (unlikely(tmp_expression_name_75 == NULL)) {
                            tmp_expression_name_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                        }

                        if (tmp_expression_name_75 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 201;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_name_75);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_name_74 = LOOKUP_ATTRIBUTE(tmp_expression_name_75, mod_consts[94]);
                Py_DECREF(tmp_expression_name_75);
                if (tmp_expression_name_74 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 201;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_name_10 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[81]);

                if (tmp_subscript_name_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_name_10 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_subscript_name_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_32 = LOOKUP_SUBSCRIPT(tmp_expression_name_74, tmp_subscript_name_10);
                Py_DECREF(tmp_expression_name_74);
                Py_DECREF(tmp_subscript_name_10);
                if (tmp_dict_value_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 201;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_32, tmp_dict_value_32);
                Py_DECREF(tmp_dict_value_32);
                assert(!(tmp_res != 0));
                tmp_dict_key_32 = mod_consts[129];
                tmp_dict_value_32 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[130]);

                if (tmp_dict_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_32 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_32);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_32, tmp_dict_value_32);
                Py_DECREF(tmp_dict_value_32);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_28);
            goto frame_exception_exit_14;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__25___init__(tmp_defaults_1, tmp_annotations_28);

            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            nuitka_bool tmp_condition_result_74;
            PyObject *tmp_called_name_44;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_annotations_29;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            PyObject *tmp_expression_name_76;
            PyObject *tmp_expression_name_77;
            PyObject *tmp_subscript_name_11;
            PyObject *tmp_called_name_45;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_annotations_30;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            PyObject *tmp_expression_name_78;
            PyObject *tmp_expression_name_79;
            PyObject *tmp_subscript_name_12;
            tmp_res = MAPPING_HAS_ITEM(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[102]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_condition_result_74 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_74 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_28;
            } else {
                goto condexpr_false_28;
            }
            condexpr_true_28:;
            tmp_called_name_44 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[102]);

            if (unlikely(tmp_called_name_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[102]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_called_name_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_dict_key_33 = mod_consts[70];
            tmp_expression_name_77 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[48]);

            if (tmp_expression_name_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_77 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[48]);

                    if (unlikely(tmp_expression_name_77 == NULL)) {
                        tmp_expression_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                    }

                    if (tmp_expression_name_77 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_44);

                        exception_lineno = 227;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_expression_name_77);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            tmp_expression_name_76 = LOOKUP_ATTRIBUTE(tmp_expression_name_77, mod_consts[94]);
            Py_DECREF(tmp_expression_name_77);
            if (tmp_expression_name_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_44);

                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_subscript_name_11 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[81]);

            if (tmp_subscript_name_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_name_11 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_subscript_name_11);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            tmp_dict_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_name_76, tmp_subscript_name_11);
            Py_DECREF(tmp_expression_name_76);
            Py_DECREF(tmp_subscript_name_11);
            if (tmp_dict_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_44);

                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_annotations_29 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));


            tmp_args_element_name_19 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__26_tag(tmp_annotations_29);

            frame_6676c2a2aac851fe12750cefb836e847_14->m_frame.f_lineno = 226;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_44, tmp_args_element_name_19);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_args_element_name_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            goto condexpr_end_28;
            condexpr_false_28:;
            tmp_called_name_45 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_34 = mod_consts[70];
            tmp_expression_name_79 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[48]);

            if (tmp_expression_name_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_79 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[48]);

                    if (unlikely(tmp_expression_name_79 == NULL)) {
                        tmp_expression_name_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                    }

                    if (tmp_expression_name_79 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 227;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_expression_name_79);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            tmp_expression_name_78 = LOOKUP_ATTRIBUTE(tmp_expression_name_79, mod_consts[94]);
            Py_DECREF(tmp_expression_name_79);
            if (tmp_expression_name_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_subscript_name_12 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[81]);

            if (tmp_subscript_name_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_name_12 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_subscript_name_12);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_name_78, tmp_subscript_name_12);
            Py_DECREF(tmp_expression_name_78);
            Py_DECREF(tmp_subscript_name_12);
            if (tmp_dict_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_annotations_30 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));


            tmp_args_element_name_20 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__26_tag(tmp_annotations_30);

            frame_6676c2a2aac851fe12750cefb836e847_14->m_frame.f_lineno = 226;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_45, tmp_args_element_name_20);
            Py_DECREF(tmp_args_element_name_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            condexpr_end_28:;
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            nuitka_bool tmp_condition_result_75;
            PyObject *tmp_called_name_46;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_annotations_31;
            PyObject *tmp_dict_key_35;
            PyObject *tmp_dict_value_35;
            PyObject *tmp_called_name_47;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_annotations_32;
            PyObject *tmp_dict_key_36;
            PyObject *tmp_dict_value_36;
            tmp_res = MAPPING_HAS_ITEM(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[102]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_condition_result_75 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_75 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_29;
            } else {
                goto condexpr_false_29;
            }
            condexpr_true_29:;
            tmp_called_name_46 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[102]);

            if (unlikely(tmp_called_name_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[102]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_called_name_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_dict_key_35 = mod_consts[70];
            tmp_dict_value_35 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[81]);

            if (tmp_dict_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_35 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_35);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            tmp_annotations_31 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_35, tmp_dict_value_35);
            Py_DECREF(tmp_dict_value_35);
            assert(!(tmp_res != 0));


            tmp_args_element_name_21 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__27_initialization_vector(tmp_annotations_31);

            frame_6676c2a2aac851fe12750cefb836e847_14->m_frame.f_lineno = 230;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_46, tmp_args_element_name_21);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_args_element_name_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            goto condexpr_end_29;
            condexpr_false_29:;
            tmp_called_name_47 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_36 = mod_consts[70];
            tmp_dict_value_36 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[81]);

            if (tmp_dict_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_36 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_36);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            tmp_annotations_32 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));


            tmp_args_element_name_22 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__27_initialization_vector(tmp_annotations_32);

            frame_6676c2a2aac851fe12750cefb836e847_14->m_frame.f_lineno = 230;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_47, tmp_args_element_name_22);
            Py_DECREF(tmp_args_element_name_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            condexpr_end_29:;
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_annotations_33;
            PyObject *tmp_dict_key_37;
            PyObject *tmp_dict_value_37;
            tmp_dict_key_37 = mod_consts[75];
            tmp_dict_value_37 = PyObject_GetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[55]);

            if (tmp_dict_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[55]);

                    if (unlikely(tmp_dict_value_37 == NULL)) {
                        tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
                    }

                    if (tmp_dict_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 234;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_dict_value_37);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            tmp_annotations_33 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));
            tmp_dict_key_37 = mod_consts[70];
            tmp_dict_value_37 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_37, tmp_dict_value_37);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function__28_validate_for_algorithm(tmp_annotations_33);

            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6676c2a2aac851fe12750cefb836e847_14);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_13;

        frame_exception_exit_14:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6676c2a2aac851fe12750cefb836e847_14);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6676c2a2aac851fe12750cefb836e847_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6676c2a2aac851fe12750cefb836e847_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6676c2a2aac851fe12750cefb836e847_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6676c2a2aac851fe12750cefb836e847_14,
            type_description_2,
            outline_12_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_6676c2a2aac851fe12750cefb836e847_14 == cache_frame_6676c2a2aac851fe12750cefb836e847_14) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6676c2a2aac851fe12750cefb836e847_14);
            cache_frame_6676c2a2aac851fe12750cefb836e847_14 = NULL;
        }

        assertFrameObject(frame_6676c2a2aac851fe12750cefb836e847_14);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_13;

        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_13:;

        goto try_except_handler_41;
        skip_nested_handling_13:;
        {
            nuitka_bool tmp_condition_result_76;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_compexpr_left_8 = tmp_class_creation_13__bases;
            CHECK_OBJECT(tmp_class_creation_13__bases_orig);
            tmp_compexpr_right_8 = tmp_class_creation_13__bases_orig;
            tmp_condition_result_76 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_8, tmp_compexpr_right_8);
            if (tmp_condition_result_76 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto try_except_handler_41;
            }
            if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
                goto branch_yes_47;
            } else {
                goto branch_no_47;
            }
            assert(tmp_condition_result_76 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_47:;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dictset_value = tmp_class_creation_13__bases_orig;
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_41;
        }
        branch_no_47:;
        {
            PyObject *tmp_assign_source_110;
            PyObject *tmp_called_name_48;
            PyObject *tmp_args_name_26;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_kwargs_name_26;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_name_48 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_42 = mod_consts[123];
            tmp_args_name_26 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_26, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_tuple_element_42 = tmp_class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_name_26, 1, tmp_tuple_element_42);
            tmp_tuple_element_42 = locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193;
            PyTuple_SET_ITEM0(tmp_args_name_26, 2, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_name_26 = tmp_class_creation_13__class_decl_dict;
            frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame.f_lineno = 193;
            tmp_assign_source_110 = CALL_FUNCTION(tmp_called_name_48, tmp_args_name_26, tmp_kwargs_name_26);
            Py_DECREF(tmp_args_name_26);
            if (tmp_assign_source_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto try_except_handler_41;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_110;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_109 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_109);
        goto try_return_handler_41;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_41:;
        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193 = NULL;
        goto try_return_handler_40;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193);
        locals_cryptography$hazmat$primitives$ciphers$modes$$$class__13_GCM_193 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto try_except_handler_40;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 193;
        goto try_except_handler_39;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_109);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac9e577e2e9c99e46bdd982ad53cecc9);
#endif
    popFrameStack();

    assertFrameObject(frame_ac9e577e2e9c99e46bdd982ad53cecc9);

    goto frame_no_exception_14;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac9e577e2e9c99e46bdd982ad53cecc9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac9e577e2e9c99e46bdd982ad53cecc9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac9e577e2e9c99e46bdd982ad53cecc9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac9e577e2e9c99e46bdd982ad53cecc9, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_14:;
    CHECK_OBJECT(tmp_class_creation_13__bases_orig);
    Py_DECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;

    return module_cryptography$hazmat$primitives$ciphers$modes;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

