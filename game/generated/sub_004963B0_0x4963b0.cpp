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

// Function: sub_004963B0
// Address: 0x4963b0 - 0x496a38
void sub_004963B0_0x4963b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004963B0_0x4963b0");
#endif

    switch (ctx->pc) {
        case 0x496514u: goto label_496514;
        case 0x49652cu: goto label_49652c;
        case 0x4965acu: goto label_4965ac;
        case 0x496680u: goto label_496680;
        case 0x496734u: goto label_496734;
        case 0x496878u: goto label_496878;
        case 0x4969b0u: goto label_4969b0;
        default: break;
    }

    ctx->pc = 0x4963b0u;

    // 0x4963b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4963b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4963b4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4963b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4963b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4963b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4963bc: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4963bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4963c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4963c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4963c4: 0x2462d680  addiu       $v0, $v1, -0x2980
    ctx->pc = 0x4963c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4963c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4963c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4963cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4963ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4963d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4963d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4963d4: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4963d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4963d8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4963d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4963dc: 0x267e0122  addiu       $fp, $s3, 0x122
    ctx->pc = 0x4963dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 290));
    // 0x4963e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4963e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4963e4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4963e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4963e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4963e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4963ec: 0x26720124  addiu       $s2, $s3, 0x124
    ctx->pc = 0x4963ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 292));
    // 0x4963f0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4963f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4963f4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4963f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4963f8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4963f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4963fc: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x4963fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x72D6C0u));
    // 0x496400: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x496400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x496404: 0xac430ae8  sw          $v1, 0xAE8($v0)
    ctx->pc = 0x496404u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x496408: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x496408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49640c: 0x24490ac8  addiu       $t1, $v0, 0xAC8
    ctx->pc = 0x49640cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2760));
    // 0x496410: 0x96630118  lhu         $v1, 0x118($s3)
    ctx->pc = 0x496410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x496414: 0x8662011a  lh          $v0, 0x11A($s3)
    ctx->pc = 0x496414u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 282)));
    // 0x496418: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x496418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49641c: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x49641cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x496420: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x496420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x496424: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496428: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49642c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x49642cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x496430: 0xae830aec  sw          $v1, 0xAEC($s4)
    ctx->pc = 0x496430u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2796), GPR_U32(ctx, 3));
    // 0x496434: 0x664025  or          $t0, $v1, $a2
    ctx->pc = 0x496434u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x496438: 0x9662011e  lhu         $v0, 0x11E($s3)
    ctx->pc = 0x496438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 286)));
    // 0x49643c: 0x86650120  lh          $a1, 0x120($s3)
    ctx->pc = 0x49643cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x496440: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x496440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x496444: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x496444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x496448: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x496448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x49644c: 0x1021824  and         $v1, $t0, $v0
    ctx->pc = 0x49644cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x496450: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496454: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x496454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x496458: 0xae230af0  sw          $v1, 0xAF0($s1)
    ctx->pc = 0x496458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2800), GPR_U32(ctx, 3));
    // 0x49645c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x49645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x496460: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x496460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x496464: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x496464u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x496468: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x496468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x49646c: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x49646cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x496470: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x496470u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x496474: 0x87c80000  lh          $t0, 0x0($fp)
    ctx->pc = 0x496474u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x496478: 0x5030011  bgezl       $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x496478u;
    {
        const bool branch_taken_0x496478 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x496478) {
            ctx->pc = 0x49647Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x496478u;
            // 0x49647c: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4964C0u;
            goto label_4964c0;
        }
    }
    ctx->pc = 0x496480u;
    // 0x496480: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x496480u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x496484: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x496484u;
    {
        const bool branch_taken_0x496484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x496484) {
            ctx->pc = 0x496488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x496484u;
            // 0x496488: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4964C0u;
            goto label_4964c0;
        }
    }
    ctx->pc = 0x49648Cu;
    // 0x49648c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49648cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496490: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x496490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x496494: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x496494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x496498: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x496498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49649c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x49649cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4964a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4964a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4964a4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4964a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4964a8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4964a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4964ac: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4964acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4964b0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4964b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4964b4: 0x8125882  j           func_496208
    ctx->pc = 0x4964B4u;
    ctx->pc = 0x4964B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4964B4u;
    // 0x4964b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x496208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496208u, 0x4964B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4964BCu;
    // 0x4964bc: 0x0  nop
    ctx->pc = 0x4964bcu;
    // NOP
