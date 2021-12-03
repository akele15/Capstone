/* Generated code for Python module 'cryptography.hazmat.backends.interfaces'
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

/* The "module_cryptography$hazmat$backends$interfaces" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$backends$interfaces;
PyDictObject *moduledict_cryptography$hazmat$backends$interfaces;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[275];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[275];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("cryptography.hazmat.backends.interfaces"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 275; i++) {
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
void checkModuleConstants_cryptography$hazmat$backends$interfaces(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 275; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_4e2d8d1d36773e2903c16140002ae3f8;
static PyCodeObject *codeobj_7ffb22780442ef51b582a630ac5dcd02;
static PyCodeObject *codeobj_756ef1ac6d87fa7af97b3fe510a83e95;
static PyCodeObject *codeobj_64352160e0bbf74a681479ceba724226;
static PyCodeObject *codeobj_d4f61539d21e18094899191fd6da003a;
static PyCodeObject *codeobj_8a5b78a0dfd46d3b1730ea24da5f37e7;
static PyCodeObject *codeobj_bde66fe8b7c75ff127e6da96fafeba2d;
static PyCodeObject *codeobj_c66fb569dc452ca497ebbe5f68ebb482;
static PyCodeObject *codeobj_f51762c3fb57129d47c56e2660be8ce5;
static PyCodeObject *codeobj_5233ce72a385cd1c8a3365eb6bbfe4e6;
static PyCodeObject *codeobj_1452b9b0d59b0e768f9a2e6e0d2d0466;
static PyCodeObject *codeobj_d339289c381955ae0d9149da0eb1915c;
static PyCodeObject *codeobj_ba785a384aa6f95cb575215e55fee54d;
static PyCodeObject *codeobj_2de1fc22ae5ee02d8a94b9412d05281e;
static PyCodeObject *codeobj_ce10469e2dddcb5df5c765d44da484b2;
static PyCodeObject *codeobj_99075f213d689e585cd4da1d5978e28e;
static PyCodeObject *codeobj_530751cc5e3cd23d48b3bfba97970a53;
static PyCodeObject *codeobj_8248e2c73506655c6e0e24ec0ca257f2;
static PyCodeObject *codeobj_f7ca6e479f815b9357de41eb666be2ef;
static PyCodeObject *codeobj_f591388a13f25185415caf3e47a04c5a;
static PyCodeObject *codeobj_16480ce27119ca6b533343ae00c3e3b2;
static PyCodeObject *codeobj_56c5ff19b922d88ad563dfc0f0aecf01;
static PyCodeObject *codeobj_cf11bef017905c6923dd6462d6a96a67;
static PyCodeObject *codeobj_00f4b9e0e36a5ba9c85ffd2c27355f9a;
static PyCodeObject *codeobj_4ff73d6081450cb608ee54822b82f5ec;
static PyCodeObject *codeobj_f527164d799807b6b76b45e31aab5d4b;
static PyCodeObject *codeobj_8a8fabfb5dc434cef0ab8ca70b105c5a;
static PyCodeObject *codeobj_6bd2e0925984751ef43c46e41b64600c;
static PyCodeObject *codeobj_982f71f8ffad58670e3f5c9961b76e31;
static PyCodeObject *codeobj_ec5628a05877f25850089616b19af0f2;
static PyCodeObject *codeobj_afe5f1891ca43d3cabd6794b50820a9b;
static PyCodeObject *codeobj_b80b53ece65ddb4126fa592a7bc3a8a2;
static PyCodeObject *codeobj_666d71b6b85bd6f0966d239dc8a3fbfc;
static PyCodeObject *codeobj_056da12becaa16841b30c10313eeb361;
static PyCodeObject *codeobj_585454995fa468d603484ad8171d0148;
static PyCodeObject *codeobj_1d7bd04b062d74e9ee3ba11b9e39cc7e;
static PyCodeObject *codeobj_e24b2cbd5e2528e4e804e81e6631916f;
static PyCodeObject *codeobj_e6606c480fb566339db75910086547e9;
static PyCodeObject *codeobj_c63a482cbdf54160f7123c1e0049ff59;
static PyCodeObject *codeobj_faff71d6416650242d039043690c850b;
static PyCodeObject *codeobj_c4ca83f1d12408d3a1cf0aa026c6364e;
static PyCodeObject *codeobj_72212662e18e59a77ea0012fddfe154a;
static PyCodeObject *codeobj_31be1f69cdab5ebb065aea0348478a64;
static PyCodeObject *codeobj_ec67ff365cb81b69d5bd8bd8dee05dac;
static PyCodeObject *codeobj_0512b5b2a4d18d821bbb9145ca662d5b;
static PyCodeObject *codeobj_10db94cda62d0f40a66ff4319ef8ea37;
static PyCodeObject *codeobj_38a1fc38a05a6a33a98e6be80a09fed3;
static PyCodeObject *codeobj_f34a497deb626d569cbb7b1ff1aff226;
static PyCodeObject *codeobj_719ee57bc79092b0810284988655cb46;
static PyCodeObject *codeobj_8fc0071e6c068b860777300915725ba8;
static PyCodeObject *codeobj_f1b9d8f998a197b5cb1cd78d94e49708;
static PyCodeObject *codeobj_24f482893963b60cabdb32d3228e8216;
static PyCodeObject *codeobj_9fd42e2817343469798870c1d1ac4216;
static PyCodeObject *codeobj_599f4440464f291e55ed7f828e40941c;
static PyCodeObject *codeobj_7f55d7fb86999fb00972b9ed912d84dd;
static PyCodeObject *codeobj_29baf71805f685286e580c37e2095060;
static PyCodeObject *codeobj_28edcfda2801a0121c27d51bc1512193;
static PyCodeObject *codeobj_e282805d0faaec84815b215c38611137;
static PyCodeObject *codeobj_fa6adf5e3ce223062d3d57ada6de4a60;
static PyCodeObject *codeobj_9275ca9fd9785a56e36b874b7c5189b7;
static PyCodeObject *codeobj_d9b7a9c09151acf0dd04f0520911f81d;
static PyCodeObject *codeobj_5484b9bf92340b7be93fe24e011b2cc0;
static PyCodeObject *codeobj_9ae69050dfc2874a52c9e04ed21f9014;
static PyCodeObject *codeobj_676f7cb6c3a7f37da6263bb3c38a81e3;
static PyCodeObject *codeobj_7cb9c171f7673c9833d9a139027efd05;
static PyCodeObject *codeobj_782eb81141fd138587c4f0894d3c39be;
static PyCodeObject *codeobj_98dfb22589d3dbe53206c3c156e834f4;
static PyCodeObject *codeobj_1c6fdf8c8b0fe8ecd72eaf7bb0e44445;
static PyCodeObject *codeobj_a3859756fdc7cce8c38a8273b23c82c6;
static PyCodeObject *codeobj_0186a190778c0bf46da36800d540d5a6;
static PyCodeObject *codeobj_5f57b8742491b2fe4467bb9da303a1ac;
static PyCodeObject *codeobj_8e608bf7423afd140761c8b390790e07;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[247]); CHECK_OBJECT(module_filename_obj);
    codeobj_4e2d8d1d36773e2903c16140002ae3f8 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[248], NULL, NULL, 0, 0, 0);
    codeobj_7ffb22780442ef51b582a630ac5dcd02 = MAKE_CODEOBJECT(module_filename_obj, 416, CO_NOFREE, mod_consts[232], mod_consts[249], NULL, 0, 0, 0);
    codeobj_756ef1ac6d87fa7af97b3fe510a83e95 = MAKE_CODEOBJECT(module_filename_obj, 77, CO_NOFREE, mod_consts[69], mod_consts[249], NULL, 0, 0, 0);
    codeobj_64352160e0bbf74a681479ceba724226 = MAKE_CODEOBJECT(module_filename_obj, 28, CO_NOFREE, mod_consts[40], mod_consts[249], NULL, 0, 0, 0);
    codeobj_d4f61539d21e18094899191fd6da003a = MAKE_CODEOBJECT(module_filename_obj, 261, CO_NOFREE, mod_consts[161], mod_consts[249], NULL, 0, 0, 0);
    codeobj_8a5b78a0dfd46d3b1730ea24da5f37e7 = MAKE_CODEOBJECT(module_filename_obj, 333, CO_NOFREE, mod_consts[198], mod_consts[249], NULL, 0, 0, 0);
    codeobj_bde66fe8b7c75ff127e6da96fafeba2d = MAKE_CODEOBJECT(module_filename_obj, 142, CO_NOFREE, mod_consts[101], mod_consts[249], NULL, 0, 0, 0);
    codeobj_c66fb569dc452ca497ebbe5f68ebb482 = MAKE_CODEOBJECT(module_filename_obj, 193, CO_NOFREE, mod_consts[127], mod_consts[249], NULL, 0, 0, 0);
    codeobj_f51762c3fb57129d47c56e2660be8ce5 = MAKE_CODEOBJECT(module_filename_obj, 62, CO_NOFREE, mod_consts[61], mod_consts[249], NULL, 0, 0, 0);
    codeobj_5233ce72a385cd1c8a3365eb6bbfe4e6 = MAKE_CODEOBJECT(module_filename_obj, 48, CO_NOFREE, mod_consts[53], mod_consts[249], NULL, 0, 0, 0);
    codeobj_1452b9b0d59b0e768f9a2e6e0d2d0466 = MAKE_CODEOBJECT(module_filename_obj, 91, CO_NOFREE, mod_consts[76], mod_consts[249], NULL, 0, 0, 0);
    codeobj_d339289c381955ae0d9149da0eb1915c = MAKE_CODEOBJECT(module_filename_obj, 240, CO_NOFREE, mod_consts[150], mod_consts[249], NULL, 0, 0, 0);
    codeobj_ba785a384aa6f95cb575215e55fee54d = MAKE_CODEOBJECT(module_filename_obj, 108, CO_NOFREE, mod_consts[84], mod_consts[249], NULL, 0, 0, 0);
    codeobj_2de1fc22ae5ee02d8a94b9412d05281e = MAKE_CODEOBJECT(module_filename_obj, 387, CO_NOFREE, mod_consts[225], mod_consts[249], NULL, 0, 0, 0);
    codeobj_ce10469e2dddcb5df5c765d44da484b2 = MAKE_CODEOBJECT(module_filename_obj, 282, CO_NOFREE, mod_consts[172], mod_consts[249], NULL, 0, 0, 0);
    codeobj_99075f213d689e585cd4da1d5978e28e = MAKE_CODEOBJECT(module_filename_obj, 30, CO_NOFREE, mod_consts[44], mod_consts[250], NULL, 3, 0, 0);
    codeobj_530751cc5e3cd23d48b3bfba97970a53 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_NOFREE, mod_consts[71], mod_consts[251], NULL, 2, 0, 0);
    codeobj_8248e2c73506655c6e0e24ec0ca257f2 = MAKE_CODEOBJECT(module_filename_obj, 85, CO_NOFREE, mod_consts[73], mod_consts[251], NULL, 2, 0, 0);
    codeobj_f7ca6e479f815b9357de41eb666be2ef = MAKE_CODEOBJECT(module_filename_obj, 56, CO_NOFREE, mod_consts[58], mod_consts[251], NULL, 2, 0, 0);
    codeobj_f591388a13f25185415caf3e47a04c5a = MAKE_CODEOBJECT(module_filename_obj, 71, CO_NOFREE, mod_consts[66], mod_consts[252], NULL, 3, 0, 0);
    codeobj_16480ce27119ca6b533343ae00c3e3b2 = MAKE_CODEOBJECT(module_filename_obj, 42, CO_NOFREE, mod_consts[50], mod_consts[250], NULL, 3, 0, 0);
    codeobj_56c5ff19b922d88ad563dfc0f0aecf01 = MAKE_CODEOBJECT(module_filename_obj, 36, CO_NOFREE, mod_consts[47], mod_consts[250], NULL, 3, 0, 0);
    codeobj_cf11bef017905c6923dd6462d6a96a67 = MAKE_CODEOBJECT(module_filename_obj, 295, CO_NOFREE, mod_consts[183], mod_consts[253], NULL, 4, 0, 0);
    codeobj_00f4b9e0e36a5ba9c85ffd2c27355f9a = MAKE_CODEOBJECT(module_filename_obj, 306, CO_NOFREE, mod_consts[186], mod_consts[253], NULL, 4, 0, 0);
    codeobj_4ff73d6081450cb608ee54822b82f5ec = MAKE_CODEOBJECT(module_filename_obj, 284, CO_NOFREE, mod_consts[180], mod_consts[253], NULL, 4, 0, 0);
    codeobj_f527164d799807b6b76b45e31aab5d4b = MAKE_CODEOBJECT(module_filename_obj, 318, CO_NOFREE, mod_consts[190], mod_consts[254], NULL, 2, 0, 0);
    codeobj_8a8fabfb5dc434cef0ab8ca70b105c5a = MAKE_CODEOBJECT(module_filename_obj, 234, CO_NOFREE, mod_consts[147], mod_consts[255], NULL, 3, 0, 0);
    codeobj_6bd2e0925984751ef43c46e41b64600c = MAKE_CODEOBJECT(module_filename_obj, 100, CO_NOFREE, mod_consts[81], mod_consts[256], NULL, 6, 0, 0);
    codeobj_982f71f8ffad58670e3f5c9961b76e31 = MAKE_CODEOBJECT(module_filename_obj, 389, CO_NOFREE, mod_consts[227], mod_consts[257], NULL, 7, 0, 0);
    codeobj_ec5628a05877f25850089616b19af0f2 = MAKE_CODEOBJECT(module_filename_obj, 374, CO_NOFREE, mod_consts[219], mod_consts[258], NULL, 4, 0, 0);
    codeobj_afe5f1891ca43d3cabd6794b50820a9b = MAKE_CODEOBJECT(module_filename_obj, 380, CO_NOFREE, mod_consts[222], mod_consts[259], NULL, 1, 0, 0);
    codeobj_b80b53ece65ddb4126fa592a7bc3a8a2 = MAKE_CODEOBJECT(module_filename_obj, 163, CO_NOFREE, mod_consts[112], mod_consts[251], NULL, 2, 0, 0);
    codeobj_666d71b6b85bd6f0966d239dc8a3fbfc = MAKE_CODEOBJECT(module_filename_obj, 169, CO_NOFREE, mod_consts[115], mod_consts[260], NULL, 4, 0, 0);
    codeobj_056da12becaa16841b30c10313eeb361 = MAKE_CODEOBJECT(module_filename_obj, 228, CO_NOFREE, mod_consts[144], mod_consts[261], NULL, 3, 0, 0);
    codeobj_585454995fa468d603484ad8171d0148 = MAKE_CODEOBJECT(module_filename_obj, 195, CO_NOFREE, mod_consts[129], mod_consts[262], NULL, 3, 0, 0);
    codeobj_1d7bd04b062d74e9ee3ba11b9e39cc7e = MAKE_CODEOBJECT(module_filename_obj, 204, CO_NOFREE, mod_consts[132], mod_consts[263], NULL, 2, 0, 0);
    codeobj_e24b2cbd5e2528e4e804e81e6631916f = MAKE_CODEOBJECT(module_filename_obj, 335, CO_NOFREE, mod_consts[200], mod_consts[264], NULL, 3, 0, 0);
    codeobj_e6606c480fb566339db75910086547e9 = MAKE_CODEOBJECT(module_filename_obj, 342, CO_NOFREE, mod_consts[203], mod_consts[265], NULL, 2, 0, 0);
    codeobj_c63a482cbdf54160f7123c1e0049ff59 = MAKE_CODEOBJECT(module_filename_obj, 349, CO_NOFREE, mod_consts[206], mod_consts[264], NULL, 3, 0, 0);
    codeobj_faff71d6416650242d039043690c850b = MAKE_CODEOBJECT(module_filename_obj, 144, CO_NOFREE, mod_consts[103], mod_consts[266], NULL, 2, 0, 0);
    codeobj_c4ca83f1d12408d3a1cf0aa026c6364e = MAKE_CODEOBJECT(module_filename_obj, 150, CO_NOFREE, mod_consts[106], mod_consts[265], NULL, 2, 0, 0);
    codeobj_72212662e18e59a77ea0012fddfe154a = MAKE_CODEOBJECT(module_filename_obj, 157, CO_NOFREE, mod_consts[109], mod_consts[266], NULL, 2, 0, 0);
    codeobj_31be1f69cdab5ebb065aea0348478a64 = MAKE_CODEOBJECT(module_filename_obj, 210, CO_NOFREE, mod_consts[135], mod_consts[263], NULL, 2, 0, 0);
    codeobj_ec67ff365cb81b69d5bd8bd8dee05dac = MAKE_CODEOBJECT(module_filename_obj, 123, CO_NOFREE, mod_consts[92], mod_consts[267], NULL, 3, 0, 0);
    codeobj_0512b5b2a4d18d821bbb9145ca662d5b = MAKE_CODEOBJECT(module_filename_obj, 110, CO_NOFREE, mod_consts[86], mod_consts[267], NULL, 3, 0, 0);
    codeobj_10db94cda62d0f40a66ff4319ef8ea37 = MAKE_CODEOBJECT(module_filename_obj, 50, CO_NOFREE, mod_consts[55], mod_consts[251], NULL, 2, 0, 0);
    codeobj_38a1fc38a05a6a33a98e6be80a09fed3 = MAKE_CODEOBJECT(module_filename_obj, 64, CO_NOFREE, mod_consts[63], mod_consts[251], NULL, 2, 0, 0);
    codeobj_f34a497deb626d569cbb7b1ff1aff226 = MAKE_CODEOBJECT(module_filename_obj, 276, CO_NOFREE, mod_consts[169], mod_consts[268], NULL, 2, 0, 0);
    codeobj_719ee57bc79092b0810284988655cb46 = MAKE_CODEOBJECT(module_filename_obj, 426, CO_NOFREE, mod_consts[236], mod_consts[268], NULL, 2, 0, 0);
    codeobj_8fc0071e6c068b860777300915725ba8 = MAKE_CODEOBJECT(module_filename_obj, 263, CO_NOFREE, mod_consts[163], mod_consts[269], NULL, 3, 0, 0);
    codeobj_f1b9d8f998a197b5cb1cd78d94e49708 = MAKE_CODEOBJECT(module_filename_obj, 270, CO_NOFREE, mod_consts[166], mod_consts[268], NULL, 2, 0, 0);
    codeobj_24f482893963b60cabdb32d3228e8216 = MAKE_CODEOBJECT(module_filename_obj, 368, CO_NOFREE, mod_consts[215], mod_consts[270], NULL, 2, 0, 0);
    codeobj_9fd42e2817343469798870c1d1ac4216 = MAKE_CODEOBJECT(module_filename_obj, 356, CO_NOFREE, mod_consts[209], mod_consts[270], NULL, 2, 0, 0);
    codeobj_599f4440464f291e55ed7f828e40941c = MAKE_CODEOBJECT(module_filename_obj, 362, CO_NOFREE, mod_consts[212], mod_consts[270], NULL, 2, 0, 0);
    codeobj_7f55d7fb86999fb00972b9ed912d84dd = MAKE_CODEOBJECT(module_filename_obj, 187, CO_NOFREE, mod_consts[124], mod_consts[270], NULL, 2, 0, 0);
    codeobj_29baf71805f685286e580c37e2095060 = MAKE_CODEOBJECT(module_filename_obj, 175, CO_NOFREE, mod_consts[118], mod_consts[270], NULL, 2, 0, 0);
    codeobj_28edcfda2801a0121c27d51bc1512193 = MAKE_CODEOBJECT(module_filename_obj, 181, CO_NOFREE, mod_consts[121], mod_consts[270], NULL, 2, 0, 0);
    codeobj_e282805d0faaec84815b215c38611137 = MAKE_CODEOBJECT(module_filename_obj, 222, CO_NOFREE, mod_consts[141], mod_consts[270], NULL, 2, 0, 0);
    codeobj_fa6adf5e3ce223062d3d57ada6de4a60 = MAKE_CODEOBJECT(module_filename_obj, 216, CO_NOFREE, mod_consts[138], mod_consts[270], NULL, 2, 0, 0);
    codeobj_9275ca9fd9785a56e36b874b7c5189b7 = MAKE_CODEOBJECT(module_filename_obj, 438, CO_NOFREE, mod_consts[242], mod_consts[269], NULL, 3, 0, 0);
    codeobj_d9b7a9c09151acf0dd04f0520911f81d = MAKE_CODEOBJECT(module_filename_obj, 255, CO_NOFREE, mod_consts[158], mod_consts[268], NULL, 2, 0, 0);
    codeobj_5484b9bf92340b7be93fe24e011b2cc0 = MAKE_CODEOBJECT(module_filename_obj, 420, CO_NOFREE, mod_consts[234], mod_consts[268], NULL, 2, 0, 0);
    codeobj_9ae69050dfc2874a52c9e04ed21f9014 = MAKE_CODEOBJECT(module_filename_obj, 242, CO_NOFREE, mod_consts[152], mod_consts[269], NULL, 3, 0, 0);
    codeobj_676f7cb6c3a7f37da6263bb3c38a81e3 = MAKE_CODEOBJECT(module_filename_obj, 249, CO_NOFREE, mod_consts[155], mod_consts[268], NULL, 2, 0, 0);
    codeobj_7cb9c171f7673c9833d9a139027efd05 = MAKE_CODEOBJECT(module_filename_obj, 130, CO_NOFREE, mod_consts[95], mod_consts[270], NULL, 2, 0, 0);
    codeobj_782eb81141fd138587c4f0894d3c39be = MAKE_CODEOBJECT(module_filename_obj, 136, CO_NOFREE, mod_consts[98], mod_consts[270], NULL, 2, 0, 0);
    codeobj_98dfb22589d3dbe53206c3c156e834f4 = MAKE_CODEOBJECT(module_filename_obj, 93, CO_NOFREE, mod_consts[78], mod_consts[251], NULL, 2, 0, 0);
    codeobj_1c6fdf8c8b0fe8ecd72eaf7bb0e44445 = MAKE_CODEOBJECT(module_filename_obj, 432, CO_NOFREE, mod_consts[239], mod_consts[271], NULL, 4, 0, 0);
    codeobj_a3859756fdc7cce8c38a8273b23c82c6 = MAKE_CODEOBJECT(module_filename_obj, 117, CO_NOFREE, mod_consts[89], mod_consts[272], NULL, 2, 0, 0);
    codeobj_0186a190778c0bf46da36800d540d5a6 = MAKE_CODEOBJECT(module_filename_obj, 395, CO_NOFREE, mod_consts[230], mod_consts[259], NULL, 1, 0, 0);
    codeobj_5f57b8742491b2fe4467bb9da303a1ac = MAKE_CODEOBJECT(module_filename_obj, 444, CO_NOFREE, mod_consts[244], mod_consts[273], NULL, 6, 0, 0);
    codeobj_8e608bf7423afd140761c8b390790e07 = MAKE_CODEOBJECT(module_filename_obj, 327, CO_NOFREE, mod_consts[195], mod_consts[274], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__10_pbkdf2_hmac_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__11_derive_pbkdf2_hmac();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__12_generate_rsa_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__13_rsa_padding_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__14_generate_rsa_parameters_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__15_load_rsa_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__16_load_rsa_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__17_generate_dsa_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__18_generate_dsa_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__19_generate_dsa_private_key_and_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__1_cipher_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__20_dsa_hash_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__21_dsa_parameters_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__22_load_dsa_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__23_load_dsa_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__24_load_dsa_parameter_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__25_elliptic_curve_signature_algorithm_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__26_elliptic_curve_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__27_generate_elliptic_curve_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__28_load_elliptic_curve_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__29_load_elliptic_curve_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__2_create_symmetric_encryption_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__30_elliptic_curve_exchange_algorithm_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__31_derive_elliptic_curve_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__32_load_pem_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__33_load_pem_public_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__34_load_pem_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__35_load_der_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__36_load_der_public_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__37_load_der_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__38_create_x509_csr(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__39_create_x509_certificate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__3_create_symmetric_decryption_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__40_create_x509_crl(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__41_create_x509_revoked_certificate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__42_x509_name_bytes(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__43_generate_dh_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__44_generate_dh_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__45_generate_dh_private_key_and_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__46_load_dh_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__47_load_dh_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__48_load_dh_parameter_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__49_dh_parameters_supported(PyObject *defaults);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__4_hash_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__50_dh_x942_serialization_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__51_derive_scrypt();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__52_scrypt_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__53_load_pem_pkcs7_certificates();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__54_load_der_pkcs7_certificates();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__55_pkcs7_sign();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__56_load_key_and_certificates_from_pkcs12();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__57_serialize_key_and_certificates_to_pkcs12();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__5_create_hash_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__6_hmac_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__7_create_hmac_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__8_cmac_algorithm_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__9_create_cmac_ctx();


// The module function definitions.

static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__10_pbkdf2_hmac_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_98dfb22589d3dbe53206c3c156e834f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__11_derive_pbkdf2_hmac() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_6bd2e0925984751ef43c46e41b64600c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[80],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__12_generate_rsa_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_0512b5b2a4d18d821bbb9145ca662d5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[85],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__13_rsa_padding_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_a3859756fdc7cce8c38a8273b23c82c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[88],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__14_generate_rsa_parameters_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_ec67ff365cb81b69d5bd8bd8dee05dac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[91],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__15_load_rsa_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_7cb9c171f7673c9833d9a139027efd05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[94],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__16_load_rsa_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_782eb81141fd138587c4f0894d3c39be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[97],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__17_generate_dsa_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_faff71d6416650242d039043690c850b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[102],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__18_generate_dsa_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_c4ca83f1d12408d3a1cf0aa026c6364e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[105],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__19_generate_dsa_private_key_and_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_72212662e18e59a77ea0012fddfe154a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[108],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__1_cipher_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[45],
#endif
        codeobj_99075f213d689e585cd4da1d5978e28e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__20_dsa_hash_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_b80b53ece65ddb4126fa592a7bc3a8a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[111],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__21_dsa_parameters_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_666d71b6b85bd6f0966d239dc8a3fbfc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__22_load_dsa_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_29baf71805f685286e580c37e2095060,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[117],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__23_load_dsa_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_28edcfda2801a0121c27d51bc1512193,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[120],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__24_load_dsa_parameter_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_7f55d7fb86999fb00972b9ed912d84dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[123],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__25_elliptic_curve_signature_algorithm_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_585454995fa468d603484ad8171d0148,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[128],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__26_elliptic_curve_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_1d7bd04b062d74e9ee3ba11b9e39cc7e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[131],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__27_generate_elliptic_curve_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_31be1f69cdab5ebb065aea0348478a64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[134],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__28_load_elliptic_curve_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_fa6adf5e3ce223062d3d57ada6de4a60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[137],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__29_load_elliptic_curve_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_e282805d0faaec84815b215c38611137,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[140],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__2_create_symmetric_encryption_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[48],
#endif
        codeobj_56c5ff19b922d88ad563dfc0f0aecf01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__30_elliptic_curve_exchange_algorithm_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_056da12becaa16841b30c10313eeb361,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[143],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__31_derive_elliptic_curve_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_8a8fabfb5dc434cef0ab8ca70b105c5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[146],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__32_load_pem_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_9ae69050dfc2874a52c9e04ed21f9014,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[151],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__33_load_pem_public_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_676f7cb6c3a7f37da6263bb3c38a81e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[154],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__34_load_pem_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_d9b7a9c09151acf0dd04f0520911f81d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[157],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__35_load_der_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_8fc0071e6c068b860777300915725ba8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[162],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__36_load_der_public_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_f1b9d8f998a197b5cb1cd78d94e49708,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[165],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__37_load_der_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_f34a497deb626d569cbb7b1ff1aff226,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[168],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__38_create_x509_csr(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_4ff73d6081450cb608ee54822b82f5ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[179],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__39_create_x509_certificate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_cf11bef017905c6923dd6462d6a96a67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[182],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__3_create_symmetric_decryption_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_16480ce27119ca6b533343ae00c3e3b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__40_create_x509_crl(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[186],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_00f4b9e0e36a5ba9c85ffd2c27355f9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[185],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__41_create_x509_revoked_certificate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[190],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_f527164d799807b6b76b45e31aab5d4b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[189],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__42_x509_name_bytes(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_8e608bf7423afd140761c8b390790e07,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[194],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__43_generate_dh_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[200],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_e24b2cbd5e2528e4e804e81e6631916f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[199],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__44_generate_dh_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_e6606c480fb566339db75910086547e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[202],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__45_generate_dh_private_key_and_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_c63a482cbdf54160f7123c1e0049ff59,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[205],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__46_load_dh_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_9fd42e2817343469798870c1d1ac4216,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[208],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__47_load_dh_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_599f4440464f291e55ed7f828e40941c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[211],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__48_load_dh_parameter_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[215],
#if PYTHON_VERSION >= 0x300
        mod_consts[216],
#endif
        codeobj_24f482893963b60cabdb32d3228e8216,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[214],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__49_dh_parameters_supported(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[219],
#if PYTHON_VERSION >= 0x300
        mod_consts[220],
#endif
        codeobj_ec5628a05877f25850089616b19af0f2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[218],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__4_hash_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        mod_consts[56],
#endif
        codeobj_10db94cda62d0f40a66ff4319ef8ea37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__50_dh_x942_serialization_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[222],
#if PYTHON_VERSION >= 0x300
        mod_consts[223],
#endif
        codeobj_afe5f1891ca43d3cabd6794b50820a9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[221],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__51_derive_scrypt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[227],
#if PYTHON_VERSION >= 0x300
        mod_consts[228],
#endif
        codeobj_982f71f8ffad58670e3f5c9961b76e31,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[226],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__52_scrypt_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[230],
#if PYTHON_VERSION >= 0x300
        mod_consts[231],
#endif
        codeobj_0186a190778c0bf46da36800d540d5a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[229],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__53_load_pem_pkcs7_certificates() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[234],
#if PYTHON_VERSION >= 0x300
        mod_consts[235],
#endif
        codeobj_5484b9bf92340b7be93fe24e011b2cc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[233],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__54_load_der_pkcs7_certificates() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        mod_consts[237],
#endif
        codeobj_719ee57bc79092b0810284988655cb46,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[233],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__55_pkcs7_sign() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[239],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_1c6fdf8c8b0fe8ecd72eaf7bb0e44445,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[238],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__56_load_key_and_certificates_from_pkcs12() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[242],
#if PYTHON_VERSION >= 0x300
        mod_consts[243],
#endif
        codeobj_9275ca9fd9785a56e36b874b7c5189b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[241],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__57_serialize_key_and_certificates_to_pkcs12() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[244],
#if PYTHON_VERSION >= 0x300
        mod_consts[245],
#endif
        codeobj_5f57b8742491b2fe4467bb9da303a1ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[238],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__5_create_hash_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[59],
#endif
        codeobj_f7ca6e479f815b9357de41eb666be2ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__6_hmac_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_38a1fc38a05a6a33a98e6be80a09fed3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__7_create_hmac_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_f591388a13f25185415caf3e47a04c5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__8_cmac_algorithm_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_530751cc5e3cd23d48b3bfba97970a53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__9_create_cmac_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_8248e2c73506655c6e0e24ec0ca257f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[65],
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

function_impl_code functable_cryptography$hazmat$backends$interfaces[] = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
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

    function_impl_code *current = functable_cryptography$hazmat$backends$interfaces;
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

    if (offset > sizeof(functable_cryptography$hazmat$backends$interfaces) || offset < 0) {
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
        functable_cryptography$hazmat$backends$interfaces[offset],
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
        module_cryptography$hazmat$backends$interfaces,
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
PyObject *modulecode_cryptography$hazmat$backends$interfaces(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    module_cryptography$hazmat$backends$interfaces = module;

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
    PRINT_STRING("cryptography.hazmat.backends.interfaces: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.backends.interfaces: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.backends.interfaces: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$backends$interfaces\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cryptography$hazmat$backends$interfaces = MODULE_DICT(module_cryptography$hazmat$backends$interfaces);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_cryptography$hazmat$backends$interfaces,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$backends$interfaces);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cryptography$hazmat$backends$interfaces);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *outline_13_var___class__ = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__bases_orig = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
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
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_4e2d8d1d36773e2903c16140002ae3f8;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_64352160e0bbf74a681479ceba724226_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_64352160e0bbf74a681479ceba724226_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_48 = NULL;
    struct Nuitka_FrameObject *frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_62 = NULL;
    struct Nuitka_FrameObject *frame_f51762c3fb57129d47c56e2660be8ce5_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f51762c3fb57129d47c56e2660be8ce5_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_77 = NULL;
    struct Nuitka_FrameObject *frame_756ef1ac6d87fa7af97b3fe510a83e95_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_756ef1ac6d87fa7af97b3fe510a83e95_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_91 = NULL;
    struct Nuitka_FrameObject *frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108 = NULL;
    struct Nuitka_FrameObject *frame_ba785a384aa6f95cb575215e55fee54d_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ba785a384aa6f95cb575215e55fee54d_7 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142 = NULL;
    struct Nuitka_FrameObject *frame_bde66fe8b7c75ff127e6da96fafeba2d_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_bde66fe8b7c75ff127e6da96fafeba2d_8 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193 = NULL;
    struct Nuitka_FrameObject *frame_c66fb569dc452ca497ebbe5f68ebb482_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c66fb569dc452ca497ebbe5f68ebb482_9 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240 = NULL;
    struct Nuitka_FrameObject *frame_d339289c381955ae0d9149da0eb1915c_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d339289c381955ae0d9149da0eb1915c_10 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261 = NULL;
    struct Nuitka_FrameObject *frame_d4f61539d21e18094899191fd6da003a_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d4f61539d21e18094899191fd6da003a_11 = NULL;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282 = NULL;
    struct Nuitka_FrameObject *frame_ce10469e2dddcb5df5c765d44da484b2_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ce10469e2dddcb5df5c765d44da484b2_12 = NULL;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333 = NULL;
    struct Nuitka_FrameObject *frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13 = NULL;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_387 = NULL;
    struct Nuitka_FrameObject *frame_2de1fc22ae5ee02d8a94b9412d05281e_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2de1fc22ae5ee02d8a94b9412d05281e_14 = NULL;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416 = NULL;
    struct Nuitka_FrameObject *frame_7ffb22780442ef51b582a630ac5dcd02_15;
    NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
    static struct Nuitka_FrameObject *cache_frame_7ffb22780442ef51b582a630ac5dcd02_15 = NULL;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_4e2d8d1d36773e2903c16140002ae3f8 = MAKE_MODULE_FRAME(codeobj_4e2d8d1d36773e2903c16140002ae3f8, module_cryptography$hazmat$backends$interfaces);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_4e2d8d1d36773e2903c16140002ae3f8);
    assert(Py_REFCNT(frame_4e2d8d1d36773e2903c16140002ae3f8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[6];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[7];
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 6;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[8];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[7];
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 7;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_5);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        assert(!(tmp_expression_name_1 == NULL));
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[10];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[11];
        tmp_level_name_3 = mod_consts[7];
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 11;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_cryptography$hazmat$backends$interfaces,
                mod_consts[12],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[13];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[14];
        tmp_level_name_4 = mod_consts[7];
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 14;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_cryptography$hazmat$backends$interfaces,
                mod_consts[15],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[16];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[17];
        tmp_level_name_5 = mod_consts[7];
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 15;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_cryptography$hazmat$backends$interfaces,
                mod_consts[18],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[18]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_cryptography$hazmat$backends$interfaces,
                mod_consts[19],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[19]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_cryptography$hazmat$backends$interfaces,
                mod_consts[20],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[20]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_cryptography$hazmat$backends$interfaces,
                mod_consts[21],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[21]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_cryptography$hazmat$backends$interfaces,
                mod_consts[22],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[22]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_cryptography$hazmat$backends$interfaces,
                mod_consts[23],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[23]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_cryptography$hazmat$backends$interfaces,
                mod_consts[24],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[24]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_cryptography$hazmat$backends$interfaces,
                mod_consts[25],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[25]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[26];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[27];
        tmp_level_name_6 = mod_consts[7];
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 25;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_cryptography$hazmat$backends$interfaces,
                mod_consts[28],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[28]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_17);
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_2;
        tmp_dict_key_1 = mod_consts[29];
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[30]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        tmp_assign_source_18 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[29];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_1:;
        tmp_bases_name_1 = mod_consts[31];
        tmp_assign_source_19 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 28;

        goto try_except_handler_2;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_3, mod_consts[32]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_4 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[32]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        tmp_args_name_1 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 28;
        tmp_assign_source_20 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_5, mod_consts[34]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
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
        tmp_left_name_1 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[36];
        tmp_getattr_default_1 = mod_consts[37];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_6;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_name_6 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_name_6 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[36]);
            Py_DECREF(tmp_expression_name_6);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 28;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_64352160e0bbf74a681479ceba724226_2)) {
            Py_XDECREF(cache_frame_64352160e0bbf74a681479ceba724226_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_64352160e0bbf74a681479ceba724226_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_64352160e0bbf74a681479ceba724226_2 = MAKE_FUNCTION_FRAME(codeobj_64352160e0bbf74a681479ceba724226, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_64352160e0bbf74a681479ceba724226_2->m_type_description == NULL);
        frame_64352160e0bbf74a681479ceba724226_2 = cache_frame_64352160e0bbf74a681479ceba724226_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_64352160e0bbf74a681479ceba724226_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_64352160e0bbf74a681479ceba724226_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_instance_1 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28, mod_consts[6]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 29;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_name_1 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__1_cipher_supported();

            frame_64352160e0bbf74a681479ceba724226_2->m_frame.f_lineno = 29;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[42], tmp_args_element_name_1);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_instance_2 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28, mod_consts[6]);

            if (tmp_called_instance_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_2 == NULL)) {
                        tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 35;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_name_2 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__2_create_symmetric_encryption_ctx();

            frame_64352160e0bbf74a681479ceba724226_2->m_frame.f_lineno = 35;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[42], tmp_args_element_name_2);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            tmp_called_instance_3 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28, mod_consts[6]);

            if (tmp_called_instance_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_3 == NULL)) {
                        tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_name_3 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__3_create_symmetric_decryption_ctx();

            frame_64352160e0bbf74a681479ceba724226_2->m_frame.f_lineno = 41;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[42], tmp_args_element_name_3);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_64352160e0bbf74a681479ceba724226_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_64352160e0bbf74a681479ceba724226_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_64352160e0bbf74a681479ceba724226_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_64352160e0bbf74a681479ceba724226_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_64352160e0bbf74a681479ceba724226_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_64352160e0bbf74a681479ceba724226_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_64352160e0bbf74a681479ceba724226_2 == cache_frame_64352160e0bbf74a681479ceba724226_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_64352160e0bbf74a681479ceba724226_2);
            cache_frame_64352160e0bbf74a681479ceba724226_2 = NULL;
        }

        assertFrameObject(frame_64352160e0bbf74a681479ceba724226_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[40];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 28;
            tmp_assign_source_23 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_22 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28);
        locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28);
        locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_28 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 28;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_22);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_7;
        tmp_dict_key_2 = mod_consts[29];
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_5;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[30]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_5;
        }
        tmp_assign_source_24 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_arg_name_4;
        PyObject *tmp_dict_arg_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[29];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_2:;
        tmp_bases_name_2 = mod_consts[31];
        tmp_assign_source_25 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_arg_name_6;
        tmp_key_name_6 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 48;

        goto try_except_handler_5;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_name_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_8 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_8, mod_consts[32]);
        tmp_condition_result_8 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_name_3;
        PyObject *tmp_kwargs_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_9 = tmp_class_creation_2__metaclass;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[32]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_5;
        }
        tmp_args_name_3 = mod_consts[52];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 48;
        tmp_assign_source_26 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_3);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_10 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_10, mod_consts[34]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_5;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
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
        tmp_left_name_2 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[36];
        tmp_getattr_default_2 = mod_consts[37];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_5;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_11;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_name_11 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_11 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[36]);
            Py_DECREF(tmp_expression_name_11);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 48;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_27;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_48 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_48, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_48, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_7;
        }
        if (isFrameUnusable(cache_frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3)) {
            Py_XDECREF(cache_frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3 = MAKE_FUNCTION_FRAME(codeobj_5233ce72a385cd1c8a3365eb6bbfe4e6, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3->m_type_description == NULL);
        frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3 = cache_frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_4;
            tmp_called_instance_4 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_48, mod_consts[6]);

            if (tmp_called_instance_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_4 == NULL)) {
                        tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }



            tmp_args_element_name_4 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__4_hash_supported();

            frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3->m_frame.f_lineno = 49;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[42], tmp_args_element_name_4);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_48, mod_consts[55], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_5;
            tmp_called_instance_5 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_48, mod_consts[6]);

            if (tmp_called_instance_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_5 == NULL)) {
                        tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 55;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }



            tmp_args_element_name_5 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__5_create_hash_ctx();

            frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3->m_frame.f_lineno = 55;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[42], tmp_args_element_name_5);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_48, mod_consts[58], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3 == cache_frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3);
            cache_frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3 = NULL;
        }

        assertFrameObject(frame_5233ce72a385cd1c8a3365eb6bbfe4e6_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_4 = mod_consts[53];
            tmp_args_name_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_48;
            PyTuple_SET_ITEM0(tmp_args_name_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 48;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_4, tmp_kwargs_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_28 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_48);
        locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_48 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_48);
        locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_48 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 48;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_28);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_name_12;
        tmp_dict_key_3 = mod_consts[29];
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_8;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[30]);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_8;
        }
        tmp_assign_source_30 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_arg_name_7;
        PyObject *tmp_dict_arg_name_8;
        PyObject *tmp_key_name_8;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_7, tmp_key_name_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = mod_consts[29];
        tmp_metaclass_name_3 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_8, tmp_key_name_8);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_3);
        condexpr_end_3:;
        tmp_bases_name_3 = mod_consts[31];
        tmp_assign_source_31 = SELECT_METACLASS(tmp_metaclass_name_3, tmp_bases_name_3);
        Py_DECREF(tmp_metaclass_name_3);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_arg_name_9;
        tmp_key_name_9 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_9, tmp_key_name_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 62;

        goto try_except_handler_8;
    }
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_name_13;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_13 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_13, mod_consts[32]);
        tmp_condition_result_12 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_name_5;
        PyObject *tmp_kwargs_name_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_14 = tmp_class_creation_3__metaclass;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[32]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_8;
        }
        tmp_args_name_5 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_name_5 = tmp_class_creation_3__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 62;
        tmp_assign_source_32 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_5, tmp_kwargs_name_5);
        Py_DECREF(tmp_called_name_5);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_expression_name_15;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_name_15 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_15, mod_consts[34]);
        tmp_operand_name_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_8;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
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
        tmp_left_name_3 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[36];
        tmp_getattr_default_3 = mod_consts[37];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_8;
        }
        tmp_right_name_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_16;
            PyObject *tmp_type_arg_3;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_3 = tmp_class_creation_3__prepared;
            tmp_expression_name_16 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_expression_name_16 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[36]);
            Py_DECREF(tmp_expression_name_16);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_name_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 62;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_33;
    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_62 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_62, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_62, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_10;
        }
        if (isFrameUnusable(cache_frame_f51762c3fb57129d47c56e2660be8ce5_4)) {
            Py_XDECREF(cache_frame_f51762c3fb57129d47c56e2660be8ce5_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f51762c3fb57129d47c56e2660be8ce5_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f51762c3fb57129d47c56e2660be8ce5_4 = MAKE_FUNCTION_FRAME(codeobj_f51762c3fb57129d47c56e2660be8ce5, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_f51762c3fb57129d47c56e2660be8ce5_4->m_type_description == NULL);
        frame_f51762c3fb57129d47c56e2660be8ce5_4 = cache_frame_f51762c3fb57129d47c56e2660be8ce5_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_f51762c3fb57129d47c56e2660be8ce5_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_f51762c3fb57129d47c56e2660be8ce5_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_6;
            tmp_called_instance_6 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_62, mod_consts[6]);

            if (tmp_called_instance_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_6 == NULL)) {
                        tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 63;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_6);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_args_element_name_6 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__6_hmac_supported();

            frame_f51762c3fb57129d47c56e2660be8ce5_4->m_frame.f_lineno = 63;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[42], tmp_args_element_name_6);
            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_62, mod_consts[63], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_name_7;
            tmp_called_instance_7 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_62, mod_consts[6]);

            if (tmp_called_instance_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_7 == NULL)) {
                        tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 70;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_7);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_args_element_name_7 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__7_create_hmac_ctx();

            frame_f51762c3fb57129d47c56e2660be8ce5_4->m_frame.f_lineno = 70;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[42], tmp_args_element_name_7);
            Py_DECREF(tmp_called_instance_7);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_62, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f51762c3fb57129d47c56e2660be8ce5_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f51762c3fb57129d47c56e2660be8ce5_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f51762c3fb57129d47c56e2660be8ce5_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f51762c3fb57129d47c56e2660be8ce5_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f51762c3fb57129d47c56e2660be8ce5_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f51762c3fb57129d47c56e2660be8ce5_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_f51762c3fb57129d47c56e2660be8ce5_4 == cache_frame_f51762c3fb57129d47c56e2660be8ce5_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_f51762c3fb57129d47c56e2660be8ce5_4);
            cache_frame_f51762c3fb57129d47c56e2660be8ce5_4 = NULL;
        }

        assertFrameObject(frame_f51762c3fb57129d47c56e2660be8ce5_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_name_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_6 = mod_consts[61];
            tmp_args_name_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_6, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_args_name_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_62;
            PyTuple_SET_ITEM0(tmp_args_name_6, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 62;
            tmp_assign_source_35 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_6, tmp_kwargs_name_6);
            Py_DECREF(tmp_args_name_6);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_34 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_62);
        locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_62 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_62);
        locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_62 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 62;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_34);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_name_17;
        tmp_dict_key_4 = mod_consts[29];
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_11;
        }
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[30]);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_11;
        }
        tmp_assign_source_36 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_arg_name_10;
        PyObject *tmp_dict_arg_name_11;
        PyObject *tmp_key_name_11;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_10, tmp_key_name_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = mod_consts[29];
        tmp_metaclass_name_4 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_11, tmp_key_name_11);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_11;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_4);
        condexpr_end_4:;
        tmp_bases_name_4 = mod_consts[31];
        tmp_assign_source_37 = SELECT_METACLASS(tmp_metaclass_name_4, tmp_bases_name_4);
        Py_DECREF(tmp_metaclass_name_4);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_37;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_arg_name_12;
        tmp_key_name_12 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_12, tmp_key_name_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 77;

        goto try_except_handler_11;
    }
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_expression_name_18;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_18 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_18, mod_consts[32]);
        tmp_condition_result_16 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_args_name_7;
        PyObject *tmp_kwargs_name_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_19 = tmp_class_creation_4__metaclass;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[32]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_11;
        }
        tmp_args_name_7 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_name_7 = tmp_class_creation_4__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 77;
        tmp_assign_source_38 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_7, tmp_kwargs_name_7);
        Py_DECREF(tmp_called_name_7);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_expression_name_20;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_name_20 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_20, mod_consts[34]);
        tmp_operand_name_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_11;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
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
        tmp_left_name_4 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[36];
        tmp_getattr_default_4 = mod_consts[37];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_11;
        }
        tmp_right_name_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_21;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_4 = tmp_class_creation_4__prepared;
            tmp_expression_name_21 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_name_21 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[36]);
            Py_DECREF(tmp_expression_name_21);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_right_name_4, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_right_name_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 77;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_13:;
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_39;
    }
    branch_end_12:;
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_77 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_77, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_77, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_13;
        }
        if (isFrameUnusable(cache_frame_756ef1ac6d87fa7af97b3fe510a83e95_5)) {
            Py_XDECREF(cache_frame_756ef1ac6d87fa7af97b3fe510a83e95_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_756ef1ac6d87fa7af97b3fe510a83e95_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_756ef1ac6d87fa7af97b3fe510a83e95_5 = MAKE_FUNCTION_FRAME(codeobj_756ef1ac6d87fa7af97b3fe510a83e95, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_756ef1ac6d87fa7af97b3fe510a83e95_5->m_type_description == NULL);
        frame_756ef1ac6d87fa7af97b3fe510a83e95_5 = cache_frame_756ef1ac6d87fa7af97b3fe510a83e95_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_756ef1ac6d87fa7af97b3fe510a83e95_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_756ef1ac6d87fa7af97b3fe510a83e95_5) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_name_8;
            tmp_called_instance_8 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_77, mod_consts[6]);

            if (tmp_called_instance_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_8 == NULL)) {
                        tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 78;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_8);
                } else {
                    goto frame_exception_exit_5;
                }
            }



            tmp_args_element_name_8 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__8_cmac_algorithm_supported();

            frame_756ef1ac6d87fa7af97b3fe510a83e95_5->m_frame.f_lineno = 78;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[42], tmp_args_element_name_8);
            Py_DECREF(tmp_called_instance_8);
            Py_DECREF(tmp_args_element_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_77, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_name_9;
            tmp_called_instance_9 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_77, mod_consts[6]);

            if (tmp_called_instance_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_9 == NULL)) {
                        tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 84;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_9);
                } else {
                    goto frame_exception_exit_5;
                }
            }



            tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__9_create_cmac_ctx();

            frame_756ef1ac6d87fa7af97b3fe510a83e95_5->m_frame.f_lineno = 84;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[42], tmp_args_element_name_9);
            Py_DECREF(tmp_called_instance_9);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_77, mod_consts[73], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_756ef1ac6d87fa7af97b3fe510a83e95_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_756ef1ac6d87fa7af97b3fe510a83e95_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_756ef1ac6d87fa7af97b3fe510a83e95_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_756ef1ac6d87fa7af97b3fe510a83e95_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_756ef1ac6d87fa7af97b3fe510a83e95_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_756ef1ac6d87fa7af97b3fe510a83e95_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_756ef1ac6d87fa7af97b3fe510a83e95_5 == cache_frame_756ef1ac6d87fa7af97b3fe510a83e95_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_756ef1ac6d87fa7af97b3fe510a83e95_5);
            cache_frame_756ef1ac6d87fa7af97b3fe510a83e95_5 = NULL;
        }

        assertFrameObject(frame_756ef1ac6d87fa7af97b3fe510a83e95_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_name_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_name_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_8 = mod_consts[69];
            tmp_args_name_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_8, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_args_name_8, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_77;
            PyTuple_SET_ITEM0(tmp_args_name_8, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 77;
            tmp_assign_source_41 = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_8, tmp_kwargs_name_8);
            Py_DECREF(tmp_args_name_8);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_41;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_40 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_40);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_77);
        locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_77 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_77);
        locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_77 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 77;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_40);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_name_22;
        tmp_dict_key_5 = mod_consts[29];
        tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_22 == NULL)) {
            tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[30]);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        tmp_assign_source_42 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_42, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_metaclass_name_5;
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_arg_name_13;
        PyObject *tmp_dict_arg_name_14;
        PyObject *tmp_key_name_14;
        PyObject *tmp_bases_name_5;
        tmp_key_name_13 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_13, tmp_key_name_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_name_14 = mod_consts[29];
        tmp_metaclass_name_5 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_14, tmp_key_name_14);
        if (tmp_metaclass_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_5);
        condexpr_end_5:;
        tmp_bases_name_5 = mod_consts[31];
        tmp_assign_source_43 = SELECT_METACLASS(tmp_metaclass_name_5, tmp_bases_name_5);
        Py_DECREF(tmp_metaclass_name_5);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_arg_name_15;
        tmp_key_name_15 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_15, tmp_key_name_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 91;

        goto try_except_handler_14;
    }
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_expression_name_23;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_23 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_23, mod_consts[32]);
        tmp_condition_result_20 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_args_name_9;
        PyObject *tmp_kwargs_name_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_24 = tmp_class_creation_5__metaclass;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[32]);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        tmp_args_name_9 = mod_consts[75];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_name_9 = tmp_class_creation_5__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 91;
        tmp_assign_source_44 = CALL_FUNCTION(tmp_called_name_9, tmp_args_name_9, tmp_kwargs_name_9);
        Py_DECREF(tmp_called_name_9);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_44;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_expression_name_25;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_name_25 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_25, mod_consts[34]);
        tmp_operand_name_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        tmp_condition_result_21 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
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
        tmp_left_name_5 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[36];
        tmp_getattr_default_5 = mod_consts[37];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        tmp_right_name_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_26;
            PyObject *tmp_type_arg_5;
            PyTuple_SET_ITEM(tmp_right_name_5, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_5 = tmp_class_creation_5__prepared;
            tmp_expression_name_26 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_expression_name_26 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[36]);
            Py_DECREF(tmp_expression_name_26);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_right_name_5, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_right_name_5);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 91;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_16:;
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = PyDict_New();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_45;
    }
    branch_end_15:;
    {
        PyObject *tmp_assign_source_46;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_91 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_91, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_91, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_16;
        }
        if (isFrameUnusable(cache_frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6)) {
            Py_XDECREF(cache_frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6 = MAKE_FUNCTION_FRAME(codeobj_1452b9b0d59b0e768f9a2e6e0d2d0466, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6->m_type_description == NULL);
        frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6 = cache_frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_name_10;
            tmp_called_instance_10 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_91, mod_consts[6]);

            if (tmp_called_instance_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_10 == NULL)) {
                        tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 92;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_10);
                } else {
                    goto frame_exception_exit_6;
                }
            }



            tmp_args_element_name_10 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__10_pbkdf2_hmac_supported();

            frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[42], tmp_args_element_name_10);
            Py_DECREF(tmp_called_instance_10);
            Py_DECREF(tmp_args_element_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_91, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_name_11;
            tmp_called_instance_11 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_91, mod_consts[6]);

            if (tmp_called_instance_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_11 == NULL)) {
                        tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_11);
                } else {
                    goto frame_exception_exit_6;
                }
            }



            tmp_args_element_name_11 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__11_derive_pbkdf2_hmac();

            frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[42], tmp_args_element_name_11);
            Py_DECREF(tmp_called_instance_11);
            Py_DECREF(tmp_args_element_name_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_91, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6 == cache_frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6);
            cache_frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6 = NULL;
        }

        assertFrameObject(frame_1452b9b0d59b0e768f9a2e6e0d2d0466_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_name_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_name_10 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_10 = mod_consts[76];
            tmp_args_name_10 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_10, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_args_name_10, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_91;
            PyTuple_SET_ITEM0(tmp_args_name_10, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 91;
            tmp_assign_source_47 = CALL_FUNCTION(tmp_called_name_10, tmp_args_name_10, tmp_kwargs_name_10);
            Py_DECREF(tmp_args_name_10);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_47;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_46 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_46);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_91);
        locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_91 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_91);
        locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_91 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 91;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_46);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_name_27;
        tmp_dict_key_6 = mod_consts[29];
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_17;
        }
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[30]);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_17;
        }
        tmp_assign_source_48 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_48, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_metaclass_name_6;
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_key_name_16;
        PyObject *tmp_dict_arg_name_16;
        PyObject *tmp_dict_arg_name_17;
        PyObject *tmp_key_name_17;
        PyObject *tmp_bases_name_6;
        tmp_key_name_16 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_16, tmp_key_name_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_22 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_name_17 = mod_consts[29];
        tmp_metaclass_name_6 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_17, tmp_key_name_17);
        if (tmp_metaclass_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_17;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_6);
        condexpr_end_6:;
        tmp_bases_name_6 = mod_consts[31];
        tmp_assign_source_49 = SELECT_METACLASS(tmp_metaclass_name_6, tmp_bases_name_6);
        Py_DECREF(tmp_metaclass_name_6);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_49;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_key_name_18;
        PyObject *tmp_dict_arg_name_18;
        tmp_key_name_18 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_18, tmp_key_name_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 108;

        goto try_except_handler_17;
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_expression_name_28;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_name_28 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_28, mod_consts[32]);
        tmp_condition_result_24 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_args_name_11;
        PyObject *tmp_kwargs_name_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_name_29 = tmp_class_creation_6__metaclass;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[32]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_17;
        }
        tmp_args_name_11 = mod_consts[83];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_name_11 = tmp_class_creation_6__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 108;
        tmp_assign_source_50 = CALL_FUNCTION(tmp_called_name_11, tmp_args_name_11, tmp_kwargs_name_11);
        Py_DECREF(tmp_called_name_11);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_50;
    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_expression_name_30;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_name_30 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_30, mod_consts[34]);
        tmp_operand_name_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_17;
        }
        tmp_condition_result_25 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_left_name_6 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[36];
        tmp_getattr_default_6 = mod_consts[37];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_17;
        }
        tmp_right_name_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_31;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_right_name_6, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_6 = tmp_class_creation_6__prepared;
            tmp_expression_name_31 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_name_31 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[36]);
            Py_DECREF(tmp_expression_name_31);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_right_name_6, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_right_name_6);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 108;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = PyDict_New();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_51;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_52;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[84];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_19;
        }
        if (isFrameUnusable(cache_frame_ba785a384aa6f95cb575215e55fee54d_7)) {
            Py_XDECREF(cache_frame_ba785a384aa6f95cb575215e55fee54d_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ba785a384aa6f95cb575215e55fee54d_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ba785a384aa6f95cb575215e55fee54d_7 = MAKE_FUNCTION_FRAME(codeobj_ba785a384aa6f95cb575215e55fee54d, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_ba785a384aa6f95cb575215e55fee54d_7->m_type_description == NULL);
        frame_ba785a384aa6f95cb575215e55fee54d_7 = cache_frame_ba785a384aa6f95cb575215e55fee54d_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_ba785a384aa6f95cb575215e55fee54d_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_ba785a384aa6f95cb575215e55fee54d_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_name_12;
            tmp_called_instance_12 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108, mod_consts[6]);

            if (tmp_called_instance_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_12 == NULL)) {
                        tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 109;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_12);
                } else {
                    goto frame_exception_exit_7;
                }
            }



            tmp_args_element_name_12 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__12_generate_rsa_private_key();

            frame_ba785a384aa6f95cb575215e55fee54d_7->m_frame.f_lineno = 109;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[42], tmp_args_element_name_12);
            Py_DECREF(tmp_called_instance_12);
            Py_DECREF(tmp_args_element_name_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_13;
            PyObject *tmp_args_element_name_13;
            tmp_called_instance_13 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108, mod_consts[6]);

            if (tmp_called_instance_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_13 == NULL)) {
                        tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 116;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_13);
                } else {
                    goto frame_exception_exit_7;
                }
            }



            tmp_args_element_name_13 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__13_rsa_padding_supported();

            frame_ba785a384aa6f95cb575215e55fee54d_7->m_frame.f_lineno = 116;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[42], tmp_args_element_name_13);
            Py_DECREF(tmp_called_instance_13);
            Py_DECREF(tmp_args_element_name_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_name_14;
            tmp_called_instance_14 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108, mod_consts[6]);

            if (tmp_called_instance_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_14 == NULL)) {
                        tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 122;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_14);
                } else {
                    goto frame_exception_exit_7;
                }
            }



            tmp_args_element_name_14 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__14_generate_rsa_parameters_supported();

            frame_ba785a384aa6f95cb575215e55fee54d_7->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_14, mod_consts[42], tmp_args_element_name_14);
            Py_DECREF(tmp_called_instance_14);
            Py_DECREF(tmp_args_element_name_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_15;
            PyObject *tmp_args_element_name_15;
            tmp_called_instance_15 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108, mod_consts[6]);

            if (tmp_called_instance_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_15 == NULL)) {
                        tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 129;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_15);
                } else {
                    goto frame_exception_exit_7;
                }
            }



            tmp_args_element_name_15 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__15_load_rsa_private_numbers();

            frame_ba785a384aa6f95cb575215e55fee54d_7->m_frame.f_lineno = 129;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[42], tmp_args_element_name_15);
            Py_DECREF(tmp_called_instance_15);
            Py_DECREF(tmp_args_element_name_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_16;
            PyObject *tmp_args_element_name_16;
            tmp_called_instance_16 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108, mod_consts[6]);

            if (tmp_called_instance_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_16 == NULL)) {
                        tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 135;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_16);
                } else {
                    goto frame_exception_exit_7;
                }
            }



            tmp_args_element_name_16 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__16_load_rsa_public_numbers();

            frame_ba785a384aa6f95cb575215e55fee54d_7->m_frame.f_lineno = 135;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_16, mod_consts[42], tmp_args_element_name_16);
            Py_DECREF(tmp_called_instance_16);
            Py_DECREF(tmp_args_element_name_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108, mod_consts[98], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ba785a384aa6f95cb575215e55fee54d_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ba785a384aa6f95cb575215e55fee54d_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ba785a384aa6f95cb575215e55fee54d_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ba785a384aa6f95cb575215e55fee54d_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ba785a384aa6f95cb575215e55fee54d_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ba785a384aa6f95cb575215e55fee54d_7,
            type_description_2,
            outline_5_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_ba785a384aa6f95cb575215e55fee54d_7 == cache_frame_ba785a384aa6f95cb575215e55fee54d_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_ba785a384aa6f95cb575215e55fee54d_7);
            cache_frame_ba785a384aa6f95cb575215e55fee54d_7 = NULL;
        }

        assertFrameObject(frame_ba785a384aa6f95cb575215e55fee54d_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_19;
        skip_nested_handling_6:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_12;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_name_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_name_12 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_12 = mod_consts[84];
            tmp_args_name_12 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_12, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_args_name_12, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108;
            PyTuple_SET_ITEM0(tmp_args_name_12, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_name_12 = tmp_class_creation_6__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 108;
            tmp_assign_source_53 = CALL_FUNCTION(tmp_called_name_12, tmp_args_name_12, tmp_kwargs_name_12);
            Py_DECREF(tmp_args_name_12);
            if (tmp_assign_source_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_19;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_53;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_52 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_52);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108);
        locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108);
        locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_108 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 108;
        goto try_except_handler_17;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_52);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_name_32;
        tmp_dict_key_7 = mod_consts[29];
        tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_32 == NULL)) {
            tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_20;
        }
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[30]);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_20;
        }
        tmp_assign_source_54 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_54, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_metaclass_name_7;
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_arg_name_19;
        PyObject *tmp_dict_arg_name_20;
        PyObject *tmp_key_name_20;
        PyObject *tmp_bases_name_7;
        tmp_key_name_19 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_19, tmp_key_name_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_26 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_name_20 = mod_consts[29];
        tmp_metaclass_name_7 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_20, tmp_key_name_20);
        if (tmp_metaclass_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_20;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_7);
        condexpr_end_7:;
        tmp_bases_name_7 = mod_consts[31];
        tmp_assign_source_55 = SELECT_METACLASS(tmp_metaclass_name_7, tmp_bases_name_7);
        Py_DECREF(tmp_metaclass_name_7);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_55;
    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_arg_name_21;
        tmp_key_name_21 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_21, tmp_key_name_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 142;

        goto try_except_handler_20;
    }
    branch_no_20:;
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_expression_name_33;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_name_33 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_33, mod_consts[32]);
        tmp_condition_result_28 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_args_name_13;
        PyObject *tmp_kwargs_name_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_name_34 = tmp_class_creation_7__metaclass;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[32]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_20;
        }
        tmp_args_name_13 = mod_consts[100];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_name_13 = tmp_class_creation_7__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 142;
        tmp_assign_source_56 = CALL_FUNCTION(tmp_called_name_13, tmp_args_name_13, tmp_kwargs_name_13);
        Py_DECREF(tmp_called_name_13);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_56;
    }
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_operand_name_7;
        PyObject *tmp_expression_name_35;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_name_35 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_35, mod_consts[34]);
        tmp_operand_name_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_20;
        }
        tmp_condition_result_29 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
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
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_left_name_7 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[36];
        tmp_getattr_default_7 = mod_consts[37];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_20;
        }
        tmp_right_name_7 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_36;
            PyObject *tmp_type_arg_7;
            PyTuple_SET_ITEM(tmp_right_name_7, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_7 = tmp_class_creation_7__prepared;
            tmp_expression_name_36 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_expression_name_36 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[36]);
            Py_DECREF(tmp_expression_name_36);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_right_name_7, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_right_name_7);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_right_name_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_20;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 142;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_20;
    }
    branch_no_22:;
    goto branch_end_21;
    branch_no_21:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = PyDict_New();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_57;
    }
    branch_end_21:;
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_22;
        }
        if (isFrameUnusable(cache_frame_bde66fe8b7c75ff127e6da96fafeba2d_8)) {
            Py_XDECREF(cache_frame_bde66fe8b7c75ff127e6da96fafeba2d_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_bde66fe8b7c75ff127e6da96fafeba2d_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_bde66fe8b7c75ff127e6da96fafeba2d_8 = MAKE_FUNCTION_FRAME(codeobj_bde66fe8b7c75ff127e6da96fafeba2d, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_bde66fe8b7c75ff127e6da96fafeba2d_8->m_type_description == NULL);
        frame_bde66fe8b7c75ff127e6da96fafeba2d_8 = cache_frame_bde66fe8b7c75ff127e6da96fafeba2d_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_bde66fe8b7c75ff127e6da96fafeba2d_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_bde66fe8b7c75ff127e6da96fafeba2d_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_17;
            PyObject *tmp_args_element_name_17;
            tmp_called_instance_17 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[6]);

            if (tmp_called_instance_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_17 == NULL)) {
                        tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 143;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_17);
                } else {
                    goto frame_exception_exit_8;
                }
            }



            tmp_args_element_name_17 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__17_generate_dsa_parameters();

            frame_bde66fe8b7c75ff127e6da96fafeba2d_8->m_frame.f_lineno = 143;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_17, mod_consts[42], tmp_args_element_name_17);
            Py_DECREF(tmp_called_instance_17);
            Py_DECREF(tmp_args_element_name_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[103], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_18;
            PyObject *tmp_args_element_name_18;
            tmp_called_instance_18 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[6]);

            if (tmp_called_instance_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_18 == NULL)) {
                        tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 149;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_18);
                } else {
                    goto frame_exception_exit_8;
                }
            }



            tmp_args_element_name_18 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__18_generate_dsa_private_key();

            frame_bde66fe8b7c75ff127e6da96fafeba2d_8->m_frame.f_lineno = 149;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_18, mod_consts[42], tmp_args_element_name_18);
            Py_DECREF(tmp_called_instance_18);
            Py_DECREF(tmp_args_element_name_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_19;
            PyObject *tmp_args_element_name_19;
            tmp_called_instance_19 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[6]);

            if (tmp_called_instance_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_19 == NULL)) {
                        tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 156;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_19);
                } else {
                    goto frame_exception_exit_8;
                }
            }



            tmp_args_element_name_19 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__19_generate_dsa_private_key_and_parameters();

            frame_bde66fe8b7c75ff127e6da96fafeba2d_8->m_frame.f_lineno = 156;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_19, mod_consts[42], tmp_args_element_name_19);
            Py_DECREF(tmp_called_instance_19);
            Py_DECREF(tmp_args_element_name_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[109], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_20;
            PyObject *tmp_args_element_name_20;
            tmp_called_instance_20 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[6]);

            if (tmp_called_instance_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_20 == NULL)) {
                        tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 162;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_20);
                } else {
                    goto frame_exception_exit_8;
                }
            }



            tmp_args_element_name_20 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__20_dsa_hash_supported();

            frame_bde66fe8b7c75ff127e6da96fafeba2d_8->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_20, mod_consts[42], tmp_args_element_name_20);
            Py_DECREF(tmp_called_instance_20);
            Py_DECREF(tmp_args_element_name_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_21;
            PyObject *tmp_args_element_name_21;
            tmp_called_instance_21 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[6]);

            if (tmp_called_instance_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_21 == NULL)) {
                        tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 168;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_21);
                } else {
                    goto frame_exception_exit_8;
                }
            }



            tmp_args_element_name_21 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__21_dsa_parameters_supported();

            frame_bde66fe8b7c75ff127e6da96fafeba2d_8->m_frame.f_lineno = 168;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_21, mod_consts[42], tmp_args_element_name_21);
            Py_DECREF(tmp_called_instance_21);
            Py_DECREF(tmp_args_element_name_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[115], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_22;
            PyObject *tmp_args_element_name_22;
            tmp_called_instance_22 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[6]);

            if (tmp_called_instance_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_22 == NULL)) {
                        tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 174;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_22);
                } else {
                    goto frame_exception_exit_8;
                }
            }



            tmp_args_element_name_22 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__22_load_dsa_private_numbers();

            frame_bde66fe8b7c75ff127e6da96fafeba2d_8->m_frame.f_lineno = 174;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_22, mod_consts[42], tmp_args_element_name_22);
            Py_DECREF(tmp_called_instance_22);
            Py_DECREF(tmp_args_element_name_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[118], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_23;
            PyObject *tmp_args_element_name_23;
            tmp_called_instance_23 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[6]);

            if (tmp_called_instance_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_23 == NULL)) {
                        tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 180;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_23);
                } else {
                    goto frame_exception_exit_8;
                }
            }



            tmp_args_element_name_23 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__23_load_dsa_public_numbers();

            frame_bde66fe8b7c75ff127e6da96fafeba2d_8->m_frame.f_lineno = 180;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_23, mod_consts[42], tmp_args_element_name_23);
            Py_DECREF(tmp_called_instance_23);
            Py_DECREF(tmp_args_element_name_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_24;
            PyObject *tmp_args_element_name_24;
            tmp_called_instance_24 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[6]);

            if (tmp_called_instance_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_24 == NULL)) {
                        tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 186;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_24);
                } else {
                    goto frame_exception_exit_8;
                }
            }



            tmp_args_element_name_24 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__24_load_dsa_parameter_numbers();

            frame_bde66fe8b7c75ff127e6da96fafeba2d_8->m_frame.f_lineno = 186;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_24, mod_consts[42], tmp_args_element_name_24);
            Py_DECREF(tmp_called_instance_24);
            Py_DECREF(tmp_args_element_name_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142, mod_consts[124], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_bde66fe8b7c75ff127e6da96fafeba2d_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_bde66fe8b7c75ff127e6da96fafeba2d_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bde66fe8b7c75ff127e6da96fafeba2d_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bde66fe8b7c75ff127e6da96fafeba2d_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bde66fe8b7c75ff127e6da96fafeba2d_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bde66fe8b7c75ff127e6da96fafeba2d_8,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_bde66fe8b7c75ff127e6da96fafeba2d_8 == cache_frame_bde66fe8b7c75ff127e6da96fafeba2d_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_bde66fe8b7c75ff127e6da96fafeba2d_8);
            cache_frame_bde66fe8b7c75ff127e6da96fafeba2d_8 = NULL;
        }

        assertFrameObject(frame_bde66fe8b7c75ff127e6da96fafeba2d_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_22;
        skip_nested_handling_7:;
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_name_14;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_name_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_name_14 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_14 = mod_consts[101];
            tmp_args_name_14 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_14, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_args_name_14, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142;
            PyTuple_SET_ITEM0(tmp_args_name_14, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_name_14 = tmp_class_creation_7__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 142;
            tmp_assign_source_59 = CALL_FUNCTION(tmp_called_name_14, tmp_args_name_14, tmp_kwargs_name_14);
            Py_DECREF(tmp_args_name_14);
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_59;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_58 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_58);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142);
        locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142);
        locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_142 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 142;
        goto try_except_handler_20;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_58);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_name_37;
        tmp_dict_key_8 = mod_consts[29];
        tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_37 == NULL)) {
            tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_23;
        }
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[30]);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_23;
        }
        tmp_assign_source_60 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_metaclass_name_8;
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_key_name_22;
        PyObject *tmp_dict_arg_name_22;
        PyObject *tmp_dict_arg_name_23;
        PyObject *tmp_key_name_23;
        PyObject *tmp_bases_name_8;
        tmp_key_name_22 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_22, tmp_key_name_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_30 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_name_23 = mod_consts[29];
        tmp_metaclass_name_8 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_23, tmp_key_name_23);
        if (tmp_metaclass_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_23;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_name_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_8);
        condexpr_end_8:;
        tmp_bases_name_8 = mod_consts[31];
        tmp_assign_source_61 = SELECT_METACLASS(tmp_metaclass_name_8, tmp_bases_name_8);
        Py_DECREF(tmp_metaclass_name_8);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_61;
    }
    {
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_key_name_24;
        PyObject *tmp_dict_arg_name_24;
        tmp_key_name_24 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_24, tmp_key_name_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 193;

        goto try_except_handler_23;
    }
    branch_no_23:;
    {
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_expression_name_38;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_name_38 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_38, mod_consts[32]);
        tmp_condition_result_32 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_args_name_15;
        PyObject *tmp_kwargs_name_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_name_39 = tmp_class_creation_8__metaclass;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[32]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_23;
        }
        tmp_args_name_15 = mod_consts[126];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_name_15 = tmp_class_creation_8__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 193;
        tmp_assign_source_62 = CALL_FUNCTION(tmp_called_name_15, tmp_args_name_15, tmp_kwargs_name_15);
        Py_DECREF(tmp_called_name_15);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_62;
    }
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_operand_name_8;
        PyObject *tmp_expression_name_40;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_name_40 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_40, mod_consts[34]);
        tmp_operand_name_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_23;
        }
        tmp_condition_result_33 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_left_name_8 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[36];
        tmp_getattr_default_8 = mod_consts[37];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_23;
        }
        tmp_right_name_8 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_41;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_right_name_8, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_8 = tmp_class_creation_8__prepared;
            tmp_expression_name_41 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_name_41 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[36]);
            Py_DECREF(tmp_expression_name_41);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_right_name_8, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_right_name_8);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_right_name_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_23;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 193;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_23;
    }
    branch_no_25:;
    goto branch_end_24;
    branch_no_24:;
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = PyDict_New();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_63;
    }
    branch_end_24:;
    {
        PyObject *tmp_assign_source_64;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[127];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_25;
        }
        if (isFrameUnusable(cache_frame_c66fb569dc452ca497ebbe5f68ebb482_9)) {
            Py_XDECREF(cache_frame_c66fb569dc452ca497ebbe5f68ebb482_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c66fb569dc452ca497ebbe5f68ebb482_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c66fb569dc452ca497ebbe5f68ebb482_9 = MAKE_FUNCTION_FRAME(codeobj_c66fb569dc452ca497ebbe5f68ebb482, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c66fb569dc452ca497ebbe5f68ebb482_9->m_type_description == NULL);
        frame_c66fb569dc452ca497ebbe5f68ebb482_9 = cache_frame_c66fb569dc452ca497ebbe5f68ebb482_9;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c66fb569dc452ca497ebbe5f68ebb482_9);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c66fb569dc452ca497ebbe5f68ebb482_9) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_25;
            PyObject *tmp_args_element_name_25;
            tmp_called_instance_25 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[6]);

            if (tmp_called_instance_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_25 == NULL)) {
                        tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 194;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_25);
                } else {
                    goto frame_exception_exit_9;
                }
            }



            tmp_args_element_name_25 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__25_elliptic_curve_signature_algorithm_supported();

            frame_c66fb569dc452ca497ebbe5f68ebb482_9->m_frame.f_lineno = 194;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_25, mod_consts[42], tmp_args_element_name_25);
            Py_DECREF(tmp_called_instance_25);
            Py_DECREF(tmp_args_element_name_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[129], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_26;
            PyObject *tmp_args_element_name_26;
            tmp_called_instance_26 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[6]);

            if (tmp_called_instance_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_26 == NULL)) {
                        tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 203;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_26);
                } else {
                    goto frame_exception_exit_9;
                }
            }



            tmp_args_element_name_26 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__26_elliptic_curve_supported();

            frame_c66fb569dc452ca497ebbe5f68ebb482_9->m_frame.f_lineno = 203;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_26, mod_consts[42], tmp_args_element_name_26);
            Py_DECREF(tmp_called_instance_26);
            Py_DECREF(tmp_args_element_name_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_27;
            PyObject *tmp_args_element_name_27;
            tmp_called_instance_27 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[6]);

            if (tmp_called_instance_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_27 == NULL)) {
                        tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 209;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_27);
                } else {
                    goto frame_exception_exit_9;
                }
            }



            tmp_args_element_name_27 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__27_generate_elliptic_curve_private_key();

            frame_c66fb569dc452ca497ebbe5f68ebb482_9->m_frame.f_lineno = 209;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_27, mod_consts[42], tmp_args_element_name_27);
            Py_DECREF(tmp_called_instance_27);
            Py_DECREF(tmp_args_element_name_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[135], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_28;
            PyObject *tmp_args_element_name_28;
            tmp_called_instance_28 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[6]);

            if (tmp_called_instance_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_28 == NULL)) {
                        tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 215;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_28);
                } else {
                    goto frame_exception_exit_9;
                }
            }



            tmp_args_element_name_28 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__28_load_elliptic_curve_public_numbers();

            frame_c66fb569dc452ca497ebbe5f68ebb482_9->m_frame.f_lineno = 215;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_28, mod_consts[42], tmp_args_element_name_28);
            Py_DECREF(tmp_called_instance_28);
            Py_DECREF(tmp_args_element_name_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_29;
            PyObject *tmp_args_element_name_29;
            tmp_called_instance_29 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[6]);

            if (tmp_called_instance_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_29 == NULL)) {
                        tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 221;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_29);
                } else {
                    goto frame_exception_exit_9;
                }
            }



            tmp_args_element_name_29 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__29_load_elliptic_curve_private_numbers();

            frame_c66fb569dc452ca497ebbe5f68ebb482_9->m_frame.f_lineno = 221;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_29, mod_consts[42], tmp_args_element_name_29);
            Py_DECREF(tmp_called_instance_29);
            Py_DECREF(tmp_args_element_name_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[141], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_30;
            PyObject *tmp_args_element_name_30;
            tmp_called_instance_30 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[6]);

            if (tmp_called_instance_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_30 == NULL)) {
                        tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 227;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_30);
                } else {
                    goto frame_exception_exit_9;
                }
            }



            tmp_args_element_name_30 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__30_elliptic_curve_exchange_algorithm_supported();

            frame_c66fb569dc452ca497ebbe5f68ebb482_9->m_frame.f_lineno = 227;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_30, mod_consts[42], tmp_args_element_name_30);
            Py_DECREF(tmp_called_instance_30);
            Py_DECREF(tmp_args_element_name_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[144], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_31;
            PyObject *tmp_args_element_name_31;
            tmp_called_instance_31 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[6]);

            if (tmp_called_instance_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_31 == NULL)) {
                        tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 233;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_31);
                } else {
                    goto frame_exception_exit_9;
                }
            }



            tmp_args_element_name_31 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__31_derive_elliptic_curve_private_key();

            frame_c66fb569dc452ca497ebbe5f68ebb482_9->m_frame.f_lineno = 233;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_31, mod_consts[42], tmp_args_element_name_31);
            Py_DECREF(tmp_called_instance_31);
            Py_DECREF(tmp_args_element_name_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193, mod_consts[147], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c66fb569dc452ca497ebbe5f68ebb482_9);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c66fb569dc452ca497ebbe5f68ebb482_9);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c66fb569dc452ca497ebbe5f68ebb482_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c66fb569dc452ca497ebbe5f68ebb482_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c66fb569dc452ca497ebbe5f68ebb482_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c66fb569dc452ca497ebbe5f68ebb482_9,
            type_description_2,
            outline_7_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c66fb569dc452ca497ebbe5f68ebb482_9 == cache_frame_c66fb569dc452ca497ebbe5f68ebb482_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c66fb569dc452ca497ebbe5f68ebb482_9);
            cache_frame_c66fb569dc452ca497ebbe5f68ebb482_9 = NULL;
        }

        assertFrameObject(frame_c66fb569dc452ca497ebbe5f68ebb482_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_25;
        skip_nested_handling_8:;
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_name_16;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_name_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_name_16 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_16 = mod_consts[127];
            tmp_args_name_16 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_16, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_args_name_16, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193;
            PyTuple_SET_ITEM0(tmp_args_name_16, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_name_16 = tmp_class_creation_8__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 193;
            tmp_assign_source_65 = CALL_FUNCTION(tmp_called_name_16, tmp_args_name_16, tmp_kwargs_name_16);
            Py_DECREF(tmp_args_name_16);
            if (tmp_assign_source_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto try_except_handler_25;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_65;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_64 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_64);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193);
        locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193);
        locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_193 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 193;
        goto try_except_handler_23;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_64);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_name_42;
        tmp_dict_key_9 = mod_consts[29];
        tmp_expression_name_42 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_42 == NULL)) {
            tmp_expression_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_26;
        }
        tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_42, mod_consts[30]);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_26;
        }
        tmp_assign_source_66 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_metaclass_name_9;
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_key_name_25;
        PyObject *tmp_dict_arg_name_25;
        PyObject *tmp_dict_arg_name_26;
        PyObject *tmp_key_name_26;
        PyObject *tmp_bases_name_9;
        tmp_key_name_25 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_25 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_25, tmp_key_name_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_34 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_26 = tmp_class_creation_9__class_decl_dict;
        tmp_key_name_26 = mod_consts[29];
        tmp_metaclass_name_9 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_26, tmp_key_name_26);
        if (tmp_metaclass_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_26;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_name_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_9);
        condexpr_end_9:;
        tmp_bases_name_9 = mod_consts[31];
        tmp_assign_source_67 = SELECT_METACLASS(tmp_metaclass_name_9, tmp_bases_name_9);
        Py_DECREF(tmp_metaclass_name_9);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_67;
    }
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_key_name_27;
        PyObject *tmp_dict_arg_name_27;
        tmp_key_name_27 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_27 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_27, tmp_key_name_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_35 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 240;

        goto try_except_handler_26;
    }
    branch_no_26:;
    {
        nuitka_bool tmp_condition_result_36;
        PyObject *tmp_expression_name_43;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_name_43 = tmp_class_creation_9__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_43, mod_consts[32]);
        tmp_condition_result_36 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_44;
        PyObject *tmp_args_name_17;
        PyObject *tmp_kwargs_name_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_name_44 = tmp_class_creation_9__metaclass;
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_44, mod_consts[32]);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_26;
        }
        tmp_args_name_17 = mod_consts[149];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_name_17 = tmp_class_creation_9__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 240;
        tmp_assign_source_68 = CALL_FUNCTION(tmp_called_name_17, tmp_args_name_17, tmp_kwargs_name_17);
        Py_DECREF(tmp_called_name_17);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_68;
    }
    {
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_operand_name_9;
        PyObject *tmp_expression_name_45;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_name_45 = tmp_class_creation_9__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_45, mod_consts[34]);
        tmp_operand_name_9 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_26;
        }
        tmp_condition_result_37 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_left_name_9 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
        tmp_getattr_attr_9 = mod_consts[36];
        tmp_getattr_default_9 = mod_consts[37];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_26;
        }
        tmp_right_name_9 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_46;
            PyObject *tmp_type_arg_9;
            PyTuple_SET_ITEM(tmp_right_name_9, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_9 = tmp_class_creation_9__prepared;
            tmp_expression_name_46 = BUILTIN_TYPE1(tmp_type_arg_9);
            assert(!(tmp_expression_name_46 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_46, mod_consts[36]);
            Py_DECREF(tmp_expression_name_46);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_right_name_9, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_right_name_9);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_right_name_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_26;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 240;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_26;
    }
    branch_no_28:;
    goto branch_end_27;
    branch_no_27:;
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = PyDict_New();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_69;
    }
    branch_end_27:;
    {
        PyObject *tmp_assign_source_70;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[150];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_28;
        }
        if (isFrameUnusable(cache_frame_d339289c381955ae0d9149da0eb1915c_10)) {
            Py_XDECREF(cache_frame_d339289c381955ae0d9149da0eb1915c_10);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d339289c381955ae0d9149da0eb1915c_10 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d339289c381955ae0d9149da0eb1915c_10 = MAKE_FUNCTION_FRAME(codeobj_d339289c381955ae0d9149da0eb1915c, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d339289c381955ae0d9149da0eb1915c_10->m_type_description == NULL);
        frame_d339289c381955ae0d9149da0eb1915c_10 = cache_frame_d339289c381955ae0d9149da0eb1915c_10;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d339289c381955ae0d9149da0eb1915c_10);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d339289c381955ae0d9149da0eb1915c_10) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_32;
            PyObject *tmp_args_element_name_32;
            tmp_called_instance_32 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240, mod_consts[6]);

            if (tmp_called_instance_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_32 == NULL)) {
                        tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 241;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_32);
                } else {
                    goto frame_exception_exit_10;
                }
            }



            tmp_args_element_name_32 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__32_load_pem_private_key();

            frame_d339289c381955ae0d9149da0eb1915c_10->m_frame.f_lineno = 241;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_32, mod_consts[42], tmp_args_element_name_32);
            Py_DECREF(tmp_called_instance_32);
            Py_DECREF(tmp_args_element_name_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_instance_33;
            PyObject *tmp_args_element_name_33;
            tmp_called_instance_33 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240, mod_consts[6]);

            if (tmp_called_instance_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_33 == NULL)) {
                        tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 248;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_33);
                } else {
                    goto frame_exception_exit_10;
                }
            }



            tmp_args_element_name_33 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__33_load_pem_public_key();

            frame_d339289c381955ae0d9149da0eb1915c_10->m_frame.f_lineno = 248;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_33, mod_consts[42], tmp_args_element_name_33);
            Py_DECREF(tmp_called_instance_33);
            Py_DECREF(tmp_args_element_name_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240, mod_consts[155], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_instance_34;
            PyObject *tmp_args_element_name_34;
            tmp_called_instance_34 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240, mod_consts[6]);

            if (tmp_called_instance_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_34 == NULL)) {
                        tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 254;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_34);
                } else {
                    goto frame_exception_exit_10;
                }
            }



            tmp_args_element_name_34 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__34_load_pem_parameters();

            frame_d339289c381955ae0d9149da0eb1915c_10->m_frame.f_lineno = 254;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_34, mod_consts[42], tmp_args_element_name_34);
            Py_DECREF(tmp_called_instance_34);
            Py_DECREF(tmp_args_element_name_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240, mod_consts[158], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d339289c381955ae0d9149da0eb1915c_10);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d339289c381955ae0d9149da0eb1915c_10);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d339289c381955ae0d9149da0eb1915c_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d339289c381955ae0d9149da0eb1915c_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d339289c381955ae0d9149da0eb1915c_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d339289c381955ae0d9149da0eb1915c_10,
            type_description_2,
            outline_8_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_d339289c381955ae0d9149da0eb1915c_10 == cache_frame_d339289c381955ae0d9149da0eb1915c_10) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d339289c381955ae0d9149da0eb1915c_10);
            cache_frame_d339289c381955ae0d9149da0eb1915c_10 = NULL;
        }

        assertFrameObject(frame_d339289c381955ae0d9149da0eb1915c_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;

        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_28;
        skip_nested_handling_9:;
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_called_name_18;
            PyObject *tmp_args_name_18;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_name_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_name_18 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_18 = mod_consts[150];
            tmp_args_name_18 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_18, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_args_name_18, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240;
            PyTuple_SET_ITEM0(tmp_args_name_18, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_name_18 = tmp_class_creation_9__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 240;
            tmp_assign_source_71 = CALL_FUNCTION(tmp_called_name_18, tmp_args_name_18, tmp_kwargs_name_18);
            Py_DECREF(tmp_args_name_18);
            if (tmp_assign_source_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto try_except_handler_28;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_71;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_70 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_70);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240);
        locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240 = NULL;
        goto try_return_handler_27;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240);
        locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_240 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 240;
        goto try_except_handler_26;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_70);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_name_47;
        tmp_dict_key_10 = mod_consts[29];
        tmp_expression_name_47 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_47 == NULL)) {
            tmp_expression_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_29;
        }
        tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_47, mod_consts[30]);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_29;
        }
        tmp_assign_source_72 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_72, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_metaclass_name_10;
        nuitka_bool tmp_condition_result_38;
        PyObject *tmp_key_name_28;
        PyObject *tmp_dict_arg_name_28;
        PyObject *tmp_dict_arg_name_29;
        PyObject *tmp_key_name_29;
        PyObject *tmp_bases_name_10;
        tmp_key_name_28 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_28 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_28, tmp_key_name_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_38 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_29 = tmp_class_creation_10__class_decl_dict;
        tmp_key_name_29 = mod_consts[29];
        tmp_metaclass_name_10 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_29, tmp_key_name_29);
        if (tmp_metaclass_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_29;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_name_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_10);
        condexpr_end_10:;
        tmp_bases_name_10 = mod_consts[31];
        tmp_assign_source_73 = SELECT_METACLASS(tmp_metaclass_name_10, tmp_bases_name_10);
        Py_DECREF(tmp_metaclass_name_10);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_73;
    }
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_key_name_30;
        PyObject *tmp_dict_arg_name_30;
        tmp_key_name_30 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_30 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_30, tmp_key_name_30);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 261;

        goto try_except_handler_29;
    }
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_expression_name_48;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_name_48 = tmp_class_creation_10__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_48, mod_consts[32]);
        tmp_condition_result_40 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_49;
        PyObject *tmp_args_name_19;
        PyObject *tmp_kwargs_name_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_name_49 = tmp_class_creation_10__metaclass;
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_49, mod_consts[32]);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_29;
        }
        tmp_args_name_19 = mod_consts[160];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_name_19 = tmp_class_creation_10__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 261;
        tmp_assign_source_74 = CALL_FUNCTION(tmp_called_name_19, tmp_args_name_19, tmp_kwargs_name_19);
        Py_DECREF(tmp_called_name_19);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_74;
    }
    {
        nuitka_bool tmp_condition_result_41;
        PyObject *tmp_operand_name_10;
        PyObject *tmp_expression_name_50;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_name_50 = tmp_class_creation_10__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_50, mod_consts[34]);
        tmp_operand_name_10 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_29;
        }
        tmp_condition_result_41 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_getattr_target_10;
        PyObject *tmp_getattr_attr_10;
        PyObject *tmp_getattr_default_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_left_name_10 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_getattr_target_10 = tmp_class_creation_10__metaclass;
        tmp_getattr_attr_10 = mod_consts[36];
        tmp_getattr_default_10 = mod_consts[37];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_29;
        }
        tmp_right_name_10 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_51;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_right_name_10, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_10 = tmp_class_creation_10__prepared;
            tmp_expression_name_51 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_name_51 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, mod_consts[36]);
            Py_DECREF(tmp_expression_name_51);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_right_name_10, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_right_name_10);
        goto try_except_handler_29;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_right_name_10);
        if (tmp_raise_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_29;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 261;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_29;
    }
    branch_no_31:;
    goto branch_end_30;
    branch_no_30:;
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = PyDict_New();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_75;
    }
    branch_end_30:;
    {
        PyObject *tmp_assign_source_76;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[161];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_31;
        }
        if (isFrameUnusable(cache_frame_d4f61539d21e18094899191fd6da003a_11)) {
            Py_XDECREF(cache_frame_d4f61539d21e18094899191fd6da003a_11);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d4f61539d21e18094899191fd6da003a_11 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d4f61539d21e18094899191fd6da003a_11 = MAKE_FUNCTION_FRAME(codeobj_d4f61539d21e18094899191fd6da003a, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d4f61539d21e18094899191fd6da003a_11->m_type_description == NULL);
        frame_d4f61539d21e18094899191fd6da003a_11 = cache_frame_d4f61539d21e18094899191fd6da003a_11;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d4f61539d21e18094899191fd6da003a_11);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d4f61539d21e18094899191fd6da003a_11) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_35;
            PyObject *tmp_args_element_name_35;
            tmp_called_instance_35 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261, mod_consts[6]);

            if (tmp_called_instance_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_35 == NULL)) {
                        tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 262;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_35);
                } else {
                    goto frame_exception_exit_11;
                }
            }



            tmp_args_element_name_35 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__35_load_der_private_key();

            frame_d4f61539d21e18094899191fd6da003a_11->m_frame.f_lineno = 262;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_35, mod_consts[42], tmp_args_element_name_35);
            Py_DECREF(tmp_called_instance_35);
            Py_DECREF(tmp_args_element_name_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_instance_36;
            PyObject *tmp_args_element_name_36;
            tmp_called_instance_36 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261, mod_consts[6]);

            if (tmp_called_instance_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_36 == NULL)) {
                        tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 269;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_36);
                } else {
                    goto frame_exception_exit_11;
                }
            }



            tmp_args_element_name_36 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__36_load_der_public_key();

            frame_d4f61539d21e18094899191fd6da003a_11->m_frame.f_lineno = 269;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_36, mod_consts[42], tmp_args_element_name_36);
            Py_DECREF(tmp_called_instance_36);
            Py_DECREF(tmp_args_element_name_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261, mod_consts[166], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_instance_37;
            PyObject *tmp_args_element_name_37;
            tmp_called_instance_37 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261, mod_consts[6]);

            if (tmp_called_instance_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_37 == NULL)) {
                        tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 275;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_37);
                } else {
                    goto frame_exception_exit_11;
                }
            }



            tmp_args_element_name_37 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__37_load_der_parameters();

            frame_d4f61539d21e18094899191fd6da003a_11->m_frame.f_lineno = 275;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_37, mod_consts[42], tmp_args_element_name_37);
            Py_DECREF(tmp_called_instance_37);
            Py_DECREF(tmp_args_element_name_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261, mod_consts[169], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d4f61539d21e18094899191fd6da003a_11);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;

        frame_exception_exit_11:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d4f61539d21e18094899191fd6da003a_11);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d4f61539d21e18094899191fd6da003a_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d4f61539d21e18094899191fd6da003a_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d4f61539d21e18094899191fd6da003a_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d4f61539d21e18094899191fd6da003a_11,
            type_description_2,
            outline_9_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_d4f61539d21e18094899191fd6da003a_11 == cache_frame_d4f61539d21e18094899191fd6da003a_11) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d4f61539d21e18094899191fd6da003a_11);
            cache_frame_d4f61539d21e18094899191fd6da003a_11 = NULL;
        }

        assertFrameObject(frame_d4f61539d21e18094899191fd6da003a_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;

        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_31;
        skip_nested_handling_10:;
        {
            PyObject *tmp_assign_source_77;
            PyObject *tmp_called_name_20;
            PyObject *tmp_args_name_20;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_name_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_name_20 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_20 = mod_consts[161];
            tmp_args_name_20 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_20, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_args_name_20, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261;
            PyTuple_SET_ITEM0(tmp_args_name_20, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_name_20 = tmp_class_creation_10__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 261;
            tmp_assign_source_77 = CALL_FUNCTION(tmp_called_name_20, tmp_args_name_20, tmp_kwargs_name_20);
            Py_DECREF(tmp_args_name_20);
            if (tmp_assign_source_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto try_except_handler_31;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_77;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_76 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_76);
        goto try_return_handler_31;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261);
        locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261 = NULL;
        goto try_return_handler_30;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261);
        locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_261 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto try_except_handler_30;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 261;
        goto try_except_handler_29;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_76);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_name_52;
        tmp_dict_key_11 = mod_consts[29];
        tmp_expression_name_52 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_52 == NULL)) {
            tmp_expression_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_32;
        }
        tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_52, mod_consts[30]);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_32;
        }
        tmp_assign_source_78 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_78, tmp_dict_key_11, tmp_dict_value_11);
        Py_DECREF(tmp_dict_value_11);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_metaclass_name_11;
        nuitka_bool tmp_condition_result_42;
        PyObject *tmp_key_name_31;
        PyObject *tmp_dict_arg_name_31;
        PyObject *tmp_dict_arg_name_32;
        PyObject *tmp_key_name_32;
        PyObject *tmp_bases_name_11;
        tmp_key_name_31 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_name_31 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_31, tmp_key_name_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_42 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_name_32 = tmp_class_creation_11__class_decl_dict;
        tmp_key_name_32 = mod_consts[29];
        tmp_metaclass_name_11 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_32, tmp_key_name_32);
        if (tmp_metaclass_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_32;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_name_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_11);
        condexpr_end_11:;
        tmp_bases_name_11 = mod_consts[31];
        tmp_assign_source_79 = SELECT_METACLASS(tmp_metaclass_name_11, tmp_bases_name_11);
        Py_DECREF(tmp_metaclass_name_11);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_79;
    }
    {
        nuitka_bool tmp_condition_result_43;
        PyObject *tmp_key_name_33;
        PyObject *tmp_dict_arg_name_33;
        tmp_key_name_33 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_name_33 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_33, tmp_key_name_33);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 282;

        goto try_except_handler_32;
    }
    branch_no_32:;
    {
        nuitka_bool tmp_condition_result_44;
        PyObject *tmp_expression_name_53;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_name_53 = tmp_class_creation_11__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_53, mod_consts[32]);
        tmp_condition_result_44 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_54;
        PyObject *tmp_args_name_21;
        PyObject *tmp_kwargs_name_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_name_54 = tmp_class_creation_11__metaclass;
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_54, mod_consts[32]);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_32;
        }
        tmp_args_name_21 = mod_consts[171];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_name_21 = tmp_class_creation_11__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 282;
        tmp_assign_source_80 = CALL_FUNCTION(tmp_called_name_21, tmp_args_name_21, tmp_kwargs_name_21);
        Py_DECREF(tmp_called_name_21);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_80;
    }
    {
        nuitka_bool tmp_condition_result_45;
        PyObject *tmp_operand_name_11;
        PyObject *tmp_expression_name_55;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_name_55 = tmp_class_creation_11__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_55, mod_consts[34]);
        tmp_operand_name_11 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_32;
        }
        tmp_condition_result_45 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_getattr_target_11;
        PyObject *tmp_getattr_attr_11;
        PyObject *tmp_getattr_default_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_left_name_11 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_getattr_target_11 = tmp_class_creation_11__metaclass;
        tmp_getattr_attr_11 = mod_consts[36];
        tmp_getattr_default_11 = mod_consts[37];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tmp_getattr_target_11, tmp_getattr_attr_11, tmp_getattr_default_11);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_32;
        }
        tmp_right_name_11 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_56;
            PyObject *tmp_type_arg_11;
            PyTuple_SET_ITEM(tmp_right_name_11, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_11 = tmp_class_creation_11__prepared;
            tmp_expression_name_56 = BUILTIN_TYPE1(tmp_type_arg_11);
            assert(!(tmp_expression_name_56 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, mod_consts[36]);
            Py_DECREF(tmp_expression_name_56);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_right_name_11, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_right_name_11);
        goto try_except_handler_32;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_11, tmp_right_name_11);
        Py_DECREF(tmp_right_name_11);
        if (tmp_raise_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_32;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 282;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_32;
    }
    branch_no_34:;
    goto branch_end_33;
    branch_no_33:;
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = PyDict_New();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_81;
    }
    branch_end_33:;
    {
        PyObject *tmp_assign_source_82;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_34;
        }
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_34;
        }
        if (isFrameUnusable(cache_frame_ce10469e2dddcb5df5c765d44da484b2_12)) {
            Py_XDECREF(cache_frame_ce10469e2dddcb5df5c765d44da484b2_12);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ce10469e2dddcb5df5c765d44da484b2_12 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ce10469e2dddcb5df5c765d44da484b2_12 = MAKE_FUNCTION_FRAME(codeobj_ce10469e2dddcb5df5c765d44da484b2, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_ce10469e2dddcb5df5c765d44da484b2_12->m_type_description == NULL);
        frame_ce10469e2dddcb5df5c765d44da484b2_12 = cache_frame_ce10469e2dddcb5df5c765d44da484b2_12;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_ce10469e2dddcb5df5c765d44da484b2_12);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_ce10469e2dddcb5df5c765d44da484b2_12) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_22;
            PyObject *tmp_expression_name_57;
            PyObject *tmp_args_element_name_38;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_expression_name_57 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[6]);

            if (tmp_expression_name_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_57 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_expression_name_57 == NULL)) {
                        tmp_expression_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_expression_name_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 283;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_expression_name_57);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_called_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_57, mod_consts[42]);
            Py_DECREF(tmp_expression_name_57);
            if (tmp_called_name_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_dict_key_12 = mod_consts[173];
            tmp_dict_value_12 = mod_consts[23];
            tmp_annotations_1 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_name_58;
                PyObject *tmp_expression_name_59;
                PyObject *tmp_subscript_name_1;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[174];
                tmp_dict_value_12 = mod_consts[12];
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[175];
                tmp_expression_name_59 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[8]);

                if (tmp_expression_name_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_name_59 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_name_59 == NULL)) {
                            tmp_expression_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
                        }

                        if (tmp_expression_name_59 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 288;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_name_59);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_name_58 = LOOKUP_ATTRIBUTE(tmp_expression_name_59, mod_consts[176]);
                Py_DECREF(tmp_expression_name_59);
                if (tmp_expression_name_58 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_name_1 = mod_consts[177];
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_name_58, tmp_subscript_name_1);
                Py_DECREF(tmp_expression_name_58);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[178];
                tmp_dict_value_12 = mod_consts[22];
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_12;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_args_element_name_38 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__38_create_x509_csr(tmp_annotations_1);

            frame_ce10469e2dddcb5df5c765d44da484b2_12->m_frame.f_lineno = 283;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_38);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_args_element_name_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[180], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_name_23;
            PyObject *tmp_expression_name_60;
            PyObject *tmp_args_element_name_39;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_expression_name_60 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[6]);

            if (tmp_expression_name_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_60 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_expression_name_60 == NULL)) {
                        tmp_expression_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_expression_name_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 294;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_expression_name_60);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_60, mod_consts[42]);
            Py_DECREF(tmp_expression_name_60);
            if (tmp_called_name_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_dict_key_13 = mod_consts[173];
            tmp_dict_value_13 = mod_consts[19];
            tmp_annotations_2 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_name_61;
                PyObject *tmp_expression_name_62;
                PyObject *tmp_subscript_name_2;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[174];
                tmp_dict_value_13 = mod_consts[12];
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[175];
                tmp_expression_name_62 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[8]);

                if (tmp_expression_name_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_name_62 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_name_62 == NULL)) {
                            tmp_expression_name_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
                        }

                        if (tmp_expression_name_62 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 299;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_name_62);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_name_61 = LOOKUP_ATTRIBUTE(tmp_expression_name_62, mod_consts[176]);
                Py_DECREF(tmp_expression_name_62);
                if (tmp_expression_name_61 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 299;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_subscript_name_2 = mod_consts[177];
                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_name_61, tmp_subscript_name_2);
                Py_DECREF(tmp_expression_name_61);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 299;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[178];
                tmp_dict_value_13 = mod_consts[18];
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_called_name_23);
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_12;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_args_element_name_39 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__39_create_x509_certificate(tmp_annotations_2);

            frame_ce10469e2dddcb5df5c765d44da484b2_12->m_frame.f_lineno = 294;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_39);
            Py_DECREF(tmp_called_name_23);
            Py_DECREF(tmp_args_element_name_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[183], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_name_24;
            PyObject *tmp_expression_name_63;
            PyObject *tmp_args_element_name_40;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_expression_name_63 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[6]);

            if (tmp_expression_name_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_63 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_expression_name_63 == NULL)) {
                        tmp_expression_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_expression_name_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 305;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_expression_name_63);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[42]);
            Py_DECREF(tmp_expression_name_63);
            if (tmp_called_name_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_dict_key_14 = mod_consts[173];
            tmp_dict_value_14 = mod_consts[21];
            tmp_annotations_3 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_name_64;
                PyObject *tmp_expression_name_65;
                PyObject *tmp_subscript_name_3;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[174];
                tmp_dict_value_14 = mod_consts[12];
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[175];
                tmp_expression_name_65 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[8]);

                if (tmp_expression_name_65 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_name_65 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

                        if (unlikely(tmp_expression_name_65 == NULL)) {
                            tmp_expression_name_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
                        }

                        if (tmp_expression_name_65 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 310;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_name_65);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_expression_name_64 = LOOKUP_ATTRIBUTE(tmp_expression_name_65, mod_consts[176]);
                Py_DECREF(tmp_expression_name_65);
                if (tmp_expression_name_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 310;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_subscript_name_3 = mod_consts[177];
                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_name_64, tmp_subscript_name_3);
                Py_DECREF(tmp_expression_name_64);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 310;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[178];
                tmp_dict_value_14 = mod_consts[20];
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_12;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_args_element_name_40 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__40_create_x509_crl(tmp_annotations_3);

            frame_ce10469e2dddcb5df5c765d44da484b2_12->m_frame.f_lineno = 305;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, tmp_args_element_name_40);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_args_element_name_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[186], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_38;
            PyObject *tmp_args_element_name_41;
            PyObject *tmp_annotations_4;
            tmp_called_instance_38 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[6]);

            if (tmp_called_instance_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_38 == NULL)) {
                        tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 317;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_38);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_annotations_4 = PyDict_Copy(mod_consts[188]);


            tmp_args_element_name_41 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__41_create_x509_revoked_certificate(tmp_annotations_4);

            frame_ce10469e2dddcb5df5c765d44da484b2_12->m_frame.f_lineno = 317;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_38, mod_consts[42], tmp_args_element_name_41);
            Py_DECREF(tmp_called_instance_38);
            Py_DECREF(tmp_args_element_name_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[190], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_name_25;
            PyObject *tmp_expression_name_66;
            PyObject *tmp_args_element_name_42;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_expression_name_66 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[6]);

            if (tmp_expression_name_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_66 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_expression_name_66 == NULL)) {
                        tmp_expression_name_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_expression_name_66 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 326;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_expression_name_66);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_66, mod_consts[42]);
            Py_DECREF(tmp_expression_name_66);
            if (tmp_called_name_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_dict_key_15 = mod_consts[192];
            tmp_dict_value_15 = mod_consts[28];
            tmp_annotations_5 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[178];
            tmp_dict_value_15 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[193]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto dict_build_exception_4;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_called_name_25);
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_12;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_args_element_name_42 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__42_x509_name_bytes(tmp_annotations_5);

            frame_ce10469e2dddcb5df5c765d44da484b2_12->m_frame.f_lineno = 326;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, tmp_args_element_name_42);
            Py_DECREF(tmp_called_name_25);
            Py_DECREF(tmp_args_element_name_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282, mod_consts[195], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ce10469e2dddcb5df5c765d44da484b2_12);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;

        frame_exception_exit_12:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ce10469e2dddcb5df5c765d44da484b2_12);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ce10469e2dddcb5df5c765d44da484b2_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ce10469e2dddcb5df5c765d44da484b2_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ce10469e2dddcb5df5c765d44da484b2_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ce10469e2dddcb5df5c765d44da484b2_12,
            type_description_2,
            outline_10_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_ce10469e2dddcb5df5c765d44da484b2_12 == cache_frame_ce10469e2dddcb5df5c765d44da484b2_12) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_ce10469e2dddcb5df5c765d44da484b2_12);
            cache_frame_ce10469e2dddcb5df5c765d44da484b2_12 = NULL;
        }

        assertFrameObject(frame_ce10469e2dddcb5df5c765d44da484b2_12);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_11;

        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_34;
        skip_nested_handling_11:;
        {
            PyObject *tmp_assign_source_83;
            PyObject *tmp_called_name_26;
            PyObject *tmp_args_name_22;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_name_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_name_26 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_22 = mod_consts[172];
            tmp_args_name_22 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_22, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_args_name_22, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282;
            PyTuple_SET_ITEM0(tmp_args_name_22, 2, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_name_22 = tmp_class_creation_11__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 282;
            tmp_assign_source_83 = CALL_FUNCTION(tmp_called_name_26, tmp_args_name_22, tmp_kwargs_name_22);
            Py_DECREF(tmp_args_name_22);
            if (tmp_assign_source_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;

                goto try_except_handler_34;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_83;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_82 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_82);
        goto try_return_handler_34;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282);
        locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282 = NULL;
        goto try_return_handler_33;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282);
        locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_282 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto try_except_handler_33;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 282;
        goto try_except_handler_32;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_82);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_name_67;
        tmp_dict_key_16 = mod_consts[29];
        tmp_expression_name_67 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_67 == NULL)) {
            tmp_expression_name_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_35;
        }
        tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_67, mod_consts[30]);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_35;
        }
        tmp_assign_source_84 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_84, tmp_dict_key_16, tmp_dict_value_16);
        Py_DECREF(tmp_dict_value_16);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_metaclass_name_12;
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_key_name_34;
        PyObject *tmp_dict_arg_name_34;
        PyObject *tmp_dict_arg_name_35;
        PyObject *tmp_key_name_35;
        PyObject *tmp_bases_name_12;
        tmp_key_name_34 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_name_34 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_34, tmp_key_name_34);
        assert(!(tmp_res == -1));
        tmp_condition_result_46 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_name_35 = tmp_class_creation_12__class_decl_dict;
        tmp_key_name_35 = mod_consts[29];
        tmp_metaclass_name_12 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_35, tmp_key_name_35);
        if (tmp_metaclass_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_35;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_name_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_12);
        condexpr_end_12:;
        tmp_bases_name_12 = mod_consts[31];
        tmp_assign_source_85 = SELECT_METACLASS(tmp_metaclass_name_12, tmp_bases_name_12);
        Py_DECREF(tmp_metaclass_name_12);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_85;
    }
    {
        nuitka_bool tmp_condition_result_47;
        PyObject *tmp_key_name_36;
        PyObject *tmp_dict_arg_name_36;
        tmp_key_name_36 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_name_36 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_36, tmp_key_name_36);
        assert(!(tmp_res == -1));
        tmp_condition_result_47 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 333;

        goto try_except_handler_35;
    }
    branch_no_35:;
    {
        nuitka_bool tmp_condition_result_48;
        PyObject *tmp_expression_name_68;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_name_68 = tmp_class_creation_12__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_68, mod_consts[32]);
        tmp_condition_result_48 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_name_27;
        PyObject *tmp_expression_name_69;
        PyObject *tmp_args_name_23;
        PyObject *tmp_kwargs_name_23;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_name_69 = tmp_class_creation_12__metaclass;
        tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_69, mod_consts[32]);
        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_35;
        }
        tmp_args_name_23 = mod_consts[197];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_name_23 = tmp_class_creation_12__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 333;
        tmp_assign_source_86 = CALL_FUNCTION(tmp_called_name_27, tmp_args_name_23, tmp_kwargs_name_23);
        Py_DECREF(tmp_called_name_27);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_86;
    }
    {
        nuitka_bool tmp_condition_result_49;
        PyObject *tmp_operand_name_12;
        PyObject *tmp_expression_name_70;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_name_70 = tmp_class_creation_12__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_70, mod_consts[34]);
        tmp_operand_name_12 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_35;
        }
        tmp_condition_result_49 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_getattr_target_12;
        PyObject *tmp_getattr_attr_12;
        PyObject *tmp_getattr_default_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_left_name_12 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_getattr_target_12 = tmp_class_creation_12__metaclass;
        tmp_getattr_attr_12 = mod_consts[36];
        tmp_getattr_default_12 = mod_consts[37];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_12, tmp_getattr_attr_12, tmp_getattr_default_12);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_35;
        }
        tmp_right_name_12 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_71;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_right_name_12, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_12 = tmp_class_creation_12__prepared;
            tmp_expression_name_71 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_name_71 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_71, mod_consts[36]);
            Py_DECREF(tmp_expression_name_71);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_right_name_12, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_right_name_12);
        goto try_except_handler_35;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_12, tmp_right_name_12);
        Py_DECREF(tmp_right_name_12);
        if (tmp_raise_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_35;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 333;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_35;
    }
    branch_no_37:;
    goto branch_end_36;
    branch_no_36:;
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = PyDict_New();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_87;
    }
    branch_end_36:;
    {
        PyObject *tmp_assign_source_88;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_37;
        }
        tmp_dictset_value = mod_consts[198];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_37;
        }
        if (isFrameUnusable(cache_frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13)) {
            Py_XDECREF(cache_frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13);

#if _DEBUG_REFCOUNTS
            if (cache_frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13 = MAKE_FUNCTION_FRAME(codeobj_8a5b78a0dfd46d3b1730ea24da5f37e7, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13->m_type_description == NULL);
        frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13 = cache_frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_39;
            PyObject *tmp_args_element_name_43;
            tmp_called_instance_39 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[6]);

            if (tmp_called_instance_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_39 == NULL)) {
                        tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 334;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_39);
                } else {
                    goto frame_exception_exit_13;
                }
            }



            tmp_args_element_name_43 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__43_generate_dh_parameters();

            frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13->m_frame.f_lineno = 334;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_39, mod_consts[42], tmp_args_element_name_43);
            Py_DECREF(tmp_called_instance_39);
            Py_DECREF(tmp_args_element_name_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[200], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_40;
            PyObject *tmp_args_element_name_44;
            tmp_called_instance_40 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[6]);

            if (tmp_called_instance_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_40 == NULL)) {
                        tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 341;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_40);
                } else {
                    goto frame_exception_exit_13;
                }
            }



            tmp_args_element_name_44 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__44_generate_dh_private_key();

            frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13->m_frame.f_lineno = 341;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_40, mod_consts[42], tmp_args_element_name_44);
            Py_DECREF(tmp_called_instance_40);
            Py_DECREF(tmp_args_element_name_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[203], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_41;
            PyObject *tmp_args_element_name_45;
            tmp_called_instance_41 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[6]);

            if (tmp_called_instance_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_41 == NULL)) {
                        tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 348;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_41);
                } else {
                    goto frame_exception_exit_13;
                }
            }



            tmp_args_element_name_45 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__45_generate_dh_private_key_and_parameters();

            frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13->m_frame.f_lineno = 348;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_41, mod_consts[42], tmp_args_element_name_45);
            Py_DECREF(tmp_called_instance_41);
            Py_DECREF(tmp_args_element_name_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[206], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_42;
            PyObject *tmp_args_element_name_46;
            tmp_called_instance_42 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[6]);

            if (tmp_called_instance_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_42 == NULL)) {
                        tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 355;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_42);
                } else {
                    goto frame_exception_exit_13;
                }
            }



            tmp_args_element_name_46 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__46_load_dh_private_numbers();

            frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13->m_frame.f_lineno = 355;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_42, mod_consts[42], tmp_args_element_name_46);
            Py_DECREF(tmp_called_instance_42);
            Py_DECREF(tmp_args_element_name_46);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[209], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_43;
            PyObject *tmp_args_element_name_47;
            tmp_called_instance_43 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[6]);

            if (tmp_called_instance_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_43 == NULL)) {
                        tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 361;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_43);
                } else {
                    goto frame_exception_exit_13;
                }
            }



            tmp_args_element_name_47 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__47_load_dh_public_numbers();

            frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13->m_frame.f_lineno = 361;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_43, mod_consts[42], tmp_args_element_name_47);
            Py_DECREF(tmp_called_instance_43);
            Py_DECREF(tmp_args_element_name_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[212], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_44;
            PyObject *tmp_args_element_name_48;
            tmp_called_instance_44 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[6]);

            if (tmp_called_instance_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_44 == NULL)) {
                        tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 367;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_44);
                } else {
                    goto frame_exception_exit_13;
                }
            }



            tmp_args_element_name_48 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__48_load_dh_parameter_numbers();

            frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13->m_frame.f_lineno = 367;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_44, mod_consts[42], tmp_args_element_name_48);
            Py_DECREF(tmp_called_instance_44);
            Py_DECREF(tmp_args_element_name_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[215], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_45;
            PyObject *tmp_args_element_name_49;
            PyObject *tmp_defaults_1;
            tmp_called_instance_45 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[6]);

            if (tmp_called_instance_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_45 == NULL)) {
                        tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 373;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_45);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            tmp_defaults_1 = mod_consts[217];
            Py_INCREF(tmp_defaults_1);


            tmp_args_element_name_49 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__49_dh_parameters_supported(tmp_defaults_1);

            frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13->m_frame.f_lineno = 373;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_45, mod_consts[42], tmp_args_element_name_49);
            Py_DECREF(tmp_called_instance_45);
            Py_DECREF(tmp_args_element_name_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[219], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_46;
            PyObject *tmp_args_element_name_50;
            tmp_called_instance_46 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[6]);

            if (tmp_called_instance_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_46 == NULL)) {
                        tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 379;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_46);
                } else {
                    goto frame_exception_exit_13;
                }
            }



            tmp_args_element_name_50 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__50_dh_x942_serialization_supported();

            frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13->m_frame.f_lineno = 379;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_46, mod_consts[42], tmp_args_element_name_50);
            Py_DECREF(tmp_called_instance_46);
            Py_DECREF(tmp_args_element_name_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333, mod_consts[222], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_12;

        frame_exception_exit_13:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13,
            type_description_2,
            outline_11_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13 == cache_frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13);
            cache_frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13 = NULL;
        }

        assertFrameObject(frame_8a5b78a0dfd46d3b1730ea24da5f37e7_13);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_12;

        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_37;
        skip_nested_handling_12:;
        {
            PyObject *tmp_assign_source_89;
            PyObject *tmp_called_name_28;
            PyObject *tmp_args_name_24;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_name_24;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_name_28 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_24 = mod_consts[198];
            tmp_args_name_24 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_24, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_args_name_24, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333;
            PyTuple_SET_ITEM0(tmp_args_name_24, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_name_24 = tmp_class_creation_12__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 333;
            tmp_assign_source_89 = CALL_FUNCTION(tmp_called_name_28, tmp_args_name_24, tmp_kwargs_name_24);
            Py_DECREF(tmp_args_name_24);
            if (tmp_assign_source_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto try_except_handler_37;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_89;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_88 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_88);
        goto try_return_handler_37;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333);
        locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333 = NULL;
        goto try_return_handler_36;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333);
        locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_333 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto try_except_handler_36;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 333;
        goto try_except_handler_35;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_88);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_expression_name_72;
        tmp_dict_key_17 = mod_consts[29];
        tmp_expression_name_72 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_72 == NULL)) {
            tmp_expression_name_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto try_except_handler_38;
        }
        tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_72, mod_consts[30]);
        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto try_except_handler_38;
        }
        tmp_assign_source_90 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_90, tmp_dict_key_17, tmp_dict_value_17);
        Py_DECREF(tmp_dict_value_17);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_90;
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_metaclass_name_13;
        nuitka_bool tmp_condition_result_50;
        PyObject *tmp_key_name_37;
        PyObject *tmp_dict_arg_name_37;
        PyObject *tmp_dict_arg_name_38;
        PyObject *tmp_key_name_38;
        PyObject *tmp_bases_name_13;
        tmp_key_name_37 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_name_37 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_37, tmp_key_name_37);
        assert(!(tmp_res == -1));
        tmp_condition_result_50 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_name_38 = tmp_class_creation_13__class_decl_dict;
        tmp_key_name_38 = mod_consts[29];
        tmp_metaclass_name_13 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_38, tmp_key_name_38);
        if (tmp_metaclass_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto try_except_handler_38;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_metaclass_name_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_13);
        condexpr_end_13:;
        tmp_bases_name_13 = mod_consts[31];
        tmp_assign_source_91 = SELECT_METACLASS(tmp_metaclass_name_13, tmp_bases_name_13);
        Py_DECREF(tmp_metaclass_name_13);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_91;
    }
    {
        nuitka_bool tmp_condition_result_51;
        PyObject *tmp_key_name_39;
        PyObject *tmp_dict_arg_name_39;
        tmp_key_name_39 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_name_39 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_39, tmp_key_name_39);
        assert(!(tmp_res == -1));
        tmp_condition_result_51 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 387;

        goto try_except_handler_38;
    }
    branch_no_38:;
    {
        nuitka_bool tmp_condition_result_52;
        PyObject *tmp_expression_name_73;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_name_73 = tmp_class_creation_13__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_73, mod_consts[32]);
        tmp_condition_result_52 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_name_29;
        PyObject *tmp_expression_name_74;
        PyObject *tmp_args_name_25;
        PyObject *tmp_kwargs_name_25;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_name_74 = tmp_class_creation_13__metaclass;
        tmp_called_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_74, mod_consts[32]);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto try_except_handler_38;
        }
        tmp_args_name_25 = mod_consts[224];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_name_25 = tmp_class_creation_13__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 387;
        tmp_assign_source_92 = CALL_FUNCTION(tmp_called_name_29, tmp_args_name_25, tmp_kwargs_name_25);
        Py_DECREF(tmp_called_name_29);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_92;
    }
    {
        nuitka_bool tmp_condition_result_53;
        PyObject *tmp_operand_name_13;
        PyObject *tmp_expression_name_75;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_name_75 = tmp_class_creation_13__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_75, mod_consts[34]);
        tmp_operand_name_13 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto try_except_handler_38;
        }
        tmp_condition_result_53 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_getattr_target_13;
        PyObject *tmp_getattr_attr_13;
        PyObject *tmp_getattr_default_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_left_name_13 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_getattr_target_13 = tmp_class_creation_13__metaclass;
        tmp_getattr_attr_13 = mod_consts[36];
        tmp_getattr_default_13 = mod_consts[37];
        tmp_tuple_element_25 = BUILTIN_GETATTR(tmp_getattr_target_13, tmp_getattr_attr_13, tmp_getattr_default_13);
        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto try_except_handler_38;
        }
        tmp_right_name_13 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_76;
            PyObject *tmp_type_arg_13;
            PyTuple_SET_ITEM(tmp_right_name_13, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_13 = tmp_class_creation_13__prepared;
            tmp_expression_name_76 = BUILTIN_TYPE1(tmp_type_arg_13);
            assert(!(tmp_expression_name_76 == NULL));
            tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_76, mod_consts[36]);
            Py_DECREF(tmp_expression_name_76);
            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_right_name_13, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_right_name_13);
        goto try_except_handler_38;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_right_name_13);
        if (tmp_raise_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto try_except_handler_38;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 387;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_38;
    }
    branch_no_40:;
    goto branch_end_39;
    branch_no_39:;
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = PyDict_New();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_93;
    }
    branch_end_39:;
    {
        PyObject *tmp_assign_source_94;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_387 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_387, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto try_except_handler_40;
        }
        tmp_dictset_value = mod_consts[225];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_387, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto try_except_handler_40;
        }
        if (isFrameUnusable(cache_frame_2de1fc22ae5ee02d8a94b9412d05281e_14)) {
            Py_XDECREF(cache_frame_2de1fc22ae5ee02d8a94b9412d05281e_14);

#if _DEBUG_REFCOUNTS
            if (cache_frame_2de1fc22ae5ee02d8a94b9412d05281e_14 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_2de1fc22ae5ee02d8a94b9412d05281e_14 = MAKE_FUNCTION_FRAME(codeobj_2de1fc22ae5ee02d8a94b9412d05281e, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_2de1fc22ae5ee02d8a94b9412d05281e_14->m_type_description == NULL);
        frame_2de1fc22ae5ee02d8a94b9412d05281e_14 = cache_frame_2de1fc22ae5ee02d8a94b9412d05281e_14;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_2de1fc22ae5ee02d8a94b9412d05281e_14);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_2de1fc22ae5ee02d8a94b9412d05281e_14) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_47;
            PyObject *tmp_args_element_name_51;
            tmp_called_instance_47 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_387, mod_consts[6]);

            if (tmp_called_instance_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_47 == NULL)) {
                        tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 388;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_47);
                } else {
                    goto frame_exception_exit_14;
                }
            }



            tmp_args_element_name_51 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__51_derive_scrypt();

            frame_2de1fc22ae5ee02d8a94b9412d05281e_14->m_frame.f_lineno = 388;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_47, mod_consts[42], tmp_args_element_name_51);
            Py_DECREF(tmp_called_instance_47);
            Py_DECREF(tmp_args_element_name_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_387, mod_consts[227], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_called_instance_48;
            PyObject *tmp_args_element_name_52;
            tmp_called_instance_48 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_387, mod_consts[6]);

            if (tmp_called_instance_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_48 == NULL)) {
                        tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 394;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_48);
                } else {
                    goto frame_exception_exit_14;
                }
            }



            tmp_args_element_name_52 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__52_scrypt_supported();

            frame_2de1fc22ae5ee02d8a94b9412d05281e_14->m_frame.f_lineno = 394;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_48, mod_consts[42], tmp_args_element_name_52);
            Py_DECREF(tmp_called_instance_48);
            Py_DECREF(tmp_args_element_name_52);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_387, mod_consts[230], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2de1fc22ae5ee02d8a94b9412d05281e_14);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_13;

        frame_exception_exit_14:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2de1fc22ae5ee02d8a94b9412d05281e_14);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2de1fc22ae5ee02d8a94b9412d05281e_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2de1fc22ae5ee02d8a94b9412d05281e_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2de1fc22ae5ee02d8a94b9412d05281e_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2de1fc22ae5ee02d8a94b9412d05281e_14,
            type_description_2,
            outline_12_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_2de1fc22ae5ee02d8a94b9412d05281e_14 == cache_frame_2de1fc22ae5ee02d8a94b9412d05281e_14) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_2de1fc22ae5ee02d8a94b9412d05281e_14);
            cache_frame_2de1fc22ae5ee02d8a94b9412d05281e_14 = NULL;
        }

        assertFrameObject(frame_2de1fc22ae5ee02d8a94b9412d05281e_14);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_13;

        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_13:;

        goto try_except_handler_40;
        skip_nested_handling_13:;
        {
            PyObject *tmp_assign_source_95;
            PyObject *tmp_called_name_30;
            PyObject *tmp_args_name_26;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_name_26;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_name_30 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_26 = mod_consts[225];
            tmp_args_name_26 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_26, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_args_name_26, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_387;
            PyTuple_SET_ITEM0(tmp_args_name_26, 2, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_name_26 = tmp_class_creation_13__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 387;
            tmp_assign_source_95 = CALL_FUNCTION(tmp_called_name_30, tmp_args_name_26, tmp_kwargs_name_26);
            Py_DECREF(tmp_args_name_26);
            if (tmp_assign_source_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;

                goto try_except_handler_40;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_95;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_94 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_94);
        goto try_return_handler_40;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_387);
        locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_387 = NULL;
        goto try_return_handler_39;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_387);
        locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_387 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto try_except_handler_39;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 387;
        goto try_except_handler_38;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_94);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_tuple_element_27;
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_41;
        }
        tmp_assign_source_96 = PyTuple_New(13);
        PyTuple_SET_ITEM0(tmp_assign_source_96, 0, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_96, 1, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_96, 2, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_96, 3, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_96, 4, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_96, 5, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_96, 6, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_96, 7, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_96, 8, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_96, 9, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_96, 10, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[225]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[225]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_96, 11, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_96, 12, tmp_tuple_element_27);
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_assign_source_96);
        goto try_except_handler_41;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        assert(tmp_class_creation_14__bases_orig == NULL);
        tmp_class_creation_14__bases_orig = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_14__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_97 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__bases == NULL);
        tmp_class_creation_14__bases = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_expression_name_77;
        tmp_dict_key_18 = mod_consts[29];
        tmp_expression_name_77 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_77 == NULL)) {
            tmp_expression_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto try_except_handler_41;
        }
        tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_77, mod_consts[30]);
        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto try_except_handler_41;
        }
        tmp_assign_source_98 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_98, tmp_dict_key_18, tmp_dict_value_18);
        Py_DECREF(tmp_dict_value_18);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_98;
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_metaclass_name_14;
        nuitka_bool tmp_condition_result_54;
        PyObject *tmp_key_name_40;
        PyObject *tmp_dict_arg_name_40;
        PyObject *tmp_dict_arg_name_41;
        PyObject *tmp_key_name_41;
        nuitka_bool tmp_condition_result_55;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_14;
        PyObject *tmp_expression_name_78;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_14;
        tmp_key_name_40 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_name_40 = tmp_class_creation_14__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_40, tmp_key_name_40);
        assert(!(tmp_res == -1));
        tmp_condition_result_54 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_name_41 = tmp_class_creation_14__class_decl_dict;
        tmp_key_name_41 = mod_consts[29];
        tmp_metaclass_name_14 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_41, tmp_key_name_41);
        if (tmp_metaclass_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_41;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_14__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_41;
        }
        tmp_condition_result_55 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_expression_name_78 = tmp_class_creation_14__bases;
        tmp_subscript_name_4 = mod_consts[7];
        tmp_type_arg_14 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_78, tmp_subscript_name_4, 0);
        if (tmp_type_arg_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_41;
        }
        tmp_metaclass_name_14 = BUILTIN_TYPE1(tmp_type_arg_14);
        Py_DECREF(tmp_type_arg_14);
        if (tmp_metaclass_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_41;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        tmp_metaclass_name_14 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_14);
        condexpr_end_15:;
        condexpr_end_14:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_bases_name_14 = tmp_class_creation_14__bases;
        tmp_assign_source_99 = SELECT_METACLASS(tmp_metaclass_name_14, tmp_bases_name_14);
        Py_DECREF(tmp_metaclass_name_14);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_99;
    }
    {
        nuitka_bool tmp_condition_result_56;
        PyObject *tmp_key_name_42;
        PyObject *tmp_dict_arg_name_42;
        tmp_key_name_42 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_name_42 = tmp_class_creation_14__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_42, tmp_key_name_42);
        assert(!(tmp_res == -1));
        tmp_condition_result_56 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_14__class_decl_dict;
    tmp_dictdel_key = mod_consts[29];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 416;

        goto try_except_handler_41;
    }
    branch_no_41:;
    {
        nuitka_bool tmp_condition_result_57;
        PyObject *tmp_expression_name_79;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_name_79 = tmp_class_creation_14__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_79, mod_consts[32]);
        tmp_condition_result_57 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_name_31;
        PyObject *tmp_expression_name_80;
        PyObject *tmp_args_name_27;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_kwargs_name_27;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_name_80 = tmp_class_creation_14__metaclass;
        tmp_called_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_80, mod_consts[32]);
        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_41;
        }
        tmp_tuple_element_28 = mod_consts[232];
        tmp_args_name_27 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_27, 0, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_tuple_element_28 = tmp_class_creation_14__bases;
        PyTuple_SET_ITEM0(tmp_args_name_27, 1, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_name_27 = tmp_class_creation_14__class_decl_dict;
        frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 416;
        tmp_assign_source_100 = CALL_FUNCTION(tmp_called_name_31, tmp_args_name_27, tmp_kwargs_name_27);
        Py_DECREF(tmp_called_name_31);
        Py_DECREF(tmp_args_name_27);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_100;
    }
    {
        nuitka_bool tmp_condition_result_58;
        PyObject *tmp_operand_name_14;
        PyObject *tmp_expression_name_81;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_name_81 = tmp_class_creation_14__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_81, mod_consts[34]);
        tmp_operand_name_14 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_14);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_41;
        }
        tmp_condition_result_58 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_getattr_target_14;
        PyObject *tmp_getattr_attr_14;
        PyObject *tmp_getattr_default_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_left_name_14 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_getattr_target_14 = tmp_class_creation_14__metaclass;
        tmp_getattr_attr_14 = mod_consts[36];
        tmp_getattr_default_14 = mod_consts[37];
        tmp_tuple_element_29 = BUILTIN_GETATTR(tmp_getattr_target_14, tmp_getattr_attr_14, tmp_getattr_default_14);
        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_41;
        }
        tmp_right_name_14 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_82;
            PyObject *tmp_type_arg_15;
            PyTuple_SET_ITEM(tmp_right_name_14, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_15 = tmp_class_creation_14__prepared;
            tmp_expression_name_82 = BUILTIN_TYPE1(tmp_type_arg_15);
            assert(!(tmp_expression_name_82 == NULL));
            tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_82, mod_consts[36]);
            Py_DECREF(tmp_expression_name_82);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_right_name_14, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_right_name_14);
        goto try_except_handler_41;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_14, tmp_right_name_14);
        Py_DECREF(tmp_right_name_14);
        if (tmp_raise_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_41;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 416;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_41;
    }
    branch_no_43:;
    goto branch_end_42;
    branch_no_42:;
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = PyDict_New();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_101;
    }
    branch_end_42:;
    {
        PyObject *tmp_assign_source_102;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_43;
        }
        tmp_dictset_value = mod_consts[232];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_43;
        }
        if (isFrameUnusable(cache_frame_7ffb22780442ef51b582a630ac5dcd02_15)) {
            Py_XDECREF(cache_frame_7ffb22780442ef51b582a630ac5dcd02_15);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7ffb22780442ef51b582a630ac5dcd02_15 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7ffb22780442ef51b582a630ac5dcd02_15 = MAKE_FUNCTION_FRAME(codeobj_7ffb22780442ef51b582a630ac5dcd02, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_7ffb22780442ef51b582a630ac5dcd02_15->m_type_description == NULL);
        frame_7ffb22780442ef51b582a630ac5dcd02_15 = cache_frame_7ffb22780442ef51b582a630ac5dcd02_15;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_7ffb22780442ef51b582a630ac5dcd02_15);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_7ffb22780442ef51b582a630ac5dcd02_15) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_49;
            PyObject *tmp_args_element_name_53;
            tmp_called_instance_49 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416, mod_consts[6]);

            if (tmp_called_instance_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_49 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_49 == NULL)) {
                        tmp_called_instance_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 419;
                        type_description_2 = "o";
                        goto frame_exception_exit_15;
                    }
                    Py_INCREF(tmp_called_instance_49);
                } else {
                    goto frame_exception_exit_15;
                }
            }



            tmp_args_element_name_53 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__53_load_pem_pkcs7_certificates();

            frame_7ffb22780442ef51b582a630ac5dcd02_15->m_frame.f_lineno = 419;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_49, mod_consts[42], tmp_args_element_name_53);
            Py_DECREF(tmp_called_instance_49);
            Py_DECREF(tmp_args_element_name_53);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416, mod_consts[234], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
        }
        {
            PyObject *tmp_called_instance_50;
            PyObject *tmp_args_element_name_54;
            tmp_called_instance_50 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416, mod_consts[6]);

            if (tmp_called_instance_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_50 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_50 == NULL)) {
                        tmp_called_instance_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 425;
                        type_description_2 = "o";
                        goto frame_exception_exit_15;
                    }
                    Py_INCREF(tmp_called_instance_50);
                } else {
                    goto frame_exception_exit_15;
                }
            }



            tmp_args_element_name_54 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__54_load_der_pkcs7_certificates();

            frame_7ffb22780442ef51b582a630ac5dcd02_15->m_frame.f_lineno = 425;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_50, mod_consts[42], tmp_args_element_name_54);
            Py_DECREF(tmp_called_instance_50);
            Py_DECREF(tmp_args_element_name_54);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416, mod_consts[236], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
        }
        {
            PyObject *tmp_called_instance_51;
            PyObject *tmp_args_element_name_55;
            tmp_called_instance_51 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416, mod_consts[6]);

            if (tmp_called_instance_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_51 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_51 == NULL)) {
                        tmp_called_instance_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 431;
                        type_description_2 = "o";
                        goto frame_exception_exit_15;
                    }
                    Py_INCREF(tmp_called_instance_51);
                } else {
                    goto frame_exception_exit_15;
                }
            }



            tmp_args_element_name_55 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__55_pkcs7_sign();

            frame_7ffb22780442ef51b582a630ac5dcd02_15->m_frame.f_lineno = 431;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_51, mod_consts[42], tmp_args_element_name_55);
            Py_DECREF(tmp_called_instance_51);
            Py_DECREF(tmp_args_element_name_55);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416, mod_consts[239], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
        }
        {
            PyObject *tmp_called_instance_52;
            PyObject *tmp_args_element_name_56;
            tmp_called_instance_52 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416, mod_consts[6]);

            if (tmp_called_instance_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_52 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_52 == NULL)) {
                        tmp_called_instance_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 437;
                        type_description_2 = "o";
                        goto frame_exception_exit_15;
                    }
                    Py_INCREF(tmp_called_instance_52);
                } else {
                    goto frame_exception_exit_15;
                }
            }



            tmp_args_element_name_56 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__56_load_key_and_certificates_from_pkcs12();

            frame_7ffb22780442ef51b582a630ac5dcd02_15->m_frame.f_lineno = 437;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_52, mod_consts[42], tmp_args_element_name_56);
            Py_DECREF(tmp_called_instance_52);
            Py_DECREF(tmp_args_element_name_56);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416, mod_consts[242], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
        }
        {
            PyObject *tmp_called_instance_53;
            PyObject *tmp_args_element_name_57;
            tmp_called_instance_53 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416, mod_consts[6]);

            if (tmp_called_instance_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_53 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_instance_53 == NULL)) {
                        tmp_called_instance_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_instance_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 443;
                        type_description_2 = "o";
                        goto frame_exception_exit_15;
                    }
                    Py_INCREF(tmp_called_instance_53);
                } else {
                    goto frame_exception_exit_15;
                }
            }



            tmp_args_element_name_57 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__57_serialize_key_and_certificates_to_pkcs12();

            frame_7ffb22780442ef51b582a630ac5dcd02_15->m_frame.f_lineno = 443;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_53, mod_consts[42], tmp_args_element_name_57);
            Py_DECREF(tmp_called_instance_53);
            Py_DECREF(tmp_args_element_name_57);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416, mod_consts[244], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7ffb22780442ef51b582a630ac5dcd02_15);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_14;

        frame_exception_exit_15:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7ffb22780442ef51b582a630ac5dcd02_15);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7ffb22780442ef51b582a630ac5dcd02_15, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7ffb22780442ef51b582a630ac5dcd02_15->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7ffb22780442ef51b582a630ac5dcd02_15, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7ffb22780442ef51b582a630ac5dcd02_15,
            type_description_2,
            outline_13_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_7ffb22780442ef51b582a630ac5dcd02_15 == cache_frame_7ffb22780442ef51b582a630ac5dcd02_15) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_7ffb22780442ef51b582a630ac5dcd02_15);
            cache_frame_7ffb22780442ef51b582a630ac5dcd02_15 = NULL;
        }

        assertFrameObject(frame_7ffb22780442ef51b582a630ac5dcd02_15);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_14;

        frame_no_exception_14:;
        goto skip_nested_handling_14;
        nested_frame_exit_14:;

        goto try_except_handler_43;
        skip_nested_handling_14:;
        {
            nuitka_bool tmp_condition_result_59;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_compexpr_left_1 = tmp_class_creation_14__bases;
            CHECK_OBJECT(tmp_class_creation_14__bases_orig);
            tmp_compexpr_right_1 = tmp_class_creation_14__bases_orig;
            tmp_condition_result_59 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_59 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto try_except_handler_43;
            }
            if (tmp_condition_result_59 == NUITKA_BOOL_TRUE) {
                goto branch_yes_44;
            } else {
                goto branch_no_44;
            }
            assert(tmp_condition_result_59 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_44:;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dictset_value = tmp_class_creation_14__bases_orig;
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416, mod_consts[246], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_43;
        }
        branch_no_44:;
        {
            PyObject *tmp_assign_source_103;
            PyObject *tmp_called_name_32;
            PyObject *tmp_args_name_28;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kwargs_name_28;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_name_32 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_30 = mod_consts[232];
            tmp_args_name_28 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_28, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_tuple_element_30 = tmp_class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_name_28, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416;
            PyTuple_SET_ITEM0(tmp_args_name_28, 2, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_name_28 = tmp_class_creation_14__class_decl_dict;
            frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame.f_lineno = 416;
            tmp_assign_source_103 = CALL_FUNCTION(tmp_called_name_32, tmp_args_name_28, tmp_kwargs_name_28);
            Py_DECREF(tmp_args_name_28);
            if (tmp_assign_source_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto try_except_handler_43;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_103;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_assign_source_102 = outline_13_var___class__;
        Py_INCREF(tmp_assign_source_102);
        goto try_return_handler_43;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416);
        locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416 = NULL;
        goto try_return_handler_42;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416);
        locals_cryptography$hazmat$backends$interfaces$$$class__14_Backend_416 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto try_except_handler_42;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;
        exception_lineno = exception_keeper_lineno_42;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 416;
        goto try_except_handler_41;
        outline_result_14:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_102);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4e2d8d1d36773e2903c16140002ae3f8);
#endif
    popFrameStack();

    assertFrameObject(frame_4e2d8d1d36773e2903c16140002ae3f8);

    goto frame_no_exception_15;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4e2d8d1d36773e2903c16140002ae3f8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4e2d8d1d36773e2903c16140002ae3f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e2d8d1d36773e2903c16140002ae3f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e2d8d1d36773e2903c16140002ae3f8, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_15:;
    CHECK_OBJECT(tmp_class_creation_14__bases_orig);
    Py_DECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;

    return module_cryptography$hazmat$backends$interfaces;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

