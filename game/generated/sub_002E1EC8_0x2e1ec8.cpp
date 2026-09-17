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

// Function: sub_002E1EC8
// Address: 0x2e1ec8 - 0x2e1f68
void sub_002E1EC8_0x2e1ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1EC8_0x2e1ec8");
#endif

    switch (ctx->pc) {
        case 0x2e1f1cu: goto label_2e1f1c;
        case 0x2e1f28u: goto label_2e1f28;
        case 0x2e1f40u: goto label_2e1f40;
        default: break;
    }

    ctx->pc = 0x2e1ec8u;

    // 0x2e1ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e1ecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e1eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e1ed0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e1ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e1ed4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e1ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1ed8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e1ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e1edc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e1edcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1ee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1ee4: 0x26510074  addiu       $s1, $s2, 0x74
    ctx->pc = 0x2e1ee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x2e1ee8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e1ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e1eec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e1eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e1ef0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1EF0u;
    {
        const bool branch_taken_0x2e1ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ef0) {
            ctx->pc = 0x2E1EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1EF0u;
            // 0x2e1ef4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1F0Cu;
            goto label_2e1f0c;
        }
    }
    ctx->pc = 0x2E1EF8u;
    // 0x2e1ef8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e1efc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e1f00: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1F00u;
    {
        const bool branch_taken_0x2e1f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1f00) {
            ctx->pc = 0x2E1F14u;
            goto label_2e1f14;
        }
    }
    ctx->pc = 0x2E1F08u;
    // 0x2e1f08: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e1f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e1f0c:
    // 0x2e1f0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f10: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e1f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e1f14:
    // 0x2e1f14: 0xc0b7aaa  jal         func_2DEAA8
    ctx->pc = 0x2E1F14u;
    SET_GPR_U32(ctx, 31, 0x2E1F1Cu);
    ctx->pc = 0x2DEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAA8u, 0x2E1F14u, 0x2E1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1F1Cu;
label_2e1f1c:
    // 0x2e1f1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e1f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f20: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E1F20u;
    SET_GPR_U32(ctx, 31, 0x2E1F28u);
    ctx->pc = 0x2E1F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1F20u;
    // 0x2e1f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E1F20u, 0x2E1F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1F28u;
label_2e1f28:
    // 0x2e1f28: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x2e1f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2e1f2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e1f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e1f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f38: 0xc0b8bf8  jal         func_2E2FE0
    ctx->pc = 0x2E1F38u;
    SET_GPR_U32(ctx, 31, 0x2E1F40u);
    ctx->pc = 0x2E1F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1F38u;
    // 0x2e1f3c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2FE0u, 0x2E1F38u, 0x2E1F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1F40u;
label_2e1f40:
    // 0x2e1f40: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e1f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e1f44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e1f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1f48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e1f4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e1f4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e1f50: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e1f54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1f58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e1f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1f5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e1f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1f60: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F60u;
        // 0x2e1f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1F68u;
}
