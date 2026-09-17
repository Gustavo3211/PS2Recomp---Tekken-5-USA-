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

// Function: sub_00349FC8
// Address: 0x349fc8 - 0x34a3a0
void sub_00349FC8_0x349fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349FC8_0x349fc8");
#endif

    switch (ctx->pc) {
        case 0x349fc8u: goto label_349fc8;
        case 0x349fccu: goto label_349fcc;
        case 0x349fd0u: goto label_349fd0;
        case 0x349fd4u: goto label_349fd4;
        case 0x349fd8u: goto label_349fd8;
        case 0x349fdcu: goto label_349fdc;
        case 0x349fe0u: goto label_349fe0;
        case 0x349fe4u: goto label_349fe4;
        case 0x349fe8u: goto label_349fe8;
        case 0x349fecu: goto label_349fec;
        case 0x349ff0u: goto label_349ff0;
        case 0x349ff4u: goto label_349ff4;
        case 0x349ff8u: goto label_349ff8;
        case 0x349ffcu: goto label_349ffc;
        case 0x34a000u: goto label_34a000;
        case 0x34a004u: goto label_34a004;
        case 0x34a008u: goto label_34a008;
        case 0x34a00cu: goto label_34a00c;
        case 0x34a010u: goto label_34a010;
        case 0x34a014u: goto label_34a014;
        case 0x34a018u: goto label_34a018;
        case 0x34a01cu: goto label_34a01c;
        case 0x34a020u: goto label_34a020;
        case 0x34a024u: goto label_34a024;
        case 0x34a028u: goto label_34a028;
        case 0x34a02cu: goto label_34a02c;
        case 0x34a030u: goto label_34a030;
        case 0x34a034u: goto label_34a034;
        case 0x34a038u: goto label_34a038;
        case 0x34a03cu: goto label_34a03c;
        case 0x34a040u: goto label_34a040;
        case 0x34a044u: goto label_34a044;
        case 0x34a048u: goto label_34a048;
        case 0x34a04cu: goto label_34a04c;
        case 0x34a050u: goto label_34a050;
        case 0x34a054u: goto label_34a054;
        case 0x34a058u: goto label_34a058;
        case 0x34a05cu: goto label_34a05c;
        case 0x34a060u: goto label_34a060;
        case 0x34a064u: goto label_34a064;
        case 0x34a068u: goto label_34a068;
        case 0x34a06cu: goto label_34a06c;
        case 0x34a070u: goto label_34a070;
        case 0x34a074u: goto label_34a074;
        case 0x34a078u: goto label_34a078;
        case 0x34a07cu: goto label_34a07c;
        case 0x34a080u: goto label_34a080;
        case 0x34a084u: goto label_34a084;
        case 0x34a088u: goto label_34a088;
        case 0x34a08cu: goto label_34a08c;
        case 0x34a090u: goto label_34a090;
        case 0x34a094u: goto label_34a094;
        case 0x34a098u: goto label_34a098;
        case 0x34a09cu: goto label_34a09c;
        case 0x34a0a0u: goto label_34a0a0;
        case 0x34a0a4u: goto label_34a0a4;
        case 0x34a0a8u: goto label_34a0a8;
        case 0x34a0acu: goto label_34a0ac;
        case 0x34a0b0u: goto label_34a0b0;
        case 0x34a0b4u: goto label_34a0b4;
        case 0x34a0b8u: goto label_34a0b8;
        case 0x34a0bcu: goto label_34a0bc;
        case 0x34a0c0u: goto label_34a0c0;
        case 0x34a0c4u: goto label_34a0c4;
        case 0x34a0c8u: goto label_34a0c8;
        case 0x34a0ccu: goto label_34a0cc;
        case 0x34a0d0u: goto label_34a0d0;
        case 0x34a0d4u: goto label_34a0d4;
        case 0x34a0d8u: goto label_34a0d8;
        case 0x34a0dcu: goto label_34a0dc;
        case 0x34a0e0u: goto label_34a0e0;
        case 0x34a0e4u: goto label_34a0e4;
        case 0x34a0e8u: goto label_34a0e8;
        case 0x34a0ecu: goto label_34a0ec;
        case 0x34a0f0u: goto label_34a0f0;
        case 0x34a0f4u: goto label_34a0f4;
        case 0x34a0f8u: goto label_34a0f8;
        case 0x34a0fcu: goto label_34a0fc;
        case 0x34a100u: goto label_34a100;
        case 0x34a104u: goto label_34a104;
        case 0x34a108u: goto label_34a108;
        case 0x34a10cu: goto label_34a10c;
        case 0x34a110u: goto label_34a110;
        case 0x34a114u: goto label_34a114;
        case 0x34a118u: goto label_34a118;
        case 0x34a11cu: goto label_34a11c;
        case 0x34a120u: goto label_34a120;
        case 0x34a124u: goto label_34a124;
        case 0x34a128u: goto label_34a128;
        case 0x34a12cu: goto label_34a12c;
        case 0x34a130u: goto label_34a130;
        case 0x34a134u: goto label_34a134;
        case 0x34a138u: goto label_34a138;
        case 0x34a13cu: goto label_34a13c;
        case 0x34a140u: goto label_34a140;
        case 0x34a144u: goto label_34a144;
        case 0x34a148u: goto label_34a148;
        case 0x34a14cu: goto label_34a14c;
        case 0x34a150u: goto label_34a150;
        case 0x34a154u: goto label_34a154;
        case 0x34a158u: goto label_34a158;
        case 0x34a15cu: goto label_34a15c;
        case 0x34a160u: goto label_34a160;
        case 0x34a164u: goto label_34a164;
        case 0x34a168u: goto label_34a168;
        case 0x34a16cu: goto label_34a16c;
        case 0x34a170u: goto label_34a170;
        case 0x34a174u: goto label_34a174;
        case 0x34a178u: goto label_34a178;
        case 0x34a17cu: goto label_34a17c;
        case 0x34a180u: goto label_34a180;
        case 0x34a184u: goto label_34a184;
        case 0x34a188u: goto label_34a188;
        case 0x34a18cu: goto label_34a18c;
        case 0x34a190u: goto label_34a190;
        case 0x34a194u: goto label_34a194;
        case 0x34a198u: goto label_34a198;
        case 0x34a19cu: goto label_34a19c;
        case 0x34a1a0u: goto label_34a1a0;
        case 0x34a1a4u: goto label_34a1a4;
        case 0x34a1a8u: goto label_34a1a8;
        case 0x34a1acu: goto label_34a1ac;
        case 0x34a1b0u: goto label_34a1b0;
        case 0x34a1b4u: goto label_34a1b4;
        case 0x34a1b8u: goto label_34a1b8;
        case 0x34a1bcu: goto label_34a1bc;
        case 0x34a1c0u: goto label_34a1c0;
        case 0x34a1c4u: goto label_34a1c4;
        case 0x34a1c8u: goto label_34a1c8;
        case 0x34a1ccu: goto label_34a1cc;
        case 0x34a1d0u: goto label_34a1d0;
        case 0x34a1d4u: goto label_34a1d4;
        case 0x34a1d8u: goto label_34a1d8;
        case 0x34a1dcu: goto label_34a1dc;
        case 0x34a1e0u: goto label_34a1e0;
        case 0x34a1e4u: goto label_34a1e4;
        case 0x34a1e8u: goto label_34a1e8;
        case 0x34a1ecu: goto label_34a1ec;
        case 0x34a1f0u: goto label_34a1f0;
        case 0x34a1f4u: goto label_34a1f4;
        case 0x34a1f8u: goto label_34a1f8;
        case 0x34a1fcu: goto label_34a1fc;
        case 0x34a200u: goto label_34a200;
        case 0x34a204u: goto label_34a204;
        case 0x34a208u: goto label_34a208;
        case 0x34a20cu: goto label_34a20c;
        case 0x34a210u: goto label_34a210;
        case 0x34a214u: goto label_34a214;
        case 0x34a218u: goto label_34a218;
        case 0x34a21cu: goto label_34a21c;
        case 0x34a220u: goto label_34a220;
        case 0x34a224u: goto label_34a224;
        case 0x34a228u: goto label_34a228;
        case 0x34a22cu: goto label_34a22c;
        case 0x34a230u: goto label_34a230;
        case 0x34a234u: goto label_34a234;
        case 0x34a238u: goto label_34a238;
        case 0x34a23cu: goto label_34a23c;
        case 0x34a240u: goto label_34a240;
        case 0x34a244u: goto label_34a244;
        case 0x34a248u: goto label_34a248;
        case 0x34a24cu: goto label_34a24c;
        case 0x34a250u: goto label_34a250;
        case 0x34a254u: goto label_34a254;
        case 0x34a258u: goto label_34a258;
        case 0x34a25cu: goto label_34a25c;
        case 0x34a260u: goto label_34a260;
        case 0x34a264u: goto label_34a264;
        case 0x34a268u: goto label_34a268;
        case 0x34a26cu: goto label_34a26c;
        case 0x34a270u: goto label_34a270;
        case 0x34a274u: goto label_34a274;
        case 0x34a278u: goto label_34a278;
        case 0x34a27cu: goto label_34a27c;
        case 0x34a280u: goto label_34a280;
        case 0x34a284u: goto label_34a284;
        case 0x34a288u: goto label_34a288;
        case 0x34a28cu: goto label_34a28c;
        case 0x34a290u: goto label_34a290;
        case 0x34a294u: goto label_34a294;
        case 0x34a298u: goto label_34a298;
        case 0x34a29cu: goto label_34a29c;
        case 0x34a2a0u: goto label_34a2a0;
        case 0x34a2a4u: goto label_34a2a4;
        case 0x34a2a8u: goto label_34a2a8;
        case 0x34a2acu: goto label_34a2ac;
        case 0x34a2b0u: goto label_34a2b0;
        case 0x34a2b4u: goto label_34a2b4;
        case 0x34a2b8u: goto label_34a2b8;
        case 0x34a2bcu: goto label_34a2bc;
        case 0x34a2c0u: goto label_34a2c0;
        case 0x34a2c4u: goto label_34a2c4;
        case 0x34a2c8u: goto label_34a2c8;
        case 0x34a2ccu: goto label_34a2cc;
        case 0x34a2d0u: goto label_34a2d0;
        case 0x34a2d4u: goto label_34a2d4;
        case 0x34a2d8u: goto label_34a2d8;
        case 0x34a2dcu: goto label_34a2dc;
        case 0x34a2e0u: goto label_34a2e0;
        case 0x34a2e4u: goto label_34a2e4;
        case 0x34a2e8u: goto label_34a2e8;
        case 0x34a2ecu: goto label_34a2ec;
        case 0x34a2f0u: goto label_34a2f0;
        case 0x34a2f4u: goto label_34a2f4;
        case 0x34a2f8u: goto label_34a2f8;
        case 0x34a2fcu: goto label_34a2fc;
        case 0x34a300u: goto label_34a300;
        case 0x34a304u: goto label_34a304;
        case 0x34a308u: goto label_34a308;
        case 0x34a30cu: goto label_34a30c;
        case 0x34a310u: goto label_34a310;
        case 0x34a314u: goto label_34a314;
        case 0x34a318u: goto label_34a318;
        case 0x34a31cu: goto label_34a31c;
        case 0x34a320u: goto label_34a320;
        case 0x34a324u: goto label_34a324;
        case 0x34a328u: goto label_34a328;
        case 0x34a32cu: goto label_34a32c;
        case 0x34a330u: goto label_34a330;
        case 0x34a334u: goto label_34a334;
        case 0x34a338u: goto label_34a338;
        case 0x34a33cu: goto label_34a33c;
        case 0x34a340u: goto label_34a340;
        case 0x34a344u: goto label_34a344;
        case 0x34a348u: goto label_34a348;
        case 0x34a34cu: goto label_34a34c;
        case 0x34a350u: goto label_34a350;
        case 0x34a354u: goto label_34a354;
        case 0x34a358u: goto label_34a358;
        case 0x34a35cu: goto label_34a35c;
        case 0x34a360u: goto label_34a360;
        case 0x34a364u: goto label_34a364;
        case 0x34a368u: goto label_34a368;
        case 0x34a36cu: goto label_34a36c;
        case 0x34a370u: goto label_34a370;
        case 0x34a374u: goto label_34a374;
        case 0x34a378u: goto label_34a378;
        case 0x34a37cu: goto label_34a37c;
        case 0x34a380u: goto label_34a380;
        case 0x34a384u: goto label_34a384;
        case 0x34a388u: goto label_34a388;
        case 0x34a38cu: goto label_34a38c;
        case 0x34a390u: goto label_34a390;
        case 0x34a394u: goto label_34a394;
        case 0x34a398u: goto label_34a398;
        case 0x34a39cu: goto label_34a39c;
        default: break;
    }

    ctx->pc = 0x349fc8u;

