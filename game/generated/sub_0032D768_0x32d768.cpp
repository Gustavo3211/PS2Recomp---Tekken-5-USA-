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

// Function: sub_0032D768
// Address: 0x32d768 - 0x32d858
void sub_0032D768_0x32d768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D768_0x32d768");
#endif

    switch (ctx->pc) {
        case 0x32d794u: goto label_32d794;
        case 0x32d7ccu: goto label_32d7cc;
        case 0x32d808u: goto label_32d808;
        case 0x32d848u: goto label_32d848;
        default: break;
    }

    ctx->pc = 0x32d768u;

    // 0x32d768: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d76c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32d770: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x32d770u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32d774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d77c: 0xaf86c5dc  sw          $a2, -0x3A24($gp)
    ctx->pc = 0x32d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952412), GPR_U32(ctx, 6));
    // 0x32d780: 0x248408c0  addiu       $a0, $a0, 0x8C0
    ctx->pc = 0x32d780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    // 0x32d784: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x32d784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d78c: 0xc0c9132  jal         func_3244C8
    ctx->pc = 0x32D78Cu;
    SET_GPR_U32(ctx, 31, 0x32D794u);
    ctx->pc = 0x32D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D78Cu;
    // 0x32d790: 0xaf87c5e0  sw          $a3, -0x3A20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952416), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3244C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3244C8u, 0x32D78Cu, 0x32D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D794u;
label_32d794:
    // 0x32d794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d798: 0x3e00008  jr          $ra
    ctx->pc = 0x32D798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D798u;
        // 0x32d79c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D7A0u;
    // 0x32d7a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d7a4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32d7a8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x32d7a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d7ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32d7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d7b4: 0xaf86c5dc  sw          $a2, -0x3A24($gp)
    ctx->pc = 0x32d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952412), GPR_U32(ctx, 6));
    // 0x32d7b8: 0x248408c0  addiu       $a0, $a0, 0x8C0
    ctx->pc = 0x32d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    // 0x32d7bc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x32d7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d7c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d7c4: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x32D7C4u;
    SET_GPR_U32(ctx, 31, 0x32D7CCu);
    ctx->pc = 0x32D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D7C4u;
    // 0x32d7c8: 0xaf87c5e0  sw          $a3, -0x3A20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952416), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x32D7C4u, 0x32D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D7CCu;
label_32d7cc:
    // 0x32d7cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x32D7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7D0u;
        // 0x32d7d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D7D8u;
    // 0x32d7d8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x32d7d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d7dc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32d7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32d7e0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x32d7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d7e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32d7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d7ec: 0xaf87c5dc  sw          $a3, -0x3A24($gp)
    ctx->pc = 0x32d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952412), GPR_U32(ctx, 7));
    // 0x32d7f0: 0x248408c0  addiu       $a0, $a0, 0x8C0
    ctx->pc = 0x32d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    // 0x32d7f4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x32d7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d7f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x32d7f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d7fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d800: 0xc0c919e  jal         func_324678
    ctx->pc = 0x32D800u;
    SET_GPR_U32(ctx, 31, 0x32D808u);
    ctx->pc = 0x32D804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D800u;
    // 0x32d804: 0xaf88c5e0  sw          $t0, -0x3A20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952416), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324678u, 0x32D800u, 0x32D808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D808u;
label_32d808:
    // 0x32d808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d80c: 0x3e00008  jr          $ra
    ctx->pc = 0x32D80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D80Cu;
        // 0x32d810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D814u;
    // 0x32d814: 0x0  nop
    ctx->pc = 0x32d814u;
    // NOP
    // 0x32d818: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x32d818u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d81c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32d820: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x32d820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d824: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32d824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d82c: 0xaf87c5dc  sw          $a3, -0x3A24($gp)
    ctx->pc = 0x32d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952412), GPR_U32(ctx, 7));
    // 0x32d830: 0x248408c0  addiu       $a0, $a0, 0x8C0
    ctx->pc = 0x32d830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    // 0x32d834: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x32d834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d838: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x32d838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d83c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d840: 0xc0c91da  jal         func_324768
    ctx->pc = 0x32D840u;
    SET_GPR_U32(ctx, 31, 0x32D848u);
    ctx->pc = 0x32D844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D840u;
    // 0x32d844: 0xaf88c5e0  sw          $t0, -0x3A20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952416), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324768u, 0x32D840u, 0x32D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D848u;
label_32d848:
    // 0x32d848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d84c: 0x3e00008  jr          $ra
    ctx->pc = 0x32D84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D84Cu;
        // 0x32d850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D854u;
    // 0x32d854: 0x0  nop
    ctx->pc = 0x32d854u;
    // NOP
    ctx->pc = 0x32d858u;
}
