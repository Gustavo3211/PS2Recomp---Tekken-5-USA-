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

// Function: sub_0029DC80
// Address: 0x29dc80 - 0x29dd10
void sub_0029DC80_0x29dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DC80_0x29dc80");
#endif

    switch (ctx->pc) {
        case 0x29dca4u: goto label_29dca4;
        case 0x29dcbcu: goto label_29dcbc;
        case 0x29dcd0u: goto label_29dcd0;
        default: break;
    }

    ctx->pc = 0x29dc80u;

    // 0x29dc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29dc84: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29dc88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29dc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29dc8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29dc8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29dc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29dc94: 0x24a5c408  addiu       $a1, $a1, -0x3BF8
    ctx->pc = 0x29dc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951944));
    // 0x29dc98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29dc9c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29DC9Cu;
    SET_GPR_U32(ctx, 31, 0x29DCA4u);
    ctx->pc = 0x29DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DC9Cu;
    // 0x29dca0: 0x8e300154  lw          $s0, 0x154($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29DC9Cu, 0x29DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCA4u;
label_29dca4:
    // 0x29dca4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29dca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29dca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29dca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dcac: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x29dcacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x29dcb0: 0x24a5c418  addiu       $a1, $a1, -0x3BE8
    ctx->pc = 0x29dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951960));
    // 0x29dcb4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29DCB4u;
    SET_GPR_U32(ctx, 31, 0x29DCBCu);
    ctx->pc = 0x29DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DCB4u;
    // 0x29dcb8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29DCB4u, 0x29DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCBCu;
label_29dcbc:
    // 0x29dcbc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29dcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29dcc0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x29dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x29dcc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29dcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dcc8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29DCC8u;
    SET_GPR_U32(ctx, 31, 0x29DCD0u);
    ctx->pc = 0x29DCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DCC8u;
    // 0x29dccc: 0x24a5c430  addiu       $a1, $a1, -0x3BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29DCC8u, 0x29DCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCD0u;
label_29dcd0:
    // 0x29dcd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29dcd4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x29dcd8: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x29dcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29dcdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29dcdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29dce0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29dce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29dce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29dce8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x29dce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29dcec: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29dcf0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29dcf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29dcf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29dcf8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29dcfc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x29dcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29dd00: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29dd04: 0x3e00008  jr          $ra
    ctx->pc = 0x29DD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD04u;
        // 0x29dd08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DD0Cu;
    // 0x29dd0c: 0x0  nop
    ctx->pc = 0x29dd0cu;
    // NOP
    ctx->pc = 0x29dd10u;
}
