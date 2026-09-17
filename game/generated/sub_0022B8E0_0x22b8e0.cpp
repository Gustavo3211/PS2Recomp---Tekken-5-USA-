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

// Function: sub_0022B8E0
// Address: 0x22b8e0 - 0x22bd68
void sub_0022B8E0_0x22b8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B8E0_0x22b8e0");
#endif

    switch (ctx->pc) {
        case 0x22b900u: goto label_22b900;
        case 0x22b918u: goto label_22b918;
        case 0x22b928u: goto label_22b928;
        case 0x22bab8u: goto label_22bab8;
        case 0x22baf8u: goto label_22baf8;
        case 0x22bb44u: goto label_22bb44;
        case 0x22bb60u: goto label_22bb60;
        case 0x22bbb8u: goto label_22bbb8;
        case 0x22bbe4u: goto label_22bbe4;
        case 0x22bbf0u: goto label_22bbf0;
        case 0x22bc90u: goto label_22bc90;
        case 0x22bcb0u: goto label_22bcb0;
        case 0x22bcc0u: goto label_22bcc0;
        default: break;
    }

    ctx->pc = 0x22b8e0u;

    // 0x22b8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22b8e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22b8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b8e8: 0x8f90a530  lw          $s0, -0x5AD0($gp)
    ctx->pc = 0x22b8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x22b8ec: 0x32020100  andi        $v0, $s0, 0x100
    ctx->pc = 0x22b8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
    // 0x22b8f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B8F0u;
    {
        const bool branch_taken_0x22b8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8F0u;
        // 0x22b8f4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8f0) {
            ctx->pc = 0x22B900u;
            goto label_22b900;
        }
    }
    ctx->pc = 0x22B8F8u;
    // 0x22b8f8: 0xc08ae36  jal         func_22B8D8
    ctx->pc = 0x22B8F8u;
    SET_GPR_U32(ctx, 31, 0x22B900u);
    ctx->pc = 0x22B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B8F8u;
    // 0x22b8fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8D8u, 0x22B8F8u, 0x22B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B900u;
label_22b900:
    // 0x22b900: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x22b900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x22b904: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x22b904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x22b908: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B908u;
    {
        const bool branch_taken_0x22b908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B908u;
        // 0x22b90c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b908) {
            ctx->pc = 0x22B91Cu;
            goto label_22b91c;
        }
    }
    ctx->pc = 0x22B910u;
    // 0x22b910: 0xc08ae36  jal         func_22B8D8
    ctx->pc = 0x22B910u;
    SET_GPR_U32(ctx, 31, 0x22B918u);
    ctx->pc = 0x22B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B910u;
    // 0x22b914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8D8u, 0x22B910u, 0x22B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B918u;
label_22b918:
    // 0x22b918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22b91c:
    // 0x22b91c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22b91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22b920: 0x3e00008  jr          $ra
    ctx->pc = 0x22B920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B920u;
        // 0x22b924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B928u;
