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

// Function: sub_002FD988
// Address: 0x2fd988 - 0x2fd9f8
void sub_002FD988_0x2fd988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD988_0x2fd988");
#endif

    switch (ctx->pc) {
        case 0x2fd9a8u: goto label_2fd9a8;
        case 0x2fd9b8u: goto label_2fd9b8;
        case 0x2fd9c0u: goto label_2fd9c0;
        case 0x2fd9dcu: goto label_2fd9dc;
        default: break;
    }

    ctx->pc = 0x2fd988u;

    // 0x2fd988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fd988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fd98c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fd98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fd990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fd994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fd998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fd998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fd99c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2fd99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2fd9a0: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2FD9A0u;
    SET_GPR_U32(ctx, 31, 0x2FD9A8u);
    ctx->pc = 0x2FD9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD9A0u;
    // 0x2fd9a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2FD9A0u, 0x2FD9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD9A8u;
label_2fd9a8:
    // 0x2fd9a8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2fd9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2fd9ac: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FD9ACu;
    {
        const bool branch_taken_0x2fd9ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FD9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD9ACu;
        // 0x2fd9b0: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd9ac) {
            ctx->pc = 0x2FD9D4u;
            goto label_2fd9d4;
        }
    }
    ctx->pc = 0x2FD9B4u;
    // 0x2fd9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fd9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fd9b8:
    // 0x2fd9b8: 0xc0bf49c  jal         func_2FD270
    ctx->pc = 0x2FD9B8u;
    SET_GPR_U32(ctx, 31, 0x2FD9C0u);
    ctx->pc = 0x2FD9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD9B8u;
    // 0x2fd9bc: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD270u, 0x2FD9B8u, 0x2FD9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD9C0u;
label_2fd9c0:
    // 0x2fd9c0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2fd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2fd9c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fd9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fd9c8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2fd9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fd9cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FD9CCu;
    {
        const bool branch_taken_0x2fd9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD9CCu;
        // 0x2fd9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd9cc) {
            ctx->pc = 0x2FD9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd9b8;
        }
    }
    ctx->pc = 0x2FD9D4u;
label_2fd9d4:
    // 0x2fd9d4: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2FD9D4u;
    SET_GPR_U32(ctx, 31, 0x2FD9DCu);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2FD9D4u, 0x2FD9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD9DCu;
label_2fd9dc:
    // 0x2fd9dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fd9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd9e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fd9e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fd9e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fd9e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd9e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2fd9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fd9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD9ECu;
        // 0x2fd9f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD9F4u;
    // 0x2fd9f4: 0x0  nop
    ctx->pc = 0x2fd9f4u;
    // NOP
    ctx->pc = 0x2fd9f8u;
}
