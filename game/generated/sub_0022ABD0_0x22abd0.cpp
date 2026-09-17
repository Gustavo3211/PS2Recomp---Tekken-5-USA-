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

// Function: sub_0022ABD0
// Address: 0x22abd0 - 0x22ac38
void sub_0022ABD0_0x22abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ABD0_0x22abd0");
#endif

    switch (ctx->pc) {
        case 0x22abf0u: goto label_22abf0;
        case 0x22ac24u: goto label_22ac24;
        default: break;
    }

    ctx->pc = 0x22abd0u;

    // 0x22abd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22abd4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x22abd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x22abd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22abd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22abdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22abdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22abe0: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x22abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x22abe4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22abe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22abe8: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22ABE8u;
    SET_GPR_U32(ctx, 31, 0x22ABF0u);
    ctx->pc = 0x22ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABE8u;
    // 0x22abec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22ABE8u, 0x22ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABF0u;
label_22abf0:
    // 0x22abf0: 0x24460068  addiu       $a2, $v0, 0x68
    ctx->pc = 0x22abf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x22abf4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22abf8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22ABF8u;
    {
        const bool branch_taken_0x22abf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABF8u;
        // 0x22abfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22abf8) {
            ctx->pc = 0x22AC10u;
            goto label_22ac10;
        }
    }
    ctx->pc = 0x22AC00u;
    // 0x22ac00: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22ac04: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22ac08: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AC08u;
    {
        const bool branch_taken_0x22ac08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22ac08) {
            ctx->pc = 0x22AC1Cu;
            goto label_22ac1c;
        }
    }
    ctx->pc = 0x22AC10u;
label_22ac10:
    // 0x22ac10: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22ac14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22ac14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac18: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22ac1c:
    // 0x22ac1c: 0xc0b8334  jal         func_2E0CD0
    ctx->pc = 0x22AC1Cu;
    SET_GPR_U32(ctx, 31, 0x22AC24u);
    ctx->pc = 0x2E0CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0CD0u, 0x22AC1Cu, 0x22AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC24u;
label_22ac24:
    // 0x22ac24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ac24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ac28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22ac28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ac2c: 0x3e00008  jr          $ra
    ctx->pc = 0x22AC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC2Cu;
        // 0x22ac30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AC34u;
    // 0x22ac34: 0x0  nop
    ctx->pc = 0x22ac34u;
    // NOP
    ctx->pc = 0x22ac38u;
}
