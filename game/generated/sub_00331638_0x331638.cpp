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

// Function: sub_00331638
// Address: 0x331638 - 0x3316d0
void sub_00331638_0x331638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331638_0x331638");
#endif

    switch (ctx->pc) {
        case 0x331658u: goto label_331658;
        case 0x331690u: goto label_331690;
        case 0x3316c0u: goto label_3316c0;
        default: break;
    }

    ctx->pc = 0x331638u;

    // 0x331638: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x331638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33163c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x33163cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x331640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331644: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x331644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331648: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x331648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x33164c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33164cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331650: 0xc0cc6e0  jal         func_331B80
    ctx->pc = 0x331650u;
    SET_GPR_U32(ctx, 31, 0x331658u);
    ctx->pc = 0x331654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331650u;
    // 0x331654: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331B80u, 0x331650u, 0x331658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331658u;
label_331658:
    // 0x331658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33165c: 0x3e00008  jr          $ra
    ctx->pc = 0x33165Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33165Cu;
        // 0x331660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33165Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331664u;
    // 0x331664: 0x0  nop
    ctx->pc = 0x331664u;
    // NOP
    // 0x331668: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x331668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33166c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x33166cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x331670: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x331670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x331674: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331678: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x331678u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x33167c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33167cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331680: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x331680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x331684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331688: 0xc0cc6e4  jal         func_331B90
    ctx->pc = 0x331688u;
    SET_GPR_U32(ctx, 31, 0x331690u);
    ctx->pc = 0x33168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331688u;
    // 0x33168c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331B90u, 0x331688u, 0x331690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331690u;
label_331690:
    // 0x331690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331694: 0x3e00008  jr          $ra
    ctx->pc = 0x331694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331694u;
        // 0x331698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33169Cu;
    // 0x33169c: 0x0  nop
    ctx->pc = 0x33169cu;
    // NOP
    // 0x3316a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3316a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3316a4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3316a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3316a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3316a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3316ac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3316acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3316b0: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x3316b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x3316b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3316b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3316b8: 0xc0cc6ec  jal         func_331BB0
    ctx->pc = 0x3316B8u;
    SET_GPR_U32(ctx, 31, 0x3316C0u);
    ctx->pc = 0x3316BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3316B8u;
    // 0x3316bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331BB0u, 0x3316B8u, 0x3316C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3316C0u;
label_3316c0:
    // 0x3316c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3316c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3316c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3316C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3316C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3316C4u;
        // 0x3316c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3316C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3316CCu;
    // 0x3316cc: 0x0  nop
    ctx->pc = 0x3316ccu;
    // NOP
    ctx->pc = 0x3316d0u;
}