label_349fc8:
    // 0x349fc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x349fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_349fcc:
    // 0x349fcc: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x349fccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_349fd0:
    // 0x349fd0: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x349fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_349fd4:
    // 0x349fd4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x349fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_349fd8:
    // 0x349fd8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x349fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_349fdc:
    // 0x349fdc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x349fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_349fe0:
    // 0x349fe0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x349fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_349fe4:
    // 0x349fe4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x349fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_349fe8:
    // 0x349fe8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x349fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_349fec:
    // 0x349fec: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x349fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_349ff0:
    // 0x349ff0: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x349ff0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_349ff4:
    // 0x349ff4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x349ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_349ff8:
    // 0x349ff8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x349ff8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_349ffc:
    // 0x349ffc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x349ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_34a000:
    // 0x34a000: 0x26040d00  addiu       $a0, $s0, 0xD00
    ctx->pc = 0x34a000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
label_34a004:
    // 0x34a004: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34a004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_34a008:
    // 0x34a008: 0x248400d8  addiu       $a0, $a0, 0xD8
    ctx->pc = 0x34a008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
label_34a00c:
    // 0x34a00c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34a00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_34a010:
    // 0x34a010: 0x32e70004  andi        $a3, $s7, 0x4
    ctx->pc = 0x34a010u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
