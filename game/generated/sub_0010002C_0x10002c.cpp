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

// Function: sub_0010002C
// Address: 0x10002c - 0x1001b8
void sub_0010002C_0x10002c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010002C_0x10002c");
#endif

    switch (ctx->pc) {
        case 0x10002cu: goto label_10002c;
        case 0x100030u: goto label_100030;
        case 0x100034u: goto label_100034;
        case 0x100038u: goto label_100038;
        case 0x10003cu: goto label_10003c;
        case 0x100040u: goto label_100040;
        case 0x100044u: goto label_100044;
        case 0x100048u: goto label_100048;
        case 0x10004cu: goto label_10004c;
        case 0x100050u: goto label_100050;
        case 0x100054u: goto label_100054;
        case 0x100058u: goto label_100058;
        case 0x10005cu: goto label_10005c;
        case 0x100060u: goto label_100060;
        case 0x100064u: goto label_100064;
        case 0x100068u: goto label_100068;
        case 0x10006cu: goto label_10006c;
        case 0x100070u: goto label_100070;
        case 0x100074u: goto label_100074;
        case 0x100078u: goto label_100078;
        case 0x10007cu: goto label_10007c;
        case 0x100080u: goto label_100080;
        case 0x100084u: goto label_100084;
        case 0x100088u: goto label_100088;
        case 0x10008cu: goto label_10008c;
        case 0x100090u: goto label_100090;
        case 0x100094u: goto label_100094;
        case 0x100098u: goto label_100098;
        case 0x10009cu: goto label_10009c;
        case 0x1000a0u: goto label_1000a0;
        case 0x1000a4u: goto label_1000a4;
        case 0x1000a8u: goto label_1000a8;
        case 0x1000acu: goto label_1000ac;
        case 0x1000b0u: goto label_1000b0;
        case 0x1000b4u: goto label_1000b4;
        case 0x1000b8u: goto label_1000b8;
        case 0x1000bcu: goto label_1000bc;
        case 0x1000c0u: goto label_1000c0;
        case 0x1000c4u: goto label_1000c4;
        case 0x1000c8u: goto label_1000c8;
        case 0x1000ccu: goto label_1000cc;
        case 0x1000d0u: goto label_1000d0;
        case 0x1000d4u: goto label_1000d4;
        case 0x1000d8u: goto label_1000d8;
        case 0x1000dcu: goto label_1000dc;
        case 0x1000e0u: goto label_1000e0;
        case 0x1000e4u: goto label_1000e4;
        case 0x1000e8u: goto label_1000e8;
        case 0x1000ecu: goto label_1000ec;
        case 0x1000f0u: goto label_1000f0;
        case 0x1000f4u: goto label_1000f4;
        case 0x1000f8u: goto label_1000f8;
        case 0x1000fcu: goto label_1000fc;
        case 0x100100u: goto label_100100;
        case 0x100104u: goto label_100104;
        case 0x100108u: goto label_100108;
        case 0x10010cu: goto label_10010c;
        case 0x100110u: goto label_100110;
        case 0x100114u: goto label_100114;
        case 0x100118u: goto label_100118;
        case 0x10011cu: goto label_10011c;
        case 0x100120u: goto label_100120;
        case 0x100124u: goto label_100124;
        case 0x100128u: goto label_100128;
        case 0x10012cu: goto label_10012c;
        case 0x100130u: goto label_100130;
        case 0x100134u: goto label_100134;
        case 0x100138u: goto label_100138;
        case 0x10013cu: goto label_10013c;
        case 0x100140u: goto label_100140;
        case 0x100144u: goto label_100144;
        case 0x100148u: goto label_100148;
        case 0x10014cu: goto label_10014c;
        case 0x100150u: goto label_100150;
        case 0x100154u: goto label_100154;
        case 0x100158u: goto label_100158;
        case 0x10015cu: goto label_10015c;
        case 0x100160u: goto label_100160;
        case 0x100164u: goto label_100164;
        case 0x100168u: goto label_100168;
        case 0x10016cu: goto label_10016c;
        case 0x100170u: goto label_100170;
        case 0x100174u: goto label_100174;
        case 0x100178u: goto label_100178;
        case 0x10017cu: goto label_10017c;
        case 0x100180u: goto label_100180;
        case 0x100184u: goto label_100184;
        case 0x100188u: goto label_100188;
        case 0x10018cu: goto label_10018c;
        case 0x100190u: goto label_100190;
        case 0x100194u: goto label_100194;
        case 0x100198u: goto label_100198;
        case 0x10019cu: goto label_10019c;
        case 0x1001a0u: goto label_1001a0;
        case 0x1001a4u: goto label_1001a4;
        case 0x1001a8u: goto label_1001a8;
        case 0x1001acu: goto label_1001ac;
        case 0x1001b0u: goto label_1001b0;
        case 0x1001b4u: goto label_1001b4;
        default: break;
    }

    ctx->pc = 0x10002cu;

