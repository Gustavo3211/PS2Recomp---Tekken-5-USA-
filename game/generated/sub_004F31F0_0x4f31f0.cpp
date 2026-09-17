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

// Function: sub_004F31F0
// Address: 0x4f31f0 - 0x4f3650
void sub_004F31F0_0x4f31f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F31F0_0x4f31f0");
#endif

    switch (ctx->pc) {
        case 0x4f321cu: goto label_4f321c;
        case 0x4f3238u: goto label_4f3238;
        case 0x4f3304u: goto label_4f3304;
        case 0x4f3350u: goto label_4f3350;
        case 0x4f3480u: goto label_4f3480;
        case 0x4f3490u: goto label_4f3490;
        case 0x4f358cu: goto label_4f358c;
        case 0x4f3594u: goto label_4f3594;
        case 0x4f359cu: goto label_4f359c;
        case 0x4f35d4u: goto label_4f35d4;
        case 0x4f3620u: goto label_4f3620;
        case 0x4f3628u: goto label_4f3628;
        default: break;
    }

    ctx->pc = 0x4f31f0u;

    // 0x4f31f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f31f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4f31f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f31f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f31f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4f31f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f31fc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f31fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f3200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f3200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f3204: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f3204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f3208: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f3208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f320c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f320cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f3210: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f3210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4f3214: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F3214u;
    SET_GPR_U32(ctx, 31, 0x4F321Cu);
    ctx->pc = 0x4F3218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3214u;
    // 0x4f3218: 0x269501b4  addiu       $s5, $s4, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F3214u, 0x4F321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F321Cu;
label_4f321c:
    // 0x4f321c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f321cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f3220: 0xac621258  sw          $v0, 0x1258($v1)
    ctx->pc = 0x4f3220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1258u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1258u, _value); } while (0);
    // 0x4f3224: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4f3224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f3228: 0x4400053  bltz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x4F3228u;
    {
        const bool branch_taken_0x4f3228 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3228u;
        // 0x4f322c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3228) {
            ctx->pc = 0x4F3378u;
            goto label_4f3378;
        }
    }
    ctx->pc = 0x4F3230u;
    // 0x4f3230: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F3230u;
    SET_GPR_U32(ctx, 31, 0x4F3238u);
    ctx->pc = 0x4F3234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3230u;
    // 0x4f3234: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F3230u, 0x4F3238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3238u;
label_4f3238:
    // 0x4f3238: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f3238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f323c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x4f323cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x4f3240: 0xa682000e  sh          $v0, 0xE($s4)
    ctx->pc = 0x4f3240u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f3244: 0xa6830158  sh          $v1, 0x158($s4)
    ctx->pc = 0x4f3244u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f3248: 0x26101230  addiu       $s0, $s0, 0x1230
    ctx->pc = 0x4f3248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4656));
    // 0x4f324c: 0x868201be  lh          $v0, 0x1BE($s4)
    ctx->pc = 0x4f324cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 446)));
    // 0x4f3250: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4f3250u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4f3254: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4f3254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f3258: 0x26311234  addiu       $s1, $s1, 0x1234
    ctx->pc = 0x4f3258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4660));
    // 0x4f325c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4f325cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3260: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4f3260u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1234u));
    // 0x4f3264: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f3264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f3268: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f3268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f326c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f326cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f3270: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4f3270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4f3274: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x4f3274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4f3278: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4f3278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4f327c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f327cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f3280: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4f3280u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4f3284: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4f3284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4f3288: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f328c: 0x26731238  addiu       $s3, $s3, 0x1238
    ctx->pc = 0x4f328cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4664));
    // 0x4f3290: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f3290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3294: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x4f3294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4f3298: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f3298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f329c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f329cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f32a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4f32a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4f32a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f32a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f32a8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f32a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f32ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f32acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4f32b0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f32b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f32b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f32b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f32b8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4f32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4f32bc: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4f32bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f32c0: 0xa6840168  sh          $a0, 0x168($s4)
    ctx->pc = 0x4f32c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 360), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f32c4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f32c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f32c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f32c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f32cc: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x4f32ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x4f32d0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4f32d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f32d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f32d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f32d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f32dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f32dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f32e0: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x4f32e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x4f32e4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f32e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f32e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f32e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f32ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f32ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f32f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f32f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f32f4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4f32f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4f32f8: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4f32f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f32fc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F32FCu;
    SET_GPR_U32(ctx, 31, 0x4F3304u);
    ctx->pc = 0x4F3300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F32FCu;
    // 0x4f3300: 0xae650000  sw          $a1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F32FCu, 0x4F3304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3304u;
