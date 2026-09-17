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

// Function: sub_00240FE8
// Address: 0x240fe8 - 0x241028
void sub_00240FE8_0x240fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240FE8_0x240fe8");
#endif

    switch (ctx->pc) {
        case 0x241010u: goto label_241010;
        default: break;
    }

    ctx->pc = 0x240fe8u;

    // 0x240fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x240fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240ff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ff8: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x240ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x240ffc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x240ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x241000: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x241000u;
    {
        const bool branch_taken_0x241000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241000u;
        // 0x241004: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241000) {
            ctx->pc = 0x241018u;
            goto label_241018;
        }
    }
    ctx->pc = 0x241008u;
    // 0x241008: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x241008u;
    SET_GPR_U32(ctx, 31, 0x241010u);
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x241008u, 0x241010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241010u;
label_241010:
    // 0x241010: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x241010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x241014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241018:
    // 0x241018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24101c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24101cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x241020: 0x3e00008  jr          $ra
    ctx->pc = 0x241020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241020u;
        // 0x241024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241028u;
}
