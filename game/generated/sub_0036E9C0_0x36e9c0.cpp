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

// Function: sub_0036E9C0
// Address: 0x36e9c0 - 0x36ea90
void sub_0036E9C0_0x36e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E9C0_0x36e9c0");
#endif

    switch (ctx->pc) {
        case 0x36ea10u: goto label_36ea10;
        case 0x36ea38u: goto label_36ea38;
        default: break;
    }

    ctx->pc = 0x36e9c0u;

    // 0x36e9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e9c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36e9c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36e9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36e9cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36e9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e9d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36e9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36e9d4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x36e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x36e9d8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x36e9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x36e9dc: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x36e9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x36e9e0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x36e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x36e9e4: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x36e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x36e9e8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36e9ec: 0x2442ece8  addiu       $v0, $v0, -0x1318
    ctx->pc = 0x36e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962408));
    // 0x36e9f0: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x36e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x36e9f4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36e9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36e9f8: 0x26040088  addiu       $a0, $s0, 0x88
    ctx->pc = 0x36e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x36e9fc: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x36e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x36ea00: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x36ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x36ea04: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x36ea04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x36ea08: 0xc0c1218  jal         func_304860
    ctx->pc = 0x36EA08u;
    SET_GPR_U32(ctx, 31, 0x36EA10u);
    ctx->pc = 0x36EA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA08u;
    // 0x36ea0c: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304860u, 0x36EA08u, 0x36EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA10u;
label_36ea10:
    // 0x36ea10: 0x2603015c  addiu       $v1, $s0, 0x15C
    ctx->pc = 0x36ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x36ea14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36ea18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36EA18u;
    {
        const bool branch_taken_0x36ea18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA18u;
        // 0x36ea1c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea18) {
            ctx->pc = 0x36EA38u;
            goto label_36ea38;
        }
    }
    ctx->pc = 0x36EA20u;
    // 0x36ea20: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ea24: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x36ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x36ea28: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36ea2c: 0x24840468  addiu       $a0, $a0, 0x468
    ctx->pc = 0x36ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1128));
    // 0x36ea30: 0xc048b90  jal         func_122E40
    ctx->pc = 0x36EA30u;
    SET_GPR_U32(ctx, 31, 0x36EA38u);
    ctx->pc = 0x36EA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA30u;
    // 0x36ea34: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x36EA30u, 0x36EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA38u;
label_36ea38:
    // 0x36ea38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ea38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ea3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36ea3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ea40: 0x3e00008  jr          $ra
    ctx->pc = 0x36EA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA40u;
        // 0x36ea44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EA48u;
    // 0x36ea48: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x36ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x36ea4c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36EA4Cu;
    {
        const bool branch_taken_0x36ea4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ea4c) {
            ctx->pc = 0x36EA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EA4Cu;
            // 0x36ea50: 0xac850078  sw          $a1, 0x78($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36EA54u;
            goto label_36ea54;
        }
    }
    ctx->pc = 0x36EA54u;
label_36ea54:
    // 0x36ea54: 0x3e00008  jr          $ra
    ctx->pc = 0x36EA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EA5Cu;
    // 0x36ea5c: 0x0  nop
    ctx->pc = 0x36ea5cu;
    // NOP
    // 0x36ea60: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x36ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x36ea64: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36EA64u;
    {
        const bool branch_taken_0x36ea64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ea64) {
            ctx->pc = 0x36EA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EA64u;
            // 0x36ea68: 0xac85007c  sw          $a1, 0x7C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36EA6Cu;
            goto label_36ea6c;
        }
    }
    ctx->pc = 0x36EA6Cu;
label_36ea6c:
    // 0x36ea6c: 0x3e00008  jr          $ra
    ctx->pc = 0x36EA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EA74u;
    // 0x36ea74: 0x0  nop
    ctx->pc = 0x36ea74u;
    // NOP
    // 0x36ea78: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x36ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x36ea7c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36EA7Cu;
    {
        const bool branch_taken_0x36ea7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ea7c) {
            ctx->pc = 0x36EA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EA7Cu;
            // 0x36ea80: 0xac850080  sw          $a1, 0x80($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36EA84u;
            goto label_36ea84;
        }
    }
    ctx->pc = 0x36EA84u;
label_36ea84:
    // 0x36ea84: 0x3e00008  jr          $ra
    ctx->pc = 0x36EA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EA8Cu;
    // 0x36ea8c: 0x0  nop
    ctx->pc = 0x36ea8cu;
    // NOP
    ctx->pc = 0x36ea90u;
}
