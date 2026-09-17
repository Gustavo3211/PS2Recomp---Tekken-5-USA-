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

// Function: sub_0010FFB8
// Address: 0x10ffb8 - 0x110000
void sub_0010FFB8_0x10ffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FFB8_0x10ffb8");
#endif

    switch (ctx->pc) {
        case 0x10ffe8u: goto label_10ffe8;
        case 0x10fff0u: goto label_10fff0;
        default: break;
    }

    ctx->pc = 0x10ffb8u;

    // 0x10ffb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ffb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ffbc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ffbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ffc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ffc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ffc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ffc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ffc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ffcc: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10ffccu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10ffd0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10ffd4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10ffd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10ffd8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FFD8u;
    {
        const bool branch_taken_0x10ffd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ffd8) {
            ctx->pc = 0x10FFE8u;
            goto label_10ffe8;
        }
    }
    ctx->pc = 0x10FFE0u;
    // 0x10ffe0: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10FFE0u;
    SET_GPR_U32(ctx, 31, 0x10FFE8u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10FFE0u, 0x10FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFE8u;
label_10ffe8:
    // 0x10ffe8: 0xc043c40  jal         func_10F100
    ctx->pc = 0x10FFE8u;
    SET_GPR_U32(ctx, 31, 0x10FFF0u);
    ctx->pc = 0x10FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFE8u;
    // 0x10ffec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F100u, 0x10FFE8u, 0x10FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFF0u;
label_10fff0:
    // 0x10fff0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10fff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fff4: 0xf  sync
    ctx->pc = 0x10fff4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10fff8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FFF8u;
    {
        const bool branch_taken_0x10fff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFF8u;
        // 0x10fffc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fff8) {
            ctx->pc = 0x11000Cu;
            return;
        }
    }
    ctx->pc = 0x110000u;
}
