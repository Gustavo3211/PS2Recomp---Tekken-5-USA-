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

// Function: sub_002A50B8
// Address: 0x2a50b8 - 0x2a5120
void sub_002A50B8_0x2a50b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A50B8_0x2a50b8");
#endif

    switch (ctx->pc) {
        case 0x2a50d0u: goto label_2a50d0;
        case 0x2a50e8u: goto label_2a50e8;
        case 0x2a50f4u: goto label_2a50f4;
        case 0x2a50fcu: goto label_2a50fc;
        default: break;
    }

    ctx->pc = 0x2a50b8u;

    // 0x2a50b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a50b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a50bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a50bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a50c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a50c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a50c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a50c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a50c8: 0xc08b882  jal         func_22E208
    ctx->pc = 0x2A50C8u;
    SET_GPR_U32(ctx, 31, 0x2A50D0u);
    ctx->pc = 0x2A50CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A50C8u;
    // 0x2a50cc: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x2A50C8u, 0x2A50D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50D0u;
label_2a50d0:
    // 0x2a50d0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2a50d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2a50d4: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x2a50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2a50d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A50D8u;
    {
        const bool branch_taken_0x2a50d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A50D8u;
        // 0x2a50dc: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50d8) {
            ctx->pc = 0x2A50ECu;
            goto label_2a50ec;
        }
    }
    ctx->pc = 0x2A50E0u;
    // 0x2a50e0: 0xc08b882  jal         func_22E208
    ctx->pc = 0x2A50E0u;
    SET_GPR_U32(ctx, 31, 0x2A50E8u);
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x2A50E0u, 0x2A50E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50E8u;
label_2a50e8:
    // 0x2a50e8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2a50e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2a50ec:
    // 0x2a50ec: 0xc08b882  jal         func_22E208
    ctx->pc = 0x2A50ECu;
    SET_GPR_U32(ctx, 31, 0x2A50F4u);
    ctx->pc = 0x2A50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A50ECu;
    // 0x2a50f0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x2A50ECu, 0x2A50F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50F4u;
label_2a50f4:
    // 0x2a50f4: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x2A50F4u;
    SET_GPR_U32(ctx, 31, 0x2A50FCu);
    ctx->pc = 0x2A50F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A50F4u;
    // 0x2a50f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x2A50F4u, 0x2A50FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50FCu;
label_2a50fc:
    // 0x2a50fc: 0x8e04017c  lw          $a0, 0x17C($s0)
    ctx->pc = 0x2a50fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x2a5100: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A5100u;
    {
        const bool branch_taken_0x2a5100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5100u;
        // 0x2a5104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5100) {
            ctx->pc = 0x2A510Cu;
            goto label_2a510c;
        }
    }
    ctx->pc = 0x2A5108u;
    // 0x2a5108: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2a5108u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2a510c:
    // 0x2a510c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a510cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5110: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a5110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a5114: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5114u;
        // 0x2a5118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A511Cu;
    // 0x2a511c: 0x0  nop
    ctx->pc = 0x2a511cu;
    // NOP
    ctx->pc = 0x2a5120u;
}
