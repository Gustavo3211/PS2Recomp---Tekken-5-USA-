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

// Function: sub_00123998
// Address: 0x123998 - 0x123a90
void sub_00123998_0x123998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123998_0x123998");
#endif

    switch (ctx->pc) {
        case 0x1239e0u: goto label_1239e0;
        case 0x123a28u: goto label_123a28;
        default: break;
    }

    ctx->pc = 0x123998u;

    // 0x123998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12399c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x12399cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1239a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1239a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1239a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1239a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1239a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1239a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1239ac: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x1239acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1239b0: 0x13200033  beqz        $t9, . + 4 + (0x33 << 2)
    ctx->pc = 0x1239B0u;
    {
        const bool branch_taken_0x1239b0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1239B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239B0u;
        // 0x1239b4: 0x320602d  daddu       $t4, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239b0) {
            ctx->pc = 0x123A80u;
            goto label_123a80;
        }
    }
    ctx->pc = 0x1239B8u;
    // 0x1239b8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1239b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1239bc: 0x192880  sll         $a1, $t9, 2
    ctx->pc = 0x1239bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x1239c0: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x1239c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1239c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1239c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1239c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1239c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1239cc: 0x4f1821  addu        $v1, $v0, $t7
    ctx->pc = 0x1239ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x1239d0: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1239d0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1239d4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1239d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1239d8: 0x246bfffc  addiu       $t3, $v1, -0x4
    ctx->pc = 0x1239d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1239dc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1239dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1239e0:
    // 0x1239e0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1239e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1239e4: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x1239e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1239e8: 0x1140001e  beqz        $t2, . + 4 + (0x1E << 2)
    ctx->pc = 0x1239E8u;
    {
        const bool branch_taken_0x1239e8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1239ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239E8u;
        // 0x1239ec: 0x8c980000  lw          $t8, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239e8) {
            ctx->pc = 0x123A64u;
            goto label_123a64;
        }
    }
    ctx->pc = 0x1239F0u;
    // 0x1239f0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1239f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1239f4: 0x8f0e0008  lw          $t6, 0x8($t8)
    ctx->pc = 0x1239f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x1239f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1239f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1239fc: 0x4e1023  subu        $v0, $v0, $t6
    ctx->pc = 0x1239fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x123a00: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x123A00u;
    {
        const bool branch_taken_0x123a00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A00u;
        // 0x123a04: 0x14c1021  addu        $v0, $t2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a00) {
            ctx->pc = 0x123A68u;
            goto label_123a68;
        }
    }
    ctx->pc = 0x123A08u;
    // 0x123a08: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x123a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a0c: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x123a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x123a10: 0xcf1821  addu        $v1, $a2, $t7
    ctx->pc = 0x123a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x123a14: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x123a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x123a18: 0x2467fffc  addiu       $a3, $v1, -0x4
    ctx->pc = 0x123a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x123a1c: 0x1e0482d  daddu       $t1, $t7, $zero
    ctx->pc = 0x123a1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a20: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x123a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x123a24: 0x0  nop
    ctx->pc = 0x123a24u;
    // NOP
label_123a28:
    // 0x123a28: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x123a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x123a2c: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x123a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x123a30: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x123a30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x123a34: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x123a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x123a38: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x123a38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x123a3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x123a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x123a40: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x123a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x123a44: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x123a44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x123a48: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x123A48u;
    {
        const bool branch_taken_0x123a48 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A48u;
        // 0x123a4c: 0x25adfffc  addiu       $t5, $t5, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a48) {
            ctx->pc = 0x123A64u;
            goto label_123a64;
        }
    }
    ctx->pc = 0x123A50u;
    // 0x123a50: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x123a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x123a54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x123a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123a58: 0x4e1023  subu        $v0, $v0, $t6
    ctx->pc = 0x123a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x123a5c: 0x5c40fff2  bgtzl       $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x123A5Cu;
    {
        const bool branch_taken_0x123a5c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x123a5c) {
            ctx->pc = 0x123A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123A5Cu;
            // 0x123a60: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123a28;
        }
    }
    ctx->pc = 0x123A64u;
label_123a64:
    // 0x123a64: 0x14c1021  addu        $v0, $t2, $t4
    ctx->pc = 0x123a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_123a68:
    // 0x123a68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x123a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x123a6c: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x123a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x123a70: 0x1580ffdb  bnez        $t4, . + 4 + (-0x25 << 2)
    ctx->pc = 0x123A70u;
    {
        const bool branch_taken_0x123a70 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x123A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A70u;
        // 0x123a74: 0xac580000  sw          $t8, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a70) {
            ctx->pc = 0x1239E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1239e0;
        }
    }
    ctx->pc = 0x123A78u;
    // 0x123a78: 0x2191021  addu        $v0, $s0, $t9
    ctx->pc = 0x123a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x123a7c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x123a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_123a80:
    // 0x123a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123a84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123a88: 0x3e00008  jr          $ra
    ctx->pc = 0x123A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A88u;
        // 0x123a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123A90u;
}