label_22b928:
    // 0x22b928: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x22b928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x22b92c: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22b92cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22b930: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22b930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22b934: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x22b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x22b938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22b938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22b93c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x22b93cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b940: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x22b940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x22b944: 0x2421dc38  addiu       $at, $at, -0x23C8
    ctx->pc = 0x22b944u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294958136));
    // 0x22b948: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x22b948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x22b94c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x22b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x22b950: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x22b950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x22b954: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x22b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x22b958: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x22b958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x22b95c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x22b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x22b960: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x22b960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x22b964: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x22b964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x22b968: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x22b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x22b96c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x22b96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x22b970: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22b970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22b974: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x22b974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x22b978: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x22b978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x22b97c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22b980: 0x13c000ed  beqz        $fp, . + 4 + (0xED << 2)
    ctx->pc = 0x22B980u;
    {
        const bool branch_taken_0x22b980 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B980u;
        // 0x22b984: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b980) {
            ctx->pc = 0x22BD38u;
            goto label_22bd38;
        }
    }
    ctx->pc = 0x22B988u;
    // 0x22b988: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x22b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b98c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x22b98cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22b990: 0x104000ea  beqz        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x22B990u;
    {
        const bool branch_taken_0x22b990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B990u;
        // 0x22b994: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b990) {
            ctx->pc = 0x22BD3Cu;
            goto label_22bd3c;
        }
    }
    ctx->pc = 0x22B998u;
    // 0x22b998: 0x46000e9  bltz        $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x22B998u;
    {
        const bool branch_taken_0x22b998 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x22B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B998u;
        // 0x22b99c: 0xdfb10058  ld          $s1, 0x58($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b998) {
            ctx->pc = 0x22BD40u;
            goto label_22bd40;
        }
    }
    ctx->pc = 0x22B9A0u;
    // 0x22b9a0: 0x83c20010  lb          $v0, 0x10($fp)
    ctx->pc = 0x22b9a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x22b9a4: 0x144000e6  bnez        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x22B9A4u;
    {
        const bool branch_taken_0x22b9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b9a4) {
            ctx->pc = 0x22BD40u;
            goto label_22bd40;
        }
    }
    ctx->pc = 0x22B9ACu;
    // 0x22b9ac: 0x8fc30034  lw          $v1, 0x34($fp)
    ctx->pc = 0x22b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x22b9b0: 0x8fc20038  lw          $v0, 0x38($fp)
    ctx->pc = 0x22b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x22b9b4: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x22b9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x22b9b8: 0x8fce0030  lw          $t6, 0x30($fp)
    ctx->pc = 0x22b9b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x22b9bc: 0x5e2021  addu        $a0, $v0, $fp
    ctx->pc = 0x22b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x22b9c0: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x22b9c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x22b9c4: 0x82100b  movn        $v0, $a0, $v0
    ctx->pc = 0x22b9c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x22b9c8: 0x1de2021  addu        $a0, $t6, $fp
    ctx->pc = 0x22b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 30)));
    // 0x22b9cc: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x22b9ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x22b9d0: 0xafc20038  sw          $v0, 0x38($fp)
    ctx->pc = 0x22b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 2));
    // 0x22b9d4: 0x8fcd0048  lw          $t5, 0x48($fp)
    ctx->pc = 0x22b9d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x22b9d8: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x22b9d8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9dc: 0x8fcc0050  lw          $t4, 0x50($fp)
    ctx->pc = 0x22b9dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x22b9e0: 0x8fcb0058  lw          $t3, 0x58($fp)
    ctx->pc = 0x22b9e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x22b9e4: 0x8fca0060  lw          $t2, 0x60($fp)
    ctx->pc = 0x22b9e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x22b9e8: 0x19e7821  addu        $t7, $t4, $fp
    ctx->pc = 0x22b9e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 30)));
    // 0x22b9ec: 0x8fc80068  lw          $t0, 0x68($fp)
    ctx->pc = 0x22b9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 104)));
    // 0x22b9f0: 0x1ec600b  movn        $t4, $t7, $t4
    ctx->pc = 0x22b9f0u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 15));
    // 0x22b9f4: 0xafa90040  sw          $t1, 0x40($sp)
    ctx->pc = 0x22b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    // 0x22b9f8: 0x1be4821  addu        $t1, $t5, $fp
    ctx->pc = 0x22b9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 30)));
    // 0x22b9fc: 0x17ec021  addu        $t8, $t3, $fp
    ctx->pc = 0x22b9fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 30)));
    // 0x22ba00: 0x15eb821  addu        $s7, $t2, $fp
    ctx->pc = 0x22ba00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 30)));
    // 0x22ba04: 0x8fc70070  lw          $a3, 0x70($fp)
    ctx->pc = 0x22ba04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x22ba08: 0x11e8021  addu        $s0, $t0, $fp
    ctx->pc = 0x22ba08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 30)));
    // 0x22ba0c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x22ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x22ba10: 0x30b580b  movn        $t3, $t8, $t3
    ctx->pc = 0x22ba10u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 24));
    // 0x22ba14: 0x8faf0040  lw          $t7, 0x40($sp)
    ctx->pc = 0x22ba14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ba18: 0xfe8821  addu        $s1, $a3, $fp
    ctx->pc = 0x22ba18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 30)));
    // 0x22ba1c: 0x8fc60078  lw          $a2, 0x78($fp)
    ctx->pc = 0x22ba1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
    // 0x22ba20: 0x2ea500b  movn        $t2, $s7, $t2
    ctx->pc = 0x22ba20u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 23));
    // 0x22ba24: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x22ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
    // 0x22ba28: 0x208400b  movn        $t0, $s0, $t0
    ctx->pc = 0x22ba28u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
    // 0x22ba2c: 0x8fa9002c  lw          $t1, 0x2C($sp)
    ctx->pc = 0x22ba2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x22ba30: 0xde9021  addu        $s2, $a2, $fp
    ctx->pc = 0x22ba30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
    // 0x22ba34: 0x8fc5007c  lw          $a1, 0x7C($fp)
    ctx->pc = 0x22ba34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 124)));
    // 0x22ba38: 0x227380b  movn        $a3, $s1, $a3
    ctx->pc = 0x22ba38u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 17));
    // 0x22ba3c: 0x8fc40084  lw          $a0, 0x84($fp)
    ctx->pc = 0x22ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 132)));
    // 0x22ba40: 0x12e700b  movn        $t6, $t1, $t6
    ctx->pc = 0x22ba40u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 9));
    // 0x22ba44: 0x8fc3008c  lw          $v1, 0x8C($fp)
    ctx->pc = 0x22ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 140)));
    // 0x22ba48: 0xbe9821  addu        $s3, $a1, $fp
    ctx->pc = 0x22ba48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x22ba4c: 0x8fc20094  lw          $v0, 0x94($fp)
    ctx->pc = 0x22ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 148)));
    // 0x22ba50: 0x9ea021  addu        $s4, $a0, $fp
    ctx->pc = 0x22ba50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x22ba54: 0x8fa90030  lw          $t1, 0x30($sp)
    ctx->pc = 0x22ba54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ba58: 0x7ea821  addu        $s5, $v1, $fp
    ctx->pc = 0x22ba58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x22ba5c: 0x5eb021  addu        $s6, $v0, $fp
    ctx->pc = 0x22ba5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x22ba60: 0x246300b  movn        $a2, $s2, $a2
    ctx->pc = 0x22ba60u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
    // 0x22ba64: 0x12d680b  movn        $t5, $t1, $t5
    ctx->pc = 0x22ba64u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 9));
    // 0x22ba68: 0x32f4821  addu        $t1, $t9, $t7
    ctx->pc = 0x22ba68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x22ba6c: 0x265280b  movn        $a1, $s3, $a1
    ctx->pc = 0x22ba6cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x22ba70: 0x284200b  movn        $a0, $s4, $a0
    ctx->pc = 0x22ba70u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
    // 0x22ba74: 0x2a3180b  movn        $v1, $s5, $v1
    ctx->pc = 0x22ba74u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
    // 0x22ba78: 0x2c2100b  movn        $v0, $s6, $v0
    ctx->pc = 0x22ba78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 22));
    // 0x22ba7c: 0xafce0030  sw          $t6, 0x30($fp)
    ctx->pc = 0x22ba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 14));
    // 0x22ba80: 0xafcd0048  sw          $t5, 0x48($fp)
    ctx->pc = 0x22ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 72), GPR_U32(ctx, 13));
    // 0x22ba84: 0xafcc0050  sw          $t4, 0x50($fp)
    ctx->pc = 0x22ba84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 12));
    // 0x22ba88: 0xafcb0058  sw          $t3, 0x58($fp)
    ctx->pc = 0x22ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 88), GPR_U32(ctx, 11));
    // 0x22ba8c: 0xafca0060  sw          $t2, 0x60($fp)
    ctx->pc = 0x22ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 96), GPR_U32(ctx, 10));
    // 0x22ba90: 0xafc80068  sw          $t0, 0x68($fp)
    ctx->pc = 0x22ba90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 104), GPR_U32(ctx, 8));
    // 0x22ba94: 0xafc70070  sw          $a3, 0x70($fp)
    ctx->pc = 0x22ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 7));
    // 0x22ba98: 0xafc60078  sw          $a2, 0x78($fp)
    ctx->pc = 0x22ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 120), GPR_U32(ctx, 6));
    // 0x22ba9c: 0xafc5007c  sw          $a1, 0x7C($fp)
    ctx->pc = 0x22ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 124), GPR_U32(ctx, 5));
    // 0x22baa0: 0xafc40084  sw          $a0, 0x84($fp)
    ctx->pc = 0x22baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 4));
    // 0x22baa4: 0xafc3008c  sw          $v1, 0x8C($fp)
    ctx->pc = 0x22baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 140), GPR_U32(ctx, 3));
    // 0x22baa8: 0x1329000d  beq         $t9, $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x22BAA8u;
    {
        const bool branch_taken_0x22baa8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 9));
        ctx->pc = 0x22BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAA8u;
        // 0x22baac: 0xafc20094  sw          $v0, 0x94($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22baa8) {
            ctx->pc = 0x22BAE0u;
            goto label_22bae0;
        }
    }
    ctx->pc = 0x22BAB0u;
    // 0x22bab0: 0x8f220044  lw          $v0, 0x44($t9)
    ctx->pc = 0x22bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
    // 0x22bab4: 0x0  nop
    ctx->pc = 0x22bab4u;
    // NOP
