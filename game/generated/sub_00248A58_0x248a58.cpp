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

// Function: sub_00248A58
// Address: 0x248a58 - 0x248ac8
void sub_00248A58_0x248a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248A58_0x248a58");
#endif

    ctx->pc = 0x248a58u;

    // 0x248a58: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x248a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x248a5c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x248A5Cu;
    {
        const bool branch_taken_0x248a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A5Cu;
        // 0x248a60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a5c) {
            ctx->pc = 0x248AE0u;
            return;
        }
    }
    ctx->pc = 0x248A64u;
    // 0x248a64: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x248a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x248a68: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x248a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x248a6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248a70: 0x8c631340  lw          $v1, 0x1340($v1)
    ctx->pc = 0x248a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
    // 0x248a74: 0x600008  jr          $v1
    ctx->pc = 0x248A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x248A80u: goto label_248a80;
            case 0x248A88u: goto label_248a88;
            case 0x248A98u: goto label_248a98;
            case 0x248AA8u: goto label_248aa8;
            case 0x248AB8u: goto label_248ab8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248A74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x248A7Cu;
    // 0x248a7c: 0x0  nop
    ctx->pc = 0x248a7cu;
    // NOP
label_248a80:
    // 0x248a80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x248A80u;
    {
        const bool branch_taken_0x248a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A80u;
        // 0x248a84: 0x3403f800  ori         $v1, $zero, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a80) {
            ctx->pc = 0x248AE0u;
            return;
        }
    }
    ctx->pc = 0x248A88u;
label_248a88:
    // 0x248a88: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x248a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x248a8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x248A8Cu;
    {
        const bool branch_taken_0x248a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A8Cu;
        // 0x248a90: 0x34630800  ori         $v1, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a8c) {
            ctx->pc = 0x248AE0u;
            return;
        }
    }
    ctx->pc = 0x248A94u;
    // 0x248a94: 0x0  nop
    ctx->pc = 0x248a94u;
    // NOP
label_248a98:
    // 0x248a98: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x248a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x248a9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x248A9Cu;
    {
        const bool branch_taken_0x248a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A9Cu;
        // 0x248aa0: 0x3463d800  ori         $v1, $v1, 0xD800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55296);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a9c) {
            ctx->pc = 0x248AE0u;
            return;
        }
    }
    ctx->pc = 0x248AA4u;
    // 0x248aa4: 0x0  nop
    ctx->pc = 0x248aa4u;
    // NOP
label_248aa8:
    // 0x248aa8: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x248aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
    // 0x248aac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x248AACu;
    {
        const bool branch_taken_0x248aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248AACu;
        // 0x248ab0: 0x3463a800  ori         $v1, $v1, 0xA800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43008);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248aac) {
            ctx->pc = 0x248AE0u;
            return;
        }
    }
    ctx->pc = 0x248AB4u;
    // 0x248ab4: 0x0  nop
    ctx->pc = 0x248ab4u;
    // NOP
label_248ab8:
    // 0x248ab8: 0x3c03000e  lui         $v1, 0xE
    ctx->pc = 0x248ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14 << 16));
    // 0x248abc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x248ABCu;
    {
        const bool branch_taken_0x248abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248ABCu;
        // 0x248ac0: 0x34630800  ori         $v1, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248abc) {
            ctx->pc = 0x248AE0u;
            return;
        }
    }
    ctx->pc = 0x248AC4u;
    // 0x248ac4: 0x0  nop
    ctx->pc = 0x248ac4u;
    // NOP
    ctx->pc = 0x248ac8u;
}
