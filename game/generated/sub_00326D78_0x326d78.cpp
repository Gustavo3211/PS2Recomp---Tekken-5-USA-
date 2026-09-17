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

// Function: sub_00326D78
// Address: 0x326d78 - 0x3270d8
void sub_00326D78_0x326d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326D78_0x326d78");
#endif

    switch (ctx->pc) {
        case 0x326d78u: goto label_326d78;
        case 0x326d7cu: goto label_326d7c;
        case 0x326d80u: goto label_326d80;
        case 0x326d84u: goto label_326d84;
        case 0x326d88u: goto label_326d88;
        case 0x326d8cu: goto label_326d8c;
        case 0x326d90u: goto label_326d90;
        case 0x326d94u: goto label_326d94;
        case 0x326d98u: goto label_326d98;
        case 0x326d9cu: goto label_326d9c;
        case 0x326da0u: goto label_326da0;
        case 0x326da4u: goto label_326da4;
        case 0x326da8u: goto label_326da8;
        case 0x326dacu: goto label_326dac;
        case 0x326db0u: goto label_326db0;
        case 0x326db4u: goto label_326db4;
        case 0x326db8u: goto label_326db8;
        case 0x326dbcu: goto label_326dbc;
        case 0x326dc0u: goto label_326dc0;
        case 0x326dc4u: goto label_326dc4;
        case 0x326dc8u: goto label_326dc8;
        case 0x326dccu: goto label_326dcc;
        case 0x326dd0u: goto label_326dd0;
        case 0x326dd4u: goto label_326dd4;
        case 0x326dd8u: goto label_326dd8;
        case 0x326ddcu: goto label_326ddc;
        case 0x326de0u: goto label_326de0;
        case 0x326de4u: goto label_326de4;
        case 0x326de8u: goto label_326de8;
        case 0x326decu: goto label_326dec;
        case 0x326df0u: goto label_326df0;
        case 0x326df4u: goto label_326df4;
        case 0x326df8u: goto label_326df8;
        case 0x326dfcu: goto label_326dfc;
        case 0x326e00u: goto label_326e00;
        case 0x326e04u: goto label_326e04;
        case 0x326e08u: goto label_326e08;
        case 0x326e0cu: goto label_326e0c;
        case 0x326e10u: goto label_326e10;
        case 0x326e14u: goto label_326e14;
        case 0x326e18u: goto label_326e18;
        case 0x326e1cu: goto label_326e1c;
        case 0x326e20u: goto label_326e20;
        case 0x326e24u: goto label_326e24;
        case 0x326e28u: goto label_326e28;
        case 0x326e2cu: goto label_326e2c;
        case 0x326e30u: goto label_326e30;
        case 0x326e34u: goto label_326e34;
        case 0x326e38u: goto label_326e38;
        case 0x326e3cu: goto label_326e3c;
        case 0x326e40u: goto label_326e40;
        case 0x326e44u: goto label_326e44;
        case 0x326e48u: goto label_326e48;
        case 0x326e4cu: goto label_326e4c;
        case 0x326e50u: goto label_326e50;
        case 0x326e54u: goto label_326e54;
        case 0x326e58u: goto label_326e58;
        case 0x326e5cu: goto label_326e5c;
        case 0x326e60u: goto label_326e60;
        case 0x326e64u: goto label_326e64;
        case 0x326e68u: goto label_326e68;
        case 0x326e6cu: goto label_326e6c;
        case 0x326e70u: goto label_326e70;
        case 0x326e74u: goto label_326e74;
        case 0x326e78u: goto label_326e78;
        case 0x326e7cu: goto label_326e7c;
        case 0x326e80u: goto label_326e80;
        case 0x326e84u: goto label_326e84;
        case 0x326e88u: goto label_326e88;
        case 0x326e8cu: goto label_326e8c;
        case 0x326e90u: goto label_326e90;
        case 0x326e94u: goto label_326e94;
        case 0x326e98u: goto label_326e98;
        case 0x326e9cu: goto label_326e9c;
        case 0x326ea0u: goto label_326ea0;
        case 0x326ea4u: goto label_326ea4;
        case 0x326ea8u: goto label_326ea8;
        case 0x326eacu: goto label_326eac;
        case 0x326eb0u: goto label_326eb0;
        case 0x326eb4u: goto label_326eb4;
        case 0x326eb8u: goto label_326eb8;
        case 0x326ebcu: goto label_326ebc;
        case 0x326ec0u: goto label_326ec0;
        case 0x326ec4u: goto label_326ec4;
        case 0x326ec8u: goto label_326ec8;
        case 0x326eccu: goto label_326ecc;
        case 0x326ed0u: goto label_326ed0;
        case 0x326ed4u: goto label_326ed4;
        case 0x326ed8u: goto label_326ed8;
        case 0x326edcu: goto label_326edc;
        case 0x326ee0u: goto label_326ee0;
        case 0x326ee4u: goto label_326ee4;
        case 0x326ee8u: goto label_326ee8;
        case 0x326eecu: goto label_326eec;
        case 0x326ef0u: goto label_326ef0;
        case 0x326ef4u: goto label_326ef4;
        case 0x326ef8u: goto label_326ef8;
        case 0x326efcu: goto label_326efc;
        case 0x326f00u: goto label_326f00;
        case 0x326f04u: goto label_326f04;
        case 0x326f08u: goto label_326f08;
        case 0x326f0cu: goto label_326f0c;
        case 0x326f10u: goto label_326f10;
        case 0x326f14u: goto label_326f14;
        case 0x326f18u: goto label_326f18;
        case 0x326f1cu: goto label_326f1c;
        case 0x326f20u: goto label_326f20;
        case 0x326f24u: goto label_326f24;
        case 0x326f28u: goto label_326f28;
        case 0x326f2cu: goto label_326f2c;
        case 0x326f30u: goto label_326f30;
        case 0x326f34u: goto label_326f34;
        case 0x326f38u: goto label_326f38;
        case 0x326f3cu: goto label_326f3c;
        case 0x326f40u: goto label_326f40;
        case 0x326f44u: goto label_326f44;
        case 0x326f48u: goto label_326f48;
        case 0x326f4cu: goto label_326f4c;
        case 0x326f50u: goto label_326f50;
        case 0x326f54u: goto label_326f54;
        case 0x326f58u: goto label_326f58;
        case 0x326f5cu: goto label_326f5c;
        case 0x326f60u: goto label_326f60;
        case 0x326f64u: goto label_326f64;
        case 0x326f68u: goto label_326f68;
        case 0x326f6cu: goto label_326f6c;
        case 0x326f70u: goto label_326f70;
        case 0x326f74u: goto label_326f74;
        case 0x326f78u: goto label_326f78;
        case 0x326f7cu: goto label_326f7c;
        case 0x326f80u: goto label_326f80;
        case 0x326f84u: goto label_326f84;
        case 0x326f88u: goto label_326f88;
        case 0x326f8cu: goto label_326f8c;
        case 0x326f90u: goto label_326f90;
        case 0x326f94u: goto label_326f94;
        case 0x326f98u: goto label_326f98;
        case 0x326f9cu: goto label_326f9c;
        case 0x326fa0u: goto label_326fa0;
        case 0x326fa4u: goto label_326fa4;
        case 0x326fa8u: goto label_326fa8;
        case 0x326facu: goto label_326fac;
        case 0x326fb0u: goto label_326fb0;
        case 0x326fb4u: goto label_326fb4;
        case 0x326fb8u: goto label_326fb8;
        case 0x326fbcu: goto label_326fbc;
        case 0x326fc0u: goto label_326fc0;
        case 0x326fc4u: goto label_326fc4;
        case 0x326fc8u: goto label_326fc8;
        case 0x326fccu: goto label_326fcc;
        case 0x326fd0u: goto label_326fd0;
        case 0x326fd4u: goto label_326fd4;
        case 0x326fd8u: goto label_326fd8;
        case 0x326fdcu: goto label_326fdc;
        case 0x326fe0u: goto label_326fe0;
        case 0x326fe4u: goto label_326fe4;
        case 0x326fe8u: goto label_326fe8;
        case 0x326fecu: goto label_326fec;
        case 0x326ff0u: goto label_326ff0;
        case 0x326ff4u: goto label_326ff4;
        case 0x326ff8u: goto label_326ff8;
        case 0x326ffcu: goto label_326ffc;
        case 0x327000u: goto label_327000;
        case 0x327004u: goto label_327004;
        case 0x327008u: goto label_327008;
        case 0x32700cu: goto label_32700c;
        case 0x327010u: goto label_327010;
        case 0x327014u: goto label_327014;
        case 0x327018u: goto label_327018;
        case 0x32701cu: goto label_32701c;
        case 0x327020u: goto label_327020;
        case 0x327024u: goto label_327024;
        case 0x327028u: goto label_327028;
        case 0x32702cu: goto label_32702c;
        case 0x327030u: goto label_327030;
        case 0x327034u: goto label_327034;
        case 0x327038u: goto label_327038;
        case 0x32703cu: goto label_32703c;
        case 0x327040u: goto label_327040;
        case 0x327044u: goto label_327044;
        case 0x327048u: goto label_327048;
        case 0x32704cu: goto label_32704c;
        case 0x327050u: goto label_327050;
        case 0x327054u: goto label_327054;
        case 0x327058u: goto label_327058;
        case 0x32705cu: goto label_32705c;
        case 0x327060u: goto label_327060;
        case 0x327064u: goto label_327064;
        case 0x327068u: goto label_327068;
        case 0x32706cu: goto label_32706c;
        case 0x327070u: goto label_327070;
        case 0x327074u: goto label_327074;
        case 0x327078u: goto label_327078;
        case 0x32707cu: goto label_32707c;
        case 0x327080u: goto label_327080;
        case 0x327084u: goto label_327084;
        case 0x327088u: goto label_327088;
        case 0x32708cu: goto label_32708c;
        case 0x327090u: goto label_327090;
        case 0x327094u: goto label_327094;
        case 0x327098u: goto label_327098;
        case 0x32709cu: goto label_32709c;
        case 0x3270a0u: goto label_3270a0;
        case 0x3270a4u: goto label_3270a4;
        case 0x3270a8u: goto label_3270a8;
        case 0x3270acu: goto label_3270ac;
        case 0x3270b0u: goto label_3270b0;
        case 0x3270b4u: goto label_3270b4;
        case 0x3270b8u: goto label_3270b8;
        case 0x3270bcu: goto label_3270bc;
        case 0x3270c0u: goto label_3270c0;
        case 0x3270c4u: goto label_3270c4;
        case 0x3270c8u: goto label_3270c8;
        case 0x3270ccu: goto label_3270cc;
        case 0x3270d0u: goto label_3270d0;
        case 0x3270d4u: goto label_3270d4;
        default: break;
    }

    ctx->pc = 0x326d78u;

