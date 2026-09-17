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

// Function: sub_004F9088
// Address: 0x4f9088 - 0x4f90e0
void sub_004F9088_0x4f9088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9088_0x4f9088");
#endif

    switch (ctx->pc) {
        case 0x4f90a8u: goto label_4f90a8;
        default: break;
    }

    ctx->pc = 0x4f9088u;

    // 0x4f9088: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x4f9088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x4f908c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4f908cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4f9090: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4f9090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4f9094: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f9094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f9098: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4F9098u;
    {
        const bool branch_taken_0x4f9098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9098u;
        // 0x4f909c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9098) {
            ctx->pc = 0x4F90D4u;
            goto label_4f90d4;
        }
    }
    ctx->pc = 0x4F90A0u;
    // 0x4f90a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4f90a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f90a4: 0x0  nop
    ctx->pc = 0x4f90a4u;
    // NOP
label_4f90a8:
    // 0x4f90a8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4f90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4f90ac: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x4f90acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x4f90b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F90B0u;
    {
        const bool branch_taken_0x4f90b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F90B0u;
        // 0x4f90b4: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f90b0) {
            ctx->pc = 0x4F90C0u;
            goto label_4f90c0;
        }
    }
    ctx->pc = 0x4F90B8u;
    // 0x4f90b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4F90B8u;
    {
        const bool branch_taken_0x4f90b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F90BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F90B8u;
        // 0x4f90bc: 0x21600  sll         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f90b8) {
            ctx->pc = 0x4F90C4u;
            goto label_4f90c4;
        }
    }
    ctx->pc = 0x4F90C0u;
label_4f90c0:
    // 0x4f90c0: 0x51640  sll         $v0, $a1, 25
    ctx->pc = 0x4f90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 25));
label_4f90c4:
    // 0x4f90c4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x4f90c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x4f90c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4f90c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4f90cc: 0x1486fff6  bne         $a0, $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x4F90CCu;
    {
        const bool branch_taken_0x4f90cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x4F90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F90CCu;
        // 0x4f90d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f90cc) {
            ctx->pc = 0x4F90A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f90a8;
        }
    }
    ctx->pc = 0x4F90D4u;
label_4f90d4:
    // 0x4f90d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F90D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F90D4u;
        // 0x4f90d8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F90D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F90DCu;
    // 0x4f90dc: 0x0  nop
    ctx->pc = 0x4f90dcu;
    // NOP
    ctx->pc = 0x4f90e0u;
}