label_4f3304:
    // 0x4f3304: 0x521824  and         $v1, $v0, $s2
    ctx->pc = 0x4f3304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4f3308: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4f3308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4f330c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4f330cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4f3310: 0xa6830026  sh          $v1, 0x26($s4)
    ctx->pc = 0x4f3310u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f3314: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f3314u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3318: 0xa6820028  sh          $v0, 0x28($s4)
    ctx->pc = 0x4f3318u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f331c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f331cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f3320: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4f3320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f3324: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4f3324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4f3328: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f3328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f332c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f332cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f3330: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3334: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f3334u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f3338: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x4f3338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x4f333c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f3340: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f3340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f3344: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f3344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f3348: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F3348u;
    SET_GPR_U32(ctx, 31, 0x4F3350u);
    ctx->pc = 0x4F334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3348u;
    // 0x4f334c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F3348u, 0x4F3350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3350u;
label_4f3350:
    // 0x4f3350: 0x529024  and         $s2, $v0, $s2
    ctx->pc = 0x4f3350u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4f3354: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4f3354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4f3358: 0x129402  srl         $s2, $s2, 16
    ctx->pc = 0x4f3358u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x4f335c: 0xa6920164  sh          $s2, 0x164($s4)
    ctx->pc = 0x4f335cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 356), (uint16_t)GPR_U32(ctx, 18));
    // 0x4f3360: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4f3360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3364: 0xa68001b6  sh          $zero, 0x1B6($s4)
    ctx->pc = 0x4f3364u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f3368: 0xa6830166  sh          $v1, 0x166($s4)
    ctx->pc = 0x4f3368u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f336c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4f336cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f3370: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f3370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f3374: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x4f3374u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f3378:
    // 0x4f3378: 0x968201bc  lhu         $v0, 0x1BC($s4)
    ctx->pc = 0x4f3378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x4f337c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f3380: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f3380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f3384: 0x22443  sra         $a0, $v0, 17
    ctx->pc = 0x4f3384u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f3388: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x4F3388u;
    {
        const bool branch_taken_0x4f3388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4F338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3388u;
        // 0x4f338c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3388) {
            ctx->pc = 0x4F33E0u;
            goto label_4f33e0;
        }
    }
    ctx->pc = 0x4F3390u;
    // 0x4f3390: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F3390u;
    {
        const bool branch_taken_0x4f3390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3390) {
            ctx->pc = 0x4F3394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F3390u;
            // 0x4f3394: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F33A8u;
            goto label_4f33a8;
        }
    }
    ctx->pc = 0x4F3398u;
    // 0x4f3398: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F3398u;
    {
        const bool branch_taken_0x4f3398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3398u;
        // 0x4f339c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3398) {
            ctx->pc = 0x4F33B8u;
            goto label_4f33b8;
        }
    }
    ctx->pc = 0x4F33A0u;
    // 0x4f33a0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4F33A0u;
    {
        const bool branch_taken_0x4f33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F33A0u;
        // 0x4f33a4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f33a0) {
            ctx->pc = 0x4F3430u;
            goto label_4f3430;
        }
    }
    ctx->pc = 0x4F33A8u;
label_4f33a8:
    // 0x4f33a8: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4F33A8u;
    {
        const bool branch_taken_0x4f33a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F33A8u;
        // 0x4f33ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f33a8) {
            ctx->pc = 0x4F3408u;
            goto label_4f3408;
        }
    }
    ctx->pc = 0x4F33B0u;
    // 0x4f33b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4F33B0u;
    {
        const bool branch_taken_0x4f33b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F33B0u;
        // 0x4f33b4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f33b0) {
            ctx->pc = 0x4F3430u;
            goto label_4f3430;
        }
    }
    ctx->pc = 0x4F33B8u;
label_4f33b8:
    // 0x4f33b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4f33b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f33bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f33bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f33c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f33c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f33c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f33c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f33c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f33c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f33cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f33ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f33d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f33d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f33d4: 0x813cd14  j           func_4F3450
    ctx->pc = 0x4F33D4u;
    ctx->pc = 0x4F33D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F33D4u;
    // 0x4f33d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F3450u;
    goto label_4f3450;
    ctx->pc = 0x4F33DCu;
    // 0x4f33dc: 0x0  nop
    ctx->pc = 0x4f33dcu;
    // NOP
label_4f33e0:
    // 0x4f33e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4f33e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f33e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f33e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f33e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f33e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f33ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f33ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f33f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f33f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f33f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f33f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f33f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f33f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f33fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f33fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f3400: 0x813cd34  j           func_4F34D0
    ctx->pc = 0x4F3400u;
    ctx->pc = 0x4F3404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3400u;
    // 0x4f3404: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F34D0u;
    goto label_4f34d0;
    ctx->pc = 0x4F3408u;