label_34a014:
    // 0x34a014: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x34a014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_34a018:
    // 0x34a018: 0x3c066c02  lui         $a2, 0x6C02
    ctx->pc = 0x34a018u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27650 << 16));
label_34a01c:
    // 0x34a01c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x34a01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_34a020:
    // 0x34a020: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x34a020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_34a024:
    // 0x34a024: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x34a024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_34a028:
    // 0x34a028: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x34a028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
label_34a02c:
    // 0x34a02c: 0x8e6a000c  lw          $t2, 0xC($s3)
    ctx->pc = 0x34a02cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_34a030:
    // 0x34a030: 0x95420002  lhu         $v0, 0x2($t2)
    ctx->pc = 0x34a030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
label_34a034:
    // 0x34a034: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x34a034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_34a038:
    // 0x34a038: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x34a038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_34a03c:
    // 0x34a03c: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x34a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_34a040:
    // 0x34a040: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x34a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_34a044:
    // 0x34a044: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x34a044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_34a048:
    // 0x34a048: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x34a048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_34a04c:
    // 0x34a04c: 0xae290014  sw          $t1, 0x14($s1)
    ctx->pc = 0x34a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 9));
label_34a050:
    // 0x34a050: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x34a050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_34a054:
    // 0x34a054: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x34a054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
