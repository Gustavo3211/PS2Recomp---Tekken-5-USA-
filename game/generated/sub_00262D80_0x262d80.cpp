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

// Function: sub_00262D80
// Address: 0x262d80 - 0x262df8
void sub_00262D80_0x262d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262D80_0x262d80");
#endif

    switch (ctx->pc) {
        case 0x262da0u: goto label_262da0;
        case 0x262db0u: goto label_262db0;
        case 0x262dbcu: goto label_262dbc;
        case 0x262dc0u: goto label_262dc0;
        default: break;
    }

    ctx->pc = 0x262d80u;

    // 0x262d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262d84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x262d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x262d88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x262d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x262d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x262d90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x262d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x262d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x262d98: 0xc0849c0  jal         func_212700
    ctx->pc = 0x262D98u;
    SET_GPR_U32(ctx, 31, 0x262DA0u);
    ctx->pc = 0x262D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D98u;
    // 0x262d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x262D98u, 0x262DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262DA0u;
label_262da0:
    // 0x262da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262da4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262da8: 0xc098ae0  jal         func_262B80
    ctx->pc = 0x262DA8u;
    SET_GPR_U32(ctx, 31, 0x262DB0u);
    ctx->pc = 0x262DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262DA8u;
    // 0x262dac: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262B80u, 0x262DA8u, 0x262DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262DB0u;
label_262db0:
    // 0x262db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262db4: 0xc097084  jal         func_25C210
    ctx->pc = 0x262DB4u;
    SET_GPR_U32(ctx, 31, 0x262DBCu);
    ctx->pc = 0x262DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262DB4u;
    // 0x262db8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x262DB4u, 0x262DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262DBCu;
label_262dbc:
    // 0x262dbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262dc0:
    // 0x262dc0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x262dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x262dc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x262dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x262dc8: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x262dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x262dcc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x262dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x262dd0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x262dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262dd4: 0x28a40003  slti        $a0, $a1, 0x3
    ctx->pc = 0x262dd4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x262dd8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x262DD8u;
    {
        const bool branch_taken_0x262dd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x262DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DD8u;
        // 0x262ddc: 0xe4400030  swc1        $f0, 0x30($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x262dd8) {
            ctx->pc = 0x262DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262dc0;
        }
    }
    ctx->pc = 0x262DE0u;
    // 0x262de0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x262de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262de4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x262de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x262de8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x262de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262dec: 0x3e00008  jr          $ra
    ctx->pc = 0x262DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DECu;
        // 0x262df0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262DF4u;
    // 0x262df4: 0x0  nop
    ctx->pc = 0x262df4u;
    // NOP
    ctx->pc = 0x262df8u;
}
