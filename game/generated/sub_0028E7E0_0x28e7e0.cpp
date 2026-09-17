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

// Function: sub_0028E7E0
// Address: 0x28e7e0 - 0x28e868
void sub_0028E7E0_0x28e7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E7E0_0x28e7e0");
#endif

    switch (ctx->pc) {
        case 0x28e800u: goto label_28e800;
        case 0x28e820u: goto label_28e820;
        case 0x28e83cu: goto label_28e83c;
        case 0x28e858u: goto label_28e858;
        default: break;
    }

    ctx->pc = 0x28e7e0u;

    // 0x28e7e0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x28e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x28e7e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e7e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28e7e8: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x28e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x28e7ec: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x28e7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x28e7f0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28E7F0u;
    {
        const bool branch_taken_0x28e7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7F0u;
        // 0x28e7f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7f0) {
            ctx->pc = 0x28E858u;
            goto label_28e858;
        }
    }
    ctx->pc = 0x28E7F8u;
    // 0x28e7f8: 0xc0a947c  jal         func_2A51F0
    ctx->pc = 0x28E7F8u;
    SET_GPR_U32(ctx, 31, 0x28E800u);
    ctx->pc = 0x2A51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51F0u, 0x28E7F8u, 0x28E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E800u;
label_28e800:
    // 0x28e800: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x28e800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x28e804: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28E804u;
    {
        const bool branch_taken_0x28e804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E804u;
        // 0x28e808: 0x24646ef8  addiu       $a0, $v1, 0x6EF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e804) {
            ctx->pc = 0x28E858u;
            goto label_28e858;
        }
    }
    ctx->pc = 0x28E80Cu;
    // 0x28e80c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x28e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x28e810: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E810u;
    {
        const bool branch_taken_0x28e810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e810) {
            ctx->pc = 0x28E814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E810u;
            // 0x28e814: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E824u;
            goto label_28e824;
        }
    }
    ctx->pc = 0x28E818u;
    // 0x28e818: 0xc0a3276  jal         func_28C9D8
    ctx->pc = 0x28E818u;
    SET_GPR_U32(ctx, 31, 0x28E820u);
    ctx->pc = 0x28C9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C9D8u, 0x28E818u, 0x28E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E820u;
label_28e820:
    // 0x28e820: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28e820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_28e824:
    // 0x28e824: 0x24426f88  addiu       $v0, $v0, 0x6F88
    ctx->pc = 0x28e824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28552));
    // 0x28e828: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28e828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e82c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E82Cu;
    {
        const bool branch_taken_0x28e82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E82Cu;
        // 0x28e830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e82c) {
            ctx->pc = 0x28E83Cu;
            goto label_28e83c;
        }
    }
    ctx->pc = 0x28E834u;
    // 0x28e834: 0xc0a3530  jal         func_28D4C0
    ctx->pc = 0x28E834u;
    SET_GPR_U32(ctx, 31, 0x28E83Cu);
    ctx->pc = 0x28D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4C0u, 0x28E834u, 0x28E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E83Cu;
label_28e83c:
    // 0x28e83c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28e840: 0x24426fe0  addiu       $v0, $v0, 0x6FE0
    ctx->pc = 0x28e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28640));
    // 0x28e844: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x28e844u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x17700Cu));
    // 0x28e848: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E848u;
    {
        const bool branch_taken_0x28e848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E848u;
        // 0x28e84c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e848) {
            ctx->pc = 0x28E858u;
            goto label_28e858;
        }
    }
    ctx->pc = 0x28E850u;
    // 0x28e850: 0xc0a372e  jal         func_28DCB8
    ctx->pc = 0x28E850u;
    SET_GPR_U32(ctx, 31, 0x28E858u);
    ctx->pc = 0x28DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DCB8u, 0x28E850u, 0x28E858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E858u;
label_28e858:
    // 0x28e858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e85c: 0x3e00008  jr          $ra
    ctx->pc = 0x28E85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E85Cu;
        // 0x28e860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E864u;
    // 0x28e864: 0x0  nop
    ctx->pc = 0x28e864u;
    // NOP
    ctx->pc = 0x28e868u;
}