label_22bab8:
    // 0x22bab8: 0x8f230054  lw          $v1, 0x54($t9)
    ctx->pc = 0x22bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
    // 0x22babc: 0x5e2021  addu        $a0, $v0, $fp
    ctx->pc = 0x22babcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x22bac0: 0x7e2821  addu        $a1, $v1, $fp
    ctx->pc = 0x22bac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x22bac4: 0x82100b  movn        $v0, $a0, $v0
    ctx->pc = 0x22bac4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x22bac8: 0xa3180b  movn        $v1, $a1, $v1
    ctx->pc = 0x22bac8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x22bacc: 0xaf220044  sw          $v0, 0x44($t9)
    ctx->pc = 0x22baccu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 68), GPR_U32(ctx, 2));
    // 0x22bad0: 0xaf230054  sw          $v1, 0x54($t9)
    ctx->pc = 0x22bad0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 84), GPR_U32(ctx, 3));
    // 0x22bad4: 0x27390060  addiu       $t9, $t9, 0x60
    ctx->pc = 0x22bad4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 96));
    // 0x22bad8: 0x5729fff7  bnel        $t9, $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22BAD8u;
    {
        const bool branch_taken_0x22bad8 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 9));
        if (branch_taken_0x22bad8) {
            ctx->pc = 0x22BADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BAD8u;
            // 0x22badc: 0x8f220044  lw          $v0, 0x44($t9) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bab8;
        }
    }
    ctx->pc = 0x22BAE0u;
