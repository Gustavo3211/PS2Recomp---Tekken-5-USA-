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

// Function: sub_00308AD0
// Address: 0x308ad0 - 0x308b20
void sub_00308AD0_0x308ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308AD0_0x308ad0");
#endif

    switch (ctx->pc) {
        case 0x308b08u: goto label_308b08;
        case 0x308b10u: goto label_308b10;
        default: break;
    }

    ctx->pc = 0x308ad0u;

    // 0x308ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308ad4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x308ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308ad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308adc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x308adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308ae0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x308ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x308ae4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x308ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x308ae8: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x308ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x308aec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x308aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308af0: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x308af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x308af4: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x308af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x308af8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x308af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x308afc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x308afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x308b00: 0xc09d96c  jal         func_2765B0
    ctx->pc = 0x308B00u;
    SET_GPR_U32(ctx, 31, 0x308B08u);
    ctx->pc = 0x308B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B00u;
    // 0x308b04: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2765B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765B0u, 0x308B00u, 0x308B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B08u;
label_308b08:
    // 0x308b08: 0xc0af38c  jal         func_2BCE30
    ctx->pc = 0x308B08u;
    SET_GPR_U32(ctx, 31, 0x308B10u);
    ctx->pc = 0x308B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B08u;
    // 0x308b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCE30u, 0x308B08u, 0x308B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B10u;
label_308b10:
    // 0x308b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308b14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x308b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x308b18: 0x3e00008  jr          $ra
    ctx->pc = 0x308B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B18u;
        // 0x308b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308B20u;
}
