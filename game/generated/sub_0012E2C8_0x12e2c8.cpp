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

// Function: sub_0012E2C8
// Address: 0x12e2c8 - 0x12e808
void sub_0012E2C8_0x12e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E2C8_0x12e2c8");
#endif

    switch (ctx->pc) {
        case 0x12e2c8u: goto label_12e2c8;
        case 0x12e2ccu: goto label_12e2cc;
        case 0x12e2d0u: goto label_12e2d0;
        case 0x12e2d4u: goto label_12e2d4;
        case 0x12e2d8u: goto label_12e2d8;
        case 0x12e2dcu: goto label_12e2dc;
        case 0x12e2e0u: goto label_12e2e0;
        case 0x12e2e4u: goto label_12e2e4;
        case 0x12e2e8u: goto label_12e2e8;
        case 0x12e2ecu: goto label_12e2ec;
        case 0x12e2f0u: goto label_12e2f0;
        case 0x12e2f4u: goto label_12e2f4;
        case 0x12e2f8u: goto label_12e2f8;
        case 0x12e2fcu: goto label_12e2fc;
        case 0x12e300u: goto label_12e300;
        case 0x12e304u: goto label_12e304;
        case 0x12e308u: goto label_12e308;
        case 0x12e30cu: goto label_12e30c;
        case 0x12e310u: goto label_12e310;
        case 0x12e314u: goto label_12e314;
        case 0x12e318u: goto label_12e318;
        case 0x12e31cu: goto label_12e31c;
        case 0x12e320u: goto label_12e320;
        case 0x12e324u: goto label_12e324;
        case 0x12e328u: goto label_12e328;
        case 0x12e32cu: goto label_12e32c;
        case 0x12e330u: goto label_12e330;
        case 0x12e334u: goto label_12e334;
        case 0x12e338u: goto label_12e338;
        case 0x12e33cu: goto label_12e33c;
        case 0x12e340u: goto label_12e340;
        case 0x12e344u: goto label_12e344;
        case 0x12e348u: goto label_12e348;
        case 0x12e34cu: goto label_12e34c;
        case 0x12e350u: goto label_12e350;
        case 0x12e354u: goto label_12e354;
        case 0x12e358u: goto label_12e358;
        case 0x12e35cu: goto label_12e35c;
        case 0x12e360u: goto label_12e360;
        case 0x12e364u: goto label_12e364;
        case 0x12e368u: goto label_12e368;
        case 0x12e36cu: goto label_12e36c;
        case 0x12e370u: goto label_12e370;
        case 0x12e374u: goto label_12e374;
        case 0x12e378u: goto label_12e378;
        case 0x12e37cu: goto label_12e37c;
        case 0x12e380u: goto label_12e380;
        case 0x12e384u: goto label_12e384;
        case 0x12e388u: goto label_12e388;
        case 0x12e38cu: goto label_12e38c;
        case 0x12e390u: goto label_12e390;
        case 0x12e394u: goto label_12e394;
        case 0x12e398u: goto label_12e398;
        case 0x12e39cu: goto label_12e39c;
        case 0x12e3a0u: goto label_12e3a0;
        case 0x12e3a4u: goto label_12e3a4;
        case 0x12e3a8u: goto label_12e3a8;
        case 0x12e3acu: goto label_12e3ac;
        case 0x12e3b0u: goto label_12e3b0;
        case 0x12e3b4u: goto label_12e3b4;
        case 0x12e3b8u: goto label_12e3b8;
        case 0x12e3bcu: goto label_12e3bc;
        case 0x12e3c0u: goto label_12e3c0;
        case 0x12e3c4u: goto label_12e3c4;
        case 0x12e3c8u: goto label_12e3c8;
        case 0x12e3ccu: goto label_12e3cc;
        case 0x12e3d0u: goto label_12e3d0;
        case 0x12e3d4u: goto label_12e3d4;
        case 0x12e3d8u: goto label_12e3d8;
        case 0x12e3dcu: goto label_12e3dc;
        case 0x12e3e0u: goto label_12e3e0;
        case 0x12e3e4u: goto label_12e3e4;
        case 0x12e3e8u: goto label_12e3e8;
        case 0x12e3ecu: goto label_12e3ec;
        case 0x12e3f0u: goto label_12e3f0;
        case 0x12e3f4u: goto label_12e3f4;
        case 0x12e3f8u: goto label_12e3f8;
        case 0x12e3fcu: goto label_12e3fc;
        case 0x12e400u: goto label_12e400;
        case 0x12e404u: goto label_12e404;
        case 0x12e408u: goto label_12e408;
        case 0x12e40cu: goto label_12e40c;
        case 0x12e410u: goto label_12e410;
        case 0x12e414u: goto label_12e414;
        case 0x12e418u: goto label_12e418;
        case 0x12e41cu: goto label_12e41c;
        case 0x12e420u: goto label_12e420;
        case 0x12e424u: goto label_12e424;
        case 0x12e428u: goto label_12e428;
        case 0x12e42cu: goto label_12e42c;
        case 0x12e430u: goto label_12e430;
        case 0x12e434u: goto label_12e434;
        case 0x12e438u: goto label_12e438;
        case 0x12e43cu: goto label_12e43c;
        case 0x12e440u: goto label_12e440;
        case 0x12e444u: goto label_12e444;
        case 0x12e448u: goto label_12e448;
        case 0x12e44cu: goto label_12e44c;
        case 0x12e450u: goto label_12e450;
        case 0x12e454u: goto label_12e454;
        case 0x12e458u: goto label_12e458;
        case 0x12e45cu: goto label_12e45c;
        case 0x12e460u: goto label_12e460;
        case 0x12e464u: goto label_12e464;
        case 0x12e468u: goto label_12e468;
        case 0x12e46cu: goto label_12e46c;
        case 0x12e470u: goto label_12e470;
        case 0x12e474u: goto label_12e474;
        case 0x12e478u: goto label_12e478;
        case 0x12e47cu: goto label_12e47c;
        case 0x12e480u: goto label_12e480;
        case 0x12e484u: goto label_12e484;
        case 0x12e488u: goto label_12e488;
        case 0x12e48cu: goto label_12e48c;
        case 0x12e490u: goto label_12e490;
        case 0x12e494u: goto label_12e494;
        case 0x12e498u: goto label_12e498;
        case 0x12e49cu: goto label_12e49c;
        case 0x12e4a0u: goto label_12e4a0;
        case 0x12e4a4u: goto label_12e4a4;
        case 0x12e4a8u: goto label_12e4a8;
        case 0x12e4acu: goto label_12e4ac;
        case 0x12e4b0u: goto label_12e4b0;
        case 0x12e4b4u: goto label_12e4b4;
        case 0x12e4b8u: goto label_12e4b8;
        case 0x12e4bcu: goto label_12e4bc;
        case 0x12e4c0u: goto label_12e4c0;
        case 0x12e4c4u: goto label_12e4c4;
        case 0x12e4c8u: goto label_12e4c8;
        case 0x12e4ccu: goto label_12e4cc;
        case 0x12e4d0u: goto label_12e4d0;
        case 0x12e4d4u: goto label_12e4d4;
        case 0x12e4d8u: goto label_12e4d8;
        case 0x12e4dcu: goto label_12e4dc;
        case 0x12e4e0u: goto label_12e4e0;
        case 0x12e4e4u: goto label_12e4e4;
        case 0x12e4e8u: goto label_12e4e8;
        case 0x12e4ecu: goto label_12e4ec;
        case 0x12e4f0u: goto label_12e4f0;
        case 0x12e4f4u: goto label_12e4f4;
        case 0x12e4f8u: goto label_12e4f8;
        case 0x12e4fcu: goto label_12e4fc;
        case 0x12e500u: goto label_12e500;
        case 0x12e504u: goto label_12e504;
        case 0x12e508u: goto label_12e508;
        case 0x12e50cu: goto label_12e50c;
        case 0x12e510u: goto label_12e510;
        case 0x12e514u: goto label_12e514;
        case 0x12e518u: goto label_12e518;
        case 0x12e51cu: goto label_12e51c;
        case 0x12e520u: goto label_12e520;
        case 0x12e524u: goto label_12e524;
        case 0x12e528u: goto label_12e528;
        case 0x12e52cu: goto label_12e52c;
        case 0x12e530u: goto label_12e530;
        case 0x12e534u: goto label_12e534;
        case 0x12e538u: goto label_12e538;
        case 0x12e53cu: goto label_12e53c;
        case 0x12e540u: goto label_12e540;
        case 0x12e544u: goto label_12e544;
        case 0x12e548u: goto label_12e548;
        case 0x12e54cu: goto label_12e54c;
        case 0x12e550u: goto label_12e550;
        case 0x12e554u: goto label_12e554;
        case 0x12e558u: goto label_12e558;
        case 0x12e55cu: goto label_12e55c;
        case 0x12e560u: goto label_12e560;
        case 0x12e564u: goto label_12e564;
        case 0x12e568u: goto label_12e568;
        case 0x12e56cu: goto label_12e56c;
        case 0x12e570u: goto label_12e570;
        case 0x12e574u: goto label_12e574;
        case 0x12e578u: goto label_12e578;
        case 0x12e57cu: goto label_12e57c;
        case 0x12e580u: goto label_12e580;
        case 0x12e584u: goto label_12e584;
        case 0x12e588u: goto label_12e588;
        case 0x12e58cu: goto label_12e58c;
        case 0x12e590u: goto label_12e590;
        case 0x12e594u: goto label_12e594;
        case 0x12e598u: goto label_12e598;
        case 0x12e59cu: goto label_12e59c;
        case 0x12e5a0u: goto label_12e5a0;
        case 0x12e5a4u: goto label_12e5a4;
        case 0x12e5a8u: goto label_12e5a8;
        case 0x12e5acu: goto label_12e5ac;
        case 0x12e5b0u: goto label_12e5b0;
        case 0x12e5b4u: goto label_12e5b4;
        case 0x12e5b8u: goto label_12e5b8;
        case 0x12e5bcu: goto label_12e5bc;
        case 0x12e5c0u: goto label_12e5c0;
        case 0x12e5c4u: goto label_12e5c4;
        case 0x12e5c8u: goto label_12e5c8;
        case 0x12e5ccu: goto label_12e5cc;
        case 0x12e5d0u: goto label_12e5d0;
        case 0x12e5d4u: goto label_12e5d4;
        case 0x12e5d8u: goto label_12e5d8;
        case 0x12e5dcu: goto label_12e5dc;
        case 0x12e5e0u: goto label_12e5e0;
        case 0x12e5e4u: goto label_12e5e4;
        case 0x12e5e8u: goto label_12e5e8;
        case 0x12e5ecu: goto label_12e5ec;
        case 0x12e5f0u: goto label_12e5f0;
        case 0x12e5f4u: goto label_12e5f4;
        case 0x12e5f8u: goto label_12e5f8;
        case 0x12e5fcu: goto label_12e5fc;
        case 0x12e600u: goto label_12e600;
        case 0x12e604u: goto label_12e604;
        case 0x12e608u: goto label_12e608;
        case 0x12e60cu: goto label_12e60c;
        case 0x12e610u: goto label_12e610;
        case 0x12e614u: goto label_12e614;
        case 0x12e618u: goto label_12e618;
        case 0x12e61cu: goto label_12e61c;
        case 0x12e620u: goto label_12e620;
        case 0x12e624u: goto label_12e624;
        case 0x12e628u: goto label_12e628;
        case 0x12e62cu: goto label_12e62c;
        case 0x12e630u: goto label_12e630;
        case 0x12e634u: goto label_12e634;
        case 0x12e638u: goto label_12e638;
        case 0x12e63cu: goto label_12e63c;
        case 0x12e640u: goto label_12e640;
        case 0x12e644u: goto label_12e644;
        case 0x12e648u: goto label_12e648;
        case 0x12e64cu: goto label_12e64c;
        case 0x12e650u: goto label_12e650;
        case 0x12e654u: goto label_12e654;
        case 0x12e658u: goto label_12e658;
        case 0x12e65cu: goto label_12e65c;
        case 0x12e660u: goto label_12e660;
        case 0x12e664u: goto label_12e664;
        case 0x12e668u: goto label_12e668;
        case 0x12e66cu: goto label_12e66c;
        case 0x12e670u: goto label_12e670;
        case 0x12e674u: goto label_12e674;
        case 0x12e678u: goto label_12e678;
        case 0x12e67cu: goto label_12e67c;
        case 0x12e680u: goto label_12e680;
        case 0x12e684u: goto label_12e684;
        case 0x12e688u: goto label_12e688;
        case 0x12e68cu: goto label_12e68c;
        case 0x12e690u: goto label_12e690;
        case 0x12e694u: goto label_12e694;
        case 0x12e698u: goto label_12e698;
        case 0x12e69cu: goto label_12e69c;
        case 0x12e6a0u: goto label_12e6a0;
        case 0x12e6a4u: goto label_12e6a4;
        case 0x12e6a8u: goto label_12e6a8;
        case 0x12e6acu: goto label_12e6ac;
        case 0x12e6b0u: goto label_12e6b0;
        case 0x12e6b4u: goto label_12e6b4;
        case 0x12e6b8u: goto label_12e6b8;
        case 0x12e6bcu: goto label_12e6bc;
        case 0x12e6c0u: goto label_12e6c0;
        case 0x12e6c4u: goto label_12e6c4;
        case 0x12e6c8u: goto label_12e6c8;
        case 0x12e6ccu: goto label_12e6cc;
        case 0x12e6d0u: goto label_12e6d0;
        case 0x12e6d4u: goto label_12e6d4;
        case 0x12e6d8u: goto label_12e6d8;
        case 0x12e6dcu: goto label_12e6dc;
        case 0x12e6e0u: goto label_12e6e0;
        case 0x12e6e4u: goto label_12e6e4;
        case 0x12e6e8u: goto label_12e6e8;
        case 0x12e6ecu: goto label_12e6ec;
        case 0x12e6f0u: goto label_12e6f0;
        case 0x12e6f4u: goto label_12e6f4;
        case 0x12e6f8u: goto label_12e6f8;
        case 0x12e6fcu: goto label_12e6fc;
        case 0x12e700u: goto label_12e700;
        case 0x12e704u: goto label_12e704;
        case 0x12e708u: goto label_12e708;
        case 0x12e70cu: goto label_12e70c;
        case 0x12e710u: goto label_12e710;
        case 0x12e714u: goto label_12e714;
        case 0x12e718u: goto label_12e718;
        case 0x12e71cu: goto label_12e71c;
        case 0x12e720u: goto label_12e720;
        case 0x12e724u: goto label_12e724;
        case 0x12e728u: goto label_12e728;
        case 0x12e72cu: goto label_12e72c;
        case 0x12e730u: goto label_12e730;
        case 0x12e734u: goto label_12e734;
        case 0x12e738u: goto label_12e738;
        case 0x12e73cu: goto label_12e73c;
        case 0x12e740u: goto label_12e740;
        case 0x12e744u: goto label_12e744;
        case 0x12e748u: goto label_12e748;
        case 0x12e74cu: goto label_12e74c;
        case 0x12e750u: goto label_12e750;
        case 0x12e754u: goto label_12e754;
        case 0x12e758u: goto label_12e758;
        case 0x12e75cu: goto label_12e75c;
        case 0x12e760u: goto label_12e760;
        case 0x12e764u: goto label_12e764;
        case 0x12e768u: goto label_12e768;
        case 0x12e76cu: goto label_12e76c;
        case 0x12e770u: goto label_12e770;
        case 0x12e774u: goto label_12e774;
        case 0x12e778u: goto label_12e778;
        case 0x12e77cu: goto label_12e77c;
        case 0x12e780u: goto label_12e780;
        case 0x12e784u: goto label_12e784;
        case 0x12e788u: goto label_12e788;
        case 0x12e78cu: goto label_12e78c;
        case 0x12e790u: goto label_12e790;
        case 0x12e794u: goto label_12e794;
        case 0x12e798u: goto label_12e798;
        case 0x12e79cu: goto label_12e79c;
        case 0x12e7a0u: goto label_12e7a0;
        case 0x12e7a4u: goto label_12e7a4;
        case 0x12e7a8u: goto label_12e7a8;
        case 0x12e7acu: goto label_12e7ac;
        case 0x12e7b0u: goto label_12e7b0;
        case 0x12e7b4u: goto label_12e7b4;
        case 0x12e7b8u: goto label_12e7b8;
        case 0x12e7bcu: goto label_12e7bc;
        case 0x12e7c0u: goto label_12e7c0;
        case 0x12e7c4u: goto label_12e7c4;
        case 0x12e7c8u: goto label_12e7c8;
        case 0x12e7ccu: goto label_12e7cc;
        case 0x12e7d0u: goto label_12e7d0;
        case 0x12e7d4u: goto label_12e7d4;
        case 0x12e7d8u: goto label_12e7d8;
        case 0x12e7dcu: goto label_12e7dc;
        case 0x12e7e0u: goto label_12e7e0;
        case 0x12e7e4u: goto label_12e7e4;
        case 0x12e7e8u: goto label_12e7e8;
        case 0x12e7ecu: goto label_12e7ec;
        case 0x12e7f0u: goto label_12e7f0;
        case 0x12e7f4u: goto label_12e7f4;
        case 0x12e7f8u: goto label_12e7f8;
        case 0x12e7fcu: goto label_12e7fc;
        case 0x12e800u: goto label_12e800;
        case 0x12e804u: goto label_12e804;
        default: break;
    }

    ctx->pc = 0x12e2c8u;

