#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ABE80
// Address: 0x4abe80 - 0x4ac458
void sub_004ABE80_0x4abe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABE80_0x4abe80");
#endif

    switch (ctx->pc) {
        case 0x4abe80u: goto label_4abe80;
        case 0x4abe84u: goto label_4abe84;
        case 0x4abe88u: goto label_4abe88;
        case 0x4abe8cu: goto label_4abe8c;
        case 0x4abe90u: goto label_4abe90;
        case 0x4abe94u: goto label_4abe94;
        case 0x4abe98u: goto label_4abe98;
        case 0x4abe9cu: goto label_4abe9c;
        case 0x4abea0u: goto label_4abea0;
        case 0x4abea4u: goto label_4abea4;
        case 0x4abea8u: goto label_4abea8;
        case 0x4abeacu: goto label_4abeac;
        case 0x4abeb0u: goto label_4abeb0;
        case 0x4abeb4u: goto label_4abeb4;
        case 0x4abeb8u: goto label_4abeb8;
        case 0x4abebcu: goto label_4abebc;
        case 0x4abec0u: goto label_4abec0;
        case 0x4abec4u: goto label_4abec4;
        case 0x4abec8u: goto label_4abec8;
        case 0x4abeccu: goto label_4abecc;
        case 0x4abed0u: goto label_4abed0;
        case 0x4abed4u: goto label_4abed4;
        case 0x4abed8u: goto label_4abed8;
        case 0x4abedcu: goto label_4abedc;
        case 0x4abee0u: goto label_4abee0;
        case 0x4abee4u: goto label_4abee4;
        case 0x4abee8u: goto label_4abee8;
        case 0x4abeecu: goto label_4abeec;
        case 0x4abef0u: goto label_4abef0;
        case 0x4abef4u: goto label_4abef4;
        case 0x4abef8u: goto label_4abef8;
        case 0x4abefcu: goto label_4abefc;
        case 0x4abf00u: goto label_4abf00;
        case 0x4abf04u: goto label_4abf04;
        case 0x4abf08u: goto label_4abf08;
        case 0x4abf0cu: goto label_4abf0c;
        case 0x4abf10u: goto label_4abf10;
        case 0x4abf14u: goto label_4abf14;
        case 0x4abf18u: goto label_4abf18;
        case 0x4abf1cu: goto label_4abf1c;
        case 0x4abf20u: goto label_4abf20;
        case 0x4abf24u: goto label_4abf24;
        case 0x4abf28u: goto label_4abf28;
        case 0x4abf2cu: goto label_4abf2c;
        case 0x4abf30u: goto label_4abf30;
        case 0x4abf34u: goto label_4abf34;
        case 0x4abf38u: goto label_4abf38;
        case 0x4abf3cu: goto label_4abf3c;
        case 0x4abf40u: goto label_4abf40;
        case 0x4abf44u: goto label_4abf44;
        case 0x4abf48u: goto label_4abf48;
        case 0x4abf4cu: goto label_4abf4c;
        case 0x4abf50u: goto label_4abf50;
        case 0x4abf54u: goto label_4abf54;
        case 0x4abf58u: goto label_4abf58;
        case 0x4abf5cu: goto label_4abf5c;
        case 0x4abf60u: goto label_4abf60;
        case 0x4abf64u: goto label_4abf64;
        case 0x4abf68u: goto label_4abf68;
        case 0x4abf6cu: goto label_4abf6c;
        case 0x4abf70u: goto label_4abf70;
        case 0x4abf74u: goto label_4abf74;
        case 0x4abf78u: goto label_4abf78;
        case 0x4abf7cu: goto label_4abf7c;
        case 0x4abf80u: goto label_4abf80;
        case 0x4abf84u: goto label_4abf84;
        case 0x4abf88u: goto label_4abf88;
        case 0x4abf8cu: goto label_4abf8c;
        case 0x4abf90u: goto label_4abf90;
        case 0x4abf94u: goto label_4abf94;
        case 0x4abf98u: goto label_4abf98;
        case 0x4abf9cu: goto label_4abf9c;
        case 0x4abfa0u: goto label_4abfa0;
        case 0x4abfa4u: goto label_4abfa4;
        case 0x4abfa8u: goto label_4abfa8;
        case 0x4abfacu: goto label_4abfac;
        case 0x4abfb0u: goto label_4abfb0;
        case 0x4abfb4u: goto label_4abfb4;
        case 0x4abfb8u: goto label_4abfb8;
        case 0x4abfbcu: goto label_4abfbc;
        case 0x4abfc0u: goto label_4abfc0;
        case 0x4abfc4u: goto label_4abfc4;
        case 0x4abfc8u: goto label_4abfc8;
        case 0x4abfccu: goto label_4abfcc;
        case 0x4abfd0u: goto label_4abfd0;
        case 0x4abfd4u: goto label_4abfd4;
        case 0x4abfd8u: goto label_4abfd8;
        case 0x4abfdcu: goto label_4abfdc;
        case 0x4abfe0u: goto label_4abfe0;
        case 0x4abfe4u: goto label_4abfe4;
        case 0x4abfe8u: goto label_4abfe8;
        case 0x4abfecu: goto label_4abfec;
        case 0x4abff0u: goto label_4abff0;
        case 0x4abff4u: goto label_4abff4;
        case 0x4abff8u: goto label_4abff8;
        case 0x4abffcu: goto label_4abffc;
        case 0x4ac000u: goto label_4ac000;
        case 0x4ac004u: goto label_4ac004;
        case 0x4ac008u: goto label_4ac008;
        case 0x4ac00cu: goto label_4ac00c;
        case 0x4ac010u: goto label_4ac010;
        case 0x4ac014u: goto label_4ac014;
        case 0x4ac018u: goto label_4ac018;
        case 0x4ac01cu: goto label_4ac01c;
        case 0x4ac020u: goto label_4ac020;
        case 0x4ac024u: goto label_4ac024;
        case 0x4ac028u: goto label_4ac028;
        case 0x4ac02cu: goto label_4ac02c;
        case 0x4ac030u: goto label_4ac030;
        case 0x4ac034u: goto label_4ac034;
        case 0x4ac038u: goto label_4ac038;
        case 0x4ac03cu: goto label_4ac03c;
        case 0x4ac040u: goto label_4ac040;
        case 0x4ac044u: goto label_4ac044;
        case 0x4ac048u: goto label_4ac048;
        case 0x4ac04cu: goto label_4ac04c;
        case 0x4ac050u: goto label_4ac050;
        case 0x4ac054u: goto label_4ac054;
        case 0x4ac058u: goto label_4ac058;
        case 0x4ac05cu: goto label_4ac05c;
        case 0x4ac060u: goto label_4ac060;
        case 0x4ac064u: goto label_4ac064;
        case 0x4ac068u: goto label_4ac068;
        case 0x4ac06cu: goto label_4ac06c;
        case 0x4ac070u: goto label_4ac070;
        case 0x4ac074u: goto label_4ac074;
        case 0x4ac078u: goto label_4ac078;
        case 0x4ac07cu: goto label_4ac07c;
        case 0x4ac080u: goto label_4ac080;
        case 0x4ac084u: goto label_4ac084;
        case 0x4ac088u: goto label_4ac088;
        case 0x4ac08cu: goto label_4ac08c;
        case 0x4ac090u: goto label_4ac090;
        case 0x4ac094u: goto label_4ac094;
        case 0x4ac098u: goto label_4ac098;
        case 0x4ac09cu: goto label_4ac09c;
        case 0x4ac0a0u: goto label_4ac0a0;
        case 0x4ac0a4u: goto label_4ac0a4;
        case 0x4ac0a8u: goto label_4ac0a8;
        case 0x4ac0acu: goto label_4ac0ac;
        case 0x4ac0b0u: goto label_4ac0b0;
        case 0x4ac0b4u: goto label_4ac0b4;
        case 0x4ac0b8u: goto label_4ac0b8;
        case 0x4ac0bcu: goto label_4ac0bc;
        case 0x4ac0c0u: goto label_4ac0c0;
        case 0x4ac0c4u: goto label_4ac0c4;
        case 0x4ac0c8u: goto label_4ac0c8;
        case 0x4ac0ccu: goto label_4ac0cc;
        case 0x4ac0d0u: goto label_4ac0d0;
        case 0x4ac0d4u: goto label_4ac0d4;
        case 0x4ac0d8u: goto label_4ac0d8;
        case 0x4ac0dcu: goto label_4ac0dc;
        case 0x4ac0e0u: goto label_4ac0e0;
        case 0x4ac0e4u: goto label_4ac0e4;
        case 0x4ac0e8u: goto label_4ac0e8;
        case 0x4ac0ecu: goto label_4ac0ec;
        case 0x4ac0f0u: goto label_4ac0f0;
        case 0x4ac0f4u: goto label_4ac0f4;
        case 0x4ac0f8u: goto label_4ac0f8;
        case 0x4ac0fcu: goto label_4ac0fc;
        case 0x4ac100u: goto label_4ac100;
        case 0x4ac104u: goto label_4ac104;
        case 0x4ac108u: goto label_4ac108;
        case 0x4ac10cu: goto label_4ac10c;
        case 0x4ac110u: goto label_4ac110;
        case 0x4ac114u: goto label_4ac114;
        case 0x4ac118u: goto label_4ac118;
        case 0x4ac11cu: goto label_4ac11c;
        case 0x4ac120u: goto label_4ac120;
        case 0x4ac124u: goto label_4ac124;
        case 0x4ac128u: goto label_4ac128;
        case 0x4ac12cu: goto label_4ac12c;
        case 0x4ac130u: goto label_4ac130;
        case 0x4ac134u: goto label_4ac134;
        case 0x4ac138u: goto label_4ac138;
        case 0x4ac13cu: goto label_4ac13c;
        case 0x4ac140u: goto label_4ac140;
        case 0x4ac144u: goto label_4ac144;
        case 0x4ac148u: goto label_4ac148;
        case 0x4ac14cu: goto label_4ac14c;
        case 0x4ac150u: goto label_4ac150;
        case 0x4ac154u: goto label_4ac154;
        case 0x4ac158u: goto label_4ac158;
        case 0x4ac15cu: goto label_4ac15c;
        case 0x4ac160u: goto label_4ac160;
        case 0x4ac164u: goto label_4ac164;
        case 0x4ac168u: goto label_4ac168;
        case 0x4ac16cu: goto label_4ac16c;
        case 0x4ac170u: goto label_4ac170;
        case 0x4ac174u: goto label_4ac174;
        case 0x4ac178u: goto label_4ac178;
        case 0x4ac17cu: goto label_4ac17c;
        case 0x4ac180u: goto label_4ac180;
        case 0x4ac184u: goto label_4ac184;
        case 0x4ac188u: goto label_4ac188;
        case 0x4ac18cu: goto label_4ac18c;
        case 0x4ac190u: goto label_4ac190;
        case 0x4ac194u: goto label_4ac194;
        case 0x4ac198u: goto label_4ac198;
        case 0x4ac19cu: goto label_4ac19c;
        case 0x4ac1a0u: goto label_4ac1a0;
        case 0x4ac1a4u: goto label_4ac1a4;
        case 0x4ac1a8u: goto label_4ac1a8;
        case 0x4ac1acu: goto label_4ac1ac;
        case 0x4ac1b0u: goto label_4ac1b0;
        case 0x4ac1b4u: goto label_4ac1b4;
        case 0x4ac1b8u: goto label_4ac1b8;
        case 0x4ac1bcu: goto label_4ac1bc;
        case 0x4ac1c0u: goto label_4ac1c0;
        case 0x4ac1c4u: goto label_4ac1c4;
        case 0x4ac1c8u: goto label_4ac1c8;
        case 0x4ac1ccu: goto label_4ac1cc;
        case 0x4ac1d0u: goto label_4ac1d0;
        case 0x4ac1d4u: goto label_4ac1d4;
        case 0x4ac1d8u: goto label_4ac1d8;
        case 0x4ac1dcu: goto label_4ac1dc;
        case 0x4ac1e0u: goto label_4ac1e0;
        case 0x4ac1e4u: goto label_4ac1e4;
        case 0x4ac1e8u: goto label_4ac1e8;
        case 0x4ac1ecu: goto label_4ac1ec;
        case 0x4ac1f0u: goto label_4ac1f0;
        case 0x4ac1f4u: goto label_4ac1f4;
        case 0x4ac1f8u: goto label_4ac1f8;
        case 0x4ac1fcu: goto label_4ac1fc;
        case 0x4ac200u: goto label_4ac200;
        case 0x4ac204u: goto label_4ac204;
        case 0x4ac208u: goto label_4ac208;
        case 0x4ac20cu: goto label_4ac20c;
        case 0x4ac210u: goto label_4ac210;
        case 0x4ac214u: goto label_4ac214;
        case 0x4ac218u: goto label_4ac218;
        case 0x4ac21cu: goto label_4ac21c;
        case 0x4ac220u: goto label_4ac220;
        case 0x4ac224u: goto label_4ac224;
        case 0x4ac228u: goto label_4ac228;
        case 0x4ac22cu: goto label_4ac22c;
        case 0x4ac230u: goto label_4ac230;
        case 0x4ac234u: goto label_4ac234;
        case 0x4ac238u: goto label_4ac238;
        case 0x4ac23cu: goto label_4ac23c;
        case 0x4ac240u: goto label_4ac240;
        case 0x4ac244u: goto label_4ac244;
        case 0x4ac248u: goto label_4ac248;
        case 0x4ac24cu: goto label_4ac24c;
        case 0x4ac250u: goto label_4ac250;
        case 0x4ac254u: goto label_4ac254;
        case 0x4ac258u: goto label_4ac258;
        case 0x4ac25cu: goto label_4ac25c;
        case 0x4ac260u: goto label_4ac260;
        case 0x4ac264u: goto label_4ac264;
        case 0x4ac268u: goto label_4ac268;
        case 0x4ac26cu: goto label_4ac26c;
        case 0x4ac270u: goto label_4ac270;
        case 0x4ac274u: goto label_4ac274;
        case 0x4ac278u: goto label_4ac278;
        case 0x4ac27cu: goto label_4ac27c;
        case 0x4ac280u: goto label_4ac280;
        case 0x4ac284u: goto label_4ac284;
        case 0x4ac288u: goto label_4ac288;
        case 0x4ac28cu: goto label_4ac28c;
        case 0x4ac290u: goto label_4ac290;
        case 0x4ac294u: goto label_4ac294;
        case 0x4ac298u: goto label_4ac298;
        case 0x4ac29cu: goto label_4ac29c;
        case 0x4ac2a0u: goto label_4ac2a0;
        case 0x4ac2a4u: goto label_4ac2a4;
        case 0x4ac2a8u: goto label_4ac2a8;
        case 0x4ac2acu: goto label_4ac2ac;
        case 0x4ac2b0u: goto label_4ac2b0;
        case 0x4ac2b4u: goto label_4ac2b4;
        case 0x4ac2b8u: goto label_4ac2b8;
        case 0x4ac2bcu: goto label_4ac2bc;
        case 0x4ac2c0u: goto label_4ac2c0;
        case 0x4ac2c4u: goto label_4ac2c4;
        case 0x4ac2c8u: goto label_4ac2c8;
        case 0x4ac2ccu: goto label_4ac2cc;
        case 0x4ac2d0u: goto label_4ac2d0;
        case 0x4ac2d4u: goto label_4ac2d4;
        case 0x4ac2d8u: goto label_4ac2d8;
        case 0x4ac2dcu: goto label_4ac2dc;
        case 0x4ac2e0u: goto label_4ac2e0;
        case 0x4ac2e4u: goto label_4ac2e4;
        case 0x4ac2e8u: goto label_4ac2e8;
        case 0x4ac2ecu: goto label_4ac2ec;
        case 0x4ac2f0u: goto label_4ac2f0;
        case 0x4ac2f4u: goto label_4ac2f4;
        case 0x4ac2f8u: goto label_4ac2f8;
        case 0x4ac2fcu: goto label_4ac2fc;
        case 0x4ac300u: goto label_4ac300;
        case 0x4ac304u: goto label_4ac304;
        case 0x4ac308u: goto label_4ac308;
        case 0x4ac30cu: goto label_4ac30c;
        case 0x4ac310u: goto label_4ac310;
        case 0x4ac314u: goto label_4ac314;
        case 0x4ac318u: goto label_4ac318;
        case 0x4ac31cu: goto label_4ac31c;
        case 0x4ac320u: goto label_4ac320;
        case 0x4ac324u: goto label_4ac324;
        case 0x4ac328u: goto label_4ac328;
        case 0x4ac32cu: goto label_4ac32c;
        case 0x4ac330u: goto label_4ac330;
        case 0x4ac334u: goto label_4ac334;
        case 0x4ac338u: goto label_4ac338;
        case 0x4ac33cu: goto label_4ac33c;
        case 0x4ac340u: goto label_4ac340;
        case 0x4ac344u: goto label_4ac344;
        case 0x4ac348u: goto label_4ac348;
        case 0x4ac34cu: goto label_4ac34c;
        case 0x4ac350u: goto label_4ac350;
        case 0x4ac354u: goto label_4ac354;
        case 0x4ac358u: goto label_4ac358;
        case 0x4ac35cu: goto label_4ac35c;
        case 0x4ac360u: goto label_4ac360;
        case 0x4ac364u: goto label_4ac364;
        case 0x4ac368u: goto label_4ac368;
        case 0x4ac36cu: goto label_4ac36c;
        case 0x4ac370u: goto label_4ac370;
        case 0x4ac374u: goto label_4ac374;
        case 0x4ac378u: goto label_4ac378;
        case 0x4ac37cu: goto label_4ac37c;
        case 0x4ac380u: goto label_4ac380;
        case 0x4ac384u: goto label_4ac384;
        case 0x4ac388u: goto label_4ac388;
        case 0x4ac38cu: goto label_4ac38c;
        case 0x4ac390u: goto label_4ac390;
        case 0x4ac394u: goto label_4ac394;
        case 0x4ac398u: goto label_4ac398;
        case 0x4ac39cu: goto label_4ac39c;
        case 0x4ac3a0u: goto label_4ac3a0;
        case 0x4ac3a4u: goto label_4ac3a4;
        case 0x4ac3a8u: goto label_4ac3a8;
        case 0x4ac3acu: goto label_4ac3ac;
        case 0x4ac3b0u: goto label_4ac3b0;
        case 0x4ac3b4u: goto label_4ac3b4;
        case 0x4ac3b8u: goto label_4ac3b8;
        case 0x4ac3bcu: goto label_4ac3bc;
        case 0x4ac3c0u: goto label_4ac3c0;
        case 0x4ac3c4u: goto label_4ac3c4;
        case 0x4ac3c8u: goto label_4ac3c8;
        case 0x4ac3ccu: goto label_4ac3cc;
        case 0x4ac3d0u: goto label_4ac3d0;
        case 0x4ac3d4u: goto label_4ac3d4;
        case 0x4ac3d8u: goto label_4ac3d8;
        case 0x4ac3dcu: goto label_4ac3dc;
        case 0x4ac3e0u: goto label_4ac3e0;
        case 0x4ac3e4u: goto label_4ac3e4;
        case 0x4ac3e8u: goto label_4ac3e8;
        case 0x4ac3ecu: goto label_4ac3ec;
        case 0x4ac3f0u: goto label_4ac3f0;
        case 0x4ac3f4u: goto label_4ac3f4;
        case 0x4ac3f8u: goto label_4ac3f8;
        case 0x4ac3fcu: goto label_4ac3fc;
        case 0x4ac400u: goto label_4ac400;
        case 0x4ac404u: goto label_4ac404;
        case 0x4ac408u: goto label_4ac408;
        case 0x4ac40cu: goto label_4ac40c;
        case 0x4ac410u: goto label_4ac410;
        case 0x4ac414u: goto label_4ac414;
        case 0x4ac418u: goto label_4ac418;
        case 0x4ac41cu: goto label_4ac41c;
        case 0x4ac420u: goto label_4ac420;
        case 0x4ac424u: goto label_4ac424;
        case 0x4ac428u: goto label_4ac428;
        case 0x4ac42cu: goto label_4ac42c;
        case 0x4ac430u: goto label_4ac430;
        case 0x4ac434u: goto label_4ac434;
        case 0x4ac438u: goto label_4ac438;
        case 0x4ac43cu: goto label_4ac43c;
        case 0x4ac440u: goto label_4ac440;
        case 0x4ac444u: goto label_4ac444;
        case 0x4ac448u: goto label_4ac448;
        case 0x4ac44cu: goto label_4ac44c;
        case 0x4ac450u: goto label_4ac450;
        case 0x4ac454u: goto label_4ac454;
        default: break;
    }

    ctx->pc = 0x4abe80u;