label_326d78:
    // 0x326d78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x326d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_326d7c:
    // 0x326d7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x326d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_326d80:
    // 0x326d80: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x326d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_326d84:
    // 0x326d84: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x326d84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_326d88:
    // 0x326d88: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x326d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_326d8c:
    // 0x326d8c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x326d8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_326d90:
    // 0x326d90: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x326d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_326d94:
    // 0x326d94: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x326d94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_326d98:
    // 0x326d98: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x326d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_326d9c:
    // 0x326d9c: 0x24460400  addiu       $a2, $v0, 0x400
    ctx->pc = 0x326d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_326da0:
    // 0x326da0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x326da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_326da4:
    // 0x326da4: 0x26a30030  addiu       $v1, $s5, 0x30
    ctx->pc = 0x326da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_326da8:
    // 0x326da8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x326da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_326dac:
    // 0x326dac: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x326dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_326db0:
    // 0x326db0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x326db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_326db4:
    // 0x326db4: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x326db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_326db8:
    // 0x326db8: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x326db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_326dbc:
    // 0x326dbc: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x326dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_326dc0:
    // 0x326dc0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x326dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_326dc4:
    // 0x326dc4: 0x8cd70014  lw          $s7, 0x14($a2)
    ctx->pc = 0x326dc4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_326dc8:
    // 0x326dc8: 0xdab50000  lqc2        $vf21, 0x0($s5)
    ctx->pc = 0x326dc8u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_326dcc:
    // 0x326dcc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x326dccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_326dd0:
    // 0x326dd0: 0x48b33800  qmtc2.ni    $s3, $vf7
    ctx->pc = 0x326dd0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 19));