label_12e2c8:
    // 0x12e2c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12e2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_12e2cc:
    // 0x12e2cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12e2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e2d0:
    // 0x12e2d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12e2d4:
    // 0x12e2d4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_12e2d8:
    // 0x12e2d8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x12e2d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12e2dc:
    // 0x12e2dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12e2e0:
    // 0x12e2e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12e2e4:
    // 0x12e2e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_12e2e8:
    // 0x12e2e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_12e2ec:
    // 0x12e2ec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12e2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_12e2f0:
    // 0x12e2f0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x12e2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_12e2f4:
    // 0x12e2f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12e2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_12e2f8:
    // 0x12e2f8: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x12e2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_12e2fc:
    // 0x12e2fc: 0x124000df  beqz        $s2, . + 4 + (0xDF << 2)
label_12e300:
    if (ctx->pc == 0x12E300u) {
        ctx->pc = 0x12E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2FCu;
        // 0x12e300: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E304u;
        goto label_12e304;
    }
    ctx->pc = 0x12E2FCu;
    {
        const bool branch_taken_0x12e2fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2FCu;
        // 0x12e300: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2fc) {
            ctx->pc = 0x12E67Cu;
            goto label_12e67c;
        }
    }
    ctx->pc = 0x12E304u;
label_12e304:
    // 0x12e304: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x12e304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_12e308:
    // 0x12e308: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x12e308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_12e30c:
    // 0x12e30c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12e310:
    if (ctx->pc == 0x12E310u) {
        ctx->pc = 0x12E314u;
        goto label_12e314;
    }
    ctx->pc = 0x12E30Cu;
    {
        const bool branch_taken_0x12e30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e30c) {
            ctx->pc = 0x12E320u;
            goto label_12e320;
        }
    }
    ctx->pc = 0x12E314u;