label_4abe80:
    // 0x4abe80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4abe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4abe84:
    // 0x4abe84: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4abe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_4abe88:
    // 0x4abe88: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x4abe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_4abe8c:
    // 0x4abe8c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x4abe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_4abe90:
    // 0x4abe90: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4abe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_4abe94:
    // 0x4abe94: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4abe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_4abe98:
    // 0x4abe98: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x4abe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_4abe9c:
    // 0x4abe9c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4abe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_4abea0:
    // 0x4abea0: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x4abea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_4abea4:
    // 0x4abea4: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x4abea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_4abea8:
    // 0x4abea8: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x4abea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_4abeac:
    // 0x4abeac: 0xc1232e6  jal         func_48CB98
label_4abeb0:
    if (ctx->pc == 0x4ABEB0u) {
        ctx->pc = 0x4ABEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABEACu;
        // 0x4abeb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABEB4u;
        goto label_4abeb4;
    }
    ctx->pc = 0x4ABEACu;
    SET_GPR_U32(ctx, 31, 0x4ABEB4u);
    ctx->pc = 0x4ABEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABEACu;
    // 0x4abeb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CB98u, 0x4ABEACu, 0x4ABEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABEB4u;
label_4abeb4:
    // 0x4abeb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4abeb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4abeb8:
    // 0x4abeb8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4abeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4abebc:
    // 0x4abebc: 0x24460cc0  addiu       $a2, $v0, 0xCC0
    ctx->pc = 0x4abebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3264));
