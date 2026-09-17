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

// Function: sub_0011CBF0
// Address: 0x11cbf0 - 0x11cc88
void sub_0011CBF0_0x11cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CBF0_0x11cbf0");
#endif

    switch (ctx->pc) {
        case 0x11cc04u: goto label_11cc04;
        case 0x11cc44u: goto label_11cc44;
        case 0x11cc58u: goto label_11cc58;
        case 0x11cc74u: goto label_11cc74;
        default: break;
    }

    ctx->pc = 0x11cbf0u;

    // 0x11cbf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11cbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11cbf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cbf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11cbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11cbfc: 0xc0470b2  jal         func_11C2C8
    ctx->pc = 0x11CBFCu;
    SET_GPR_U32(ctx, 31, 0x11CC04u);
    ctx->pc = 0x11CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBFCu;
    // 0x11cc00: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C2C8u, 0x11CBFCu, 0x11CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC04u;
label_11cc04:
    // 0x11cc04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CC04u;
    {
        const bool branch_taken_0x11cc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC04u;
        // 0x11cc08: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc04) {
            ctx->pc = 0x11CC14u;
            goto label_11cc14;
        }
    }
    ctx->pc = 0x11CC0Cu;
    // 0x11cc0c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11CC0Cu;
    {
        const bool branch_taken_0x11cc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC0Cu;
        // 0x11cc10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc0c) {
            ctx->pc = 0x11CC78u;
            goto label_11cc78;
        }
    }
    ctx->pc = 0x11CC14u;
label_11cc14:
    // 0x11cc14: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x11cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x11cc18: 0x245039c0  addiu       $s0, $v0, 0x39C0
    ctx->pc = 0x11cc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14784));
    // 0x11cc1c: 0x24844340  addiu       $a0, $a0, 0x4340
    ctx->pc = 0x11cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17216));
    // 0x11cc20: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11cc24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11cc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11cc28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11cc28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11cc2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11cc30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc34: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11cc34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc38: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11cc38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cc3c: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x11CC3Cu;
    SET_GPR_U32(ctx, 31, 0x11CC44u);
    ctx->pc = 0x11CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC3Cu;
    // 0x11cc40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x11CC3Cu, 0x11CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC44u;
label_11cc44:
    // 0x11cc44: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11CC44u;
    {
        const bool branch_taken_0x11cc44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC44u;
        // 0x11cc48: 0x3c030013  lui         $v1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc44) {
            ctx->pc = 0x11CC60u;
            goto label_11cc60;
        }
    }
    ctx->pc = 0x11CC4Cu;
    // 0x11cc4c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11cc50: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x11CC50u;
    SET_GPR_U32(ctx, 31, 0x11CC58u);
    ctx->pc = 0x11CC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC50u;
    // 0x11cc54: 0x8c4427ec  lw          $a0, 0x27EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x11CC50u, 0x11CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC58u;
label_11cc58:
    // 0x11cc58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11CC58u;
    {
        const bool branch_taken_0x11cc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC58u;
        // 0x11cc5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc58) {
            ctx->pc = 0x11CC78u;
            goto label_11cc78;
        }
    }
    ctx->pc = 0x11CC60u;
label_11cc60:
    // 0x11cc60: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11cc64: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x11cc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x11cc68: 0x8c6427ec  lw          $a0, 0x27EC($v1)
    ctx->pc = 0x11cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10220)));
    // 0x11cc6c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x11CC6Cu;
    SET_GPR_U32(ctx, 31, 0x11CC74u);
    ctx->pc = 0x11CC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC6Cu;
    // 0x11cc70: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x11CC6Cu, 0x11CC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC74u;
label_11cc74:
    // 0x11cc74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11cc74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11cc78:
    // 0x11cc78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11cc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cc7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11cc7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cc80: 0x3e00008  jr          $ra
    ctx->pc = 0x11CC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC80u;
        // 0x11cc84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CC88u;
}
