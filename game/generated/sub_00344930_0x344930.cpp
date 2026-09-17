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

// Function: sub_00344930
// Address: 0x344930 - 0x344978
void sub_00344930_0x344930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344930_0x344930");
#endif

    switch (ctx->pc) {
        case 0x344950u: goto label_344950;
        case 0x34495cu: goto label_34495c;
        default: break;
    }

    ctx->pc = 0x344930u;

    // 0x344930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34493c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34493cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344940: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x344940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x344944: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x344944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34494c: 0x0  nop
    ctx->pc = 0x34494cu;
    // NOP
label_344950:
    // 0x344950: 0x2610005c  addiu       $s0, $s0, 0x5C
    ctx->pc = 0x344950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x344954: 0xc0d1526  jal         func_345498
    ctx->pc = 0x344954u;
    SET_GPR_U32(ctx, 31, 0x34495Cu);
    ctx->pc = 0x344958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344954u;
    // 0x344958: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345498u, 0x344954u, 0x34495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34495Cu;
label_34495c:
    // 0x34495c: 0x621fffc  bgez        $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x34495Cu;
    {
        const bool branch_taken_0x34495c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x344960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34495Cu;
        // 0x344960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34495c) {
            ctx->pc = 0x344950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344950;
        }
    }
    ctx->pc = 0x344964u;
    // 0x344964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344968: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34496c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34496cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344970: 0x3e00008  jr          $ra
    ctx->pc = 0x344970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344970u;
        // 0x344974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344978u;
}