label_4abec0:
    // 0x4abec0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4abec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4abec4:
    // 0x4abec4: 0x860401c0  lh          $a0, 0x1C0($s0)
    ctx->pc = 0x4abec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
label_4abec8:
    // 0x4abec8: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4abec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_4abecc:
    // 0x4abecc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4abeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4abed0:
    // 0x4abed0: 0x24acd680  addiu       $t4, $a1, -0x2980
    ctx->pc = 0x4abed0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
label_4abed4:
    // 0x4abed4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4abed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4abed8:
    // 0x4abed8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4abed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4abedc:
    // 0x4abedc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4abedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4abee0:
    // 0x4abee0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4abee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4abee4:
    // 0x4abee4: 0x0  nop
    ctx->pc = 0x4abee4u;
    // NOP
label_4abee8:
    // 0x4abee8: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x4abee8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4abeec:
    // 0x4abeec: 0x86630008  lh          $v1, 0x8($s3)
    ctx->pc = 0x4abeecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
label_4abef0:
    // 0x4abef0: 0x460014c  bltz        $v1, . + 4 + (0x14C << 2)
label_4abef4:
    if (ctx->pc == 0x4ABEF4u) {
        ctx->pc = 0x4ABEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABEF0u;
        // 0x4abef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABEF8u;
        goto label_4abef8;
    }
    ctx->pc = 0x4ABEF0u;
    {
        const bool branch_taken_0x4abef0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4ABEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABEF0u;
        // 0x4abef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abef0) {
            ctx->pc = 0x4AC424u;
            goto label_4ac424;
        }
    }
    ctx->pc = 0x4ABEF8u;