label_326dd4:
    // 0x326dd4: 0x48c2a800  ctc2.ni     $v0, $vi21
    ctx->pc = 0x326dd4u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
label_326dd8:
    // 0x326dd8: 0x4bc1ad68  vadd.xyz    $vf21, $vf21, $vf1
    ctx->pc = 0x326dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_326ddc:
    // 0x326ddc: 0x4b07393c  vitof0.x    $vf7, $vf7
    ctx->pc = 0x326ddcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[7]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_326de0:
    // 0x326de0: 0x2673fffe  addiu       $s3, $s3, -0x2
    ctx->pc = 0x326de0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
label_326de4:
    // 0x326de4: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x326de4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_326de8:
    // 0x326de8: 0x1260008e  beqz        $s3, . + 4 + (0x8E << 2)
label_326dec:
    if (ctx->pc == 0x326DECu) {
        ctx->pc = 0x326DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DE8u;
        // 0x326dec: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326DF0u;
        goto label_326df0;
    }
    ctx->pc = 0x326DE8u;
    {
        const bool branch_taken_0x326de8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x326DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DE8u;
        // 0x326dec: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326de8) {
            ctx->pc = 0x327024u;
            goto label_327024;
        }
    }
    ctx->pc = 0x326DF0u;
label_326df0:
    // 0x326df0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x326df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_326df4:
    // 0x326df4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x326df4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_326df8:
    // 0x326df8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x326df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_326dfc:
    // 0x326dfc: 0x3463d010  ori         $v1, $v1, 0xD010
    ctx->pc = 0x326dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53264);
