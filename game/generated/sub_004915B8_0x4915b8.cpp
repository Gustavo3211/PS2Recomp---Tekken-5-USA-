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

// Function: sub_004915B8
// Address: 0x4915b8 - 0x491628
void sub_004915B8_0x4915b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004915B8_0x4915b8");
#endif

    ctx->pc = 0x4915b8u;

    // 0x4915b8: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x4915b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x4915bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4915bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4915c0: 0x844414e8  lh          $a0, 0x14E8($v0)
    ctx->pc = 0x4915c0u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x7E14E8u));
    // 0x4915c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4915c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4915c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4915c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4915cc: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4915CCu;
    {
        const bool branch_taken_0x4915cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4915D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4915CCu;
        // 0x4915d0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4915cc) {
            ctx->pc = 0x491608u;
            goto label_491608;
        }
    }
    ctx->pc = 0x4915D4u;
    // 0x4915d4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4915D4u;
    {
        const bool branch_taken_0x4915d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4915d4) {
            ctx->pc = 0x4915D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4915D4u;
            // 0x4915d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4915F0u;
            goto label_4915f0;
        }
    }
    ctx->pc = 0x4915DCu;
    // 0x4915dc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4915DCu;
    {
        const bool branch_taken_0x4915dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4915E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4915DCu;
        // 0x4915e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4915dc) {
            ctx->pc = 0x491600u;
            goto label_491600;
        }
    }
    ctx->pc = 0x4915E4u;
    // 0x4915e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4915E4u;
    {
        const bool branch_taken_0x4915e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4915e4) {
            ctx->pc = 0x491620u;
            goto label_491620;
        }
    }
    ctx->pc = 0x4915ECu;
    // 0x4915ec: 0x0  nop
    ctx->pc = 0x4915ecu;
    // NOP
label_4915f0:
    // 0x4915f0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4915F0u;
    {
        const bool branch_taken_0x4915f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4915F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4915F0u;
        // 0x4915f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4915f0) {
            ctx->pc = 0x491618u;
            goto label_491618;
        }
    }
    ctx->pc = 0x4915F8u;
    // 0x4915f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4915F8u;
    {
        const bool branch_taken_0x4915f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4915f8) {
            ctx->pc = 0x491620u;
            goto label_491620;
        }
    }
    ctx->pc = 0x491600u;
label_491600:
    // 0x491600: 0x8124548  j           func_491520
    ctx->pc = 0x491600u;
    ctx->pc = 0x491604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491600u;
    // 0x491604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491520u, 0x491600u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x491608u;
label_491608:
    // 0x491608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x491608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49160c: 0x812454c  j           func_491530
    ctx->pc = 0x49160Cu;
    ctx->pc = 0x491610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49160Cu;
    // 0x491610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491530u, 0x49160Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x491614u;
    // 0x491614: 0x0  nop
    ctx->pc = 0x491614u;
    // NOP
label_491618:
    // 0x491618: 0x812456a  j           func_4915A8
    ctx->pc = 0x491618u;
    ctx->pc = 0x49161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491618u;
    // 0x49161c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4915A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4915A8u, 0x491618u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x491620u;
label_491620:
    // 0x491620: 0x3e00008  jr          $ra
    ctx->pc = 0x491620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491620u;
        // 0x491624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491628u;
}