label_12e314:
    // 0x12e314: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x12e314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_12e318:
    // 0x12e318: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_12e31c:
    if (ctx->pc == 0x12E31Cu) {
        ctx->pc = 0x12E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E318u;
        // 0x12e31c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E320u;
        goto label_12e320;
    }
    ctx->pc = 0x12E318u;
    {
        const bool branch_taken_0x12e318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E318u;
        // 0x12e31c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e318) {
            ctx->pc = 0x12E338u;
            goto label_12e338;
        }
    }
    ctx->pc = 0x12E320u;
label_12e320:
    // 0x12e320: 0xc04b140  jal         func_12C500
label_12e324:
    if (ctx->pc == 0x12E324u) {
        ctx->pc = 0x12E328u;
        goto label_12e328;
    }
    ctx->pc = 0x12E320u;
    SET_GPR_U32(ctx, 31, 0x12E328u);
    ctx->pc = 0x12C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C500u, 0x12E320u, 0x12E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E328u;
label_12e328:
    // 0x12e328: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
label_12e32c:
    if (ctx->pc == 0x12E32Cu) {
        ctx->pc = 0x12E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E328u;
        // 0x12e32c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E330u;
        goto label_12e330;
    }
    ctx->pc = 0x12E328u;
    {
        const bool branch_taken_0x12e328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E328u;
        // 0x12e32c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e328) {
            ctx->pc = 0x12E67Cu;
            goto label_12e67c;
        }
    }
    ctx->pc = 0x12E330u;
label_12e330:
    // 0x12e330: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x12e330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_12e334:
    // 0x12e334: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x12e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_12e338:
    // 0x12e338: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x12e338u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_12e33c:
    // 0x12e33c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_12e340:
    if (ctx->pc == 0x12E340u) {
        ctx->pc = 0x12E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E33Cu;
        // 0x12e340: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E344u;
        goto label_12e344;
    }
    ctx->pc = 0x12E33Cu;
    {
        const bool branch_taken_0x12e33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E33Cu;
        // 0x12e340: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e33c) {
            ctx->pc = 0x12E3B8u;
            goto label_12e3b8;
        }
    }
    ctx->pc = 0x12E344u;
label_12e344:
    // 0x12e344: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x12e344u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_12e348:
    // 0x12e348: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
label_12e34c:
    if (ctx->pc == 0x12E34Cu) {
        ctx->pc = 0x12E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E348u;
        // 0x12e34c: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E350u;
        goto label_12e350;
    }
    ctx->pc = 0x12E348u;
    {
        const bool branch_taken_0x12e348 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e348) {
            ctx->pc = 0x12E34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E348u;
            // 0x12e34c: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E370u;
            goto label_12e370;
        }
    }
    ctx->pc = 0x12E350u;
label_12e350:
    // 0x12e350: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x12e350u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_12e354:
    // 0x12e354: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12e354u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_12e358:
    // 0x12e358: 0x0  nop
    ctx->pc = 0x12e358u;
    // NOP
label_12e35c:
    // 0x12e35c: 0x0  nop
    ctx->pc = 0x12e35cu;
    // NOP
label_12e360:
    // 0x12e360: 0x0  nop
    ctx->pc = 0x12e360u;
    // NOP
label_12e364:
    // 0x12e364: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_12e368:
    if (ctx->pc == 0x12E368u) {
        ctx->pc = 0x12E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E364u;
        // 0x12e368: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E36Cu;
        goto label_12e36c;
    }
    ctx->pc = 0x12E364u;
    {
        const bool branch_taken_0x12e364 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E364u;
        // 0x12e368: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e364) {
            ctx->pc = 0x12E350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e350;
        }
    }
    ctx->pc = 0x12E36Cu;
label_12e36c:
    // 0x12e36c: 0x2e430401  sltiu       $v1, $s2, 0x401
    ctx->pc = 0x12e36cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_12e370:
    // 0x12e370: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x12e370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_12e374:
    // 0x12e374: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x12e374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_12e378:
    // 0x12e378: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12e378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12e37c:
    // 0x12e37c: 0x243300b  movn        $a2, $s2, $v1
    ctx->pc = 0x12e37cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_12e380:
    // 0x12e380: 0x40f809  jalr        $v0
label_12e384:
    if (ctx->pc == 0x12E384u) {
        ctx->pc = 0x12E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E380u;
        // 0x12e384: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E388u;
        goto label_12e388;
    }
    ctx->pc = 0x12E380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12E388u);
        ctx->pc = 0x12E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E380u;
        // 0x12e384: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E380u, 0x12E388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E388u;
label_12e388:
    // 0x12e388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e38c:
    // 0x12e38c: 0x5a0000b8  blezl       $s0, . + 4 + (0xB8 << 2)
label_12e390:
    if (ctx->pc == 0x12E390u) {
        ctx->pc = 0x12E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E38Cu;
        // 0x12e390: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E394u;
        goto label_12e394;
    }
    ctx->pc = 0x12E38Cu;
    {
        const bool branch_taken_0x12e38c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x12e38c) {
            ctx->pc = 0x12E390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E38Cu;
            // 0x12e390: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E670u;
            goto label_12e670;
        }
    }
    ctx->pc = 0x12E394u;