label_10002c:
    // 0x10002c: 0x70005428  padduw      $t2, $zero, $zero
    ctx->pc = 0x10002cu;
    SET_GPR_VEC(ctx, 10, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100030:
    // 0x100030: 0x70005c28  padduw      $t3, $zero, $zero
    ctx->pc = 0x100030u;
    SET_GPR_VEC(ctx, 11, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100034:
    // 0x100034: 0x70006428  padduw      $t4, $zero, $zero
    ctx->pc = 0x100034u;
    SET_GPR_VEC(ctx, 12, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100038:
    // 0x100038: 0x70006c28  padduw      $t5, $zero, $zero
    ctx->pc = 0x100038u;
    SET_GPR_VEC(ctx, 13, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_10003c:
    // 0x10003c: 0x70007428  padduw      $t6, $zero, $zero
    ctx->pc = 0x10003cu;
    SET_GPR_VEC(ctx, 14, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100040:
    // 0x100040: 0x70007c28  padduw      $t7, $zero, $zero
    ctx->pc = 0x100040u;
    SET_GPR_VEC(ctx, 15, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100044:
    // 0x100044: 0x70008428  padduw      $s0, $zero, $zero
    ctx->pc = 0x100044u;
    SET_GPR_VEC(ctx, 16, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100048:
    // 0x100048: 0x70008c28  padduw      $s1, $zero, $zero
    ctx->pc = 0x100048u;
    SET_GPR_VEC(ctx, 17, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_10004c:
    // 0x10004c: 0x70009428  padduw      $s2, $zero, $zero
    ctx->pc = 0x10004cu;
    SET_GPR_VEC(ctx, 18, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100050:
    // 0x100050: 0x70009c28  padduw      $s3, $zero, $zero
    ctx->pc = 0x100050u;
    SET_GPR_VEC(ctx, 19, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100054:
    // 0x100054: 0x7000a428  padduw      $s4, $zero, $zero
    ctx->pc = 0x100054u;
    SET_GPR_VEC(ctx, 20, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100058:
    // 0x100058: 0x7000ac28  padduw      $s5, $zero, $zero
    ctx->pc = 0x100058u;
    SET_GPR_VEC(ctx, 21, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_10005c:
    // 0x10005c: 0x7000b428  padduw      $s6, $zero, $zero
    ctx->pc = 0x10005cu;
    SET_GPR_VEC(ctx, 22, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100060:
    // 0x100060: 0x7000bc28  padduw      $s7, $zero, $zero
    ctx->pc = 0x100060u;
    SET_GPR_VEC(ctx, 23, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100064:
    // 0x100064: 0x7000c428  padduw      $t8, $zero, $zero
    ctx->pc = 0x100064u;
    SET_GPR_VEC(ctx, 24, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100068:
    // 0x100068: 0x7000cc28  padduw      $t9, $zero, $zero
    ctx->pc = 0x100068u;
    SET_GPR_VEC(ctx, 25, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_10006c:
    // 0x10006c: 0x7000e428  padduw      $gp, $zero, $zero
    ctx->pc = 0x10006cu;
    SET_GPR_VEC(ctx, 28, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100070:
    // 0x100070: 0x7000ec28  padduw      $sp, $zero, $zero
    ctx->pc = 0x100070u;
    SET_GPR_VEC(ctx, 29, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100074:
    // 0x100074: 0x7000f428  padduw      $fp, $zero, $zero
    ctx->pc = 0x100074u;
    SET_GPR_VEC(ctx, 30, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_100078:
    // 0x100078: 0x7000fc28  padduw      $ra, $zero, $zero
    ctx->pc = 0x100078u;
    SET_GPR_VEC(ctx, 31, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_10007c:
    // 0x10007c: 0x11  mthi        $zero
    ctx->pc = 0x10007cu;
    ctx->hi = GPR_U64(ctx, 0);
label_100080:
    // 0x100080: 0x70000011  mthi1       $zero
    ctx->pc = 0x100080u;
    ctx->hi1 = GPR_U64(ctx, 0);
label_100084:
    // 0x100084: 0x13  mtlo        $zero
    ctx->pc = 0x100084u;
    ctx->lo = GPR_U64(ctx, 0);
label_100088:
    // 0x100088: 0x70000013  mtlo1       $zero
    ctx->pc = 0x100088u;
    ctx->lo1 = GPR_U64(ctx, 0);
label_10008c:
    // 0x10008c: 0x4190000  mtsah       $zero, 0x0
    ctx->pc = 0x10008cu;
    ctx->sa = ((GPR_U32(ctx, 0) ^ (uint32_t)0) & 0x7) << 4;
label_100090:
    // 0x100090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x100090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_100094:
    // 0x100094: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x100094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_100098:
    // 0x100098: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x100098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10009c:
    // 0x10009c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10009cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1000a0:
    // 0x1000a0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1000a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1000a4:
    // 0x1000a4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1000a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1000a8:
    // 0x1000a8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1000a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1000ac:
    // 0x1000ac: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1000acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1000b0:
    // 0x1000b0: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1000b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1000b4:
    // 0x1000b4: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x1000b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1000b8:
    // 0x1000b8: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x1000b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1000bc:
    // 0x1000bc: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x1000bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1000c0:
    // 0x1000c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1000c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1000c4:
    // 0x1000c4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1000c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1000c8:
    // 0x1000c8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1000c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1000cc:
    // 0x1000cc: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1000ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1000d0:
    // 0x1000d0: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1000d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1000d4:
    // 0x1000d4: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x1000d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_1000d8:
    // 0x1000d8: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1000d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_1000dc:
    // 0x1000dc: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x1000dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_1000e0:
    // 0x1000e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1000e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1000e4:
    // 0x1000e4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1000e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1000e8:
    // 0x1000e8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1000e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1000ec:
    // 0x1000ec: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1000ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1000f0:
    // 0x1000f0: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x1000f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1000f4:
    // 0x1000f4: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x1000f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_1000f8:
    // 0x1000f8: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x1000f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_1000fc:
    // 0x1000fc: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x1000fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_100100:
    // 0x100100: 0x4480e000  mtc1        $zero, $f28
    ctx->pc = 0x100100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_100104:
    // 0x100104: 0x4480e800  mtc1        $zero, $f29
    ctx->pc = 0x100104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
label_100108:
    // 0x100108: 0x4480f000  mtc1        $zero, $f30
    ctx->pc = 0x100108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_10010c:
    // 0x10010c: 0x4480f800  mtc1        $zero, $f31
    ctx->pc = 0x10010cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
label_100110:
    // 0x100110: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x100110u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_100114:
    // 0x100114: 0x40f  sync.p
    ctx->pc = 0x100114u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_100118:
    // 0x100118: 0x44c0f800  ctc1        $zero, $FpcCsr
    ctx->pc = 0x100118u;
    ctx->fcr31 = GPR_U32(ctx, 0) & 0x0183FFFF;
label_10011c:
    // 0x10011c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x10011cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
label_100120:
    // 0x100120: 0x3c050000  lui         $a1, 0x0
    ctx->pc = 0x100120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)0 << 16));
label_100124:
    // 0x100124: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x100124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_100128:
    // 0x100128: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x100128u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
label_10012c:
    // 0x10012c: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x10012cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
label_100130:
    // 0x100130: 0x24848870  addiu       $a0, $a0, -0x7790
    ctx->pc = 0x100130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936688));
label_100134:
    // 0x100134: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x100134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_100138:
    // 0x100138: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x100138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_10013c:
    // 0x10013c: 0x24e75ec0  addiu       $a3, $a3, 0x5EC0
    ctx->pc = 0x10013cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24256));
label_100140:
    // 0x100140: 0x250801e0  addiu       $t0, $t0, 0x1E0
    ctx->pc = 0x100140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 480));
label_100144:
    // 0x100144: 0x80e02d  daddu       $gp, $a0, $zero
    ctx->pc = 0x100144u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_100148:
    // 0x100148: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x100148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_10014c:
    // 0x10014c: 0xc  syscall     0
    ctx->pc = 0x10014cu;
    ctx->pc = 0x100150u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_100150:
    // 0x100150: 0x40e82d  daddu       $sp, $v0, $zero
    ctx->pc = 0x100150u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100154:
    // 0x100154: 0x3c0401bd  lui         $a0, 0x1BD
    ctx->pc = 0x100154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)445 << 16));
label_100158:
    // 0x100158: 0x3c050000  lui         $a1, 0x0
    ctx->pc = 0x100158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)0 << 16));
label_10015c:
    // 0x10015c: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x10015cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
label_100160:
    // 0x100160: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x100160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_100164:
    // 0x100164: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x100164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_100168:
    // 0x100168: 0xc  syscall     0
    ctx->pc = 0x100168u;
    ctx->pc = 0x10016Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10016c:
    // 0x10016c: 0xc046318  jal         func_118C60
label_100170:
    if (ctx->pc == 0x100170u) {
        ctx->pc = 0x100174u;
        goto label_100174;
    }
    ctx->pc = 0x10016Cu;
    SET_GPR_U32(ctx, 31, 0x100174u);
    ctx->pc = 0x118C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C60u, 0x10016Cu, 0x100174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100174u;
label_100174:
    // 0x100174: 0xc043d88  jal         func_10F620
label_100178:
    if (ctx->pc == 0x100178u) {
        ctx->pc = 0x100178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100174u;
        // 0x100178: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10017Cu;
        goto label_10017c;
    }
    ctx->pc = 0x100174u;
    SET_GPR_U32(ctx, 31, 0x10017Cu);
    ctx->pc = 0x100178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100174u;
    // 0x100178: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x100174u, 0x10017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10017Cu;
label_10017c:
    // 0x10017c: 0xc341834  jal         func_D060D0
label_100180:
    if (ctx->pc == 0x100180u) {
        ctx->pc = 0x100184u;
        goto label_100184;
    }
    ctx->pc = 0x10017Cu;
    SET_GPR_U32(ctx, 31, 0x100184u);
    ctx->pc = 0xD060D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD060D0u, 0x10017Cu, 0x100184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100184u;
label_100184:
    // 0x100184: 0x3c100000  lui         $s0, 0x0
    ctx->pc = 0x100184u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)0 << 16));
label_100188:
    // 0x100188: 0x26100000  addiu       $s0, $s0, 0x0
    ctx->pc = 0x100188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 0));
