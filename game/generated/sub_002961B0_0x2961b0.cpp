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

// Function: sub_002961B0
// Address: 0x2961b0 - 0x2961e8
void sub_002961B0_0x2961b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002961B0_0x2961b0");
#endif

    switch (ctx->pc) {
        case 0x2961d8u: goto label_2961d8;
        default: break;
    }

    ctx->pc = 0x2961b0u;

    // 0x2961b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2961b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2961b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2961b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2961b8: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2961B8u;
    {
        const bool branch_taken_0x2961b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2961BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2961B8u;
        // 0x2961bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2961b8) {
            ctx->pc = 0x2961D8u;
            goto label_2961d8;
        }
    }
    ctx->pc = 0x2961C0u;
    // 0x2961c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2961c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2961c4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2961C4u;
    {
        const bool branch_taken_0x2961c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2961C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2961C4u;
        // 0x2961c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2961c4) {
            ctx->pc = 0x2961DCu;
            goto label_2961dc;
        }
    }
    ctx->pc = 0x2961CCu;
    // 0x2961cc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x2961ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x2961d0: 0xc0a5162  jal         func_294588
    ctx->pc = 0x2961D0u;
    SET_GPR_U32(ctx, 31, 0x2961D8u);
    ctx->pc = 0x2961D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961D0u;
    // 0x2961d4: 0x24847378  addiu       $a0, $a0, 0x7378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294588u, 0x2961D0u, 0x2961D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961D8u;
label_2961d8:
    // 0x2961d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2961d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2961dc:
    // 0x2961dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2961DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2961E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2961DCu;
        // 0x2961e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2961DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2961E4u;
    // 0x2961e4: 0x0  nop
    ctx->pc = 0x2961e4u;
    // NOP
    ctx->pc = 0x2961e8u;
}