label_22bae0:
    // 0x22bae0: 0x8fd60074  lw          $s6, 0x74($fp)
    ctx->pc = 0x22bae0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
    // 0x22bae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22bae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bae8: 0x8fd2007c  lw          $s2, 0x7C($fp)
    ctx->pc = 0x22bae8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 124)));
    // 0x22baec: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x22BAECu;
    {
        const bool branch_taken_0x22baec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAECu;
        // 0x22baf0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22baec) {
            ctx->pc = 0x22BB18u;
            goto label_22bb18;
        }
    }
    ctx->pc = 0x22BAF4u;
    // 0x22baf4: 0x0  nop
    ctx->pc = 0x22baf4u;
    // NOP
label_22baf8:
    // 0x22baf8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x22baf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22bafc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x22bafcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x22bb00: 0x2b6202b  sltu        $a0, $s5, $s6
    ctx->pc = 0x22bb00u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x22bb04: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x22bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22bb08: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x22bb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22bb0c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x22bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x22bb10: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22BB10u;
    {
        const bool branch_taken_0x22bb10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB10u;
        // 0x22bb14: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb10) {
            ctx->pc = 0x22BAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22baf8;
        }
    }
    ctx->pc = 0x22BB18u;
label_22bb18:
    // 0x22bb18: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x22bb18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x22bb1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bb20: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x22bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22bb24: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x22bb24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x22bb28: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x22bb28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x22bb2c: 0x34c60026  ori         $a2, $a2, 0x26
    ctx->pc = 0x22bb2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)38);
    // 0x22bb30: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x22bb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22bb34: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x22bb34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22bb38: 0x24e72d68  addiu       $a3, $a3, 0x2D68
    ctx->pc = 0x22bb38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11624));
    // 0x22bb3c: 0xc089248  jal         func_224920
    ctx->pc = 0x22BB3Cu;
    SET_GPR_U32(ctx, 31, 0x22BB44u);
    ctx->pc = 0x22BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB3Cu;
    // 0x22bb40: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x22BB3Cu, 0x22BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB44u;