label_326e00:
    // 0x326e00: 0x34c6d020  ori         $a2, $a2, 0xD020
    ctx->pc = 0x326e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53280);
label_326e04:
    // 0x326e04: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x326e04u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
label_326e08:
    // 0x326e08: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x326e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
label_326e0c:
    // 0x326e0c: 0x37ded080  ori         $fp, $fp, 0xD080
    ctx->pc = 0x326e0cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)53376);
label_326e10:
    // 0x326e10: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x326e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_326e14:
    // 0x326e14: 0x0  nop
    ctx->pc = 0x326e14u;
    // NOP
label_326e18:
    // 0x326e18: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x326e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_326e1c:
    // 0x326e1c: 0x24a503cc  addiu       $a1, $a1, 0x3CC
    ctx->pc = 0x326e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 972));
label_326e20:
    // 0x326e20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x326e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326e24:
    // 0x326e24: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x326e24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_326e28:
    // 0x326e28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x326e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_326e2c:
    // 0x326e2c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x326e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_326e30:
    // 0x326e30: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_326e34:
    if (ctx->pc == 0x326E34u) {
        ctx->pc = 0x326E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E30u;
        // 0x326e34: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326E38u;
        goto label_326e38;
    }
    ctx->pc = 0x326E30u;
    {
        const bool branch_taken_0x326e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E30u;
        // 0x326e34: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e30) {
            ctx->pc = 0x326F98u;
            goto label_326f98;
        }
    }
    ctx->pc = 0x326E38u;
label_326e38:
    // 0x326e38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x326e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_326e3c:
    // 0x326e3c: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x326e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_326e40:
    // 0x326e40: 0x0  nop
    ctx->pc = 0x326e40u;
    // NOP
label_326e44:
    // 0x326e44: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_326e48:
    if (ctx->pc == 0x326E48u) {
        ctx->pc = 0x326E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E44u;
        // 0x326e48: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326E4Cu;
        goto label_326e4c;
    }
    ctx->pc = 0x326E44u;
    {
        const bool branch_taken_0x326e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E44u;
        // 0x326e48: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e44) {
            ctx->pc = 0x326E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326e28;
        }
    }
    ctx->pc = 0x326E4Cu;
label_326e4c:
    // 0x326e4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x326e4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326e50:
    // 0x326e50: 0x2e62002f  sltiu       $v0, $s3, 0x2F
    ctx->pc = 0x326e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
label_326e54:
    // 0x326e54: 0x2408002e  addiu       $t0, $zero, 0x2E
    ctx->pc = 0x326e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_326e58:
    // 0x326e58: 0x262400b  movn        $t0, $s3, $v0
    ctx->pc = 0x326e58u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 19));
