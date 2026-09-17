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

// Function: sub_00119ED8
// Address: 0x119ed8 - 0x119f28
void sub_00119ED8_0x119ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119ED8_0x119ed8");
#endif

    switch (ctx->pc) {
        case 0x119ef0u: goto label_119ef0;
        case 0x119efcu: goto label_119efc;
        case 0x119f0cu: goto label_119f0c;
        default: break;
    }

    ctx->pc = 0x119ed8u;

    // 0x119ed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119ee0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119ee4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119ee8: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x119EE8u;
    SET_GPR_U32(ctx, 31, 0x119EF0u);
    ctx->pc = 0x119EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119EE8u;
    // 0x119eec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x119EE8u, 0x119EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EF0u;
label_119ef0:
    // 0x119ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ef4: 0xc04678a  jal         func_119E28
    ctx->pc = 0x119EF4u;
    SET_GPR_U32(ctx, 31, 0x119EFCu);
    ctx->pc = 0x119EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119EF4u;
    // 0x119ef8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119E28u, 0x119EF4u, 0x119EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EFCu;
label_119efc:
    // 0x119efc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119EFCu;
    {
        const bool branch_taken_0x119efc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EFCu;
        // 0x119f00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119efc) {
            ctx->pc = 0x119F0Cu;
            goto label_119f0c;
        }
    }
    ctx->pc = 0x119F04u;
    // 0x119f04: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x119F04u;
    SET_GPR_U32(ctx, 31, 0x119F0Cu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x119F04u, 0x119F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F0Cu;
label_119f0c:
    // 0x119f0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119f14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119f18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x119F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F1Cu;
        // 0x119f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119F24u;
    // 0x119f24: 0x0  nop
    ctx->pc = 0x119f24u;
    // NOP
    ctx->pc = 0x119f28u;
}