label_4abef8:
    // 0x4abef8: 0x0  nop
    ctx->pc = 0x4abef8u;
    // NOP
label_4abefc:
    // 0x4abefc: 0x0  nop
    ctx->pc = 0x4abefcu;
    // NOP
label_4abf00:
    // 0x4abf00: 0x0  nop
    ctx->pc = 0x4abf00u;
    // NOP
label_4abf04:
    // 0x4abf04: 0x0  nop
    ctx->pc = 0x4abf04u;
    // NOP
label_4abf08:
    // 0x4abf08: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_4abf0c:
    if (ctx->pc == 0x4ABF0Cu) {
        ctx->pc = 0x4ABF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABF08u;
        // 0x4abf0c: 0x8e730004  lw          $s3, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABF10u;
        goto label_4abf10;
    }
    ctx->pc = 0x4ABF08u;
    {
        const bool branch_taken_0x4abf08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4abf08) {
            ctx->pc = 0x4ABF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABF08u;
            // 0x4abf0c: 0x8e730004  lw          $s3, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABEECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abeec;
        }
    }
    ctx->pc = 0x4ABF10u;
label_4abf10:
    // 0x4abf10: 0x8662013c  lh          $v0, 0x13C($s3)
    ctx->pc = 0x4abf10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 316)));
label_4abf14:
    // 0x4abf14: 0x0  nop
    ctx->pc = 0x4abf14u;
    // NOP
label_4abf18:
    // 0x4abf18: 0x0  nop
    ctx->pc = 0x4abf18u;
    // NOP
label_4abf1c:
    // 0x4abf1c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_4abf20:
    if (ctx->pc == 0x4ABF20u) {
        ctx->pc = 0x4ABF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABF1Cu;
        // 0x4abf20: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABF24u;
        goto label_4abf24;
    }
    ctx->pc = 0x4ABF1Cu;
    {
        const bool branch_taken_0x4abf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABF1Cu;
        // 0x4abf20: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abf1c) {
            ctx->pc = 0x4ABEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abee8;
        }
    }
    ctx->pc = 0x4ABF24u;
label_4abf24:
    // 0x4abf24: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x4abf24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
label_4abf28:
    // 0x4abf28: 0x249e0cb8  addiu       $fp, $a0, 0xCB8
    ctx->pc = 0x4abf28u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 3256));
label_4abf2c:
    // 0x4abf2c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4abf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_4abf30:
    // 0x4abf30: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4abf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4abf34:
    // 0x4abf34: 0x2484f9cc  addiu       $a0, $a0, -0x634
    ctx->pc = 0x4abf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965708));
label_4abf38:
    // 0x4abf38: 0x2508f9ce  addiu       $t0, $t0, -0x632
    ctx->pc = 0x4abf38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965710));
label_4abf3c:
    // 0x4abf3c: 0x24760cb4  addiu       $s6, $v1, 0xCB4
    ctx->pc = 0x4abf3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 3252));
label_4abf40:
    // 0x4abf40: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4abf40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4abf44:
    // 0x4abf44: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4abf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4abf48:
    // 0x4abf48: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x4abf48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4abf4c:
    // 0x4abf4c: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x4abf4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
label_4abf50:
    // 0x4abf50: 0x2508f9d0  addiu       $t0, $t0, -0x630
    ctx->pc = 0x4abf50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965712));
label_4abf54:
    // 0x4abf54: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x4abf54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4abf58:
    // 0x4abf58: 0x24520cb0  addiu       $s2, $v0, 0xCB0
    ctx->pc = 0x4abf58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
label_4abf5c:
    // 0x4abf5c: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4abf5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4abf60:
    // 0x4abf60: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4abf60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_4abf64:
    // 0x4abf64: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4abf64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4abf68:
    // 0x4abf68: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4abf68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4abf6c:
    // 0x4abf6c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4abf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4abf70:
    // 0x4abf70: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4abf70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4abf74:
    // 0x4abf74: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4abf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4abf78:
    // 0x4abf78: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4abf78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4abf7c:
    // 0x4abf7c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4abf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4abf80:
    // 0x4abf80: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4abf80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
label_4abf84:
    // 0x4abf84: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4abf84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4abf88:
    // 0x4abf88: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4abf88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4abf8c:
    // 0x4abf8c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4abf8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4abf90:
    // 0x4abf90: 0x24570cbc  addiu       $s7, $v0, 0xCBC
    ctx->pc = 0x4abf90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 3260));
label_4abf94:
    // 0x4abf94: 0x26620124  addiu       $v0, $s3, 0x124
    ctx->pc = 0x4abf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 292));