label_10018c:
    // 0x10018c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_100190:
    if (ctx->pc == 0x100190u) {
        ctx->pc = 0x100194u;
        goto label_100194;
    }
    ctx->pc = 0x10018Cu;
    {
        const bool branch_taken_0x10018c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10018c) {
            ctx->pc = 0x10019Cu;
            goto label_10019c;
        }
    }
    ctx->pc = 0x100194u;
label_100194:
    // 0x100194: 0x200f809  jalr        $s0
label_100198:
    if (ctx->pc == 0x100198u) {
        ctx->pc = 0x10019Cu;
        goto label_10019c;
    }
    ctx->pc = 0x100194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x10019Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100194u, 0x10019Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10019Cu;
label_10019c:
    // 0x10019c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x10019cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)0 << 16));
label_1001a0:
    // 0x1001a0: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x1001a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1001a4:
    // 0x1001a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1001a8:
    if (ctx->pc == 0x1001A8u) {
        ctx->pc = 0x1001ACu;
        goto label_1001ac;
    }
    ctx->pc = 0x1001A4u;
    {
        const bool branch_taken_0x1001a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1001a4) {
            ctx->pc = 0x1001B4u;
            goto label_1001b4;
        }
    }
    ctx->pc = 0x1001ACu;
label_1001ac:
    // 0x1001ac: 0xc049d50  jal         func_127540
label_1001b0:
    if (ctx->pc == 0x1001B0u) {
        ctx->pc = 0x1001B4u;
        goto label_1001b4;
    }
    ctx->pc = 0x1001ACu;
    SET_GPR_U32(ctx, 31, 0x1001B4u);
    ctx->pc = 0x127540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127540u, 0x1001ACu, 0x1001B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001B4u;
label_1001b4:
    // 0x1001b4: 0x42000038  ei
    ctx->pc = 0x1001b4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x1001b8u;
}
