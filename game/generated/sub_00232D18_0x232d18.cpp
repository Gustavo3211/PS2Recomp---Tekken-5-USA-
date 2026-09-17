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

// Function: sub_00232D18
// Address: 0x232d18 - 0x232d80
void sub_00232D18_0x232d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232D18_0x232d18");
#endif

    switch (ctx->pc) {
        case 0x232d3cu: goto label_232d3c;
        case 0x232d54u: goto label_232d54;
        default: break;
    }

    ctx->pc = 0x232d18u;

    // 0x232d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232d20: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x232d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232d28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x232d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x232d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x232d30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x232d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x232d34: 0xc08cb30  jal         func_232CC0
    ctx->pc = 0x232D34u;
    SET_GPR_U32(ctx, 31, 0x232D3Cu);
    ctx->pc = 0x232D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D34u;
    // 0x232d38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232CC0u, 0x232D34u, 0x232D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D3Cu;
label_232d3c:
    // 0x232d3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x232d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232D44u;
    {
        const bool branch_taken_0x232d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D44u;
        // 0x232d48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d44) {
            ctx->pc = 0x232D5Cu;
            goto label_232d5c;
        }
    }
    ctx->pc = 0x232D4Cu;
    // 0x232d4c: 0xc08cb30  jal         func_232CC0
    ctx->pc = 0x232D4Cu;
    SET_GPR_U32(ctx, 31, 0x232D54u);
    ctx->pc = 0x232CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232CC0u, 0x232D4Cu, 0x232D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D54u;
label_232d54:
    // 0x232d54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232D54u;
    {
        const bool branch_taken_0x232d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D54u;
        // 0x232d58: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d54) {
            ctx->pc = 0x232D64u;
            goto label_232d64;
        }
    }
    ctx->pc = 0x232D5Cu;
label_232d5c:
    // 0x232d5c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x232d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232d60: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x232d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_232d64:
    // 0x232d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232d68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232d6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232d6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232d70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x232d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x232d74: 0x3e00008  jr          $ra
    ctx->pc = 0x232D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D74u;
        // 0x232d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232D7Cu;
    // 0x232d7c: 0x0  nop
    ctx->pc = 0x232d7cu;
    // NOP
    ctx->pc = 0x232d80u;
}