label_22bb44:
    // 0x22bb44: 0x8fd70038  lw          $s7, 0x38($fp)
    ctx->pc = 0x22bb44u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x22bb48: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x22bb48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22bb4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb50: 0x8fd10078  lw          $s1, 0x78($fp)
    ctx->pc = 0x22bb50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
    // 0x22bb54: 0x12c00048  beqz        $s6, . + 4 + (0x48 << 2)
    ctx->pc = 0x22BB54u;
    {
        const bool branch_taken_0x22bb54 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB54u;
        // 0x22bb58: 0x8fd2007c  lw          $s2, 0x7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb54) {
            ctx->pc = 0x22BC78u;
            goto label_22bc78;
        }
    }
    ctx->pc = 0x22BB5Cu;
    // 0x22bb5c: 0x0  nop
    ctx->pc = 0x22bb5cu;
    // NOP
label_22bb60:
    // 0x22bb60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22bb64: 0x26530002  addiu       $s3, $s2, 0x2
    ctx->pc = 0x22bb64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x22bb68: 0x96500000  lhu         $s0, 0x0($s2)
    ctx->pc = 0x22bb68u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22bb6c: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x22bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x22bb70: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BB70u;
    {
        const bool branch_taken_0x22bb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB70u;
        // 0x22bb74: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb70) {
            ctx->pc = 0x22BB98u;
            goto label_22bb98;
        }
    }
    ctx->pc = 0x22BB78u;
    // 0x22bb78: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x22bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x22bb7c: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x22bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x22bb80: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x22bb80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
    // 0x22bb84: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x22bb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb88: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x22bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
    // 0x22bb8c: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x22bb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x22bb90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22BB90u;
    {
        const bool branch_taken_0x22bb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB90u;
        // 0x22bb94: 0xac600018  sw          $zero, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb90) {
            ctx->pc = 0x22BB9Cu;
            goto label_22bb9c;
        }
    }
    ctx->pc = 0x22BB98u;