label_4964c0:
    // 0x4964c0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4964c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4964c4: 0x24700ac8  addiu       $s0, $v1, 0xAC8
    ctx->pc = 0x4964c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2760));
    // 0x4964c8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4964c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4964cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4964ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4964d0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4964d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4964d4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4964d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4964d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4964d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4964dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4964dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4964e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4964e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4964e4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4964e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4964e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4964e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4964ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4964ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4964f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4964f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4964f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4964f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4964f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4964f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4964fc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4964fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x496500: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x496500u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x496504: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x496504u;
    {
        const bool branch_taken_0x496504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x496508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496504u;
        // 0x496508: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496504) {
            ctx->pc = 0x496518u;
            goto label_496518;
        }
    }
    ctx->pc = 0x49650Cu;
    // 0x49650c: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x49650Cu;
    SET_GPR_U32(ctx, 31, 0x496514u);
    ctx->pc = 0x496510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49650Cu;
    // 0x496510: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x49650Cu, 0x496514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496514u;
label_496514:
    // 0x496514: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x496514u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_496518:
    // 0x496518: 0x2c62003d  sltiu       $v0, $v1, 0x3D
    ctx->pc = 0x496518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
    // 0x49651c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x49651Cu;
    {
        const bool branch_taken_0x49651c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49651c) {
            ctx->pc = 0x496520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49651Cu;
            // 0x496520: 0x87c80000  lh          $t0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x496538u;
            goto label_496538;
        }
    }
    ctx->pc = 0x496524u;
    // 0x496524: 0xc123392  jal         func_48CE48
    ctx->pc = 0x496524u;
    SET_GPR_U32(ctx, 31, 0x49652Cu);
    ctx->pc = 0x496528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496524u;
    // 0x496528: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x496524u, 0x49652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49652Cu;
label_49652c:
    // 0x49652c: 0x8e220af0  lw          $v0, 0xAF0($s1)
    ctx->pc = 0x49652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2800)));
    // 0x496530: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x496530u;
    {
        const bool branch_taken_0x496530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496530u;
        // 0x496534: 0xa440fffe  sh          $zero, -0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294967294), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496530) {
            ctx->pc = 0x496A04u;
            goto label_496a04;
        }
    }
    ctx->pc = 0x496538u;
label_496538:
    // 0x496538: 0x5020009  bltzl       $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x496538u;
    {
        const bool branch_taken_0x496538 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x496538) {
            ctx->pc = 0x49653Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x496538u;
            // 0x49653c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x496560u;
            goto label_496560;
        }
    }
    ctx->pc = 0x496540u;
    // 0x496540: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x496540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x496544: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x496544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x496548: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x496548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x49654c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49654cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496550: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496554: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x496554u;
    {
        const bool branch_taken_0x496554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496554u;
        // 0x496558: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496554) {
            ctx->pc = 0x496570u;
            goto label_496570;
        }
    }
    ctx->pc = 0x49655Cu;
    // 0x49655c: 0x0  nop
    ctx->pc = 0x49655cu;
    // NOP
label_496560:
    // 0x496560: 0x2403fd00  addiu       $v1, $zero, -0x300
    ctx->pc = 0x496560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966528));
    // 0x496564: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x496564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x496568: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x496568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49656c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49656cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_496570:
    // 0x496570: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x496570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x496574: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x496574u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x496578: 0x24900ac8  addiu       $s0, $a0, 0xAC8
    ctx->pc = 0x496578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2760));
    // 0x49657c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x49657cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x496580: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x496580u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7F0AC8u));
    // 0x496584: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x496584u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x496588: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x496588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49658c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x49658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x496590: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x496590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x496594: 0x34403  sra         $t0, $v1, 16
    ctx->pc = 0x496594u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 16));
    // 0x496598: 0x1111025  or          $v0, $t0, $s1
    ctx->pc = 0x496598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x49659c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49659cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4965a0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4965a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4965a4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4965A4u;
    SET_GPR_U32(ctx, 31, 0x4965ACu);
    ctx->pc = 0x4965A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4965A4u;
    // 0x4965a8: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4965A4u, 0x4965ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4965ACu;
