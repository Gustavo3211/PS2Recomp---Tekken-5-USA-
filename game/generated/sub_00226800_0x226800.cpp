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

// Function: sub_00226800
// Address: 0x226800 - 0x2268a0
void sub_00226800_0x226800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226800_0x226800");
#endif

    switch (ctx->pc) {
        case 0x226818u: goto label_226818;
        case 0x226828u: goto label_226828;
        case 0x226838u: goto label_226838;
        case 0x22686cu: goto label_22686c;
        case 0x226874u: goto label_226874;
        case 0x22687cu: goto label_22687c;
        case 0x226884u: goto label_226884;
        case 0x22688cu: goto label_22688c;
        case 0x226894u: goto label_226894;
        default: break;
    }

    ctx->pc = 0x226800u;

    // 0x226800: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x226800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x226804: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22680c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226810: 0xc08976c  jal         func_225DB0
    ctx->pc = 0x226810u;
    SET_GPR_U32(ctx, 31, 0x226818u);
    ctx->pc = 0x226814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226810u;
    // 0x226814: 0x248473c8  addiu       $a0, $a0, 0x73C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225DB0u, 0x226810u, 0x226818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226818u;
label_226818:
    // 0x226818: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x226818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x22681c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22681cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226820: 0xc08976c  jal         func_225DB0
    ctx->pc = 0x226820u;
    SET_GPR_U32(ctx, 31, 0x226828u);
    ctx->pc = 0x226824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226820u;
    // 0x226824: 0x248473e8  addiu       $a0, $a0, 0x73E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225DB0u, 0x226820u, 0x226828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226828u;
label_226828:
    // 0x226828: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x226828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x22682c: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x22682cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x226830: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x226830u;
    SET_GPR_U32(ctx, 31, 0x226838u);
    ctx->pc = 0x226834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226830u;
    // 0x226834: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x226830u, 0x226838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226838u;
label_226838:
    // 0x226838: 0x24450068  addiu       $a1, $v0, 0x68
    ctx->pc = 0x226838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x22683c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x22683cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x226840: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x226840u;
    {
        const bool branch_taken_0x226840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x226840) {
            ctx->pc = 0x226844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226840u;
            // 0x226844: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22685Cu;
            goto label_22685c;
        }
    }
    ctx->pc = 0x226848u;
    // 0x226848: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x226848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22684c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x22684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x226850: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226850u;
    {
        const bool branch_taken_0x226850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x226850) {
            ctx->pc = 0x226864u;
            goto label_226864;
        }
    }
    ctx->pc = 0x226858u;
    // 0x226858: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x226858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_22685c:
    // 0x22685c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22685cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226860: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x226860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_226864:
    // 0x226864: 0xc0b854a  jal         func_2E1528
    ctx->pc = 0x226864u;
    SET_GPR_U32(ctx, 31, 0x22686Cu);
    ctx->pc = 0x2E1528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1528u, 0x226864u, 0x22686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22686Cu;
label_22686c:
    // 0x22686c: 0xc08999e  jal         func_226678
    ctx->pc = 0x22686Cu;
    SET_GPR_U32(ctx, 31, 0x226874u);
    ctx->pc = 0x226678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226678u, 0x22686Cu, 0x226874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226874u;
label_226874:
    // 0x226874: 0xc093796  jal         func_24DE58
    ctx->pc = 0x226874u;
    SET_GPR_U32(ctx, 31, 0x22687Cu);
    ctx->pc = 0x24DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DE58u, 0x226874u, 0x22687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22687Cu;
label_22687c:
    // 0x22687c: 0xc08b88c  jal         func_22E230
    ctx->pc = 0x22687Cu;
    SET_GPR_U32(ctx, 31, 0x226884u);
    ctx->pc = 0x22E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E230u, 0x22687Cu, 0x226884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226884u;
label_226884:
    // 0x226884: 0xc08b896  jal         func_22E258
    ctx->pc = 0x226884u;
    SET_GPR_U32(ctx, 31, 0x22688Cu);
    ctx->pc = 0x22E258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E258u, 0x226884u, 0x22688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22688Cu;
label_22688c:
    // 0x22688c: 0xc089a2c  jal         func_2268B0
    ctx->pc = 0x22688Cu;
    SET_GPR_U32(ctx, 31, 0x226894u);
    ctx->pc = 0x2268B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2268B0u, 0x22688Cu, 0x226894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226894u;
label_226894:
    // 0x226894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226898: 0x3e00008  jr          $ra
    ctx->pc = 0x226898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226898u;
        // 0x22689c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2268A0u;
}