label_34a058:
    // 0x34a058: 0xae27001c  sw          $a3, 0x1C($s1)
    ctx->pc = 0x34a058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 7));
label_34a05c:
    // 0x34a05c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x34a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_34a060:
    // 0x34a060: 0x95430004  lhu         $v1, 0x4($t2)
    ctx->pc = 0x34a060u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
label_34a064:
    // 0x34a064: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x34a064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_34a068:
    // 0x34a068: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34a06c:
    // 0x34a06c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x34a06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_34a070:
    // 0x34a070: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a074:
    // 0x34a074: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x34a074u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_34a078:
    // 0x34a078: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x34a078u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
label_34a07c:
    // 0x34a07c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34a080:
    // 0x34a080: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x34a080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_34a084:
    // 0x34a084: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x34a084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_34a088:
    // 0x34a088: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x34a088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_34a08c:
    // 0x34a08c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_34a090:
    if (ctx->pc == 0x34A090u) {
        ctx->pc = 0x34A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A08Cu;
        // 0x34a090: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A094u;
        goto label_34a094;
    }
    ctx->pc = 0x34A08Cu;
    {
        const bool branch_taken_0x34a08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A08Cu;
        // 0x34a090: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a08c) {
            ctx->pc = 0x34A0A8u;
            goto label_34a0a8;
        }
    }
    ctx->pc = 0x34A094u;
label_34a094:
    // 0x34a094: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34a094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34a098:
    // 0x34a098: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x34a098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_34a09c:
    // 0x34a09c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34a09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34a0a0:
    // 0x34a0a0: 0x60f809  jalr        $v1
label_34a0a4:
    if (ctx->pc == 0x34A0A4u) {
        ctx->pc = 0x34A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0A0u;
        // 0x34a0a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A0A8u;
        goto label_34a0a8;
    }
    ctx->pc = 0x34A0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34A0A8u);
        ctx->pc = 0x34A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0A0u;
        // 0x34a0a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A0A0u, 0x34A0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34A0A8u;
label_34a0a8:
    // 0x34a0a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34a0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34a0ac:
    // 0x34a0ac: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x34a0acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_34a0b0:
    // 0x34a0b0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_34a0b4:
    // 0x34a0b4: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x34a0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_34a0b8:
    // 0x34a0b8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_34a0bc:
    if (ctx->pc == 0x34A0BCu) {
        ctx->pc = 0x34A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0B8u;
        // 0x34a0bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A0C0u;
        goto label_34a0c0;
    }
    ctx->pc = 0x34A0B8u;
    {
        const bool branch_taken_0x34a0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0B8u;
        // 0x34a0bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a0b8) {
            ctx->pc = 0x34A0D8u;
            goto label_34a0d8;
        }
    }
    ctx->pc = 0x34A0C0u;
label_34a0c0:
    // 0x34a0c0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_34a0c4:
    // 0x34a0c4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34a0c8:
    // 0x34a0c8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34a0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34a0cc:
    // 0x34a0cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_34a0d0:
    if (ctx->pc == 0x34A0D0u) {
        ctx->pc = 0x34A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0CCu;
        // 0x34a0d0: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A0D4u;
        goto label_34a0d4;
    }
    ctx->pc = 0x34A0CCu;
    {
        const bool branch_taken_0x34a0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0CCu;
        // 0x34a0d0: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a0cc) {
            ctx->pc = 0x34A0ECu;
            goto label_34a0ec;
        }
    }
    ctx->pc = 0x34A0D4u;
label_34a0d4:
    // 0x34a0d4: 0x0  nop
    ctx->pc = 0x34a0d4u;
    // NOP