label_326e5c:
    // 0x326e5c: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x326e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
label_326e60:
    // 0x326e60: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x326e60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_326e64:
    // 0x326e64: 0x88040  sll         $s0, $t0, 1
    ctx->pc = 0x326e64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_326e68:
    // 0x326e68: 0x24f403c0  addiu       $s4, $a3, 0x3C0
    ctx->pc = 0x326e68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 960));
label_326e6c:
    // 0x326e6c: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x326e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_326e70:
    // 0x326e70: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x326e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_326e74:
    // 0x326e74: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x326e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_326e78:
    // 0x326e78: 0x26060006  addiu       $a2, $s0, 0x6
    ctx->pc = 0x326e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
label_326e7c:
    // 0x326e7c: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x326e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_326e80:
    // 0x326e80: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x326e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_326e84:
    // 0x326e84: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x326e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_326e88:
    // 0x326e88: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x326e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_326e8c:
    // 0x326e8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x326e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_326e90:
    // 0x326e90: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x326e90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_326e94:
    // 0x326e94: 0x3c036001  lui         $v1, 0x6001
    ctx->pc = 0x326e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24577 << 16));
label_326e98:
    // 0x326e98: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x326e98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
label_326e9c:
    // 0x326e9c: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x326e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_326ea0:
    // 0x326ea0: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x326ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_326ea4:
    // 0x326ea4: 0x3c071400  lui         $a3, 0x1400
    ctx->pc = 0x326ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5120 << 16));
label_326ea8:
    // 0x326ea8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x326ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_326eac:
    // 0x326eac: 0x25020002  addiu       $v0, $t0, 0x2
    ctx->pc = 0x326eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_326eb0:
    // 0x326eb0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x326eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_326eb4:
    // 0x326eb4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x326eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
label_326eb8:
    // 0x326eb8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x326eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_326ebc:
    // 0x326ebc: 0x26a6ffa0  addiu       $a2, $s5, -0x60
    ctx->pc = 0x326ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967200));
label_326ec0:
    // 0x326ec0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x326ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_326ec4:
    // 0x326ec4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x326ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326ec8:
    // 0x326ec8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x326ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_326ecc:
    // 0x326ecc: 0x2689823  subu        $s3, $s3, $t0
    ctx->pc = 0x326eccu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
label_326ed0:
    // 0x326ed0: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x326ed0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_326ed4:
    // 0x326ed4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x326ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_326ed8:
    // 0x326ed8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x326ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_326edc:
    // 0x326edc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x326edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_326ee0:
    // 0x326ee0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x326ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_326ee4:
    // 0x326ee4: 0x40f809  jalr        $v0
label_326ee8:
    if (ctx->pc == 0x326EE8u) {
        ctx->pc = 0x326EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EE4u;
        // 0x326ee8: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326EECu;
        goto label_326eec;
    }
    ctx->pc = 0x326EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326EECu);
        ctx->pc = 0x326EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EE4u;
        // 0x326ee8: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326EE4u, 0x326EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326EECu;
label_326eec:
    // 0x326eec: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x326eecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_326ef0:
    // 0x326ef0: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x326ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_326ef4:
    // 0x326ef4: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_326ef8:
    if (ctx->pc == 0x326EF8u) {
        ctx->pc = 0x326EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EF4u;
        // 0x326ef8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326EFCu;
        goto label_326efc;
    }
    ctx->pc = 0x326EF4u;
    {
        const bool branch_taken_0x326ef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x326EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EF4u;
        // 0x326ef8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ef4) {
            ctx->pc = 0x326F7Cu;
            goto label_326f7c;
        }
    }
    ctx->pc = 0x326EFCu;
label_326efc:
    // 0x326efc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x326efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_326f00:
    // 0x326f00: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x326f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_326f04:
    // 0x326f04: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x326f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
label_326f08:
    // 0x326f08: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x326f08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_326f0c:
    // 0x326f0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x326f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_326f10:
    // 0x326f10: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x326f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_326f14:
    // 0x326f14: 0xc0ce218  jal         func_338860