label_22bb98:
    // 0x22bb98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22bb9c:
    // 0x22bb9c: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x22BB9Cu;
    {
        const bool branch_taken_0x22bb9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB9Cu;
        // 0x22bba0: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb9c) {
            ctx->pc = 0x22BBD4u;
            goto label_22bbd4;
        }
    }
    ctx->pc = 0x22BBA4u;
    // 0x22bba4: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x22bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x22bba8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x22BBA8u;
    {
        const bool branch_taken_0x22bba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBA8u;
        // 0x22bbac: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bba8) {
            ctx->pc = 0x22BBD4u;
            goto label_22bbd4;
        }
    }
    ctx->pc = 0x22BBB0u;
    // 0x22bbb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22bbb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22bbb8:
    // 0x22bbb8: 0x0  nop
    ctx->pc = 0x22bbb8u;
    // NOP
    // 0x22bbbc: 0x0  nop
    ctx->pc = 0x22bbbcu;
    // NOP
    // 0x22bbc0: 0x0  nop
    ctx->pc = 0x22bbc0u;
    // NOP
    // 0x22bbc4: 0x0  nop
    ctx->pc = 0x22bbc4u;
    // NOP
    // 0x22bbc8: 0x0  nop
    ctx->pc = 0x22bbc8u;
    // NOP
    // 0x22bbcc: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22BBCCu;
    {
        const bool branch_taken_0x22bbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22bbcc) {
            ctx->pc = 0x22BBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BBCCu;
            // 0x22bbd0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bbb8;
        }
    }
    ctx->pc = 0x22BBD4u;
label_22bbd4:
    // 0x22bbd4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22bbd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22bbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bbdc: 0xc0da7c4  jal         func_369F10
    ctx->pc = 0x22BBDCu;
    SET_GPR_U32(ctx, 31, 0x22BBE4u);
    ctx->pc = 0x22BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BBDCu;
    // 0x22bbe0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F10u, 0x22BBDCu, 0x22BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BBE4u;
label_22bbe4:
    // 0x22bbe4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22BBE4u;
    {
        const bool branch_taken_0x22bbe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBE4u;
        // 0x22bbe8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bbe4) {
            ctx->pc = 0x22BC48u;
            goto label_22bc48;
        }
    }
    ctx->pc = 0x22BBECu;
    // 0x22bbec: 0x0  nop
    ctx->pc = 0x22bbecu;
    // NOP
label_22bbf0:
    // 0x22bbf0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x22bbf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22bbf4: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x22bbf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x22bbf8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x22bbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22bbfc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22bbfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22bc00: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x22bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x22bc04: 0x110382b  sltu        $a3, $t0, $s0
    ctx->pc = 0x22bc04u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x22bc08: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x22bc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x22bc0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22bc10: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x22bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x22bc14: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22bc18: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x22bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x22bc1c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x22bc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22bc20: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x22bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x22bc24: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x22bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x22bc28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22bc2c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x22bc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x22bc30: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x22bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x22bc34: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x22bc34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x22bc38: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x22bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x22bc3c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x22bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x22bc40: 0x14e0ffeb  bnez        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x22BC40u;
    {
        const bool branch_taken_0x22bc40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC40u;
        // 0x22bc44: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc40) {
            ctx->pc = 0x22BBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bbf0;
        }
    }
    ctx->pc = 0x22BC48u;
label_22bc48:
    // 0x22bc48: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x22bc48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22bc4c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x22bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x22bc50: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22bc54: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x22bc54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x22bc58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22bc5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22bc60: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x22bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x22bc64: 0x2b6202b  sltu        $a0, $s5, $s6
    ctx->pc = 0x22bc64u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x22bc68: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x22bc68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x22bc6c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x22bc6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22bc70: 0x1480ffbb  bnez        $a0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x22BC70u;
    {
        const bool branch_taken_0x22bc70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC70u;
        // 0x22bc74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc70) {
            ctx->pc = 0x22BB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bb60;
        }
    }
    ctx->pc = 0x22BC78u;