label_34a0d8:
    // 0x34a0d8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x34a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_34a0dc:
    // 0x34a0dc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34a0e0:
    // 0x34a0e0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34a0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34a0e4:
    // 0x34a0e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34a0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34a0e8:
    // 0x34a0e8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x34a0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_34a0ec:
    // 0x34a0ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a0f0:
    // 0x34a0f0: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x34a0f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34a0f4:
    // 0x34a0f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x34a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34a0f8:
    // 0x34a0f8: 0x3c026804  lui         $v0, 0x6804
    ctx->pc = 0x34a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26628 << 16));
label_34a0fc:
    // 0x34a0fc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x34a0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_34a100:
    // 0x34a100: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34a100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34a104:
    // 0x34a104: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x34a104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_34a108:
    // 0x34a108: 0x70673b89  pcpyld      $a3, $v1, $a3
    ctx->pc = 0x34a108u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
label_34a10c:
    // 0x34a10c: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x34a10cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_34a110:
    // 0x34a110: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x34a110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34a114:
    // 0x34a114: 0x24910010  addiu       $s1, $a0, 0x10
    ctx->pc = 0x34a114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_34a118:
    // 0x34a118: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x34a118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_34a11c:
    // 0x34a11c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x34a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_34a120:
    // 0x34a120: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_34a124:
    if (ctx->pc == 0x34A124u) {
        ctx->pc = 0x34A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A120u;
        // 0x34a124: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A128u;
        goto label_34a128;
    }
    ctx->pc = 0x34A120u;
    {
        const bool branch_taken_0x34a120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A120u;
        // 0x34a124: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a120) {
            ctx->pc = 0x34A13Cu;
            goto label_34a13c;
        }
    }
    ctx->pc = 0x34A128u;
label_34a128:
    // 0x34a128: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34a128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34a12c:
    // 0x34a12c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34a12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34a130:
    // 0x34a130: 0xc0d2b84  jal         func_34AE10
label_34a134:
    if (ctx->pc == 0x34A134u) {
        ctx->pc = 0x34A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A130u;
        // 0x34a134: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A138u;
        goto label_34a138;
    }
    ctx->pc = 0x34A130u;
    SET_GPR_U32(ctx, 31, 0x34A138u);
    ctx->pc = 0x34A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A130u;
    // 0x34a134: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AE10u, 0x34A130u, 0x34A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A138u;
label_34a138:
    // 0x34a138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34a138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34a13c:
    // 0x34a13c: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x34a13cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_34a140:
    // 0x34a140: 0x26030d00  addiu       $v1, $s0, 0xD00
    ctx->pc = 0x34a140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
label_34a144:
    // 0x34a144: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34a144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34a148:
    // 0x34a148: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x34a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_34a14c:
    // 0x34a14c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_34a150:
    if (ctx->pc == 0x34A150u) {
        ctx->pc = 0x34A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A14Cu;
        // 0x34a150: 0x246400d4  addiu       $a0, $v1, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 212));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A154u;
        goto label_34a154;
    }
    ctx->pc = 0x34A14Cu;
    {
        const bool branch_taken_0x34a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A14Cu;
        // 0x34a150: 0x246400d4  addiu       $a0, $v1, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a14c) {
            ctx->pc = 0x34A160u;
            goto label_34a160;
        }
    }
    ctx->pc = 0x34A154u;
label_34a154:
    // 0x34a154: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x34a154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34a158:
    // 0x34a158: 0x10000004  b           . + 4 + (0x4 << 2)
label_34a15c:
    if (ctx->pc == 0x34A15Cu) {
        ctx->pc = 0x34A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A158u;
        // 0x34a15c: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A160u;
        goto label_34a160;
    }
    ctx->pc = 0x34A158u;
    {
        const bool branch_taken_0x34a158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A158u;
        // 0x34a15c: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a158) {
            ctx->pc = 0x34A16Cu;
            goto label_34a16c;
        }
    }
    ctx->pc = 0x34A160u;
label_34a160:
    // 0x34a160: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x34a160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34a164:
    // 0x34a164: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x34a164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_34a168:
    // 0x34a168: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34a168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_34a16c:
    // 0x34a16c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_34a170:
    // 0x34a170: 0x96630016  lhu         $v1, 0x16($s3)
    ctx->pc = 0x34a170u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_34a174:
    // 0x34a174: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x34a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_34a178:
    // 0x34a178: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_34a17c:
    if (ctx->pc == 0x34A17Cu) {
        ctx->pc = 0x34A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A178u;
        // 0x34a17c: 0x27b60004  addiu       $s6, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A180u;
        goto label_34a180;
    }
    ctx->pc = 0x34A178u;
    {
        const bool branch_taken_0x34a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A178u;
        // 0x34a17c: 0x27b60004  addiu       $s6, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a178) {
            ctx->pc = 0x34A188u;
            goto label_34a188;
        }
    }
    ctx->pc = 0x34A180u;
label_34a180:
    // 0x34a180: 0x1000000f  b           . + 4 + (0xF << 2)
