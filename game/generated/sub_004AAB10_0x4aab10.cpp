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

// Function: sub_004AAB10
// Address: 0x4aab10 - 0x4aad70
void sub_004AAB10_0x4aab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AAB10_0x4aab10");
#endif

    switch (ctx->pc) {
        case 0x4aaba8u: goto label_4aaba8;
        case 0x4aabb8u: goto label_4aabb8;
        case 0x4aabc8u: goto label_4aabc8;
        case 0x4aabd4u: goto label_4aabd4;
        case 0x4aac40u: goto label_4aac40;
        case 0x4aacd8u: goto label_4aacd8;
        case 0x4aace8u: goto label_4aace8;
        case 0x4aacf8u: goto label_4aacf8;
        case 0x4aad04u: goto label_4aad04;
        default: break;
    }

    ctx->pc = 0x4aab10u;

    // 0x4aab10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4aab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4aab14: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4aab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4aab18: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4aab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4aab1c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4aab1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4aab20: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4aab20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4aab24: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4aab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4aab28: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4aab28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aab2c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4aab2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4aab30: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x4aab30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aab34: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4aab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4aab38: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4aab38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aab3c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4aab3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4aab40: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x4aab40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4aab44: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4aab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4aab48: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4aab48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aab4c: 0x8eca0000  lw          $t2, 0x0($s6)
    ctx->pc = 0x4aab4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4aab50: 0x84880024  lh          $t0, 0x24($a0)
    ctx->pc = 0x4aab50u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x4aab54: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4aab54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4aab58: 0x84820022  lh          $v0, 0x22($a0)
    ctx->pc = 0x4aab58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x4aab5c: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x4aab5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x4aab60: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x4aab60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aab64: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x4aab64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4aab68: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4aab68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aab6c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4aab6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4aab70: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x4aab70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4aab74: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4aab74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4aab78: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4aab78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4aab7c: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4aab7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4aab80: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4aab80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4aab84: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4aab84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4aab88: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x4aab88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x4aab8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4aab8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aab90: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4aab90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4aab94: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x4aab94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x4aab98: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4aab98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4aab9c: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x4aab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x4aaba0: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AABA0u;
    SET_GPR_U32(ctx, 31, 0x4AABA8u);
    ctx->pc = 0x4AABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AABA0u;
    // 0x4aaba4: 0x8e930000  lw          $s3, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AABA0u, 0x4AABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AABA8u;
label_4aaba8:
    // 0x4aaba8: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x4aaba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4aabac: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x4aabacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4aabb0: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AABB0u;
    SET_GPR_U32(ctx, 31, 0x4AABB8u);
    ctx->pc = 0x4AABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AABB0u;
    // 0x4aabb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AABB0u, 0x4AABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AABB8u;
label_4aabb8:
    // 0x4aabb8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4aabb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4aabbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4aabbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aabc0: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AABC0u;
    SET_GPR_U32(ctx, 31, 0x4AABC8u);
    ctx->pc = 0x4AABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AABC0u;
    // 0x4aabc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AABC0u, 0x4AABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AABC8u;
label_4aabc8:
    // 0x4aabc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4aabc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aabcc: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AABCCu;
    SET_GPR_U32(ctx, 31, 0x4AABD4u);
    ctx->pc = 0x4AABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AABCCu;
    // 0x4aabd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AABCCu, 0x4AABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AABD4u;
label_4aabd4:
    // 0x4aabd4: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x4aabd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
    // 0x4aabd8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4aabd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aabdc: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x4aabdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aabe0: 0x87a50010  lh          $a1, 0x10($sp)
    ctx->pc = 0x4aabe0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aabe4: 0x87a4000c  lh          $a0, 0xC($sp)
    ctx->pc = 0x4aabe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4aabe8: 0x87a60000  lh          $a2, 0x0($sp)
    ctx->pc = 0x4aabe8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aabec: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4aabecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4aabf0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4aabf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aabf4: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x4aabf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4aabf8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4aabf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4aabfc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4aabfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4aac00: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4aac00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4aac04: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4aac04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aac08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aac08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aac0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4aac0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4aac10: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4aac10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4aac14: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4aac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4aac18: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4aac18u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4aac1c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4aac1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4aac20: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4aac20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4aac24: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4aac24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4aac28: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4aac28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4aac2c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4aac2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4aac30: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4aac30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4aac34: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4aac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4aac38: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAC38u;
        // 0x4aac3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAC40u;