label_326f18:
    if (ctx->pc == 0x326F18u) {
        ctx->pc = 0x326F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F14u;
        // 0x326f18: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326F1Cu;
        goto label_326f1c;
    }
    ctx->pc = 0x326F14u;
    SET_GPR_U32(ctx, 31, 0x326F1Cu);
    ctx->pc = 0x326F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F14u;
    // 0x326f18: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x326F14u, 0x326F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F1Cu;
label_326f1c:
    // 0x326f1c: 0x111902  srl         $v1, $s1, 4
    ctx->pc = 0x326f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
label_326f20:
    // 0x326f20: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x326f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_326f24:
    // 0x326f24: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x326f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_326f28:
    // 0x326f28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x326f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_326f2c:
    // 0x326f2c: 0x32453fff  andi        $a1, $s2, 0x3FFF
    ctx->pc = 0x326f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16383);
label_326f30:
    // 0x326f30: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x326f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_326f34:
    // 0x326f34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x326f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_326f38:
    // 0x326f38: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x326f38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_326f3c:
    // 0x326f3c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x326f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_326f40:
    // 0x326f40: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x326f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_326f44:
    // 0x326f44: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x326f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
label_326f48:
    // 0x326f48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x326f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_326f4c:
    // 0x326f4c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x326f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_326f50:
    // 0x326f50: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x326f50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
label_326f54:
    // 0x326f54: 0x3484e010  ori         $a0, $a0, 0xE010
    ctx->pc = 0x326f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57360);
label_326f58:
    // 0x326f58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x326f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_326f5c:
    // 0x326f5c: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x326f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
label_326f60:
    // 0x326f60: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x326f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_326f64:
    // 0x326f64: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x326f64u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7)); // MMIO: 0x1000e010
label_326f68:
    // 0x326f68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x326f68u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x1000e010
label_326f6c:
    // 0x326f6c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x326f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_326f70:
    // 0x326f70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x326f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_326f74:
    // 0x326f74: 0xae920008  sw          $s2, 0x8($s4)
    ctx->pc = 0x326f74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 18));
label_326f78:
    // 0x326f78: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x326f78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_326f7c:
    // 0x326f7c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x326f7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_326f80:
    // 0x326f80: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x326f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_326f84:
    // 0x326f84: 0x1642000e  bne         $s2, $v0, . + 4 + (0xE << 2)
label_326f88:
    if (ctx->pc == 0x326F88u) {
        ctx->pc = 0x326F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F84u;
        // 0x326f88: 0x2684000c  addiu       $a0, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326F8Cu;
        goto label_326f8c;
    }
    ctx->pc = 0x326F84u;
    {
        const bool branch_taken_0x326f84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x326F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F84u;
        // 0x326f88: 0x2684000c  addiu       $a0, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f84) {
            ctx->pc = 0x326FC0u;
            goto label_326fc0;
        }
    }
    ctx->pc = 0x326F8Cu;
label_326f8c:
    // 0x326f8c: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x326f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_326f90:
    // 0x326f90: 0x1000001a  b           . + 4 + (0x1A << 2)
label_326f94:
    if (ctx->pc == 0x326F94u) {
        ctx->pc = 0x326F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F90u;
        // 0x326f94: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326F98u;
        goto label_326f98;
    }
    ctx->pc = 0x326F90u;
    {
        const bool branch_taken_0x326f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F90u;
        // 0x326f94: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f90) {
            ctx->pc = 0x326FFCu;
            goto label_326ffc;
        }
    }
    ctx->pc = 0x326F98u;
label_326f98:
    // 0x326f98: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x326f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_326f9c:
    // 0x326f9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x326f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326fa0:
    // 0x326fa0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x326fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_326fa4:
    // 0x326fa4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x326fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_326fa8:
    // 0x326fa8: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x326fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_326fac:
    // 0x326fac: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x326facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_326fb0:
    // 0x326fb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x326fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_326fb4:
    // 0x326fb4: 0x1000ffa7  b           . + 4 + (-0x59 << 2)
label_326fb8:
    if (ctx->pc == 0x326FB8u) {
        ctx->pc = 0x326FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FB4u;
        // 0x326fb8: 0x2e62002f  sltiu       $v0, $s3, 0x2F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x326FBCu;
        goto label_326fbc;
    }
    ctx->pc = 0x326FB4u;
    {
        const bool branch_taken_0x326fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FB4u;
        // 0x326fb8: 0x2e62002f  sltiu       $v0, $s3, 0x2F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fb4) {
            ctx->pc = 0x326E54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326e54;
        }
    }
    ctx->pc = 0x326FBCu;
