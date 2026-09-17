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

// Function: sub_0036C728
// Address: 0x36c728 - 0x36c778
void sub_0036C728_0x36c728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C728_0x36c728");
#endif

    switch (ctx->pc) {
        case 0x36c74cu: goto label_36c74c;
        case 0x36c764u: goto label_36c764;
        default: break;
    }

    ctx->pc = 0x36c728u;

    // 0x36c728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c72c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36c730: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c734: 0x24506f78  addiu       $s0, $v0, 0x6F78
    ctx->pc = 0x36c734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28536));
    // 0x36c738: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36c738u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6F78u));
    // 0x36c73c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C73Cu;
    {
        const bool branch_taken_0x36c73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C73Cu;
        // 0x36c740: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c73c) {
            ctx->pc = 0x36C764u;
            goto label_36c764;
        }
    }
    ctx->pc = 0x36C744u;
    // 0x36c744: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36C744u;
    SET_GPR_U32(ctx, 31, 0x36C74Cu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36C744u, 0x36C74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C74Cu;
label_36c74c:
    // 0x36c74c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36c74cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36c750: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36c750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36c754: 0x24a5d190  addiu       $a1, $a1, -0x2E70
    ctx->pc = 0x36c754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955408));
    // 0x36c758: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36c758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36c75c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36C75Cu;
    SET_GPR_U32(ctx, 31, 0x36C764u);
    ctx->pc = 0x36C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C75Cu;
    // 0x36c760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36C75Cu, 0x36C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C764u;
label_36c764:
    // 0x36c764: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c76c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c770: 0x3e00008  jr          $ra
    ctx->pc = 0x36C770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C770u;
        // 0x36c774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C778u;
}
