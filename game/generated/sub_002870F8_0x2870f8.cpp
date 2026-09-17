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

// Function: sub_002870F8
// Address: 0x2870f8 - 0x287158
void sub_002870F8_0x2870f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002870F8_0x2870f8");
#endif

    switch (ctx->pc) {
        case 0x287124u: goto label_287124;
        case 0x287140u: goto label_287140;
        default: break;
    }

    ctx->pc = 0x2870f8u;

    // 0x2870f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2870f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2870fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2870fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x287100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287104: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x287104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x287108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x287108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28710c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x28710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x287110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x287110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x287114: 0x5c2021  addu        $a0, $v0, $gp
    ctx->pc = 0x287114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x287118: 0x8c84b318  lw          $a0, -0x4CE8($a0)
    ctx->pc = 0x287118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947608)));
    // 0x28711c: 0xc0d5049  jal         func_354124
    ctx->pc = 0x28711Cu;
    SET_GPR_U32(ctx, 31, 0x287124u);
    ctx->pc = 0x287120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28711Cu;
    // 0x287120: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354124u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354124u, 0x28711Cu, 0x287124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287124u;
label_287124:
    // 0x287124: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x287124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x287128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28712c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28712cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x287130: 0x7c0821  addu        $at, $v1, $gp
    ctx->pc = 0x287130u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x287134: 0xac20b300  sw          $zero, -0x4D00($at)
    ctx->pc = 0x287134u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947584), GPR_U32(ctx, 0));
    // 0x287138: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x287138u;
    SET_GPR_U32(ctx, 31, 0x287140u);
    ctx->pc = 0x28713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287138u;
    // 0x28713c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x287138u, 0x287140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287140u;
label_287140:
    // 0x287140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287144: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x287144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x287148: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x287148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28714c: 0x3e00008  jr          $ra
    ctx->pc = 0x28714Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28714Cu;
        // 0x287150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28714Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287154u;
    // 0x287154: 0x0  nop
    ctx->pc = 0x287154u;
    // NOP
    ctx->pc = 0x287158u;
}
