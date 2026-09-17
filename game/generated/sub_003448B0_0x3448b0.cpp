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

// Function: sub_003448B0
// Address: 0x3448b0 - 0x344930
void sub_003448B0_0x3448b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003448B0_0x3448b0");
#endif

    switch (ctx->pc) {
        case 0x3448e0u: goto label_3448e0;
        case 0x3448ecu: goto label_3448ec;
        case 0x344900u: goto label_344900;
        case 0x344914u: goto label_344914;
        default: break;
    }

    ctx->pc = 0x3448b0u;

    // 0x3448b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3448b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3448b4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3448b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3448b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3448b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3448bc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3448bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3448c0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3448c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3448c4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3448c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3448c8: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x3448c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x3448cc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3448CCu;
    {
        const bool branch_taken_0x3448cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3448D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448CCu;
        // 0x3448d0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3448cc) {
            ctx->pc = 0x344914u;
            goto label_344914;
        }
    }
    ctx->pc = 0x3448D4u;
    // 0x3448d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3448d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3448d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3448d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3448dc: 0x0  nop
    ctx->pc = 0x3448dcu;
    // NOP
label_3448e0:
    // 0x3448e0: 0x2610005c  addiu       $s0, $s0, 0x5C
    ctx->pc = 0x3448e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x3448e4: 0xc0d150c  jal         func_345430
    ctx->pc = 0x3448E4u;
    SET_GPR_U32(ctx, 31, 0x3448ECu);
    ctx->pc = 0x3448E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3448E4u;
    // 0x3448e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345430u, 0x3448E4u, 0x3448ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3448ECu;
label_3448ec:
    // 0x3448ec: 0x621fffc  bgez        $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3448ECu;
    {
        const bool branch_taken_0x3448ec = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3448F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448ECu;
        // 0x3448f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3448ec) {
            ctx->pc = 0x3448E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3448e0;
        }
    }
    ctx->pc = 0x3448F4u;
    // 0x3448f4: 0x8e4400c0  lw          $a0, 0xC0($s2)
    ctx->pc = 0x3448f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x3448f8: 0xc043d04  jal         func_10F410
    ctx->pc = 0x3448F8u;
    SET_GPR_U32(ctx, 31, 0x344900u);
    ctx->pc = 0x3448FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3448F8u;
    // 0x3448fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F410u, 0x3448F8u, 0x344900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344900u;
label_344900:
    // 0x344900: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x344900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344904: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x344904u;
    {
        const bool branch_taken_0x344904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344904) {
            ctx->pc = 0x344908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344904u;
            // 0x344908: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344918u;
            goto label_344918;
        }
    }
    ctx->pc = 0x34490Cu;
    // 0x34490c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34490Cu;
    SET_GPR_U32(ctx, 31, 0x344914u);
    ctx->pc = 0x344910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34490Cu;
    // 0x344910: 0x8e4400c0  lw          $a0, 0xC0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34490Cu, 0x344914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344914u;
label_344914:
    // 0x344914: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x344914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_344918:
    // 0x344918: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x344918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34491c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x34491cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x344920: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x344920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344924: 0x3e00008  jr          $ra
    ctx->pc = 0x344924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344924u;
        // 0x344928: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34492Cu;
    // 0x34492c: 0x0  nop
    ctx->pc = 0x34492cu;
    // NOP
    ctx->pc = 0x344930u;
}