label_326fbc:
    // 0x326fbc: 0x0  nop
    ctx->pc = 0x326fbcu;
    // NOP
label_326fc0:
    // 0x326fc0: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x326fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
label_326fc4:
    // 0x326fc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x326fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326fc8:
    // 0x326fc8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x326fc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_326fcc:
    // 0x326fcc: 0x0  nop
    ctx->pc = 0x326fccu;
    // NOP
label_326fd0:
    // 0x326fd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x326fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_326fd4:
    // 0x326fd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_326fd8:
    if (ctx->pc == 0x326FD8u) {
        ctx->pc = 0x326FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FD4u;
        // 0x326fd8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326FDCu;
        goto label_326fdc;
    }
    ctx->pc = 0x326FD4u;
    {
        const bool branch_taken_0x326fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FD4u;
        // 0x326fd8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fd4) {
            ctx->pc = 0x326FE4u;
            goto label_326fe4;
        }
    }
    ctx->pc = 0x326FDCu;
label_326fdc:
    // 0x326fdc: 0x50f20007  beql        $a3, $s2, . + 4 + (0x7 << 2)
label_326fe0:
    if (ctx->pc == 0x326FE0u) {
        ctx->pc = 0x326FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FDCu;
        // 0x326fe0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326FE4u;
        goto label_326fe4;
    }
    ctx->pc = 0x326FDCu;
    {
        const bool branch_taken_0x326fdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 18));
        if (branch_taken_0x326fdc) {
            ctx->pc = 0x326FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326FDCu;
            // 0x326fe0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326FFCu;
            goto label_326ffc;
        }
    }
    ctx->pc = 0x326FE4u;
label_326fe4:
    // 0x326fe4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x326fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_326fe8:
    // 0x326fe8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x326fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_326fec:
    // 0x326fec: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x326fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_326ff0:
    // 0x326ff0: 0x0  nop
    ctx->pc = 0x326ff0u;
    // NOP
label_326ff4:
    // 0x326ff4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_326ff8:
    if (ctx->pc == 0x326FF8u) {
        ctx->pc = 0x326FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FF4u;
        // 0x326ff8: 0x24e70c00  addiu       $a3, $a3, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326FFCu;
        goto label_326ffc;
    }
    ctx->pc = 0x326FF4u;
    {
        const bool branch_taken_0x326ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FF4u;
        // 0x326ff8: 0x24e70c00  addiu       $a3, $a3, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ff4) {
            ctx->pc = 0x326FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326fd0;
        }
    }
    ctx->pc = 0x326FFCu;
label_326ffc:
    // 0x326ffc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x326ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_327000:
    // 0x327000: 0x244403c0  addiu       $a0, $v0, 0x3C0
    ctx->pc = 0x327000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_327004:
    // 0x327004: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x327004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_327008:
    // 0x327008: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x327008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32700c:
    // 0x32700c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_327010:
    if (ctx->pc == 0x327010u) {
        ctx->pc = 0x327010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32700Cu;
        // 0x327010: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327014u;
        goto label_327014;
    }
    ctx->pc = 0x32700Cu;
    {
        const bool branch_taken_0x32700c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x327010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32700Cu;
        // 0x327010: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32700c) {
            ctx->pc = 0x32701Cu;
            goto label_32701c;
        }
    }
    ctx->pc = 0x327014u;
label_327014:
    // 0x327014: 0xc0ce218  jal         func_338860
label_327018:
    if (ctx->pc == 0x327018u) {
        ctx->pc = 0x32701Cu;
        goto label_32701c;
    }
    ctx->pc = 0x327014u;
    SET_GPR_U32(ctx, 31, 0x32701Cu);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x327014u, 0x32701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32701Cu;
label_32701c:
    // 0x32701c: 0x1660ff7e  bnez        $s3, . + 4 + (-0x82 << 2)
label_327020:
    if (ctx->pc == 0x327020u) {
        ctx->pc = 0x327024u;
        goto label_327024;
    }
    ctx->pc = 0x32701Cu;
    {
        const bool branch_taken_0x32701c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x32701c) {
            ctx->pc = 0x326E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326e18;
        }
    }
    ctx->pc = 0x327024u;