label_4965ac:
    // 0x4965ac: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4965acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4965b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4965b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4965b4: 0x268a0aec  addiu       $t2, $s4, 0xAEC
    ctx->pc = 0x4965b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 2796));
    // 0x4965b8: 0xac820acc  sw          $v0, 0xACC($a0)
    ctx->pc = 0x4965b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0ACCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0ACCu, _value); } while (0);
    // 0x4965bc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4965bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4965c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4965c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4965c4: 0xac820ad0  sw          $v0, 0xAD0($a0)
    ctx->pc = 0x4965c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0AD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AD0u, _value); } while (0);
    // 0x4965c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4965c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4965cc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4965ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4965d0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4965d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4965d4: 0x2466d680  addiu       $a2, $v1, -0x2980
    ctx->pc = 0x4965d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4965d8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4965d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4965dc: 0x24a90ae0  addiu       $t1, $a1, 0xAE0
    ctx->pc = 0x4965dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 2784));
    // 0x4965e0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4965e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0AE0u));
    // 0x4965e4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4965e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4965e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x4965e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4965ec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4965ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4965f0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4965f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4965f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4965f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4965f8: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4965f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4965fc: 0x24e70ae4  addiu       $a3, $a3, 0xAE4
    ctx->pc = 0x4965fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2788));
    // 0x496600: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x496600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x496604: 0x94c50092  lhu         $a1, 0x92($a2)
    ctx->pc = 0x496604u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x496608: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x496608u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x49660c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49660cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496610: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x496610u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x496614: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x496614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x496618: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x496618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49661c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49661cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x496620: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x496620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x496624: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496628: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x496628u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x49662c: 0x8668011c  lh          $t0, 0x11C($s3)
    ctx->pc = 0x49662cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x496630: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x496630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x496634: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x496634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x496638: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x496638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x49663c: 0x54403  sra         $t0, $a1, 16
    ctx->pc = 0x49663cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 16));
    // 0x496640: 0x1118825  or          $s1, $t0, $s1
    ctx->pc = 0x496640u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x496644: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x496644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x496648: 0x44000e9  bltz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x496648u;
    {
        const bool branch_taken_0x496648 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x49664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496648u;
        // 0x49664c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496648) {
            ctx->pc = 0x4969F0u;
            goto label_4969f0;
        }
    }
    ctx->pc = 0x496650u;
    // 0x496650: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x496650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x496654: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x496654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x496658: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x496658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49665c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49665cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x496660: 0x24530ad4  addiu       $s3, $v0, 0xAD4
    ctx->pc = 0x496660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2772));
    // 0x496664: 0x24750af0  addiu       $s5, $v1, 0xAF0
    ctx->pc = 0x496664u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 2800));
    // 0x496668: 0x24920ad8  addiu       $s2, $a0, 0xAD8
    ctx->pc = 0x496668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 2776));
    // 0x49666c: 0x24b10adc  addiu       $s1, $a1, 0xADC
    ctx->pc = 0x49666cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 2780));
    // 0x496670: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x496670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496674: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x496674u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496678: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x496678u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49667c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x49667cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_496680:
    // 0x496680: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x496680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x496684: 0x84820ac8  lh          $v0, 0xAC8($a0)
    ctx->pc = 0x496684u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F0AC8u));
    // 0x496688: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x496688u;
    {
        const bool branch_taken_0x496688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x496688) {
            ctx->pc = 0x49668Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x496688u;
            // 0x49668c: 0x87c80000  lh          $t0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x496740u;
            goto label_496740;
        }
    }
    ctx->pc = 0x496690u;
    // 0x496690: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x496690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x496694: 0x240b7fff  addiu       $t3, $zero, 0x7FFF
    ctx->pc = 0x496694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x496698: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x496698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49669c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x49669cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4966a0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4966a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4966a4: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4966a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4966a8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4966a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4966ac: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x4966acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x4966b0: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x4966b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4966b4: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x4966b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x4966b8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4966b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4966bc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4966bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4966c0: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x4966c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4966c4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4966c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4966c8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4966c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4966cc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4966ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4966d0: 0x24a90002  addiu       $t1, $a1, 0x2
    ctx->pc = 0x4966d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4966d4: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4966d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4966d8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4966d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4966dc: 0x24aa0004  addiu       $t2, $a1, 0x4
    ctx->pc = 0x4966dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4966e0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4966e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4966e4: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x4966e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
    // 0x4966e8: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x4966e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4966ec: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4966ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4966f0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4966f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4966f4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4966f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4966f8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4966f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4966fc: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4966fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x496700: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x496700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x496704: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x496704u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x496708: 0xaeaa0000  sw          $t2, 0x0($s5)
    ctx->pc = 0x496708u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 10));
    // 0x49670c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x49670cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x496710: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x496710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x496714: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x496714u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x496718: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x496718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49671c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x49671cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x496720: 0xac6b0ad0  sw          $t3, 0xAD0($v1)
    ctx->pc = 0x496720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2768), GPR_U32(ctx, 11));
    // 0x496724: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x496724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x496728: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x496728u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49672c: 0xc125840  jal         func_496100
    ctx->pc = 0x49672Cu;
    SET_GPR_U32(ctx, 31, 0x496734u);
    ctx->pc = 0x496730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49672Cu;
    // 0x496730: 0xae280000  sw          $t0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x496100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496100u, 0x49672Cu, 0x496734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496734u;