label_12e394:
    // 0x12e394: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x12e394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_12e398:
    // 0x12e398: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x12e398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_12e39c:
    // 0x12e39c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x12e39cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_12e3a0:
    // 0x12e3a0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x12e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_12e3a4:
    // 0x12e3a4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_12e3a8:
    if (ctx->pc == 0x12E3A8u) {
        ctx->pc = 0x12E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3A4u;
        // 0x12e3a8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3ACu;
        goto label_12e3ac;
    }
    ctx->pc = 0x12E3A4u;
    {
        const bool branch_taken_0x12e3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3A4u;
        // 0x12e3a8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3a4) {
            ctx->pc = 0x12E348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e348;
        }
    }
    ctx->pc = 0x12E3ACu;
label_12e3ac:
    // 0x12e3ac: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_12e3b0:
    if (ctx->pc == 0x12E3B0u) {
        ctx->pc = 0x12E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3ACu;
        // 0x12e3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3B4u;
        goto label_12e3b4;
    }
    ctx->pc = 0x12E3ACu;
    {
        const bool branch_taken_0x12e3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3ACu;
        // 0x12e3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3ac) {
            ctx->pc = 0x12E67Cu;
            goto label_12e67c;
        }
    }
    ctx->pc = 0x12E3B4u;
label_12e3b4:
    // 0x12e3b4: 0x0  nop
    ctx->pc = 0x12e3b4u;
    // NOP
label_12e3b8:
    // 0x12e3b8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x12e3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_12e3bc:
    // 0x12e3bc: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_12e3c0:
    if (ctx->pc == 0x12E3C0u) {
        ctx->pc = 0x12E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3BCu;
        // 0x12e3c0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3C4u;
        goto label_12e3c4;
    }
    ctx->pc = 0x12E3BCu;
    {
        const bool branch_taken_0x12e3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3BCu;
        // 0x12e3c0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3bc) {
            ctx->pc = 0x12E508u;
            goto label_12e508;
        }
    }
    ctx->pc = 0x12E3C4u;
label_12e3c4:
    // 0x12e3c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_12e3c8:
    if (ctx->pc == 0x12E3C8u) {
        ctx->pc = 0x12E3CCu;
        goto label_12e3cc;
    }
    ctx->pc = 0x12E3C4u;
    {
        const bool branch_taken_0x12e3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e3c4) {
            ctx->pc = 0x12E3D8u;
            goto label_12e3d8;
        }
    }
    ctx->pc = 0x12E3CCu;
label_12e3cc:
    // 0x12e3cc: 0x0  nop
    ctx->pc = 0x12e3ccu;
    // NOP
label_12e3d0:
    // 0x12e3d0: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x12e3d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_12e3d4:
    // 0x12e3d4: 0x0  nop
    ctx->pc = 0x12e3d4u;
    // NOP
label_12e3d8:
    // 0x12e3d8: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_12e3dc:
    if (ctx->pc == 0x12E3DCu) {
        ctx->pc = 0x12E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3D8u;
        // 0x12e3dc: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3E0u;
        goto label_12e3e0;
    }
    ctx->pc = 0x12E3D8u;
    {
        const bool branch_taken_0x12e3d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3D8u;
        // 0x12e3dc: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3d8) {
            ctx->pc = 0x12E400u;
            goto label_12e400;
        }
    }
    ctx->pc = 0x12E3E0u;
label_12e3e0:
    // 0x12e3e0: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x12e3e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_12e3e4:
    // 0x12e3e4: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12e3e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_12e3e8:
    // 0x12e3e8: 0x0  nop
    ctx->pc = 0x12e3e8u;
    // NOP
label_12e3ec:
    // 0x12e3ec: 0x0  nop
    ctx->pc = 0x12e3ecu;
    // NOP
label_12e3f0:
    // 0x12e3f0: 0x0  nop
    ctx->pc = 0x12e3f0u;
    // NOP
label_12e3f4:
    // 0x12e3f4: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_12e3f8:
    if (ctx->pc == 0x12E3F8u) {
        ctx->pc = 0x12E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3F4u;
        // 0x12e3f8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3FCu;
        goto label_12e3fc;
    }
    ctx->pc = 0x12E3F4u;
    {
        const bool branch_taken_0x12e3f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3F4u;
        // 0x12e3f8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3f4) {
            ctx->pc = 0x12E3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e3e0;
        }
    }
    ctx->pc = 0x12E3FCu;
label_12e3fc:
    // 0x12e3fc: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x12e3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_12e400:
    // 0x12e400: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_12e404:
    if (ctx->pc == 0x12E404u) {
        ctx->pc = 0x12E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E400u;
        // 0x12e404: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E408u;
        goto label_12e408;
    }
    ctx->pc = 0x12E400u;
    {
        const bool branch_taken_0x12e400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E400u;
        // 0x12e404: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e400) {
            ctx->pc = 0x12E438u;
            goto label_12e438;
        }
    }
    ctx->pc = 0x12E408u;
label_12e408:
    // 0x12e408: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x12e408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_12e40c:
    // 0x12e40c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e410:
    // 0x12e410: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x12e410u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_12e414:
    // 0x12e414: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e418:
    // 0x12e418: 0xc04baa5  jal         func_12EA94
label_12e41c:
    if (ctx->pc == 0x12E41Cu) {
        ctx->pc = 0x12E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E418u;
        // 0x12e41c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E420u;
        goto label_12e420;
    }
    ctx->pc = 0x12E418u;
    SET_GPR_U32(ctx, 31, 0x12E420u);
    ctx->pc = 0x12E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E418u;
    // 0x12e41c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EA94u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EA94u, 0x12E418u, 0x12E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E420u;
label_12e420:
    // 0x12e420: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x12e420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_12e424:
    // 0x12e424: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e428:
    // 0x12e428: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x12e428u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12e42c:
    // 0x12e42c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_12e430:
    // 0x12e430: 0x1000002a  b           . + 4 + (0x2A << 2)
label_12e434:
    if (ctx->pc == 0x12E434u) {
        ctx->pc = 0x12E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E430u;
        // 0x12e434: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E438u;
        goto label_12e438;
    }
    ctx->pc = 0x12E430u;
    {
        const bool branch_taken_0x12e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E430u;
        // 0x12e434: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e430) {
            ctx->pc = 0x12E4DCu;
            goto label_12e4dc;
        }
    }
    ctx->pc = 0x12E438u;
label_12e438:
    // 0x12e438: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12e438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e43c:
    // 0x12e43c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x12e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_12e440:
    // 0x12e440: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x12e440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_12e444:
    // 0x12e444: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_12e448:
    if (ctx->pc == 0x12E448u) {
        ctx->pc = 0x12E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E444u;
        // 0x12e448: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E44Cu;
        goto label_12e44c;
    }
    ctx->pc = 0x12E444u;
    {
        const bool branch_taken_0x12e444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e444) {
            ctx->pc = 0x12E448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E444u;
            // 0x12e448: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E488u;
            goto label_12e488;
        }
    }
    ctx->pc = 0x12E44Cu;
label_12e44c:
    // 0x12e44c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x12e44cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_12e450:
    // 0x12e450: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_12e454:
    if (ctx->pc == 0x12E454u) {
        ctx->pc = 0x12E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E450u;
        // 0x12e454: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E458u;
        goto label_12e458;
    }
    ctx->pc = 0x12E450u;
    {
        const bool branch_taken_0x12e450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e450) {
            ctx->pc = 0x12E454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E450u;
            // 0x12e454: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E488u;
            goto label_12e488;
        }
    }
    ctx->pc = 0x12E458u;
label_12e458:
    // 0x12e458: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e45c:
    // 0x12e45c: 0xc04baa5  jal         func_12EA94
label_12e460:
    if (ctx->pc == 0x12E460u) {
        ctx->pc = 0x12E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E45Cu;
        // 0x12e460: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E464u;
        goto label_12e464;
    }
    ctx->pc = 0x12E45Cu;
    SET_GPR_U32(ctx, 31, 0x12E464u);
    ctx->pc = 0x12E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E45Cu;
    // 0x12e460: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EA94u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EA94u, 0x12E45Cu, 0x12E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E464u;
label_12e464:
    // 0x12e464: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12e464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e468:
    // 0x12e468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12e46c:
    // 0x12e46c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12e470:
    // 0x12e470: 0xc04b6aa  jal         func_12DAA8
label_12e474:
    if (ctx->pc == 0x12E474u) {
        ctx->pc = 0x12E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E470u;
        // 0x12e474: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E478u;
        goto label_12e478;
    }
    ctx->pc = 0x12E470u;
    SET_GPR_U32(ctx, 31, 0x12E478u);
    ctx->pc = 0x12E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E470u;
    // 0x12e474: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DAA8u, 0x12E470u, 0x12E478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E478u;
