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

// Function: sub_0026C380
// Address: 0x26c380 - 0x26c3e0
void sub_0026C380_0x26c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C380_0x26c380");
#endif

    ctx->pc = 0x26c380u;

    // 0x26c380: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26c380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c384: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x26c384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x26c388: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x26c388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x26c38c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x26c38cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c390: 0x10650010  beq         $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x26C390u;
    {
        const bool branch_taken_0x26c390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x26C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C390u;
        // 0x26c394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c390) {
            ctx->pc = 0x26C3D4u;
            goto label_26c3d4;
        }
    }
    ctx->pc = 0x26C398u;
    // 0x26c398: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x26c398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26c39c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x26c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x26c3a0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26c3a4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x26c3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x26c3a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C3A8u;
    {
        const bool branch_taken_0x26c3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3A8u;
        // 0x26c3ac: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3a8) {
            ctx->pc = 0x26C3D0u;
            goto label_26c3d0;
        }
    }
    ctx->pc = 0x26C3B0u;
    // 0x26c3b0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x26c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26c3b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26c3b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C3B8u;
    {
        const bool branch_taken_0x26c3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3B8u;
        // 0x26c3bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3b8) {
            ctx->pc = 0x26C3D4u;
            goto label_26c3d4;
        }
    }
    ctx->pc = 0x26C3C0u;
    // 0x26c3c0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26c3c4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x26c3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26c3c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26C3C8u;
    {
        const bool branch_taken_0x26c3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3C8u;
        // 0x26c3cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3c8) {
            ctx->pc = 0x26C3D4u;
            goto label_26c3d4;
        }
    }
    ctx->pc = 0x26C3D0u;
label_26c3d0:
    // 0x26c3d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26c3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c3d4:
    // 0x26c3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x26C3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C3DCu;
    // 0x26c3dc: 0x0  nop
    ctx->pc = 0x26c3dcu;
    // NOP
    ctx->pc = 0x26c3e0u;
}