label_4abf98:
    // 0x4abf98: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x4abf98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_4abf9c:
    // 0x4abf9c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4abf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4abfa0:
    // 0x4abfa0: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4abfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_4abfa4:
    // 0x4abfa4: 0x248b0cc0  addiu       $t3, $a0, 0xCC0
    ctx->pc = 0x4abfa4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 3264));
label_4abfa8:
    // 0x4abfa8: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4abfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
label_4abfac:
    // 0x4abfac: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4abfacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_4abfb0:
    // 0x4abfb0: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x4abfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
label_4abfb4:
    // 0x4abfb4: 0x24c64380  addiu       $a2, $a2, 0x4380
    ctx->pc = 0x4abfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17280));
label_4abfb8:
    // 0x4abfb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4abfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4abfbc:
    // 0x4abfbc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4abfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4abfc0:
    // 0x4abfc0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x4abfc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4abfc4:
    // 0x4abfc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4abfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4abfc8:
    // 0x4abfc8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4abfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4abfcc:
    // 0x4abfcc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4abfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4abfd0:
    // 0x4abfd0: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4abfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_4abfd4:
    // 0x4abfd4: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4abfd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4abfd8:
    // 0x4abfd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4abfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4abfdc:
    // 0x4abfdc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4abfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4abfe0:
    // 0x4abfe0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4abfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4abfe4:
    // 0x4abfe4: 0x7fab0010  sq          $t3, 0x10($sp)
    ctx->pc = 0x4abfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 11));
label_4abfe8:
    // 0x4abfe8: 0x60f809  jalr        $v1
label_4abfec:
    if (ctx->pc == 0x4ABFECu) {
        ctx->pc = 0x4ABFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFE8u;
        // 0x4abfec: 0x7fac0020  sq          $t4, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABFF0u;
        goto label_4abff0;
    }
    ctx->pc = 0x4ABFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4ABFF0u);
        ctx->pc = 0x4ABFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFE8u;
        // 0x4abfec: 0x7fac0020  sq          $t4, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABFE8u, 0x4ABFF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4ABFF0u;
label_4abff0:
    // 0x4abff0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4abff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4abff4:
    // 0x4abff4: 0x24510ca4  addiu       $s1, $v0, 0xCA4
    ctx->pc = 0x4abff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3236));
label_4abff8:
    // 0x4abff8: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4abff8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4abffc:
    // 0x4abffc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4abffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac000:
    // 0x4ac000: 0x7bab0010  lq          $t3, 0x10($sp)
    ctx->pc = 0x4ac000u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac004:
    // 0x4ac004: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4ac004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_4ac008:
    // 0x4ac008: 0x7bac0020  lq          $t4, 0x20($sp)
    ctx->pc = 0x4ac008u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ac00c:
    // 0x4ac00c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4ac00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4ac010:
    // 0x4ac010: 0x85650000  lh          $a1, 0x0($t3)
    ctx->pc = 0x4ac010u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4ac014:
    // 0x4ac014: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ac014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ac018:
    // 0x4ac018: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ac01c:
    // 0x4ac01c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ac01cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac020:
    // 0x4ac020: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4ac020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4ac024:
    // 0x4ac024: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ac024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4ac028:
    // 0x4ac028: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ac02c:
    // 0x4ac02c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ac02cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ac030:
    // 0x4ac030: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ac030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac034:
    // 0x4ac034: 0x440ffac  bltz        $v0, . + 4 + (-0x54 << 2)
label_4ac038:
    if (ctx->pc == 0x4AC038u) {
        ctx->pc = 0x4AC038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC034u;
        // 0x4ac038: 0x701824  and         $v1, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC03Cu;
        goto label_4ac03c;
    }
    ctx->pc = 0x4AC034u;
    {
        const bool branch_taken_0x4ac034 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AC038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC034u;
        // 0x4ac038: 0x701824  and         $v1, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac034) {
            ctx->pc = 0x4ABEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abee8;
        }
    }
    ctx->pc = 0x4AC03Cu;
label_4ac03c:
    // 0x4ac03c: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4ac03cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4ac040:
    // 0x4ac040: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ac040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4ac044:
    // 0x4ac044: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ac044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ac048:
    // 0x4ac048: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ac04c:
    // 0x4ac04c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ac04cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac050:
    // 0x4ac050: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4ac050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4ac054:
    // 0x4ac054: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ac054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4ac058:
    // 0x4ac058: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ac05c:
    // 0x4ac05c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ac05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ac060:
    // 0x4ac060: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ac060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac064:
    // 0x4ac064: 0x440ffa0  bltz        $v0, . + 4 + (-0x60 << 2)
label_4ac068:
    if (ctx->pc == 0x4AC068u) {
        ctx->pc = 0x4AC068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC064u;
        // 0x4ac068: 0x701824  and         $v1, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC06Cu;
        goto label_4ac06c;
    }
    ctx->pc = 0x4AC064u;
    {
        const bool branch_taken_0x4ac064 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AC068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC064u;
        // 0x4ac068: 0x701824  and         $v1, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac064) {
            ctx->pc = 0x4ABEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abee8;
        }
    }
    ctx->pc = 0x4AC06Cu;
label_4ac06c:
    // 0x4ac06c: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4ac06cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_4ac070:
    // 0x4ac070: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ac070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4ac074:
    // 0x4ac074: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ac074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ac078:
    // 0x4ac078: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ac07c:
    // 0x4ac07c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ac07cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac080:
    // 0x4ac080: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4ac080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4ac084:
    // 0x4ac084: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ac084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4ac088:
    // 0x4ac088: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ac08c:
    // 0x4ac08c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ac08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ac090:
    // 0x4ac090: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ac090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac094:
    // 0x4ac094: 0x440ff94  bltz        $v0, . + 4 + (-0x6C << 2)
label_4ac098:
    if (ctx->pc == 0x4AC098u) {
        ctx->pc = 0x4AC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC094u;
        // 0x4ac098: 0x26680126  addiu       $t0, $s3, 0x126 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC09Cu;
        goto label_4ac09c;
    }
    ctx->pc = 0x4AC094u;
    {
        const bool branch_taken_0x4ac094 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC094u;
        // 0x4ac098: 0x26680126  addiu       $t0, $s3, 0x126 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac094) {
            ctx->pc = 0x4ABEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abee8;
        }
    }
    ctx->pc = 0x4AC09Cu;
label_4ac09c:
    // 0x4ac09c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4ac09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4ac0a0:
    // 0x4ac0a0: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x4ac0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
label_4ac0a4:
    // 0x4ac0a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ac0a8:
    // 0x4ac0a8: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4ac0a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4ac0ac:
    // 0x4ac0ac: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ac0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4ac0b0:
    // 0x4ac0b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ac0b4:
    // 0x4ac0b4: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4ac0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_4ac0b8:
    // 0x4ac0b8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4ac0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_4ac0bc:
    // 0x4ac0bc: 0x24634380  addiu       $v1, $v1, 0x4380
    ctx->pc = 0x4ac0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17280));
label_4ac0c0:
    // 0x4ac0c0: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4ac0c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4ac0c4:
    // 0x4ac0c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ac0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ac0c8:
    // 0x4ac0c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ac0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ac0cc:
    // 0x4ac0cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4ac0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ac0d0:
    // 0x4ac0d0: 0x60f809  jalr        $v1