label_34a184:
    if (ctx->pc == 0x34A184u) {
        ctx->pc = 0x34A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A180u;
        // 0x34a184: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A188u;
        goto label_34a188;
    }
    ctx->pc = 0x34A180u;
    {
        const bool branch_taken_0x34a180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A180u;
        // 0x34a184: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a180) {
            ctx->pc = 0x34A1C0u;
            goto label_34a1c0;
        }
    }
    ctx->pc = 0x34A188u;
label_34a188:
    // 0x34a188: 0xc0c8864  jal         func_322190
label_34a18c:
    if (ctx->pc == 0x34A18Cu) {
        ctx->pc = 0x34A190u;
        goto label_34a190;
    }
    ctx->pc = 0x34A188u;
    SET_GPR_U32(ctx, 31, 0x34A190u);
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x34A188u, 0x34A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A190u;
label_34a190:
    // 0x34a190: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x34a190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34a194:
    // 0x34a194: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x34a194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34a198:
    // 0x34a198: 0x27b60004  addiu       $s6, $sp, 0x4
    ctx->pc = 0x34a198u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_34a19c:
    // 0x34a19c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x34a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_34a1a0:
    // 0x34a1a0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x34a1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_34a1a4:
    // 0x34a1a4: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x34a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_34a1a8:
    // 0x34a1a8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x34a1a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_34a1ac:
    // 0x34a1ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x34a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_34a1b0:
    // 0x34a1b0: 0x40f809  jalr        $v0
label_34a1b4:
    if (ctx->pc == 0x34A1B4u) {
        ctx->pc = 0x34A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1B0u;
        // 0x34a1b4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A1B8u;
        goto label_34a1b8;
    }
    ctx->pc = 0x34A1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34A1B8u);
        ctx->pc = 0x34A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1B0u;
        // 0x34a1b4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A1B0u, 0x34A1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34A1B8u;
label_34a1b8:
    // 0x34a1b8: 0x96630016  lhu         $v1, 0x16($s3)
    ctx->pc = 0x34a1b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_34a1bc:
    // 0x34a1bc: 0x8fb40004  lw          $s4, 0x4($sp)
    ctx->pc = 0x34a1bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34a1c0:
    // 0x34a1c0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x34a1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_34a1c4:
    // 0x34a1c4: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_34a1c8:
    if (ctx->pc == 0x34A1C8u) {
        ctx->pc = 0x34A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1C4u;
        // 0x34a1c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A1CCu;
        goto label_34a1cc;
    }
    ctx->pc = 0x34A1C4u;
    {
        const bool branch_taken_0x34a1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1C4u;
        // 0x34a1c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a1c4) {
            ctx->pc = 0x34A2B0u;
            goto label_34a2b0;
        }
    }
    ctx->pc = 0x34A1CCu;
label_34a1cc:
    // 0x34a1cc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x34a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_34a1d0:
    // 0x34a1d0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_34a1d4:
    // 0x34a1d4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x34a1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_34a1d8:
    // 0x34a1d8: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_34a1dc:
    if (ctx->pc == 0x34A1DCu) {
        ctx->pc = 0x34A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1D8u;
        // 0x34a1dc: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A1E0u;
        goto label_34a1e0;
    }
    ctx->pc = 0x34A1D8u;
    {
        const bool branch_taken_0x34a1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34a1d8) {
            ctx->pc = 0x34A1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A1D8u;
            // 0x34a1dc: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A1F8u;
            goto label_34a1f8;
        }
    }
    ctx->pc = 0x34A1E0u;
label_34a1e0:
    // 0x34a1e0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_34a1e4:
    // 0x34a1e4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34a1e8:
    // 0x34a1e8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34a1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34a1ec:
    // 0x34a1ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_34a1f0:
    if (ctx->pc == 0x34A1F0u) {
        ctx->pc = 0x34A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1ECu;
        // 0x34a1f0: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A1F4u;
        goto label_34a1f4;
    }
    ctx->pc = 0x34A1ECu;
    {
        const bool branch_taken_0x34a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1ECu;
        // 0x34a1f0: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a1ec) {
            ctx->pc = 0x34A208u;
            goto label_34a208;
        }
    }
    ctx->pc = 0x34A1F4u;
label_34a1f4:
    // 0x34a1f4: 0x0  nop
    ctx->pc = 0x34a1f4u;
    // NOP
label_34a1f8:
    // 0x34a1f8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34a1fc:
    // 0x34a1fc: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34a1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34a200:
    // 0x34a200: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34a200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34a204:
    // 0x34a204: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x34a204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_34a208:
    // 0x34a208: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a20c:
    // 0x34a20c: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x34a20cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34a210:
    // 0x34a210: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34a214:
    // 0x34a214: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x34a214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_34a218:
    // 0x34a218: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x34a218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