label_12e478:
    // 0x12e478: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_12e47c:
    if (ctx->pc == 0x12E47Cu) {
        ctx->pc = 0x12E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E478u;
        // 0x12e47c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E480u;
        goto label_12e480;
    }
    ctx->pc = 0x12E478u;
    {
        const bool branch_taken_0x12e478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e478) {
            ctx->pc = 0x12E47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E478u;
            // 0x12e47c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E4E8u;
            goto label_12e4e8;
        }
    }
    ctx->pc = 0x12E480u;
label_12e480:
    // 0x12e480: 0x1000007b  b           . + 4 + (0x7B << 2)
label_12e484:
    if (ctx->pc == 0x12E484u) {
        ctx->pc = 0x12E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E480u;
        // 0x12e484: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E488u;
        goto label_12e488;
    }
    ctx->pc = 0x12E480u;
    {
        const bool branch_taken_0x12e480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E480u;
        // 0x12e484: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e480) {
            ctx->pc = 0x12E670u;
            goto label_12e670;
        }
    }
    ctx->pc = 0x12E488u;
label_12e488:
    // 0x12e488: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x12e488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_12e48c:
    // 0x12e48c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_12e490:
    if (ctx->pc == 0x12E490u) {
        ctx->pc = 0x12E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E48Cu;
        // 0x12e490: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E494u;
        goto label_12e494;
    }
    ctx->pc = 0x12E48Cu;
    {
        const bool branch_taken_0x12e48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e48c) {
            ctx->pc = 0x12E490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E48Cu;
            // 0x12e490: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E4C0u;
            goto label_12e4c0;
        }
    }
    ctx->pc = 0x12E494u;
label_12e494:
    // 0x12e494: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x12e494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_12e498:
    // 0x12e498: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12e498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e49c:
    // 0x12e49c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x12e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_12e4a0:
    // 0x12e4a0: 0x40f809  jalr        $v0
label_12e4a4:
    if (ctx->pc == 0x12E4A4u) {
        ctx->pc = 0x12E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4A0u;
        // 0x12e4a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E4A8u;
        goto label_12e4a8;
    }
    ctx->pc = 0x12E4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12E4A8u);
        ctx->pc = 0x12E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4A0u;
        // 0x12e4a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E4A0u, 0x12E4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E4A8u;
label_12e4a8:
    // 0x12e4a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e4ac:
    // 0x12e4ac: 0x5e00000e  bgtzl       $s0, . + 4 + (0xE << 2)
label_12e4b0:
    if (ctx->pc == 0x12E4B0u) {
        ctx->pc = 0x12E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4ACu;
        // 0x12e4b0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E4B4u;
        goto label_12e4b4;
    }
    ctx->pc = 0x12E4ACu;
    {
        const bool branch_taken_0x12e4ac = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x12e4ac) {
            ctx->pc = 0x12E4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E4ACu;
            // 0x12e4b0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E4E8u;
            goto label_12e4e8;
        }
    }
    ctx->pc = 0x12E4B4u;
label_12e4b4:
    // 0x12e4b4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_12e4b8:
    if (ctx->pc == 0x12E4B8u) {
        ctx->pc = 0x12E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4B4u;
        // 0x12e4b8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E4BCu;
        goto label_12e4bc;
    }
    ctx->pc = 0x12E4B4u;
    {
        const bool branch_taken_0x12e4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4B4u;
        // 0x12e4b8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4b4) {
            ctx->pc = 0x12E670u;
            goto label_12e670;
        }
    }
    ctx->pc = 0x12E4BCu;
label_12e4bc:
    // 0x12e4bc: 0x0  nop
    ctx->pc = 0x12e4bcu;
    // NOP
label_12e4c0:
    // 0x12e4c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e4c4:
    // 0x12e4c4: 0xc04baa5  jal         func_12EA94
label_12e4c8:
    if (ctx->pc == 0x12E4C8u) {
        ctx->pc = 0x12E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4C4u;
        // 0x12e4c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E4CCu;
        goto label_12e4cc;
    }
    ctx->pc = 0x12E4C4u;
    SET_GPR_U32(ctx, 31, 0x12E4CCu);
    ctx->pc = 0x12E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E4C4u;
    // 0x12e4c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EA94u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EA94u, 0x12E4C4u, 0x12E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E4CCu;
label_12e4cc:
    // 0x12e4cc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x12e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_12e4d0:
    // 0x12e4d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e4d4:
    // 0x12e4d4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x12e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12e4d8:
    // 0x12e4d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_12e4dc:
    // 0x12e4dc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x12e4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_12e4e0:
    // 0x12e4e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12e4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12e4e4:
    // 0x12e4e4: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x12e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_12e4e8:
    // 0x12e4e8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x12e4e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_12e4ec:
    // 0x12e4ec: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x12e4ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_12e4f0:
    // 0x12e4f0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x12e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_12e4f4:
    // 0x12e4f4: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_12e4f8:
    if (ctx->pc == 0x12E4F8u) {
        ctx->pc = 0x12E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4F4u;
        // 0x12e4f8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E4FCu;
        goto label_12e4fc;
    }
    ctx->pc = 0x12E4F4u;
    {
        const bool branch_taken_0x12e4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4F4u;
        // 0x12e4f8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4f4) {
            ctx->pc = 0x12E3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e3d0;
        }
    }
    ctx->pc = 0x12E4FCu;
label_12e4fc:
    // 0x12e4fc: 0x1000005f  b           . + 4 + (0x5F << 2)
label_12e500:
    if (ctx->pc == 0x12E500u) {
        ctx->pc = 0x12E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4FCu;
        // 0x12e500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E504u;
        goto label_12e504;
    }
    ctx->pc = 0x12E4FCu;
    {
        const bool branch_taken_0x12e4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4FCu;
        // 0x12e500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4fc) {
            ctx->pc = 0x12E67Cu;
            goto label_12e67c;
        }
    }
    ctx->pc = 0x12E504u;
label_12e504:
    // 0x12e504: 0x0  nop
    ctx->pc = 0x12e504u;
    // NOP
label_12e508:
    // 0x12e508: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_12e50c:
    if (ctx->pc == 0x12E50Cu) {
        ctx->pc = 0x12E510u;
        goto label_12e510;
    }
    ctx->pc = 0x12E508u;
    {
        const bool branch_taken_0x12e508 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e508) {
            ctx->pc = 0x12E534u;
            goto label_12e534;
        }
    }
    ctx->pc = 0x12E510u;
label_12e510:
    // 0x12e510: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12e510u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e514:
    // 0x12e514: 0x0  nop
    ctx->pc = 0x12e514u;
    // NOP
label_12e518:
    // 0x12e518: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x12e518u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_12e51c:
    // 0x12e51c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x12e51cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_12e520:
    // 0x12e520: 0x0  nop
    ctx->pc = 0x12e520u;
    // NOP
label_12e524:
    // 0x12e524: 0x0  nop
    ctx->pc = 0x12e524u;
    // NOP
label_12e528:
    // 0x12e528: 0x0  nop
    ctx->pc = 0x12e528u;
    // NOP
label_12e52c:
    // 0x12e52c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_12e530:
    if (ctx->pc == 0x12E530u) {
        ctx->pc = 0x12E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E52Cu;
        // 0x12e530: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E534u;
        goto label_12e534;
    }
    ctx->pc = 0x12E52Cu;
    {
        const bool branch_taken_0x12e52c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E52Cu;
        // 0x12e530: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e52c) {
            ctx->pc = 0x12E518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e518;
        }
    }
    ctx->pc = 0x12E534u;
label_12e534:
    // 0x12e534: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_12e538:
    if (ctx->pc == 0x12E538u) {
        ctx->pc = 0x12E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E534u;
        // 0x12e538: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E53Cu;
        goto label_12e53c;
    }
    ctx->pc = 0x12E534u;
    {
        const bool branch_taken_0x12e534 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e534) {
            ctx->pc = 0x12E538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E534u;
            // 0x12e538: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E56Cu;
            goto label_12e56c;
        }
    }
    ctx->pc = 0x12E53Cu;
