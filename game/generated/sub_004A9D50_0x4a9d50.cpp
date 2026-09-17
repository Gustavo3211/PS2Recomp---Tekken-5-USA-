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

// Function: sub_004A9D50
// Address: 0x4a9d50 - 0x4a9e80
void sub_004A9D50_0x4a9d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9D50_0x4a9d50");
#endif

    switch (ctx->pc) {
        case 0x4a9de8u: goto label_4a9de8;
        case 0x4a9df8u: goto label_4a9df8;
        case 0x4a9e08u: goto label_4a9e08;
        case 0x4a9e14u: goto label_4a9e14;
        default: break;
    }

    ctx->pc = 0x4a9d50u;

    // 0x4a9d50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a9d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a9d54: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4a9d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4a9d58: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4a9d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4a9d5c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4a9d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4a9d60: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4a9d60u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4a9d64: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4a9d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4a9d68: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4a9d68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9d6c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4a9d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4a9d70: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x4a9d70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9d74: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4a9d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4a9d78: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4a9d78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9d7c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4a9d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4a9d80: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x4a9d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4a9d84: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4a9d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4a9d88: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4a9d88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9d8c: 0x8eca0000  lw          $t2, 0x0($s6)
    ctx->pc = 0x4a9d8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a9d90: 0x8488000e  lh          $t0, 0xE($a0)
    ctx->pc = 0x4a9d90u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x4a9d94: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a9d94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4a9d98: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x4a9d98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4a9d9c: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x4a9d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x4a9da0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x4a9da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a9da4: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x4a9da4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4a9da8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4a9da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a9dac: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a9dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a9db0: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x4a9db0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a9db4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a9db4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4a9db8: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4a9db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4a9dbc: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4a9dbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4a9dc0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4a9dc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4a9dc4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a9dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a9dc8: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x4a9dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x4a9dcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a9dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9dd0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4a9dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4a9dd4: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x4a9dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x4a9dd8: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4a9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4a9ddc: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x4a9ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x4a9de0: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4A9DE0u;
    SET_GPR_U32(ctx, 31, 0x4A9DE8u);
    ctx->pc = 0x4A9DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9DE0u;
    // 0x4a9de4: 0x8e930000  lw          $s3, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4A9DE0u, 0x4A9DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9DE8u;
label_4a9de8:
    // 0x4a9de8: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x4a9de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4a9dec: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x4a9decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4a9df0: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4A9DF0u;
    SET_GPR_U32(ctx, 31, 0x4A9DF8u);
    ctx->pc = 0x4A9DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9DF0u;
    // 0x4a9df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4A9DF0u, 0x4A9DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9DF8u;
label_4a9df8:
    // 0x4a9df8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4a9df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a9dfc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a9dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9e00: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4A9E00u;
    SET_GPR_U32(ctx, 31, 0x4A9E08u);
    ctx->pc = 0x4A9E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9E00u;
    // 0x4a9e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4A9E00u, 0x4A9E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9E08u;
label_4a9e08:
    // 0x4a9e08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a9e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9e0c: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4A9E0Cu;
    SET_GPR_U32(ctx, 31, 0x4A9E14u);
    ctx->pc = 0x4A9E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9E0Cu;
    // 0x4a9e10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4A9E0Cu, 0x4A9E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9E14u;
label_4a9e14:
    // 0x4a9e14: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x4a9e14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
    // 0x4a9e18: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4a9e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a9e1c: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x4a9e1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a9e20: 0x87a50010  lh          $a1, 0x10($sp)
    ctx->pc = 0x4a9e20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9e24: 0x87a4000c  lh          $a0, 0xC($sp)
    ctx->pc = 0x4a9e24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a9e28: 0x87a60000  lh          $a2, 0x0($sp)
    ctx->pc = 0x4a9e28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9e2c: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4a9e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4a9e30: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4a9e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9e34: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x4a9e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4a9e38: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4a9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a9e3c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4a9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4a9e40: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4a9e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4a9e44: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4a9e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a9e48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a9e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a9e4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a9e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a9e50: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a9e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a9e54: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4a9e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4a9e58: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4a9e58u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4a9e5c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4a9e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a9e60: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4a9e60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4a9e64: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4a9e64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a9e68: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4a9e68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a9e6c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4a9e6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a9e70: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4a9e70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a9e74: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4a9e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4a9e78: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9E78u;
        // 0x4a9e7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9E80u;
}