label_327024:
    // 0x327024: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x327024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_327028:
    // 0x327028: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x327028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_32702c:
    // 0x32702c: 0x24660400  addiu       $a2, $v1, 0x400
    ctx->pc = 0x32702cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
label_327030:
    // 0x327030: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x327030u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
label_327034:
    // 0x327034: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x327034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_327038:
    // 0x327038: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x327038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_32703c:
    // 0x32703c: 0x2e54024  and         $t0, $s7, $a1
    ctx->pc = 0x32703cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
label_327040:
    // 0x327040: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x327040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_327044:
    // 0x327044: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x327044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_327048:
    // 0x327048: 0x971023  subu        $v0, $a0, $s7
    ctx->pc = 0x327048u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_32704c:
    // 0x32704c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x32704cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_327050:
    // 0x327050: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x327050u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_327054:
    // 0x327054: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x327054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_327058:
    // 0x327058: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x327058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_32705c:
    // 0x32705c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x32705cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_327060:
    // 0x327060: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x327060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_327064:
    // 0x327064: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x327064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
label_327068:
    // 0x327068: 0x15050005  bne         $t0, $a1, . + 4 + (0x5 << 2)
label_32706c:
    if (ctx->pc == 0x32706Cu) {
        ctx->pc = 0x32706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327068u;
        // 0x32706c: 0x2183e  dsrl32      $v1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327070u;
        goto label_327070;
    }
    ctx->pc = 0x327068u;
    {
        const bool branch_taken_0x327068 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x32706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327068u;
        // 0x32706c: 0x2183e  dsrl32      $v1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327068) {
            ctx->pc = 0x327080u;
            goto label_327080;
        }
    }
    ctx->pc = 0x327070u;
label_327070:
    // 0x327070: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x327070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_327074:
    // 0x327074: 0x10000005  b           . + 4 + (0x5 << 2)
label_327078:
    if (ctx->pc == 0x327078u) {
        ctx->pc = 0x327078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327074u;
        // 0x327078: 0x2e21025  or          $v0, $s7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32707Cu;
        goto label_32707c;
    }
    ctx->pc = 0x327074u;
    {
        const bool branch_taken_0x327074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327074u;
        // 0x327078: 0x2e21025  or          $v0, $s7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327074) {
            ctx->pc = 0x32708Cu;
            goto label_32708c;
        }
    }
    ctx->pc = 0x32707Cu;
label_32707c:
    // 0x32707c: 0x0  nop
    ctx->pc = 0x32707cu;
    // NOP
label_327080:
    // 0x327080: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x327080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_327084:
    // 0x327084: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x327084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_327088:
    // 0x327088: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x327088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
label_32708c:
    // 0x32708c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32708cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_327090:
    // 0x327090: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x327090u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_327094:
    // 0x327094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327098:
    // 0x327098: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x327098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_32709c:
    // 0x32709c: 0x70484389  pcpyld      $t0, $v0, $t0
    ctx->pc = 0x32709cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
label_3270a0:
    // 0x3270a0: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x3270a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
label_3270a4:
    // 0x3270a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3270a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3270a8:
    // 0x3270a8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3270a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3270ac:
    // 0x3270ac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3270acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3270b0:
    // 0x3270b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3270b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3270b4:
    // 0x3270b4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3270b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3270b8:
    // 0x3270b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3270b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3270bc:
    // 0x3270bc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x3270bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3270c0:
    // 0x3270c0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x3270c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3270c4:
    // 0x3270c4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x3270c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3270c8:
    // 0x3270c8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x3270c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3270cc:
    // 0x3270cc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x3270ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_3270d0:
    // 0x3270d0: 0x3e00008  jr          $ra
label_3270d4:
    if (ctx->pc == 0x3270D4u) {
        ctx->pc = 0x3270D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270D0u;
        // 0x3270d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3270D8u;
        goto label_fallthrough_0x3270d0;
    }
    ctx->pc = 0x3270D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3270D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270D0u;
        // 0x3270d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3270D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3270d0:
    ctx->pc = 0x3270D8u;
}