label_12e53c:
    // 0x12e53c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e540:
    // 0x12e540: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12e540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12e544:
    // 0x12e544: 0xc04ba6d  jal         func_12E9B4
label_12e548:
    if (ctx->pc == 0x12E548u) {
        ctx->pc = 0x12E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E544u;
        // 0x12e548: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E54Cu;
        goto label_12e54c;
    }
    ctx->pc = 0x12E544u;
    SET_GPR_U32(ctx, 31, 0x12E54Cu);
    ctx->pc = 0x12E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E544u;
    // 0x12e548: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E9B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E9B4u, 0x12E544u, 0x12E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E54Cu;
label_12e54c:
    // 0x12e54c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12e550:
    if (ctx->pc == 0x12E550u) {
        ctx->pc = 0x12E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E54Cu;
        // 0x12e550: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E554u;
        goto label_12e554;
    }
    ctx->pc = 0x12E54Cu;
    {
        const bool branch_taken_0x12e54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E54Cu;
        // 0x12e550: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e54c) {
            ctx->pc = 0x12E560u;
            goto label_12e560;
        }
    }
    ctx->pc = 0x12E554u;
label_12e554:
    // 0x12e554: 0x10000003  b           . + 4 + (0x3 << 2)
label_12e558:
    if (ctx->pc == 0x12E558u) {
        ctx->pc = 0x12E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E554u;
        // 0x12e558: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E55Cu;
        goto label_12e55c;
    }
    ctx->pc = 0x12E554u;
    {
        const bool branch_taken_0x12e554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E554u;
        // 0x12e558: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e554) {
            ctx->pc = 0x12E564u;
            goto label_12e564;
        }
    }
    ctx->pc = 0x12E55Cu;
label_12e55c:
    // 0x12e55c: 0x0  nop
    ctx->pc = 0x12e55cu;
    // NOP
label_12e560:
    // 0x12e560: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x12e560u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12e564:
    // 0x12e564: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x12e564u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e568:
    // 0x12e568: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x12e568u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e56c:
    // 0x12e56c: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x12e56cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_12e570:
    // 0x12e570: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12e570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_12e574:
    // 0x12e574: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12e578:
    // 0x12e578: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x12e578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_12e57c:
    // 0x12e57c: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x12e57cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
label_12e580:
    // 0x12e580: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x12e580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_12e584:
    // 0x12e584: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x12e584u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_12e588:
    // 0x12e588: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_12e58c:
    if (ctx->pc == 0x12E58Cu) {
        ctx->pc = 0x12E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E588u;
        // 0x12e58c: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E590u;
        goto label_12e590;
    }
    ctx->pc = 0x12E588u;
    {
        const bool branch_taken_0x12e588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E588u;
        // 0x12e58c: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e588) {
            ctx->pc = 0x12E5D0u;
            goto label_12e5d0;
        }
    }
    ctx->pc = 0x12E590u;
label_12e590:
    // 0x12e590: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x12e590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_12e594:
    // 0x12e594: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_12e598:
    if (ctx->pc == 0x12E598u) {
        ctx->pc = 0x12E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E594u;
        // 0x12e598: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E59Cu;
        goto label_12e59c;
    }
    ctx->pc = 0x12E594u;
    {
        const bool branch_taken_0x12e594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e594) {
            ctx->pc = 0x12E598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E594u;
            // 0x12e598: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E5D4u;
            goto label_12e5d4;
        }
    }
    ctx->pc = 0x12E59Cu;
label_12e59c:
    // 0x12e59c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x12e59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_12e5a0:
    // 0x12e5a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e5a4:
    // 0x12e5a4: 0xc04baa5  jal         func_12EA94
label_12e5a8:
    if (ctx->pc == 0x12E5A8u) {
        ctx->pc = 0x12E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5A4u;
        // 0x12e5a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E5ACu;
        goto label_12e5ac;
    }
    ctx->pc = 0x12E5A4u;
    SET_GPR_U32(ctx, 31, 0x12E5ACu);
    ctx->pc = 0x12E5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5A4u;
    // 0x12e5a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EA94u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EA94u, 0x12E5A4u, 0x12E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5ACu;
label_12e5ac:
    // 0x12e5ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e5b0:
    // 0x12e5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12e5b4:
    // 0x12e5b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12e5b8:
    // 0x12e5b8: 0xc04b6aa  jal         func_12DAA8
label_12e5bc:
    if (ctx->pc == 0x12E5BCu) {
        ctx->pc = 0x12E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5B8u;
        // 0x12e5bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E5C0u;
        goto label_12e5c0;
    }
    ctx->pc = 0x12E5B8u;
    SET_GPR_U32(ctx, 31, 0x12E5C0u);
    ctx->pc = 0x12E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5B8u;
    // 0x12e5bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DAA8u, 0x12E5B8u, 0x12E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5C0u;
label_12e5c0:
    // 0x12e5c0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_12e5c4:
    if (ctx->pc == 0x12E5C4u) {
        ctx->pc = 0x12E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5C0u;
        // 0x12e5c4: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E5C8u;
        goto label_12e5c8;
    }
    ctx->pc = 0x12E5C0u;
    {
        const bool branch_taken_0x12e5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5C0u;
        // 0x12e5c4: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5c0) {
            ctx->pc = 0x12E634u;
            goto label_12e634;
        }
    }
    ctx->pc = 0x12E5C8u;
label_12e5c8:
    // 0x12e5c8: 0x10000029  b           . + 4 + (0x29 << 2)
label_12e5cc:
    if (ctx->pc == 0x12E5CCu) {
        ctx->pc = 0x12E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5C8u;
        // 0x12e5cc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E5D0u;
        goto label_12e5d0;
    }
    ctx->pc = 0x12E5C8u;
    {
        const bool branch_taken_0x12e5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5C8u;
        // 0x12e5cc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5c8) {
            ctx->pc = 0x12E670u;
            goto label_12e670;
        }
    }
    ctx->pc = 0x12E5D0u;
label_12e5d0:
    // 0x12e5d0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x12e5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12e5d4:
    // 0x12e5d4: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x12e5d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_12e5d8:
    // 0x12e5d8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_12e5dc:
    if (ctx->pc == 0x12E5DCu) {
        ctx->pc = 0x12E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5D8u;
        // 0x12e5dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E5E0u;
        goto label_12e5e0;
    }
    ctx->pc = 0x12E5D8u;
    {
        const bool branch_taken_0x12e5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e5d8) {
            ctx->pc = 0x12E5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E5D8u;
            // 0x12e5dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E608u;
            goto label_12e608;
        }
    }
    ctx->pc = 0x12E5E0u;
label_12e5e0:
    // 0x12e5e0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x12e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_12e5e4:
    // 0x12e5e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12e5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e5e8:
    // 0x12e5e8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x12e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_12e5ec:
    // 0x12e5ec: 0x40f809  jalr        $v0
label_12e5f0:
    if (ctx->pc == 0x12E5F0u) {
        ctx->pc = 0x12E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5ECu;
        // 0x12e5f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E5F4u;
        goto label_12e5f4;
    }
    ctx->pc = 0x12E5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12E5F4u);
        ctx->pc = 0x12E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5ECu;
        // 0x12e5f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E5ECu, 0x12E5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E5F4u;
label_12e5f4:
    // 0x12e5f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e5f8:
    // 0x12e5f8: 0x1e00000e  bgtz        $s0, . + 4 + (0xE << 2)
label_12e5fc:
    if (ctx->pc == 0x12E5FCu) {
        ctx->pc = 0x12E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5F8u;
        // 0x12e5fc: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E600u;
        goto label_12e600;
    }
    ctx->pc = 0x12E5F8u;
    {
        const bool branch_taken_0x12e5f8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x12E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5F8u;
        // 0x12e5fc: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5f8) {
            ctx->pc = 0x12E634u;
            goto label_12e634;
        }
    }
    ctx->pc = 0x12E600u;
label_12e600:
    // 0x12e600: 0x1000001b  b           . + 4 + (0x1B << 2)
label_12e604:
    if (ctx->pc == 0x12E604u) {
        ctx->pc = 0x12E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E600u;
        // 0x12e604: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E608u;
        goto label_12e608;
    }
    ctx->pc = 0x12E600u;
    {
        const bool branch_taken_0x12e600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E600u;
        // 0x12e604: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e600) {
            ctx->pc = 0x12E670u;
            goto label_12e670;
        }
    }
    ctx->pc = 0x12E608u;
