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

// Function: sub_002F97C0
// Address: 0x2f97c0 - 0x2f9820
void sub_002F97C0_0x2f97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F97C0_0x2f97c0");
#endif

    switch (ctx->pc) {
        case 0x2f9800u: goto label_2f9800;
        default: break;
    }

    ctx->pc = 0x2f97c0u;

    // 0x2f97c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f97c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f97c4: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2f97c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2f97c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f97c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f97cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f97ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f97d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f97d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f97d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f97d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f97d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f97d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f97dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f97dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f97e0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2f97e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2f97e4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2f97e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2f97e8: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2f97e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2f97ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f97ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f97f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f97f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f97f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f97f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f97f8: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x2F97F8u;
    SET_GPR_U32(ctx, 31, 0x2F9800u);
    ctx->pc = 0x2F97FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F97F8u;
    // 0x2f97fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x2F97F8u, 0x2F9800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9800u;
label_2f9800:
    // 0x2f9800: 0xae110164  sw          $s1, 0x164($s0)
    ctx->pc = 0x2f9800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 17));
    // 0x2f9804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f9808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f980c: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x2f980cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x2f9810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f9810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9818: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9818u;
        // 0x2f981c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9820u;
}