label_496734:
    // 0x496734: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x496734u;
    {
        const bool branch_taken_0x496734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496734u;
        // 0x496738: 0x86c20000  lh          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496734) {
            ctx->pc = 0x4969B4u;
            goto label_4969b4;
        }
    }
    ctx->pc = 0x49673Cu;
    // 0x49673c: 0x0  nop
    ctx->pc = 0x49673cu;
    // NOP
label_496740:
    // 0x496740: 0x500004f  bltz        $t0, . + 4 + (0x4F << 2)
    ctx->pc = 0x496740u;
    {
        const bool branch_taken_0x496740 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x496744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496740u;
        // 0x496744: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496740) {
            ctx->pc = 0x496880u;
            goto label_496880;
        }
    }
    ctx->pc = 0x496748u;
    // 0x496748: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x496748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49674c: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x49674cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x496750: 0x24a70002  addiu       $a3, $a1, 0x2
    ctx->pc = 0x496750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x496754: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x496754u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x496758: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x496758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49675c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x49675cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x496760: 0x24a80004  addiu       $t0, $a1, 0x4
    ctx->pc = 0x496760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x496764: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x496764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x496768: 0x24a60006  addiu       $a2, $a1, 0x6
    ctx->pc = 0x496768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x49676c: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x49676cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x496770: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496774: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x496774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x496778: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x496778u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x49677c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x49677cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x496780: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x496780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x496784: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x496784u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x496788: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x496788u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    // 0x49678c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x49678cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x496790: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x496790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x496794: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x496794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x496798: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x496798u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x49679c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x49679cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4967a0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4967a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4967a4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4967a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4967a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4967a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4967ac: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4967acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4967b0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4967b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4967b4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4967b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4967b8: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4967b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4967bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4967bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4967c0: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x4967c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4967c4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4967c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4967c8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4967c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4967cc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4967ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4967d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4967d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4967d4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4967d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4967d8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4967d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4967dc: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4967dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4967e0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4967e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4967e4: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4967e4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4967e8: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4967e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4967ec: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4967ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4967f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4967f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4967f4: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x4967f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4967f8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4967f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4967fc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4967fcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x496800: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x496800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x496804: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x496804u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x496808: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x496808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49680c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49680cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x496810: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x496810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x496814: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x496814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x496818: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x496818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x49681c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49681cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x496820: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x496820u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x496824: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x496824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x496828: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x496828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49682c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x49682cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x496830: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x496830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x496834: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x496834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x496838: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x496838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49683c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x49683cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x496840: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x496840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x496844: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x496844u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x496848: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x496848u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x49684c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x49684cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x496850: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x496850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x496854: 0x24450003  addiu       $a1, $v0, 0x3
    ctx->pc = 0x496854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x496858: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x496858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x49685c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x49685cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x496860: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x496860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x496864: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x496864u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x496868: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x496868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49686c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49686cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x496870: 0xc125840  jal         func_496100
    ctx->pc = 0x496870u;
    SET_GPR_U32(ctx, 31, 0x496878u);
    ctx->pc = 0x496874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496870u;
    // 0x496874: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x496100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496100u, 0x496870u, 0x496878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496878u;
label_496878:
    // 0x496878: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x496878u;
    {
        const bool branch_taken_0x496878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496878u;
        // 0x49687c: 0x86c20000  lh          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496878) {
            ctx->pc = 0x4969B4u;
            goto label_4969b4;
        }
    }
    ctx->pc = 0x496880u;