label_4ac0d4:
    if (ctx->pc == 0x4AC0D4u) {
        ctx->pc = 0x4AC0D8u;
        goto label_4ac0d8;
    }
    ctx->pc = 0x4AC0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4AC0D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC0D0u, 0x4AC0D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AC0D8u;
label_4ac0d8:
    // 0x4ac0d8: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x4ac0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac0dc:
    // 0x4ac0dc: 0x7bab0010  lq          $t3, 0x10($sp)
    ctx->pc = 0x4ac0dcu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac0e0:
    // 0x4ac0e0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ac0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4ac0e4:
    // 0x4ac0e4: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x4ac0e4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac0e8:
    // 0x4ac0e8: 0x24550ca8  addiu       $s5, $v0, 0xCA8
    ctx->pc = 0x4ac0e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3240));
label_4ac0ec:
    // 0x4ac0ec: 0x85640000  lh          $a0, 0x0($t3)
    ctx->pc = 0x4ac0ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4ac0f0:
    // 0x4ac0f0: 0x1304824  and         $t1, $t1, $s0
    ctx->pc = 0x4ac0f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 16));
label_4ac0f4:
    // 0x4ac0f4: 0x86c60000  lh          $a2, 0x0($s6)
    ctx->pc = 0x4ac0f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4ac0f8:
    // 0x4ac0f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ac0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac0fc:
    // 0x4ac0fc: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x4ac0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4ac100:
    // 0x4ac100: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4ac100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4ac104:
    // 0x4ac104: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x4ac104u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_4ac108:
    // 0x4ac108: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4ac108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4ac10c:
    // 0x4ac10c: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4ac10cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
label_4ac110:
    // 0x4ac110: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4ac110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ac114:
    // 0x4ac114: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4ac118:
    // 0x4ac118: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x4ac118u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4ac11c:
    // 0x4ac11c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ac11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4ac120:
    // 0x4ac120: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4ac120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
label_4ac124:
    // 0x4ac124: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x4ac124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
label_4ac128:
    // 0x4ac128: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x4ac128u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_4ac12c:
    // 0x4ac12c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4ac12cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_4ac130:
    // 0x4ac130: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4ac130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_4ac134:
    // 0x4ac134: 0x1064024  and         $t0, $t0, $a2
    ctx->pc = 0x4ac134u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_4ac138:
    // 0x4ac138: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4ac138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_4ac13c:
    // 0x4ac13c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ac13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ac140:
    // 0x4ac140: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4ac140u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_4ac144:
    // 0x4ac144: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ac144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4ac148:
    // 0x4ac148: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4ac148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
label_4ac14c:
    // 0x4ac14c: 0x24540cac  addiu       $s4, $v0, 0xCAC
    ctx->pc = 0x4ac14cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3244));
label_4ac150:
    // 0x4ac150: 0xaec80000  sw          $t0, 0x0($s6)
    ctx->pc = 0x4ac150u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 8));
label_4ac154:
    // 0x4ac154: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4ac154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4ac158:
    // 0x4ac158: 0x86620128  lh          $v0, 0x128($s3)
    ctx->pc = 0x4ac158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 296)));
label_4ac15c:
    // 0x4ac15c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ac160:
    // 0x4ac160: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4ac160u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac164:
    // 0x4ac164: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ac164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4ac168:
    // 0x4ac168: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ac16c:
    // 0x4ac16c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4ac16cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_4ac170:
    // 0x4ac170: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4ac170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4ac174:
    // 0x4ac174: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x4ac174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4ac178:
    // 0x4ac178: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4ac178u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4ac17c:
    // 0x4ac17c: 0xc13e49c  jal         func_4F9270
label_4ac180:
    if (ctx->pc == 0x4AC180u) {
        ctx->pc = 0x4AC180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC17Cu;
        // 0x4ac180: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC184u;
        goto label_4ac184;
    }
    ctx->pc = 0x4AC17Cu;
    SET_GPR_U32(ctx, 31, 0x4AC184u);
    ctx->pc = 0x4AC180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC17Cu;
    // 0x4ac180: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AC17Cu, 0x4AC184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC184u;
label_4ac184:
    // 0x4ac184: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4ac184u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac188:
    // 0x4ac188: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4ac188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4ac18c:
    // 0x4ac18c: 0x7bab0010  lq          $t3, 0x10($sp)
    ctx->pc = 0x4ac18cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac190:
    // 0x4ac190: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4ac190u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ac194:
    // 0x4ac194: 0x460ff54  bltz        $v1, . + 4 + (-0xAC << 2)
label_4ac198:
    if (ctx->pc == 0x4AC198u) {
        ctx->pc = 0x4AC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC194u;
        // 0x4ac198: 0x7bac0020  lq          $t4, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC19Cu;
        goto label_4ac19c;
    }
    ctx->pc = 0x4AC194u;
    {
        const bool branch_taken_0x4ac194 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4AC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC194u;
        // 0x4ac198: 0x7bac0020  lq          $t4, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac194) {
            ctx->pc = 0x4ABEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abee8;
        }
    }
    ctx->pc = 0x4AC19Cu;
label_4ac19c:
    // 0x4ac19c: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x4ac19cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac1a0:
    // 0x4ac1a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ac1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ac1a4:
    // 0x4ac1a4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ac1a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac1a8:
    // 0x4ac1a8: 0x1101824  and         $v1, $t0, $s0
    ctx->pc = 0x4ac1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 16));
label_4ac1ac:
    // 0x4ac1ac: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x4ac1acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_4ac1b0:
    // 0x4ac1b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ac1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4ac1b4:
    // 0x4ac1b4: 0x85690000  lh          $t1, 0x0($t3)
    ctx->pc = 0x4ac1b4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4ac1b8:
    // 0x4ac1b8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4ac1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4ac1bc:
    // 0x4ac1bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ac1c0:
    // 0x4ac1c0: 0x868a0000  lh          $t2, 0x0($s4)
    ctx->pc = 0x4ac1c0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4ac1c4:
    // 0x4ac1c4: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4ac1c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac1c8:
    // 0x4ac1c8: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4ac1c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4ac1cc:
    // 0x4ac1cc: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x4ac1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_4ac1d0:
    // 0x4ac1d0: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4ac1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4ac1d4:
    // 0x4ac1d4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ac1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4ac1d8:
    // 0x4ac1d8: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4ac1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4ac1dc:
    // 0x4ac1dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ac1e0:
    // 0x4ac1e0: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x4ac1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_4ac1e4:
    // 0x4ac1e4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4ac1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4ac1e8:
    // 0x4ac1e8: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4ac1e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
label_4ac1ec:
    // 0x4ac1ec: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x4ac1ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
label_4ac1f0:
    // 0x4ac1f0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ac1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4ac1f4:
    // 0x4ac1f4: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4ac1f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac1f8:
    // 0x4ac1f8: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x4ac1f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
label_4ac1fc:
    // 0x4ac1fc: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4ac1fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
label_4ac200:
    // 0x4ac200: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4ac200u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
