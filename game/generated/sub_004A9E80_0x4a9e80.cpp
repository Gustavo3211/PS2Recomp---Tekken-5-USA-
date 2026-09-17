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

// Function: sub_004A9E80
// Address: 0x4a9e80 - 0x4a9fb0
void sub_004A9E80_0x4a9e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9E80_0x4a9e80");
#endif

    switch (ctx->pc) {
        case 0x4a9f18u: goto label_4a9f18;
        case 0x4a9f28u: goto label_4a9f28;
        case 0x4a9f38u: goto label_4a9f38;
        case 0x4a9f44u: goto label_4a9f44;
        default: break;
    }

    ctx->pc = 0x4a9e80u;

    // 0x4a9e80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a9e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a9e84: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4a9e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4a9e88: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4a9e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4a9e8c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4a9e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4a9e90: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4a9e90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4a9e94: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4a9e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4a9e98: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4a9e98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9e9c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4a9e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4a9ea0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4a9ea0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9ea4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4a9ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4a9ea8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x4a9ea8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9eac: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4a9eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4a9eb0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x4a9eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4a9eb4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4a9eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4a9eb8: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x4a9eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9ebc: 0x8ecb0000  lw          $t3, 0x0($s6)
    ctx->pc = 0x4a9ebcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a9ec0: 0x84890012  lh          $t1, 0x12($a0)
    ctx->pc = 0x4a9ec0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x4a9ec4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a9ec4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4a9ec8: 0x84820010  lh          $v0, 0x10($a0)
    ctx->pc = 0x4a9ec8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a9ecc: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x4a9eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x4a9ed0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4a9ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a9ed4: 0x1324825  or          $t1, $t1, $s2
    ctx->pc = 0x4a9ed4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x4a9ed8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4a9ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a9edc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a9edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a9ee0: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x4a9ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a9ee4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a9ee4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4a9ee8: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4a9ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4a9eec: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4a9eecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4a9ef0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a9ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a9ef4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a9ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9ef8: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x4a9ef8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x4a9efc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4a9efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4a9f00: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x4a9f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x4a9f04: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4a9f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x4a9f08: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4a9f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4a9f0c: 0xafab000c  sw          $t3, 0xC($sp)
    ctx->pc = 0x4a9f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x4a9f10: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4A9F10u;
    SET_GPR_U32(ctx, 31, 0x4A9F18u);
    ctx->pc = 0x4A9F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9F10u;
    // 0x4a9f14: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4A9F10u, 0x4A9F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9F18u;
label_4a9f18:
    // 0x4a9f18: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x4a9f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4a9f1c: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x4a9f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4a9f20: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4A9F20u;
    SET_GPR_U32(ctx, 31, 0x4A9F28u);
    ctx->pc = 0x4A9F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9F20u;
    // 0x4a9f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4A9F20u, 0x4A9F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9F28u;
label_4a9f28:
    // 0x4a9f28: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4a9f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a9f2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a9f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9f30: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4A9F30u;
    SET_GPR_U32(ctx, 31, 0x4A9F38u);
    ctx->pc = 0x4A9F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9F30u;
    // 0x4a9f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4A9F30u, 0x4A9F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9F38u;
label_4a9f38:
    // 0x4a9f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a9f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9f3c: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4A9F3Cu;
    SET_GPR_U32(ctx, 31, 0x4A9F44u);
    ctx->pc = 0x4A9F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9F3Cu;
    // 0x4a9f40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4A9F3Cu, 0x4A9F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9F44u;
label_4a9f44:
    // 0x4a9f44: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4a9f44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9f48: 0x87a5000c  lh          $a1, 0xC($sp)
    ctx->pc = 0x4a9f48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a9f4c: 0x87a30010  lh          $v1, 0x10($sp)
    ctx->pc = 0x4a9f4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9f50: 0x87a60004  lh          $a2, 0x4($sp)
    ctx->pc = 0x4a9f50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a9f54: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4a9f54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4a9f58: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x4a9f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a9f5c: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x4a9f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4a9f60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4a9f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9f64: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4a9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4a9f68: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4a9f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4a9f6c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4a9f6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a9f70: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a9f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a9f74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a9f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a9f78: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4a9f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4a9f7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a9f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a9f80: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4a9f80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4a9f84: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4a9f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a9f88: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x4a9f88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x4a9f8c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4a9f8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a9f90: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x4a9f90u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x4a9f94: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4a9f94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a9f98: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4a9f98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a9f9c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4a9f9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a9fa0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4a9fa0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a9fa4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4a9fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4a9fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9FA8u;
        // 0x4a9fac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9FB0u;
}