label_22bc78:
    // 0x22bc78: 0x8fc9004c  lw          $t1, 0x4C($fp)
    ctx->pc = 0x22bc78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x22bc7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22bc7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc80: 0x11200024  beqz        $t1, . + 4 + (0x24 << 2)
    ctx->pc = 0x22BC80u;
    {
        const bool branch_taken_0x22bc80 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC80u;
        // 0x22bc84: 0x8fc60050  lw          $a2, 0x50($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc80) {
            ctx->pc = 0x22BD14u;
            goto label_22bd14;
        }
    }
    ctx->pc = 0x22BC88u;
    // 0x22bc88: 0x240c001c  addiu       $t4, $zero, 0x1C
    ctx->pc = 0x22bc88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x22bc8c: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x22bc8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22bc90:
    // 0x22bc90: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x22bc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22bc94: 0x24c4000c  addiu       $a0, $a2, 0xC
    ctx->pc = 0x22bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x22bc98: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x22bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22bc9c: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x22bc9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22bca0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22BCA0u;
    {
        const bool branch_taken_0x22bca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCA0u;
        // 0x22bca4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bca0) {
            ctx->pc = 0x22BCF8u;
            goto label_22bcf8;
        }
    }
    ctx->pc = 0x22BCA8u;
    // 0x22bca8: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x22bca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bcac: 0x0  nop
    ctx->pc = 0x22bcacu;
    // NOP
label_22bcb0:
    // 0x22bcb0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22bcb4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x22bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x22bcb8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bcbc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x22bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_22bcc0:
    // 0x22bcc0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x22bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22bcc4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x22bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x22bcc8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x22bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x22bccc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bcd0: 0x0  nop
    ctx->pc = 0x22bcd0u;
    // NOP
    // 0x22bcd4: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22BCD4u;
    {
        const bool branch_taken_0x22bcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCD4u;
        // 0x22bcd8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bcd4) {
            ctx->pc = 0x22BCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bcc0;
        }
    }
    ctx->pc = 0x22BCDCu;
    // 0x22bcdc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x22bcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22bce0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22bce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22bce4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x22bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22bce8: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x22bce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22bcec: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x22bcecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22bcf0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22BCF0u;
    {
        const bool branch_taken_0x22bcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCF0u;
        // 0x22bcf4: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bcf0) {
            ctx->pc = 0x22BCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bcb0;
        }
    }
    ctx->pc = 0x22BCF8u;
label_22bcf8:
    // 0x22bcf8: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x22bcf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22bcfc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x22bcfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x22bd00: 0x149182b  sltu        $v1, $t2, $t1
    ctx->pc = 0x22bd00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x22bd04: 0x1821018  mult        $v0, $t4, $v0
    ctx->pc = 0x22bd04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22bd08: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x22bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x22bd0c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x22BD0Cu;
    {
        const bool branch_taken_0x22bd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD0Cu;
        // 0x22bd10: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd0c) {
            ctx->pc = 0x22BC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bc90;
        }
    }
    ctx->pc = 0x22BD14u;
label_22bd14:
    // 0x22bd14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22bd18: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x22bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22bd1c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x22bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x22bd20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bd24: 0x8fa90028  lw          $t1, 0x28($sp)
    ctx->pc = 0x22bd24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22bd28: 0xad3e0000  sw          $fp, 0x0($t1)
    ctx->pc = 0x22bd28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 30));
    // 0x22bd2c: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x22bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x22bd30: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x22bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x22bd34: 0xa3c30010  sb          $v1, 0x10($fp)
    ctx->pc = 0x22bd34u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 16), (uint8_t)GPR_U32(ctx, 3));
label_22bd38:
    // 0x22bd38: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x22bd38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22bd3c:
    // 0x22bd3c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x22bd3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_22bd40:
    // 0x22bd40: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x22bd40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22bd44: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x22bd44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x22bd48: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x22bd48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22bd4c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x22bd4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22bd50: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x22bd50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22bd54: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x22bd54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22bd58: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x22bd58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22bd5c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x22bd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x22bd60: 0x3e00008  jr          $ra
    ctx->pc = 0x22BD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD60u;
        // 0x22bd64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BD68u;
}