label_34a21c:
    // 0x34a21c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x34a21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_34a220:
    // 0x34a220: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x34a220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_34a224:
    // 0x34a224: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34a224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34a228:
    // 0x34a228: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a22c:
    // 0x34a22c: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x34a22cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_34a230:
    // 0x34a230: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x34a230u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
label_34a234:
    // 0x34a234: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x34a234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_34a238:
    // 0x34a238: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x34a238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_34a23c:
    // 0x34a23c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x34a23cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_34a240:
    // 0x34a240: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34a240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34a244:
    // 0x34a244: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x34a244u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_34a248:
    // 0x34a248: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x34a248u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
label_34a24c:
    // 0x34a24c: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x34a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_34a250:
    // 0x34a250: 0x26150d00  addiu       $s5, $s0, 0xD00
    ctx->pc = 0x34a250u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
label_34a254:
    // 0x34a254: 0x26b000d4  addiu       $s0, $s5, 0xD4
    ctx->pc = 0x34a254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 212));
label_34a258:
    // 0x34a258: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x34a258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_34a25c:
    // 0x34a25c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x34a25cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_34a260:
    // 0x34a260: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x34a260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_34a264:
    // 0x34a264: 0x40f809  jalr        $v0
label_34a268:
    if (ctx->pc == 0x34A268u) {
        ctx->pc = 0x34A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A264u;
        // 0x34a268: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A26Cu;
        goto label_34a26c;
    }
    ctx->pc = 0x34A264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34A26Cu);
        ctx->pc = 0x34A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A264u;
        // 0x34a268: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A264u, 0x34A26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34A26Cu;
label_34a26c:
    // 0x34a26c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_34a270:
    if (ctx->pc == 0x34A270u) {
        ctx->pc = 0x34A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A26Cu;
        // 0x34a270: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A274u;
        goto label_34a274;
    }
    ctx->pc = 0x34A26Cu;
    {
        const bool branch_taken_0x34a26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A26Cu;
        // 0x34a270: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a26c) {
            ctx->pc = 0x34A27Cu;
            goto label_34a27c;
        }
    }
    ctx->pc = 0x34A274u;
label_34a274:
    // 0x34a274: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x34a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_34a278:
    // 0x34a278: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x34a278u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_34a27c:
    // 0x34a27c: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x34a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_34a280:
    // 0x34a280: 0x26b00068  addiu       $s0, $s5, 0x68
    ctx->pc = 0x34a280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 104));
label_34a284:
    // 0x34a284: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x34a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_34a288:
    // 0x34a288: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_34a28c:
    if (ctx->pc == 0x34A28Cu) {
        ctx->pc = 0x34A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A288u;
        // 0x34a28c: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A290u;
        goto label_34a290;
    }
    ctx->pc = 0x34A288u;
    {
        const bool branch_taken_0x34a288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a288) {
            ctx->pc = 0x34A28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A288u;
            // 0x34a28c: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A29Cu;
            goto label_34a29c;
        }
    }
    ctx->pc = 0x34A290u;
label_34a290:
    // 0x34a290: 0xc0c89d4  jal         func_322750
label_34a294:
    if (ctx->pc == 0x34A294u) {
        ctx->pc = 0x34A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A290u;
        // 0x34a294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A298u;
        goto label_34a298;
    }
    ctx->pc = 0x34A290u;
    SET_GPR_U32(ctx, 31, 0x34A298u);
    ctx->pc = 0x34A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A290u;
    // 0x34a294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x34A290u, 0x34A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A298u;
label_34a298:
    // 0x34a298: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x34a298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34a29c:
    // 0x34a29c: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x34a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_34a2a0:
    // 0x34a2a0: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x34a2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_34a2a4:
    // 0x34a2a4: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x34a2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_34a2a8:
    // 0x34a2a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_34a2ac:
    if (ctx->pc == 0x34A2ACu) {
        ctx->pc = 0x34A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A2A8u;
        // 0x34a2ac: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A2B0u;
        goto label_34a2b0;
    }
    ctx->pc = 0x34A2A8u;
    {
        const bool branch_taken_0x34a2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A2A8u;
        // 0x34a2ac: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a2a8) {
            ctx->pc = 0x34A2C8u;
            goto label_34a2c8;
        }
    }
    ctx->pc = 0x34A2B0u;
label_34a2b0:
    // 0x34a2b0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x34a2b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_34a2b4:
    // 0x34a2b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34a2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34a2b8:
    // 0x34a2b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34a2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34a2bc:
    // 0x34a2bc: 0xc0d2ba6  jal         func_34AE98
label_34a2c0:
    if (ctx->pc == 0x34A2C0u) {
        ctx->pc = 0x34A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A2BCu;
        // 0x34a2c0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A2C4u;
        goto label_34a2c4;
    }
    ctx->pc = 0x34A2BCu;
    SET_GPR_U32(ctx, 31, 0x34A2C4u);
    ctx->pc = 0x34A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A2BCu;
    // 0x34a2c0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AE98u, 0x34A2BCu, 0x34A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A2C4u;
