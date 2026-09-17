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

// Function: sub_0021C560
// Address: 0x21c560 - 0x21c5e0
void sub_0021C560_0x21c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C560_0x21c560");
#endif

    switch (ctx->pc) {
        case 0x21c570u: goto label_21c570;
        case 0x21c578u: goto label_21c578;
        case 0x21c5a0u: goto label_21c5a0;
        case 0x21c5a4u: goto label_21c5a4;
        default: break;
    }

    ctx->pc = 0x21c560u;

    // 0x21c560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c568: 0xc08659e  jal         func_219678
    ctx->pc = 0x21C568u;
    SET_GPR_U32(ctx, 31, 0x21C570u);
    ctx->pc = 0x21C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C568u;
    // 0x21c56c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219678u, 0x21C568u, 0x21C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C570u;
label_21c570:
    // 0x21c570: 0xc084eb2  jal         func_213AC8
    ctx->pc = 0x21C570u;
    SET_GPR_U32(ctx, 31, 0x21C578u);
    ctx->pc = 0x213AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213AC8u, 0x21C570u, 0x21C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C578u;
label_21c578:
    // 0x21c578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c57c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C57Cu;
        // 0x21c580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C584u;
    // 0x21c584: 0x0  nop
    ctx->pc = 0x21c584u;
    // NOP
    // 0x21c588: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x21c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x21c58c: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21C58Cu;
    {
        const bool branch_taken_0x21c58c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C58Cu;
        // 0x21c590: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c58c) {
            ctx->pc = 0x21C5D4u;
            goto label_21c5d4;
        }
    }
    ctx->pc = 0x21C594u;
    // 0x21c594: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21c594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c598: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21c598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c59c: 0x0  nop
    ctx->pc = 0x21c59cu;
    // NOP
label_21c5a0:
    // 0x21c5a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21c5a4:
    // 0x21c5a4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x21c5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21c5a8: 0x0  nop
    ctx->pc = 0x21c5a8u;
    // NOP
    // 0x21c5ac: 0x0  nop
    ctx->pc = 0x21c5acu;
    // NOP
    // 0x21c5b0: 0x0  nop
    ctx->pc = 0x21c5b0u;
    // NOP
    // 0x21c5b4: 0x0  nop
    ctx->pc = 0x21c5b4u;
    // NOP
    // 0x21c5b8: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21C5B8u;
    {
        const bool branch_taken_0x21c5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c5b8) {
            ctx->pc = 0x21C5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C5B8u;
            // 0x21c5bc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C5A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c5a4;
        }
    }
    ctx->pc = 0x21C5C0u;
    // 0x21c5c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21c5c4: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x21c5c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21c5c8: 0x0  nop
    ctx->pc = 0x21c5c8u;
    // NOP
    // 0x21c5cc: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x21C5CCu;
    {
        const bool branch_taken_0x21c5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c5cc) {
            ctx->pc = 0x21C5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C5CCu;
            // 0x21c5d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c5a0;
        }
    }
    ctx->pc = 0x21C5D4u;
label_21c5d4:
    // 0x21c5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x21C5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C5DCu;
    // 0x21c5dc: 0x0  nop
    ctx->pc = 0x21c5dcu;
    // NOP
    ctx->pc = 0x21c5e0u;
}
