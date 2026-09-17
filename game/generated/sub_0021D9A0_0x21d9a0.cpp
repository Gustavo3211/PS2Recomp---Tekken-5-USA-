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

// Function: sub_0021D9A0
// Address: 0x21d9a0 - 0x21da10
void sub_0021D9A0_0x21d9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D9A0_0x21d9a0");
#endif

    switch (ctx->pc) {
        case 0x21d9b8u: goto label_21d9b8;
        case 0x21d9c4u: goto label_21d9c4;
        case 0x21d9e0u: goto label_21d9e0;
        case 0x21d9f8u: goto label_21d9f8;
        default: break;
    }

    ctx->pc = 0x21d9a0u;

    // 0x21d9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d9a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d9a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d9ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d9b0: 0xc086418  jal         func_219060
    ctx->pc = 0x21D9B0u;
    SET_GPR_U32(ctx, 31, 0x21D9B8u);
    ctx->pc = 0x21D9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D9B0u;
    // 0x21d9b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219060u, 0x21D9B0u, 0x21D9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9B8u;
label_21d9b8:
    // 0x21d9b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21d9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9bc: 0xc086418  jal         func_219060
    ctx->pc = 0x21D9BCu;
    SET_GPR_U32(ctx, 31, 0x21D9C4u);
    ctx->pc = 0x21D9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D9BCu;
    // 0x21d9c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219060u, 0x21D9BCu, 0x21D9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9C4u;
label_21d9c4:
    // 0x21d9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9c8: 0x2e10001e  sltiu       $s0, $s0, 0x1E
    ctx->pc = 0x21d9c8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x21d9cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21d9ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9d0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D9D0u;
    {
        const bool branch_taken_0x21d9d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9D0u;
        // 0x21d9d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9d0) {
            ctx->pc = 0x21D9E0u;
            goto label_21d9e0;
        }
    }
    ctx->pc = 0x21D9D8u;
    // 0x21d9d8: 0xc08763a  jal         func_21D8E8
    ctx->pc = 0x21D9D8u;
    SET_GPR_U32(ctx, 31, 0x21D9E0u);
    ctx->pc = 0x21D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D8E8u, 0x21D9D8u, 0x21D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9E0u;
label_21d9e0:
    // 0x21d9e0: 0x2e22001e  sltiu       $v0, $s1, 0x1E
    ctx->pc = 0x21d9e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x21d9e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D9E4u;
    {
        const bool branch_taken_0x21d9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9E4u;
        // 0x21d9e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9e4) {
            ctx->pc = 0x21D9FCu;
            goto label_21d9fc;
        }
    }
    ctx->pc = 0x21D9ECu;
    // 0x21d9ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9f0: 0xc08763a  jal         func_21D8E8
    ctx->pc = 0x21D9F0u;
    SET_GPR_U32(ctx, 31, 0x21D9F8u);
    ctx->pc = 0x21D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D9F0u;
    // 0x21d9f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D8E8u, 0x21D9F0u, 0x21D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9F8u;
label_21d9f8:
    // 0x21d9f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d9f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d9fc:
    // 0x21d9fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d9fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21da00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21da00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21da04: 0x3e00008  jr          $ra
    ctx->pc = 0x21DA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA04u;
        // 0x21da08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DA0Cu;
    // 0x21da0c: 0x0  nop
    ctx->pc = 0x21da0cu;
    // NOP
    ctx->pc = 0x21da10u;
}
