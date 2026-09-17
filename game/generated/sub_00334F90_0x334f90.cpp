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

// Function: sub_00334F90
// Address: 0x334f90 - 0x334fd8
void sub_00334F90_0x334f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334F90_0x334f90");
#endif

    switch (ctx->pc) {
        case 0x334f90u: goto label_334f90;
        case 0x334f94u: goto label_334f94;
        case 0x334f98u: goto label_334f98;
        case 0x334f9cu: goto label_334f9c;
        case 0x334fa0u: goto label_334fa0;
        case 0x334fa4u: goto label_334fa4;
        case 0x334fa8u: goto label_334fa8;
        case 0x334facu: goto label_334fac;
        case 0x334fb0u: goto label_334fb0;
        case 0x334fb4u: goto label_334fb4;
        case 0x334fb8u: goto label_334fb8;
        case 0x334fbcu: goto label_334fbc;
        case 0x334fc0u: goto label_334fc0;
        case 0x334fc4u: goto label_334fc4;
        case 0x334fc8u: goto label_334fc8;
        case 0x334fccu: goto label_334fcc;
        case 0x334fd0u: goto label_334fd0;
        case 0x334fd4u: goto label_334fd4;
        default: break;
    }

    ctx->pc = 0x334f90u;

label_334f90:
    // 0x334f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_334f94:
    // 0x334f94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_334f98:
    // 0x334f98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x334f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_334f9c:
    // 0x334f9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x334f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_334fa0:
    // 0x334fa0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x334fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_334fa4:
    // 0x334fa4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x334fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_334fa8:
    // 0x334fa8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x334fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_334fac:
    // 0x334fac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x334facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_334fb0:
    // 0x334fb0: 0x40f809  jalr        $v0
label_334fb4:
    if (ctx->pc == 0x334FB4u) {
        ctx->pc = 0x334FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FB0u;
        // 0x334fb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334FB8u;
        goto label_334fb8;
    }
    ctx->pc = 0x334FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x334FB8u);
        ctx->pc = 0x334FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FB0u;
        // 0x334fb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334FB0u, 0x334FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x334FB8u;
label_334fb8:
    // 0x334fb8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x334fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_334fbc:
    // 0x334fbc: 0xc043c28  jal         func_10F0A0
label_334fc0:
    if (ctx->pc == 0x334FC0u) {
        ctx->pc = 0x334FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FBCu;
        // 0x334fc0: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334FC4u;
        goto label_334fc4;
    }
    ctx->pc = 0x334FBCu;
    SET_GPR_U32(ctx, 31, 0x334FC4u);
    ctx->pc = 0x334FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FBCu;
    // 0x334fc0: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F0A0u, 0x334FBCu, 0x334FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FC4u;
label_334fc4:
    // 0x334fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_334fc8:
    // 0x334fc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x334fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_334fcc:
    // 0x334fcc: 0x3e00008  jr          $ra
label_334fd0:
    if (ctx->pc == 0x334FD0u) {
        ctx->pc = 0x334FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FCCu;
        // 0x334fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334FD4u;
        goto label_334fd4;
    }
    ctx->pc = 0x334FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FCCu;
        // 0x334fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334FD4u;
label_334fd4:
    // 0x334fd4: 0x0  nop
    ctx->pc = 0x334fd4u;
    // NOP
    ctx->pc = 0x334fd8u;
}
