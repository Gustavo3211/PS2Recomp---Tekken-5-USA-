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

// Function: sub_003230D8
// Address: 0x3230d8 - 0x323138
void sub_003230D8_0x3230d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003230D8_0x3230d8");
#endif

    switch (ctx->pc) {
        case 0x323120u: goto label_323120;
        default: break;
    }

    ctx->pc = 0x3230d8u;

    // 0x3230d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3230d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3230dc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3230dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3230e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3230e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3230e4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x3230e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x3230e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3230e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3230ec: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x3230ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x3230f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3230f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3230f4: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x3230f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x3230f8: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x3230f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x3230fc: 0x2442ce28  addiu       $v0, $v0, -0x31D8
    ctx->pc = 0x3230fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954536));
    // 0x323100: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x323100u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x400414u));
    // 0x323104: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x323104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323108: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x323108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x32310c: 0xac900014  sw          $s0, 0x14($a0)
    ctx->pc = 0x32310cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 16));
    // 0x323110: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x323110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x323114: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x323114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x323118: 0xc0c8c4e  jal         func_323138
    ctx->pc = 0x323118u;
    SET_GPR_U32(ctx, 31, 0x323120u);
    ctx->pc = 0x32311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323118u;
    // 0x32311c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323138u, 0x323118u, 0x323120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323120u;
label_323120:
    // 0x323120: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x323120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x323124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32312c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32312cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323130: 0x3e00008  jr          $ra
    ctx->pc = 0x323130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323130u;
        // 0x323134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323138u;
}