label_4ac204:
    // 0x4ac204: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x4ac204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4ac208:
    // 0x4ac208: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4ac208u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_4ac20c:
    // 0x4ac20c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ac20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4ac210:
    // 0x4ac210: 0xc13e49c  jal         func_4F9270
label_4ac214:
    if (ctx->pc == 0x4AC214u) {
        ctx->pc = 0x4AC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC210u;
        // 0x4ac214: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC218u;
        goto label_4ac218;
    }
    ctx->pc = 0x4AC210u;
    SET_GPR_U32(ctx, 31, 0x4AC218u);
    ctx->pc = 0x4AC214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC210u;
    // 0x4ac214: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AC210u, 0x4AC218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC218u;
label_4ac218:
    // 0x4ac218: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4ac218u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac21c:
    // 0x4ac21c: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4ac21cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4ac220:
    // 0x4ac220: 0x7bab0010  lq          $t3, 0x10($sp)
    ctx->pc = 0x4ac220u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac224:
    // 0x4ac224: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4ac224u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ac228:
    // 0x4ac228: 0x461ff2f  bgez        $v1, . + 4 + (-0xD1 << 2)
label_4ac22c:
    if (ctx->pc == 0x4AC22Cu) {
        ctx->pc = 0x4AC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC228u;
        // 0x4ac22c: 0x7bac0020  lq          $t4, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC230u;
        goto label_4ac230;
    }
    ctx->pc = 0x4AC228u;
    {
        const bool branch_taken_0x4ac228 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4AC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC228u;
        // 0x4ac22c: 0x7bac0020  lq          $t4, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac228) {
            ctx->pc = 0x4ABEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abee8;
        }
    }
    ctx->pc = 0x4AC230u;
label_4ac230:
    // 0x4ac230: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ac230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac234:
    // 0x4ac234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ac234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ac238:
    // 0x4ac238: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ac238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac23c:
    // 0x4ac23c: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4ac23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_4ac240:
    // 0x4ac240: 0x85690000  lh          $t1, 0x0($t3)
    ctx->pc = 0x4ac240u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4ac244:
    // 0x4ac244: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ac244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4ac248:
    // 0x4ac248: 0x87c60000  lh          $a2, 0x0($fp)
    ctx->pc = 0x4ac248u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_4ac24c:
    // 0x4ac24c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4ac24cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4ac250:
    // 0x4ac250: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ac254:
    // 0x4ac254: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4ac254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4ac258:
    // 0x4ac258: 0xc93023  subu        $a2, $a2, $t1
    ctx->pc = 0x4ac258u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4ac25c:
    // 0x4ac25c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4ac25cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac260:
    // 0x4ac260: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4ac260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
label_4ac264:
    // 0x4ac264: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x4ac264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4ac268:
    // 0x4ac268: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x4ac268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
label_4ac26c:
    // 0x4ac26c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4ac26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_4ac270:
    // 0x4ac270: 0x34e8ffff  ori         $t0, $a3, 0xFFFF
    ctx->pc = 0x4ac270u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4ac274:
    // 0x4ac274: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x4ac274u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_4ac278:
    // 0x4ac278: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ac278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4ac27c:
    // 0x4ac27c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4ac27cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_4ac280:
    // 0x4ac280: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ac284:
    // 0x4ac284: 0x1064024  and         $t0, $t0, $a2
    ctx->pc = 0x4ac284u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_4ac288:
    // 0x4ac288: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4ac288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4ac28c:
    // 0x4ac28c: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4ac28cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_4ac290:
    // 0x4ac290: 0xafc80000  sw          $t0, 0x0($fp)
    ctx->pc = 0x4ac290u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 8));
label_4ac294:
    // 0x4ac294: 0x8663012a  lh          $v1, 0x12A($s3)
    ctx->pc = 0x4ac294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 298)));
label_4ac298:
    // 0x4ac298: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4ac298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4ac29c:
    // 0x4ac29c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4ac29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4ac2a0:
    // 0x4ac2a0: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4ac2a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac2a4:
    // 0x4ac2a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ac2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4ac2a8:
    // 0x4ac2a8: 0x7fab0010  sq          $t3, 0x10($sp)
    ctx->pc = 0x4ac2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 11));
label_4ac2ac:
    // 0x4ac2ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ac2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4ac2b0:
    // 0x4ac2b0: 0x7fac0020  sq          $t4, 0x20($sp)
    ctx->pc = 0x4ac2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 12));
label_4ac2b4:
    // 0x4ac2b4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4ac2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_4ac2b8:
    // 0x4ac2b8: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4ac2b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4ac2bc:
    // 0x4ac2bc: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x4ac2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4ac2c0:
    // 0x4ac2c0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4ac2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4ac2c4:
    // 0x4ac2c4: 0xc13e49c  jal         func_4F9270
label_4ac2c8:
    if (ctx->pc == 0x4AC2C8u) {
        ctx->pc = 0x4AC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC2C4u;
        // 0x4ac2c8: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC2CCu;
        goto label_4ac2cc;
    }
    ctx->pc = 0x4AC2C4u;
    SET_GPR_U32(ctx, 31, 0x4AC2CCu);
    ctx->pc = 0x4AC2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC2C4u;
    // 0x4ac2c8: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AC2C4u, 0x4AC2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC2CCu;
label_4ac2cc:
    // 0x4ac2cc: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4ac2ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac2d0:
    // 0x4ac2d0: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x4ac2d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_4ac2d4:
    // 0x4ac2d4: 0x7bab0010  lq          $t3, 0x10($sp)
    ctx->pc = 0x4ac2d4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac2d8:
    // 0x4ac2d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ac2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ac2dc:
    // 0x4ac2dc: 0x440ff02  bltz        $v0, . + 4 + (-0xFE << 2)
label_4ac2e0:
    if (ctx->pc == 0x4AC2E0u) {
        ctx->pc = 0x4AC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC2DCu;
        // 0x4ac2e0: 0x7bac0020  lq          $t4, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC2E4u;
        goto label_4ac2e4;
    }
    ctx->pc = 0x4AC2DCu;
    {
        const bool branch_taken_0x4ac2dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC2DCu;
        // 0x4ac2e0: 0x7bac0020  lq          $t4, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac2dc) {
            ctx->pc = 0x4ABEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abee8;
        }
    }
    ctx->pc = 0x4AC2E4u;
label_4ac2e4:
    // 0x4ac2e4: 0x85670000  lh          $a3, 0x0($t3)
    ctx->pc = 0x4ac2e4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4ac2e8:
    // 0x4ac2e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ac2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ac2ec:
    // 0x4ac2ec: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ac2ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac2f0:
    // 0x4ac2f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ac2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac2f4:
    // 0x4ac2f4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4ac2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4ac2f8:
    // 0x4ac2f8: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4ac2f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4ac2fc:
    // 0x4ac2fc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ac2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4ac300:
    // 0x4ac300: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ac304:
    // 0x4ac304: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ac308:
    // 0x4ac308: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4ac308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4ac30c:
    // 0x4ac30c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ac30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ac310:
    // 0x4ac310: 0x86a50000  lh          $a1, 0x0($s5)
    ctx->pc = 0x4ac310u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4ac314:
    // 0x4ac314: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ac314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4ac318:
    // 0x4ac318: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4ac318u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac31c:
    // 0x4ac31c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x4ac31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_4ac320:
    // 0x4ac320: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x4ac320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_4ac324:
    // 0x4ac324: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4ac324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