label_4f3408:
    // 0x4f3408: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4f3408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f340c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f340cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f3410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f3410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f3414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f3414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f3418: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f3418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f341c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f341cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f3420: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f3420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f3424: 0x813cd70  j           func_4F35C0
    ctx->pc = 0x4F3424u;
    ctx->pc = 0x4F3428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3424u;
    // 0x4f3428: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F35C0u;
    goto label_4f35c0;
    ctx->pc = 0x4F342Cu;
    // 0x4f342c: 0x0  nop
    ctx->pc = 0x4f342cu;
    // NOP
label_4f3430:
    // 0x4f3430: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f3430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f3434: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f3434u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f3438: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f3438u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f343c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f343cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f3440: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f3440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f3444: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3444u;
        // 0x4f3448: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F344Cu;
    // 0x4f344c: 0x0  nop
    ctx->pc = 0x4f344cu;
    // NOP
label_4f3450:
    // 0x4f3450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f3450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f3454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f3454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f3458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f3458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f345c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f345cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f3460: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4f3460u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4f3464: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f3464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f3468: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4f3468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4f346c: 0xae301254  sw          $s0, 0x1254($s1)
    ctx->pc = 0x4f346cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x7F1254u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1254u, _value); } while (0);
    // 0x4f3470: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x4f3470u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4f3474: 0x1204000a  beq         $s0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4F3474u;
    {
        const bool branch_taken_0x4f3474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x4F3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3474u;
        // 0x4f3478: 0x241200ab  addiu       $s2, $zero, 0xAB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3474) {
            ctx->pc = 0x4F34A0u;
            goto label_4f34a0;
        }
    }
    ctx->pc = 0x4F347Cu;
    // 0x4f347c: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x4f347cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_4f3480:
    // 0x4f3480: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F3480u;
    {
        const bool branch_taken_0x4f3480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x4f3480) {
            ctx->pc = 0x4F3484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F3480u;
            // 0x4f3484: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3494u;
            goto label_4f3494;
        }
    }
    ctx->pc = 0x4F3488u;
    // 0x4f3488: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4F3488u;
    SET_GPR_U32(ctx, 31, 0x4F3490u);
    ctx->pc = 0x4F348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3488u;
    // 0x4f348c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4F3488u, 0x4F3490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3490u;
label_4f3490:
    // 0x4f3490: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x4f3490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4f3494:
    // 0x4f3494: 0x8e221254  lw          $v0, 0x1254($s1)
    ctx->pc = 0x4f3494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4692)));
    // 0x4f3498: 0x5602fff9  bnel        $s0, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4F3498u;
    {
        const bool branch_taken_0x4f3498 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f3498) {
            ctx->pc = 0x4F349Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F3498u;
            // 0x4f349c: 0x86020008  lh          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f3480;
        }
    }
    ctx->pc = 0x4F34A0u;
label_4f34a0:
    // 0x4f34a0: 0x8e301254  lw          $s0, 0x1254($s1)
    ctx->pc = 0x4f34a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4692)));
    // 0x4f34a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f34a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f34a8: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4f34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4f34ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f34acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f34b0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f34b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f34b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f34b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f34b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4f34b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f34bc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f34c0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f34c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f34c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F34C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F34C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F34C4u;
        // 0x4f34c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F34C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F34CCu;
    // 0x4f34cc: 0x0  nop
    ctx->pc = 0x4f34ccu;
    // NOP
label_4f34d0:
    // 0x4f34d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f34d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f34d4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4f34d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4f34d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f34d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f34dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f34dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f34e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4f34e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4f34e4: 0x24a81230  addiu       $t0, $a1, 0x1230
    ctx->pc = 0x4f34e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4656));
    // 0x4f34e8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4f34e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f34ec: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f34ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f34f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1230u));
    // 0x4f34f4: 0x34c6003d  ori         $a2, $a2, 0x3D
    ctx->pc = 0x4f34f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61);
    // 0x4f34f8: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4f34f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4f34fc: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4f34fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4f3500: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f3500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f3504: 0x24e71248  addiu       $a3, $a3, 0x1248
    ctx->pc = 0x4f3504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4680));
    // 0x4f3508: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4f3508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4f350c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f350cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3510: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f3510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f3514: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4f3514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4f3518: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f351c: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4f351cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4f3520: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f3520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f3524: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f3524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f3528: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f3528u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f352c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4f352cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f3530: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x4f3530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x4f3534: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F3534u;
    {
        const bool branch_taken_0x4f3534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3534u;
        // 0x4f3538: 0x25251234  addiu       $a1, $t1, 0x1234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3534) {
            ctx->pc = 0x4F3548u;
            goto label_4f3548;
        }
    }
    ctx->pc = 0x4F353Cu;
    // 0x4f353c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f3540: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4F3540u;
    {
        const bool branch_taken_0x4f3540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3540u;
        // 0x4f3544: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3540) {
            ctx->pc = 0x4F3550u;
            goto label_4f3550;
        }
    }
    ctx->pc = 0x4F3548u;