label_12e608:
    // 0x12e608: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e60c:
    // 0x12e60c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x12e60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_12e610:
    // 0x12e610: 0xc04baa5  jal         func_12EA94
label_12e614:
    if (ctx->pc == 0x12E614u) {
        ctx->pc = 0x12E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E610u;
        // 0x12e614: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E618u;
        goto label_12e618;
    }
    ctx->pc = 0x12E610u;
    SET_GPR_U32(ctx, 31, 0x12E618u);
    ctx->pc = 0x12E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E610u;
    // 0x12e614: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EA94u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EA94u, 0x12E610u, 0x12E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E618u;
label_12e618:
    // 0x12e618: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x12e618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_12e61c:
    // 0x12e61c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e620:
    // 0x12e620: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x12e620u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12e624:
    // 0x12e624: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12e624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_12e628:
    // 0x12e628: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x12e628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_12e62c:
    // 0x12e62c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12e630:
    // 0x12e630: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x12e630u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_12e634:
    // 0x12e634: 0x56a00007  bnel        $s5, $zero, . + 4 + (0x7 << 2)
label_12e638:
    if (ctx->pc == 0x12E638u) {
        ctx->pc = 0x12E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E634u;
        // 0x12e638: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E63Cu;
        goto label_12e63c;
    }
    ctx->pc = 0x12E634u;
    {
        const bool branch_taken_0x12e634 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e634) {
            ctx->pc = 0x12E638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E634u;
            // 0x12e638: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E654u;
            goto label_12e654;
        }
    }
    ctx->pc = 0x12E63Cu;
label_12e63c:
    // 0x12e63c: 0xc04b6aa  jal         func_12DAA8
label_12e640:
    if (ctx->pc == 0x12E640u) {
        ctx->pc = 0x12E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E63Cu;
        // 0x12e640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E644u;
        goto label_12e644;
    }
    ctx->pc = 0x12E63Cu;
    SET_GPR_U32(ctx, 31, 0x12E644u);
    ctx->pc = 0x12E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E63Cu;
    // 0x12e640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DAA8u, 0x12E63Cu, 0x12E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E644u;
label_12e644:
    // 0x12e644: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_12e648:
    if (ctx->pc == 0x12E648u) {
        ctx->pc = 0x12E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E644u;
        // 0x12e648: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E64Cu;
        goto label_12e64c;
    }
    ctx->pc = 0x12E644u;
    {
        const bool branch_taken_0x12e644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e644) {
            ctx->pc = 0x12E648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E644u;
            // 0x12e648: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E670u;
            goto label_12e670;
        }
    }
    ctx->pc = 0x12E64Cu;
label_12e64c:
    // 0x12e64c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12e64cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e650:
    // 0x12e650: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x12e650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_12e654:
    // 0x12e654: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x12e654u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_12e658:
    // 0x12e658: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x12e658u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_12e65c:
    // 0x12e65c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x12e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_12e660:
    // 0x12e660: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
label_12e664:
    if (ctx->pc == 0x12E664u) {
        ctx->pc = 0x12E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E660u;
        // 0x12e664: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E668u;
        goto label_12e668;
    }
    ctx->pc = 0x12E660u;
    {
        const bool branch_taken_0x12e660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E660u;
        // 0x12e664: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e660) {
            ctx->pc = 0x12E508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e508;
        }
    }
    ctx->pc = 0x12E668u;
label_12e668:
    // 0x12e668: 0x10000004  b           . + 4 + (0x4 << 2)
label_12e66c:
    if (ctx->pc == 0x12E66Cu) {
        ctx->pc = 0x12E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E668u;
        // 0x12e66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E670u;
        goto label_12e670;
    }
    ctx->pc = 0x12E668u;
    {
        const bool branch_taken_0x12e668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E668u;
        // 0x12e66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e668) {
            ctx->pc = 0x12E67Cu;
            goto label_12e67c;
        }
    }
    ctx->pc = 0x12E670u;
label_12e670:
    // 0x12e670: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12e670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12e674:
    // 0x12e674: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x12e674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_12e678:
    // 0x12e678: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x12e678u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_12e67c:
    // 0x12e67c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e67cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12e680:
    // 0x12e680: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12e684:
    // 0x12e684: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12e688:
    // 0x12e688: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12e688u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12e68c:
    // 0x12e68c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12e68cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12e690:
    // 0x12e690: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12e690u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12e694:
    // 0x12e694: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x12e694u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12e698:
    // 0x12e698: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x12e698u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12e69c:
    // 0x12e69c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12e69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12e6a0:
    // 0x12e6a0: 0x3e00008  jr          $ra
label_12e6a4:
    if (ctx->pc == 0x12E6A4u) {
        ctx->pc = 0x12E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6A0u;
        // 0x12e6a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6A8u;
        goto label_12e6a8;
    }
    ctx->pc = 0x12E6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6A0u;
        // 0x12e6a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E6A8u;
label_12e6a8:
    // 0x12e6a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12e6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12e6ac:
    // 0x12e6ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12e6b0:
    // 0x12e6b0: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x12e6b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_12e6b4:
    // 0x12e6b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12e6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_12e6b8:
    // 0x12e6b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12e6b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e6bc:
    // 0x12e6bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12e6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_12e6c0:
    // 0x12e6c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12e6c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12e6c4:
    // 0x12e6c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12e6c8:
    // 0x12e6c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12e6cc:
    // 0x12e6cc: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_12e6d0:
    if (ctx->pc == 0x12E6D0u) {
        ctx->pc = 0x12E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6CCu;
        // 0x12e6d0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6D4u;
        goto label_12e6d4;
    }
    ctx->pc = 0x12E6CCu;
    {
        const bool branch_taken_0x12e6cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6CCu;
        // 0x12e6d0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6cc) {
            ctx->pc = 0x12E718u;
            goto label_12e718;
        }
    }
    ctx->pc = 0x12E6D4u;
label_12e6d4:
    // 0x12e6d4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x12e6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_12e6d8:
    // 0x12e6d8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x12e6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_12e6dc:
    // 0x12e6dc: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_12e6e0:
    if (ctx->pc == 0x12E6E0u) {
        ctx->pc = 0x12E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6DCu;
        // 0x12e6e0: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6E4u;
        goto label_12e6e4;
    }
    ctx->pc = 0x12E6DCu;
    {
        const bool branch_taken_0x12e6dc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x12E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6DCu;
        // 0x12e6e0: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6dc) {
            ctx->pc = 0x12E70Cu;
            goto label_12e70c;
        }
    }
    ctx->pc = 0x12E6E4u;
label_12e6e4:
    // 0x12e6e4: 0x0  nop
    ctx->pc = 0x12e6e4u;
    // NOP
label_12e6e8:
    // 0x12e6e8: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x12e6e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_12e6ec:
    // 0x12e6ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_12e6f0:
    if (ctx->pc == 0x12E6F0u) {
        ctx->pc = 0x12E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6ECu;
        // 0x12e6f0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6F4u;
        goto label_12e6f4;
    }
    ctx->pc = 0x12E6ECu;
    {
        const bool branch_taken_0x12e6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e6ec) {
            ctx->pc = 0x12E6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E6ECu;
            // 0x12e6f0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E704u;
            goto label_12e704;
        }
    }
    ctx->pc = 0x12E6F4u;
label_12e6f4:
    // 0x12e6f4: 0x280f809  jalr        $s4
label_12e6f8:
    if (ctx->pc == 0x12E6F8u) {
        ctx->pc = 0x12E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6F4u;
        // 0x12e6f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6FCu;
        goto label_12e6fc;
    }
    ctx->pc = 0x12E6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x12E6FCu);
        ctx->pc = 0x12E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6F4u;
        // 0x12e6f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E6F4u, 0x12E6FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E6FCu;
label_12e6fc:
    // 0x12e6fc: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x12e6fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_12e700:
    // 0x12e700: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x12e700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_12e704:
    // 0x12e704: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_12e708:
    if (ctx->pc == 0x12E708u) {
        ctx->pc = 0x12E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E704u;
        // 0x12e708: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E70Cu;
        goto label_12e70c;
    }
    ctx->pc = 0x12E704u;
    {
        const bool branch_taken_0x12e704 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x12E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E704u;
        // 0x12e708: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e704) {
            ctx->pc = 0x12E6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e6e8;
        }
    }
    ctx->pc = 0x12E70Cu;