label_34a2c4:
    // 0x34a2c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34a2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34a2c8:
    // 0x34a2c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x34a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_34a2cc:
    // 0x34a2cc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x34a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_34a2d0:
    // 0x34a2d0: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x34a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
label_34a2d4:
    // 0x34a2d4: 0x2442cc28  addiu       $v0, $v0, -0x33D8
    ctx->pc = 0x34a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954024));
label_34a2d8:
    // 0x34a2d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34a2dc:
    // 0x34a2dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_34a2e0:
    // 0x34a2e0: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x34a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
label_34a2e4:
    // 0x34a2e4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x34a2e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_34a2e8:
    // 0x34a2e8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x34a2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_34a2ec:
    // 0x34a2ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a2f0:
    // 0x34a2f0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x34a2f0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_34a2f4:
    // 0x34a2f4: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x34a2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_34a2f8:
    // 0x34a2f8: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x34a2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_34a2fc:
    // 0x34a2fc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_34a300:
    // 0x34a300: 0x96650014  lhu         $a1, 0x14($s3)
    ctx->pc = 0x34a300u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_34a304:
    // 0x34a304: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x34a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_34a308:
    // 0x34a308: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x34a308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_34a30c:
    // 0x34a30c: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x34a30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_34a310:
    // 0x34a310: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_34a314:
    if (ctx->pc == 0x34A314u) {
        ctx->pc = 0x34A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A310u;
        // 0x34a314: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A318u;
        goto label_34a318;
    }
    ctx->pc = 0x34A310u;
    {
        const bool branch_taken_0x34a310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x34A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A310u;
        // 0x34a314: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a310) {
            ctx->pc = 0x34A328u;
            goto label_34a328;
        }
    }
    ctx->pc = 0x34A318u;
label_34a318:
    // 0x34a318: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34a318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_34a31c:
    // 0x34a31c: 0x10000005  b           . + 4 + (0x5 << 2)
label_34a320:
    if (ctx->pc == 0x34A320u) {
        ctx->pc = 0x34A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A31Cu;
        // 0x34a320: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A324u;
        goto label_34a324;
    }
    ctx->pc = 0x34A31Cu;
    {
        const bool branch_taken_0x34a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A31Cu;
        // 0x34a320: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a31c) {
            ctx->pc = 0x34A334u;
            goto label_34a334;
        }
    }
    ctx->pc = 0x34A324u;
label_34a324:
    // 0x34a324: 0x0  nop
    ctx->pc = 0x34a324u;
    // NOP
label_34a328:
    // 0x34a328: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x34a328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_34a32c:
    // 0x34a32c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34a32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34a330:
    // 0x34a330: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x34a330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_34a334:
    // 0x34a334: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a338:
    // 0x34a338: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x34a338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_34a33c:
    // 0x34a33c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34a33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34a340:
    // 0x34a340: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x34a340u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_34a344:
    // 0x34a344: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x34a344u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_34a348:
    // 0x34a348: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x34a348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_34a34c:
    // 0x34a34c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x34a34cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_34a350:
    // 0x34a350: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x34a350u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
label_34a354:
    // 0x34a354: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x34a354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34a358:
    // 0x34a358: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34a358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34a35c:
    // 0x34a35c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34a35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34a360:
    // 0x34a360: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x34a360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34a364:
    // 0x34a364: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x34a364u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_34a368:
    // 0x34a368: 0xc0d269e  jal         func_349A78
label_34a36c:
    if (ctx->pc == 0x34A36Cu) {
        ctx->pc = 0x34A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A368u;
        // 0x34a36c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A370u;
        goto label_34a370;
    }
    ctx->pc = 0x34A368u;
    SET_GPR_U32(ctx, 31, 0x34A370u);
    ctx->pc = 0x34A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A368u;
    // 0x34a36c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349A78u, 0x34A368u, 0x34A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A370u;
label_34a370:
    // 0x34a370: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34a370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34a374:
    // 0x34a374: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34a374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34a378:
    // 0x34a378: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34a378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34a37c:
    // 0x34a37c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34a37cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34a380:
    // 0x34a380: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34a380u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34a384:
    // 0x34a384: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34a384u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_34a388:
    // 0x34a388: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x34a388u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34a38c:
    // 0x34a38c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x34a38cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_34a390:
    // 0x34a390: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34a390u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34a394:
    // 0x34a394: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34a394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_34a398:
    // 0x34a398: 0x3e00008  jr          $ra
label_34a39c:
    if (ctx->pc == 0x34A39Cu) {
        ctx->pc = 0x34A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A398u;
        // 0x34a39c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A3A0u;
        goto label_fallthrough_0x34a398;
    }
    ctx->pc = 0x34A398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A398u;
        // 0x34a39c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34a398:
    ctx->pc = 0x34A3A0u;
}
