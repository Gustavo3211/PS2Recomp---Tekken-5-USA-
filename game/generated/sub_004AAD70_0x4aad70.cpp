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

// Function: sub_004AAD70
// Address: 0x4aad70 - 0x4aaea0
void sub_004AAD70_0x4aad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AAD70_0x4aad70");
#endif

    switch (ctx->pc) {
        case 0x4aae08u: goto label_4aae08;
        case 0x4aae18u: goto label_4aae18;
        case 0x4aae28u: goto label_4aae28;
        case 0x4aae34u: goto label_4aae34;
        default: break;
    }

    ctx->pc = 0x4aad70u;

    // 0x4aad70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4aad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4aad74: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4aad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4aad78: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4aad78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4aad7c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4aad7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4aad80: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4aad80u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4aad84: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4aad84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4aad88: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4aad88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aad8c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4aad8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4aad90: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4aad90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4aad94: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4aad94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aad98: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4aad98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4aad9c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4aad9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aada0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4aada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4aada4: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x4aada4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4aada8: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x4aada8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aadac: 0x8ecb0000  lw          $t3, 0x0($s6)
    ctx->pc = 0x4aadacu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4aadb0: 0x8489002c  lh          $t1, 0x2C($a0)
    ctx->pc = 0x4aadb0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x4aadb4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4aadb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4aadb8: 0x8482002a  lh          $v0, 0x2A($a0)
    ctx->pc = 0x4aadb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x4aadbc: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x4aadbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x4aadc0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x4aadc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aadc4: 0x1324825  or          $t1, $t1, $s2
    ctx->pc = 0x4aadc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x4aadc8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4aadc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aadcc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4aadccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4aadd0: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x4aadd0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4aadd4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4aadd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4aadd8: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4aadd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4aaddc: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4aaddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x4aade0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4aade0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4aade4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4aade4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4aade8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4aade8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aadec: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x4aadecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x4aadf0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4aadf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4aadf4: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x4aadf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x4aadf8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4aadf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x4aadfc: 0xafab000c  sw          $t3, 0xC($sp)
    ctx->pc = 0x4aadfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x4aae00: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AAE00u;
    SET_GPR_U32(ctx, 31, 0x4AAE08u);
    ctx->pc = 0x4AAE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAE00u;
    // 0x4aae04: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AAE00u, 0x4AAE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAE08u;
label_4aae08:
    // 0x4aae08: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x4aae08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4aae0c: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x4aae0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4aae10: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AAE10u;
    SET_GPR_U32(ctx, 31, 0x4AAE18u);
    ctx->pc = 0x4AAE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAE10u;
    // 0x4aae14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AAE10u, 0x4AAE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAE18u;
label_4aae18:
    // 0x4aae18: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4aae18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4aae1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4aae1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aae20: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AAE20u;
    SET_GPR_U32(ctx, 31, 0x4AAE28u);
    ctx->pc = 0x4AAE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAE20u;
    // 0x4aae24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AAE20u, 0x4AAE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAE28u;
label_4aae28:
    // 0x4aae28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4aae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aae2c: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AAE2Cu;
    SET_GPR_U32(ctx, 31, 0x4AAE34u);
    ctx->pc = 0x4AAE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAE2Cu;
    // 0x4aae30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AAE2Cu, 0x4AAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAE34u;
label_4aae34:
    // 0x4aae34: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4aae34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aae38: 0x87a5000c  lh          $a1, 0xC($sp)
    ctx->pc = 0x4aae38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4aae3c: 0x87a40010  lh          $a0, 0x10($sp)
    ctx->pc = 0x4aae3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aae40: 0x87a60004  lh          $a2, 0x4($sp)
    ctx->pc = 0x4aae40u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aae44: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4aae44u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4aae48: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4aae48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4aae4c: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x4aae4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4aae50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4aae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aae54: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4aae54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4aae58: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4aae58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4aae5c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4aae5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aae60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aae60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aae64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4aae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4aae68: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4aae68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4aae6c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4aae6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4aae70: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4aae70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4aae74: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4aae74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aae78: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4aae78u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4aae7c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4aae7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4aae80: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x4aae80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x4aae84: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4aae84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4aae88: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4aae88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4aae8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4aae8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4aae90: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4aae90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4aae94: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4aae94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4aae98: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAE98u;
        // 0x4aae9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAEA0u;
}