label_12e70c:
    // 0x12e70c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x12e70cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12e710:
    // 0x12e710: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_12e714:
    if (ctx->pc == 0x12E714u) {
        ctx->pc = 0x12E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E710u;
        // 0x12e714: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E718u;
        goto label_12e718;
    }
    ctx->pc = 0x12E710u;
    {
        const bool branch_taken_0x12e710 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e710) {
            ctx->pc = 0x12E714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E710u;
            // 0x12e714: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e6d8;
        }
    }
    ctx->pc = 0x12E718u;
label_12e718:
    // 0x12e718: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x12e718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e71c:
    // 0x12e71c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e71cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12e720:
    // 0x12e720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12e724:
    // 0x12e724: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12e728:
    // 0x12e728: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12e728u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12e72c:
    // 0x12e72c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12e72cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12e730:
    // 0x12e730: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12e730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12e734:
    // 0x12e734: 0x3e00008  jr          $ra
label_12e738:
    if (ctx->pc == 0x12E738u) {
        ctx->pc = 0x12E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E734u;
        // 0x12e738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E73Cu;
        goto label_12e73c;
    }
    ctx->pc = 0x12E734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E734u;
        // 0x12e738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E73Cu;
label_12e73c:
    // 0x12e73c: 0x0  nop
    ctx->pc = 0x12e73cu;
    // NOP
label_12e740:
    // 0x12e740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12e740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12e744:
    // 0x12e744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12e748:
    // 0x12e748: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12e748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12e74c:
    // 0x12e74c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12e750:
    // 0x12e750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12e750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12e754:
    // 0x12e754: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12e758:
    // 0x12e758: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12e758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12e75c:
    // 0x12e75c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12e75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_12e760:
    // 0x12e760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e764:
    // 0x12e764: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_12e768:
    if (ctx->pc == 0x12E768u) {
        ctx->pc = 0x12E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E764u;
        // 0x12e768: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E76Cu;
        goto label_12e76c;
    }
    ctx->pc = 0x12E764u;
    {
        const bool branch_taken_0x12e764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E764u;
        // 0x12e768: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e764) {
            ctx->pc = 0x12E7A8u;
            goto label_12e7a8;
        }
    }
    ctx->pc = 0x12E76Cu;
label_12e76c:
    // 0x12e76c: 0x3c130015  lui         $s3, 0x15
    ctx->pc = 0x12e76cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
label_12e770:
    // 0x12e770: 0xc04a43b  jal         func_1290EC
label_12e774:
    if (ctx->pc == 0x12E774u) {
        ctx->pc = 0x12E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E770u;
        // 0x12e774: 0x2665f978  addiu       $a1, $s3, -0x688 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E778u;
        goto label_12e778;
    }
    ctx->pc = 0x12E770u;
    SET_GPR_U32(ctx, 31, 0x12E778u);
    ctx->pc = 0x12E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E770u;
    // 0x12e774: 0x2665f978  addiu       $a1, $s3, -0x688 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x12E770u, 0x12E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E778u;
label_12e778:
    // 0x12e778: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x12e778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_12e77c:
    // 0x12e77c: 0x24a5f968  addiu       $a1, $a1, -0x698
    ctx->pc = 0x12e77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965608));
label_12e780:
    // 0x12e780: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12e784:
    if (ctx->pc == 0x12E784u) {
        ctx->pc = 0x12E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E780u;
        // 0x12e784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E788u;
        goto label_12e788;
    }
    ctx->pc = 0x12E780u;
    {
        const bool branch_taken_0x12e780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E780u;
        // 0x12e784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e780) {
            ctx->pc = 0x12E798u;
            goto label_12e798;
        }
    }
    ctx->pc = 0x12E788u;
label_12e788:
    // 0x12e788: 0xc04a43b  jal         func_1290EC
label_12e78c:
    if (ctx->pc == 0x12E78Cu) {
        ctx->pc = 0x12E790u;
        goto label_12e790;
    }
    ctx->pc = 0x12E788u;
    SET_GPR_U32(ctx, 31, 0x12E790u);
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x12E788u, 0x12E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E790u;
label_12e790:
    // 0x12e790: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_12e794:
    if (ctx->pc == 0x12E794u) {
        ctx->pc = 0x12E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E790u;
        // 0x12e794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E798u;
        goto label_12e798;
    }
    ctx->pc = 0x12E790u;
    {
        const bool branch_taken_0x12e790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E790u;
        // 0x12e794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e790) {
            ctx->pc = 0x12E7B0u;
            goto label_12e7b0;
        }
    }
    ctx->pc = 0x12E798u;
label_12e798:
    // 0x12e798: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x12e798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
label_12e79c:
    // 0x12e79c: 0x10000003  b           . + 4 + (0x3 << 2)
label_12e7a0:
    if (ctx->pc == 0x12E7A0u) {
        ctx->pc = 0x12E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E79Cu;
        // 0x12e7a0: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E7A4u;
        goto label_12e7a4;
    }
    ctx->pc = 0x12E79Cu;
    {
        const bool branch_taken_0x12e79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E79Cu;
        // 0x12e7a0: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e79c) {
            ctx->pc = 0x12E7ACu;
            goto label_12e7ac;
        }
    }
    ctx->pc = 0x12E7A4u;
label_12e7a4:
    // 0x12e7a4: 0x0  nop
    ctx->pc = 0x12e7a4u;
    // NOP
label_12e7a8:
    // 0x12e7a8: 0x3c130015  lui         $s3, 0x15
    ctx->pc = 0x12e7a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
label_12e7ac:
    // 0x12e7ac: 0x2662f978  addiu       $v0, $s3, -0x688
    ctx->pc = 0x12e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965624));
label_12e7b0:
    // 0x12e7b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12e7b4:
    // 0x12e7b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e7b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12e7b8:
    // 0x12e7b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e7b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12e7bc:
    // 0x12e7bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12e7bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12e7c0:
    // 0x12e7c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12e7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12e7c4:
    // 0x12e7c4: 0x3e00008  jr          $ra
label_12e7c8:
    if (ctx->pc == 0x12E7C8u) {
        ctx->pc = 0x12E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7C4u;
        // 0x12e7c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E7CCu;
        goto label_12e7cc;
    }
    ctx->pc = 0x12E7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7C4u;
        // 0x12e7c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E7CCu;
label_12e7cc:
    // 0x12e7cc: 0x0  nop
    ctx->pc = 0x12e7ccu;
    // NOP
label_12e7d0:
    // 0x12e7d0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_12e7d4:
    // 0x12e7d4: 0x3e00008  jr          $ra
label_12e7d8:
    if (ctx->pc == 0x12E7D8u) {
        ctx->pc = 0x12E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7D4u;
        // 0x12e7d8: 0x2442f938  addiu       $v0, $v0, -0x6C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E7DCu;
        goto label_12e7dc;
    }
    ctx->pc = 0x12E7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7D4u;
        // 0x12e7d8: 0x2442f938  addiu       $v0, $v0, -0x6C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E7DCu;
label_12e7dc:
    // 0x12e7dc: 0x0  nop
    ctx->pc = 0x12e7dcu;
    // NOP
label_12e7e0:
    // 0x12e7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12e7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_12e7e4:
    // 0x12e7e4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x12e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_12e7e8:
    // 0x12e7e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12e7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12e7ec:
    // 0x12e7ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x12e7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12e7f0:
    // 0x12e7f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12e7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12e7f4:
    // 0x12e7f4: 0x8c444728  lw          $a0, 0x4728($v0)
    ctx->pc = 0x12e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18216)));
label_12e7f8:
    // 0x12e7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12e7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12e7fc:
    // 0x12e7fc: 0x804b9d0  j           func_12E740
label_12e800:
    if (ctx->pc == 0x12E800u) {
        ctx->pc = 0x12E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7FCu;
        // 0x12e800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E804u;
        goto label_12e804;
    }
    ctx->pc = 0x12E7FCu;
    ctx->pc = 0x12E800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7FCu;
    // 0x12e800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E740u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_12e740;
    ctx->pc = 0x12E804u;
label_12e804:
    // 0x12e804: 0x0  nop
    ctx->pc = 0x12e804u;
    // NOP
    ctx->pc = 0x12e808u;
}
