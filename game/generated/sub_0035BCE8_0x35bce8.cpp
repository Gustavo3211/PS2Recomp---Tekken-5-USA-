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

// Function: sub_0035BCE8
// Address: 0x35bce8 - 0x35bd58
void sub_0035BCE8_0x35bce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BCE8_0x35bce8");
#endif

    switch (ctx->pc) {
        case 0x35bd10u: goto label_35bd10;
        case 0x35bd48u: goto label_35bd48;
        default: break;
    }

    ctx->pc = 0x35bce8u;

    // 0x35bce8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x35bce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bcec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x35bcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bcf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35bcf4: 0x28c20012  slti        $v0, $a2, 0x12
    ctx->pc = 0x35bcf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x35bcf8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35BCF8u;
    {
        const bool branch_taken_0x35bcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BCF8u;
        // 0x35bcfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bcf8) {
            ctx->pc = 0x35BD18u;
            goto label_35bd18;
        }
    }
    ctx->pc = 0x35BD00u;
    // 0x35bd00: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35bd04: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x35bd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bd08: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35BD08u;
    SET_GPR_U32(ctx, 31, 0x35BD10u);
    ctx->pc = 0x35BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BD08u;
    // 0x35bd0c: 0x248456a8  addiu       $a0, $a0, 0x56A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35BD08u, 0x35BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BD10u;
label_35bd10:
    // 0x35bd10: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35BD10u;
    {
        const bool branch_taken_0x35bd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BD10u;
        // 0x35bd14: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bd10) {
            ctx->pc = 0x35BD6Cu;
            return;
        }
    }
    ctx->pc = 0x35BD18u;
label_35bd18:
    // 0x35bd18: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x35bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x35bd1c: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x35bd1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x35bd20: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x35BD20u;
    {
        const bool branch_taken_0x35bd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bd20) {
            ctx->pc = 0x35BD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BD20u;
            // 0x35bd24: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BD5Cu;
            return;
        }
    }
    ctx->pc = 0x35BD28u;
    // 0x35bd28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x35bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35bd2c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x35bd30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35bd34: 0x8c6356e0  lw          $v1, 0x56E0($v1)
    ctx->pc = 0x35bd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22240)));
    // 0x35bd38: 0x600008  jr          $v1
    ctx->pc = 0x35BD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x35BD40u: goto label_35bd40;
            case 0x35BD50u: goto label_35bd50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BD38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x35BD40u;
label_35bd40:
    // 0x35bd40: 0xc0d74c8  jal         func_35D320
    ctx->pc = 0x35BD40u;
    SET_GPR_U32(ctx, 31, 0x35BD48u);
    ctx->pc = 0x35BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BD40u;
    // 0x35bd44: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D320u, 0x35BD40u, 0x35BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BD48u;
label_35bd48:
    // 0x35bd48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35BD48u;
    {
        const bool branch_taken_0x35bd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BD48u;
        // 0x35bd4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bd48) {
            ctx->pc = 0x35BD6Cu;
            return;
        }
    }
    ctx->pc = 0x35BD50u;
label_35bd50:
    // 0x35bd50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35BD50u;
    {
        const bool branch_taken_0x35bd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BD50u;
        // 0x35bd54: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bd50) {
            ctx->pc = 0x35BD68u;
            return;
        }
    }
    ctx->pc = 0x35BD58u;
}