label_496880:
    // 0x496880: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x496880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x496884: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x496884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x496888: 0x24a70002  addiu       $a3, $a1, 0x2
    ctx->pc = 0x496888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49688c: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x49688cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x496890: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x496890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x496894: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x496894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x496898: 0x24a80004  addiu       $t0, $a1, 0x4
    ctx->pc = 0x496898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x49689c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x49689cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4968a0: 0x24a60006  addiu       $a2, $a1, 0x6
    ctx->pc = 0x4968a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x4968a4: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4968a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4968a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4968a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4968ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4968acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4968b0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4968b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4968b4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4968b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4968b8: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4968b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4968bc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4968bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4968c0: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x4968c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    // 0x4968c4: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4968c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4968c8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4968c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4968cc: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x4968ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4968d0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4968d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4968d4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4968d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4968d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4968d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4968dc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4968dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4968e0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4968e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4968e4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4968e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4968e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4968e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4968ec: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4968ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4968f0: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4968f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4968f4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4968f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4968f8: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x4968f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4968fc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4968fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x496900: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x496900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x496904: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x496904u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x496908: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x496908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49690c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49690cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x496910: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x496910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x496914: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x496914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x496918: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x496918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49691c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x49691cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x496920: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x496920u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x496924: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x496924u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x496928: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x496928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49692c: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x49692cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x496930: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x496930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x496934: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x496934u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x496938: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x496938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49693c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x49693cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x496940: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x496940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x496944: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x496944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x496948: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x496948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49694c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x49694cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x496950: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x496950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x496954: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x496954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x496958: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x496958u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49695c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x49695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x496960: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x496960u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x496964: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x496964u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x496968: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x496968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49696c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49696cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x496970: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x496970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x496974: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x496974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x496978: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x496978u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49697c: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x49697cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x496980: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x496980u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x496984: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x496984u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x496988: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x496988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49698c: 0x24450003  addiu       $a1, $v0, 0x3
    ctx->pc = 0x49698cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x496990: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x496990u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x496994: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x496994u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x496998: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x496998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49699c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x49699cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4969a0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4969a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4969a4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4969a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4969a8: 0xc125840  jal         func_496100
    ctx->pc = 0x4969A8u;
    SET_GPR_U32(ctx, 31, 0x4969B0u);
    ctx->pc = 0x4969ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4969A8u;
    // 0x4969ac: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x496100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496100u, 0x4969A8u, 0x4969B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4969B0u;
label_4969b0:
    // 0x4969b0: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4969b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4969b4:
    // 0x4969b4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4969b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4969b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4969b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4969bc: 0x86e50000  lh          $a1, 0x0($s7)
    ctx->pc = 0x4969bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4969c0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4969c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4969c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4969c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4969c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4969c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4969cc: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x4969ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4969d0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4969d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4969d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4969d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4969d8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4969d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4969dc: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4969dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4969e0: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4969e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4969e4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4969e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4969e8: 0x441ff25  bgez        $v0, . + 4 + (-0xDB << 2)
    ctx->pc = 0x4969E8u;
    {
        const bool branch_taken_0x4969e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4969ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4969E8u;
        // 0x4969ec: 0xaee40000  sw          $a0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4969e8) {
            ctx->pc = 0x496680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496680;
        }
    }
    ctx->pc = 0x4969F0u;
label_4969f0:
    // 0x4969f0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4969f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4969f4: 0x8c830ae8  lw          $v1, 0xAE8($a0)
    ctx->pc = 0x4969f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0AE8u));
    // 0x4969f8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4969f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4969fc: 0x2482d680  addiu       $v0, $a0, -0x2980
    ctx->pc = 0x4969fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x496a00: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x496a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72D6C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72D6C0u, _value); } while (0);
label_496a04:
    // 0x496a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x496a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496a08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x496a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x496a0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x496a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x496a10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x496a10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x496a14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x496a14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x496a18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x496a18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x496a1c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x496a1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x496a20: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x496a20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x496a24: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x496a24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x496a28: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x496a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x496a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x496A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x496A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496A2Cu;
        // 0x496a30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x496A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x496A34u;
    // 0x496a34: 0x0  nop
    ctx->pc = 0x496a34u;
    // NOP
    ctx->pc = 0x496a38u;
}