label_4f3548:
    // 0x4f3548: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f3548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f354c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4f354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4f3550:
    // 0x4f3550: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4f3550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4f3554: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f3554u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3558: 0x95231234  lhu         $v1, 0x1234($t1)
    ctx->pc = 0x4f3558u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4660)));
    // 0x4f355c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4f355cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f3560: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f3560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f3564: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f3564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f3568: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f3568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f356c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f356cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f3570: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f3570u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f3574: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f3574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f3578: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f3578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f357c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4f357cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4f3580: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4f3580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f3584: 0xc13cd94  jal         func_4F3650
    ctx->pc = 0x4F3584u;
    SET_GPR_U32(ctx, 31, 0x4F358Cu);
    ctx->pc = 0x4F3588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3584u;
    // 0x4f3588: 0xa602013a  sh          $v0, 0x13A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 314), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F3650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F3650u, 0x4F3584u, 0x4F358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F358Cu;
label_4f358c:
    // 0x4f358c: 0xc13ce34  jal         func_4F38D0
    ctx->pc = 0x4F358Cu;
    SET_GPR_U32(ctx, 31, 0x4F3594u);
    ctx->pc = 0x4F3590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F358Cu;
    // 0x4f3590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F38D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F38D0u, 0x4F358Cu, 0x4F3594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3594u;
label_4f3594:
    // 0x4f3594: 0xc13ce94  jal         func_4F3A50
    ctx->pc = 0x4F3594u;
    SET_GPR_U32(ctx, 31, 0x4F359Cu);
    ctx->pc = 0x4F3598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3594u;
    // 0x4f3598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F3A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F3A50u, 0x4F3594u, 0x4F359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F359Cu;
label_4f359c:
    // 0x4f359c: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4f359cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4f35a0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f35a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f35a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f35a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f35a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f35a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f35ac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f35acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f35b0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f35b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f35b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F35B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F35B4u;
        // 0x4f35b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F35B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F35BCu;
    // 0x4f35bc: 0x0  nop
    ctx->pc = 0x4f35bcu;
    // NOP
label_4f35c0:
    // 0x4f35c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f35c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f35c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f35c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f35c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4f35c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4f35cc: 0xc12564a  jal         func_495928
    ctx->pc = 0x4F35CCu;
    SET_GPR_U32(ctx, 31, 0x4F35D4u);
    ctx->pc = 0x4F35D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F35CCu;
    // 0x4f35d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4F35CCu, 0x4F35D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F35D4u;
label_4f35d4:
    // 0x4f35d4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4f35d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4f35d8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f35dc: 0x24881240  addiu       $t0, $a0, 0x1240
    ctx->pc = 0x4f35dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4672));
    // 0x4f35e0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4f35e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4f35e4: 0x2467123c  addiu       $a3, $v1, 0x123C
    ctx->pc = 0x4f35e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4668));
    // 0x4f35e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f35e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f35ec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4F35ECu;
    {
        const bool branch_taken_0x4f35ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F35ECu;
        // 0x4f35f0: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f35ec) {
            ctx->pc = 0x4F3640u;
            goto label_4f3640;
        }
    }
    ctx->pc = 0x4F35F4u;
    // 0x4f35f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4f35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f35f8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f35f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f35fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f35fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f3600: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3604: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4f3604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4f3608: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4f3608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4f360c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f360cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3610: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4f3610u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4f3614: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4f3614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3618: 0xc127d62  jal         func_49F588
    ctx->pc = 0x4F3618u;
    SET_GPR_U32(ctx, 31, 0x4F3620u);
    ctx->pc = 0x4F361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3618u;
    // 0x4f361c: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F588u, 0x4F3618u, 0x4F3620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3620u;
label_4f3620:
    // 0x4f3620: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4F3620u;
    SET_GPR_U32(ctx, 31, 0x4F3628u);
    ctx->pc = 0x4F3624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3620u;
    // 0x4f3624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4F3620u, 0x4F3628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3628u;
label_4f3628:
    // 0x4f3628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f3628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f362c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f362cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f3630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f3630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f3634: 0x812b94c  j           func_4AE530
    ctx->pc = 0x4F3634u;
    ctx->pc = 0x4F3638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3634u;
    // 0x4f3638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    sub_004AE530_0x4ae530(rdram, ctx, runtime); return;
    ctx->pc = 0x4F363Cu;
    // 0x4f363c: 0x0  nop
    ctx->pc = 0x4f363cu;
    // NOP
label_4f3640:
    // 0x4f3640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f3640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f3644: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f3644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f3648: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3648u;
        // 0x4f364c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3650u;
}
