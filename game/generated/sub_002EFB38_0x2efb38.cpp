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

// Function: sub_002EFB38
// Address: 0x2efb38 - 0x2efbb0
void sub_002EFB38_0x2efb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFB38_0x2efb38");
#endif

    switch (ctx->pc) {
        case 0x2efb68u: goto label_2efb68;
        case 0x2efb84u: goto label_2efb84;
        case 0x2efba0u: goto label_2efba0;
        default: break;
    }

    ctx->pc = 0x2efb38u;

    // 0x2efb38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2efb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2efb3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2efb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2efb40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2efb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2efb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2efb48: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x2efb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2efb4c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFB4Cu;
    {
        const bool branch_taken_0x2efb4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB4Cu;
        // 0x2efb50: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb4c) {
            ctx->pc = 0x2EFB68u;
            goto label_2efb68;
        }
    }
    ctx->pc = 0x2EFB54u;
    // 0x2efb54: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2efb54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2efb58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2efb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb5c: 0x24844a98  addiu       $a0, $a0, 0x4A98
    ctx->pc = 0x2efb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19096));
    // 0x2efb60: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2EFB60u;
    SET_GPR_U32(ctx, 31, 0x2EFB68u);
    ctx->pc = 0x2EFB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB60u;
    // 0x2efb64: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EFB60u, 0x2EFB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB68u;
label_2efb68:
    // 0x2efb68: 0x8e0700f8  lw          $a3, 0xF8($s0)
    ctx->pc = 0x2efb68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x2efb6c: 0x4e00005  bltz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFB6Cu;
    {
        const bool branch_taken_0x2efb6c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2EFB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB6Cu;
        // 0x2efb70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb6c) {
            ctx->pc = 0x2EFB84u;
            goto label_2efb84;
        }
    }
    ctx->pc = 0x2EFB74u;
    // 0x2efb74: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2efb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2efb78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2efb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2efb7c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2EFB7Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB84u);
    ctx->pc = 0x2EFB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB7Cu;
    // 0x2efb80: 0x24844a98  addiu       $a0, $a0, 0x4A98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EFB7Cu, 0x2EFB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB84u;
label_2efb84:
    // 0x2efb84: 0x8e0700fc  lw          $a3, 0xFC($s0)
    ctx->pc = 0x2efb84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x2efb88: 0x4e00005  bltz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFB88u;
    {
        const bool branch_taken_0x2efb88 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2EFB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB88u;
        // 0x2efb8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb88) {
            ctx->pc = 0x2EFBA0u;
            goto label_2efba0;
        }
    }
    ctx->pc = 0x2EFB90u;
    // 0x2efb90: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2efb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2efb94: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2efb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2efb98: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2EFB98u;
    SET_GPR_U32(ctx, 31, 0x2EFBA0u);
    ctx->pc = 0x2EFB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB98u;
    // 0x2efb9c: 0x24844a98  addiu       $a0, $a0, 0x4A98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2EFB98u, 0x2EFBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFBA0u;
label_2efba0:
    // 0x2efba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2efba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efba4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2efba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2efba8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBA8u;
        // 0x2efbac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFBB0u;
}
