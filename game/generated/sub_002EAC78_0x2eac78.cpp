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

// Function: sub_002EAC78
// Address: 0x2eac78 - 0x2eace8
void sub_002EAC78_0x2eac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAC78_0x2eac78");
#endif

    switch (ctx->pc) {
        case 0x2eac8cu: goto label_2eac8c;
        case 0x2eac94u: goto label_2eac94;
        case 0x2eaca4u: goto label_2eaca4;
        case 0x2eacd8u: goto label_2eacd8;
        default: break;
    }

    ctx->pc = 0x2eac78u;

    // 0x2eac78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eac78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eac7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eac7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eac80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2eac84: 0xc0bba90  jal         func_2EEA40
    ctx->pc = 0x2EAC84u;
    SET_GPR_U32(ctx, 31, 0x2EAC8Cu);
    ctx->pc = 0x2EAC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC84u;
    // 0x2eac88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA40u, 0x2EAC84u, 0x2EAC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC8Cu;
label_2eac8c:
    // 0x2eac8c: 0xc0bbaae  jal         func_2EEAB8
    ctx->pc = 0x2EAC8Cu;
    SET_GPR_U32(ctx, 31, 0x2EAC94u);
    ctx->pc = 0x2EAC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC8Cu;
    // 0x2eac90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEAB8u, 0x2EAC8Cu, 0x2EAC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC94u;
label_2eac94:
    // 0x2eac94: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2eac94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2eac98: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x2eac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x2eac9c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2EAC9Cu;
    SET_GPR_U32(ctx, 31, 0x2EACA4u);
    ctx->pc = 0x2EACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC9Cu;
    // 0x2eaca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2EAC9Cu, 0x2EACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACA4u;
label_2eaca4:
    // 0x2eaca4: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x2eaca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2eaca8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eaca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eacac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EACACu;
    {
        const bool branch_taken_0x2eacac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eacac) {
            ctx->pc = 0x2EACB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EACACu;
            // 0x2eacb0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EACC8u;
            goto label_2eacc8;
        }
    }
    ctx->pc = 0x2EACB4u;
    // 0x2eacb4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eacb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eacb8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eacbc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EACBCu;
    {
        const bool branch_taken_0x2eacbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eacbc) {
            ctx->pc = 0x2EACD0u;
            goto label_2eacd0;
        }
    }
    ctx->pc = 0x2EACC4u;
    // 0x2eacc4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eacc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eacc8:
    // 0x2eacc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eacc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaccc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eacccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eacd0:
    // 0x2eacd0: 0xc0a1618  jal         func_285860
    ctx->pc = 0x2EACD0u;
    SET_GPR_U32(ctx, 31, 0x2EACD8u);
    ctx->pc = 0x285860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285860u, 0x2EACD0u, 0x2EACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACD8u;
label_2eacd8:
    // 0x2eacd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eacd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eacdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eacdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eace0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EACE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACE0u;
        // 0x2eace4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EACE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EACE8u;
}