label_4aac40:
    // 0x4aac40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4aac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4aac44: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4aac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4aac48: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4aac48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4aac4c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4aac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4aac50: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4aac50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4aac54: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4aac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4aac58: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4aac58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aac5c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4aac5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4aac60: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4aac60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aac64: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4aac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4aac68: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x4aac68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aac6c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4aac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4aac70: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x4aac70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4aac74: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4aac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4aac78: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x4aac78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aac7c: 0x8ecb0000  lw          $t3, 0x0($s6)
    ctx->pc = 0x4aac7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4aac80: 0x84890028  lh          $t1, 0x28($a0)
    ctx->pc = 0x4aac80u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x4aac84: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4aac84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4aac88: 0x84820026  lh          $v0, 0x26($a0)
    ctx->pc = 0x4aac88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x4aac8c: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x4aac8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x4aac90: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4aac90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aac94: 0x1324825  or          $t1, $t1, $s2
    ctx->pc = 0x4aac94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x4aac98: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4aac98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aac9c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4aac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4aaca0: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x4aaca0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4aaca4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4aaca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4aaca8: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4aaca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4aacac: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4aacacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4aacb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4aacb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4aacb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4aacb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aacb8: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x4aacb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x4aacbc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4aacbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4aacc0: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x4aacc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x4aacc4: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4aacc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x4aacc8: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4aacc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4aaccc: 0xafab000c  sw          $t3, 0xC($sp)
    ctx->pc = 0x4aacccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x4aacd0: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AACD0u;
    SET_GPR_U32(ctx, 31, 0x4AACD8u);
    ctx->pc = 0x4AACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AACD0u;
    // 0x4aacd4: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AACD0u, 0x4AACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AACD8u;
label_4aacd8:
    // 0x4aacd8: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x4aacd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4aacdc: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x4aacdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4aace0: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AACE0u;
    SET_GPR_U32(ctx, 31, 0x4AACE8u);
    ctx->pc = 0x4AACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AACE0u;
    // 0x4aace4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AACE0u, 0x4AACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AACE8u;
label_4aace8:
    // 0x4aace8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4aace8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4aacec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4aacecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aacf0: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AACF0u;
    SET_GPR_U32(ctx, 31, 0x4AACF8u);
    ctx->pc = 0x4AACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AACF0u;
    // 0x4aacf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AACF0u, 0x4AACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AACF8u;
label_4aacf8:
    // 0x4aacf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4aacf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aacfc: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AACFCu;
    SET_GPR_U32(ctx, 31, 0x4AAD04u);
    ctx->pc = 0x4AAD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AACFCu;
    // 0x4aad00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AACFCu, 0x4AAD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAD04u;
label_4aad04:
    // 0x4aad04: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4aad04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aad08: 0x87a5000c  lh          $a1, 0xC($sp)
    ctx->pc = 0x4aad08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4aad0c: 0x87a30010  lh          $v1, 0x10($sp)
    ctx->pc = 0x4aad0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aad10: 0x87a60004  lh          $a2, 0x4($sp)
    ctx->pc = 0x4aad10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aad14: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4aad14u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4aad18: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x4aad18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4aad1c: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x4aad1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4aad20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4aad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aad24: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4aad24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4aad28: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4aad28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4aad2c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4aad2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aad30: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4aad30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4aad34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4aad34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4aad38: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4aad38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4aad3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4aad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4aad40: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4aad40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4aad44: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4aad44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aad48: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x4aad48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x4aad4c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4aad4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4aad50: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x4aad50u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x4aad54: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4aad54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4aad58: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4aad58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4aad5c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4aad5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4aad60: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4aad60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4aad64: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4aad64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4aad68: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAD68u;
        // 0x4aad6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAD70u;
}