label_4ac328:
    // 0x4ac328: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4ac328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4ac32c:
    // 0x4ac32c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4ac32cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_4ac330:
    // 0x4ac330: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x4ac330u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_4ac334:
    // 0x4ac334: 0xc13e49c  jal         func_4F9270
label_4ac338:
    if (ctx->pc == 0x4AC338u) {
        ctx->pc = 0x4AC338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC334u;
        // 0x4ac338: 0xae860000  sw          $a2, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC33Cu;
        goto label_4ac33c;
    }
    ctx->pc = 0x4AC334u;
    SET_GPR_U32(ctx, 31, 0x4AC33Cu);
    ctx->pc = 0x4AC338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC334u;
    // 0x4ac338: 0xae860000  sw          $a2, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AC334u, 0x4AC33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC33Cu;
label_4ac33c:
    // 0x4ac33c: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4ac33cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4ac340:
    // 0x4ac340: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4ac340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4ac344:
    // 0x4ac344: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ac344u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ac348:
    // 0x4ac348: 0x441fee7  bgez        $v0, . + 4 + (-0x119 << 2)
label_4ac34c:
    if (ctx->pc == 0x4AC34Cu) {
        ctx->pc = 0x4AC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC348u;
        // 0x4ac34c: 0x7bac0020  lq          $t4, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC350u;
        goto label_4ac350;
    }
    ctx->pc = 0x4AC348u;
    {
        const bool branch_taken_0x4ac348 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4AC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC348u;
        // 0x4ac34c: 0x7bac0020  lq          $t4, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac348) {
            ctx->pc = 0x4ABEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abee8;
        }
    }
    ctx->pc = 0x4AC350u;
label_4ac350:
    // 0x4ac350: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x4ac350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4ac354:
    // 0x4ac354: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ac354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac358:
    // 0x4ac358: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x4ac358u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac35c:
    // 0x4ac35c: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x4ac35cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
label_4ac360:
    // 0x4ac360: 0x96860000  lhu         $a2, 0x0($s4)
    ctx->pc = 0x4ac360u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4ac364:
    // 0x4ac364: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4ac364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4ac368:
    // 0x4ac368: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ac368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4ac36c:
    // 0x4ac36c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4ac36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4ac370:
    // 0x4ac370: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4ac370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_4ac374:
    // 0x4ac374: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4ac374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_4ac378:
    // 0x4ac378: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4ac378u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4ac37c:
    // 0x4ac37c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ac380:
    // 0x4ac380: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x4ac380u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_4ac384:
    // 0x4ac384: 0x24c64380  addiu       $a2, $a2, 0x4380
    ctx->pc = 0x4ac384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17280));
label_4ac388:
    // 0x4ac388: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4ac388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4ac38c:
    // 0x4ac38c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ac38cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4ac390:
    // 0x4ac390: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ac390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4ac394:
    // 0x4ac394: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ac398:
    // 0x4ac398: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4ac398u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_4ac39c:
    // 0x4ac39c: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4ac39cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4ac3a0:
    // 0x4ac3a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ac3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ac3a4:
    // 0x4ac3a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4ac3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4ac3a8:
    // 0x4ac3a8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x4ac3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_4ac3ac:
    // 0x4ac3ac: 0x80f809  jalr        $a0
label_4ac3b0:
    if (ctx->pc == 0x4AC3B0u) {
        ctx->pc = 0x4AC3B4u;
        goto label_4ac3b4;
    }
    ctx->pc = 0x4AC3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x4AC3B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC3ACu, 0x4AC3B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AC3B4u;
label_4ac3b4:
    // 0x4ac3b4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4ac3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4ac3b8:
    // 0x4ac3b8: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x4ac3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4ac3bc:
    // 0x4ac3bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ac3c0:
    // 0x4ac3c0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4ac3c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4ac3c4:
    // 0x4ac3c4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ac3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4ac3c8:
    // 0x4ac3c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ac3cc:
    // 0x4ac3cc: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4ac3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_4ac3d0:
    // 0x4ac3d0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4ac3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_4ac3d4:
    // 0x4ac3d4: 0x24634380  addiu       $v1, $v1, 0x4380
    ctx->pc = 0x4ac3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17280));
label_4ac3d8:
    // 0x4ac3d8: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4ac3d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4ac3dc:
    // 0x4ac3dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ac3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ac3e0:
    // 0x4ac3e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ac3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ac3e4:
    // 0x4ac3e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4ac3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ac3e8:
    // 0x4ac3e8: 0x60f809  jalr        $v1
label_4ac3ec:
    if (ctx->pc == 0x4AC3ECu) {
        ctx->pc = 0x4AC3F0u;
        goto label_4ac3f0;
    }
    ctx->pc = 0x4AC3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4AC3F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC3E8u, 0x4AC3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AC3F0u;
label_4ac3f0:
    // 0x4ac3f0: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4ac3f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac3f4:
    // 0x4ac3f4: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4ac3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
label_4ac3f8:
    // 0x4ac3f8: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x4ac3f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4ac3fc:
    // 0x4ac3fc: 0x24c6f9cc  addiu       $a2, $a2, -0x634
    ctx->pc = 0x4ac3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965708));
label_4ac400:
    // 0x4ac400: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x4ac400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_4ac404:
    // 0x4ac404: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x4ac404u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
label_4ac408:
    // 0x4ac408: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x4ac408u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_4ac40c:
    // 0x4ac40c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4ac40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_4ac410:
    // 0x4ac410: 0x2508f9ce  addiu       $t0, $t0, -0x632
    ctx->pc = 0x4ac410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965710));
label_4ac414:
    // 0x4ac414: 0x2484f9d0  addiu       $a0, $a0, -0x630
    ctx->pc = 0x4ac414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965712));
label_4ac418:
    // 0x4ac418: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x4ac418u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
label_4ac41c:
    // 0x4ac41c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4ac41cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_4ac420:
    // 0x4ac420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ac420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ac424:
    // 0x4ac424: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4ac424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4ac428:
    // 0x4ac428: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x4ac428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4ac42c:
    // 0x4ac42c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4ac42cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ac430:
    // 0x4ac430: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x4ac430u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4ac434:
    // 0x4ac434: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4ac434u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4ac438:
    // 0x4ac438: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x4ac438u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_4ac43c:
    // 0x4ac43c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4ac43cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4ac440:
    // 0x4ac440: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x4ac440u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_4ac444:
    // 0x4ac444: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x4ac444u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4ac448:
    // 0x4ac448: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x4ac448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_4ac44c:
    // 0x4ac44c: 0x3e00008  jr          $ra
label_4ac450:
    if (ctx->pc == 0x4AC450u) {
        ctx->pc = 0x4AC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC44Cu;
        // 0x4ac450: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC454u;
        goto label_4ac454;
    }
    ctx->pc = 0x4AC44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC44Cu;
        // 0x4ac450: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC454u;
label_4ac454:
    // 0x4ac454: 0x0  nop
    ctx->pc = 0x4ac454u;
    // NOP
    ctx->pc = 0x4ac458u;
}
