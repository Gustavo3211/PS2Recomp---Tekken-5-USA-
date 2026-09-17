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

// Function: sub_004A9FB0
// Address: 0x4a9fb0 - 0x4aa1e0
void sub_004A9FB0_0x4a9fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9FB0_0x4a9fb0");
#endif

    switch (ctx->pc) {
        case 0x4aa048u: goto label_4aa048;
        case 0x4aa058u: goto label_4aa058;
        case 0x4aa068u: goto label_4aa068;
        case 0x4aa074u: goto label_4aa074;
        case 0x4aa108u: goto label_4aa108;
        case 0x4aa120u: goto label_4aa120;
        case 0x4aa134u: goto label_4aa134;
        case 0x4aa188u: goto label_4aa188;
        case 0x4aa1a0u: goto label_4aa1a0;
        case 0x4aa1b4u: goto label_4aa1b4;
        default: break;
    }

    ctx->pc = 0x4a9fb0u;

label_4a9fb0:
    // 0x4a9fb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a9fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a9fb4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4a9fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4a9fb8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4a9fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4a9fbc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4a9fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4a9fc0: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4a9fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4a9fc4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4a9fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4a9fc8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4a9fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9fcc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4a9fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4a9fd0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4a9fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4a9fd4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4a9fd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9fd8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4a9fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4a9fdc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4a9fdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9fe0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4a9fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4a9fe4: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x4a9fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4a9fe8: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x4a9fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9fec: 0x8ecb0000  lw          $t3, 0x0($s6)
    ctx->pc = 0x4a9fecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a9ff0: 0x84890016  lh          $t1, 0x16($a0)
    ctx->pc = 0x4a9ff0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x4a9ff4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a9ff4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4a9ff8: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x4a9ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a9ffc: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x4a9ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x4aa000: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x4aa000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa004: 0x1324825  or          $t1, $t1, $s2
    ctx->pc = 0x4aa004u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x4aa008: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4aa008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aa00c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4aa00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4aa010: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x4aa010u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4aa014: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4aa014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4aa018: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4aa018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4aa01c: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4aa01cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x4aa020: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4aa020u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4aa024: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4aa024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4aa028: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4aa028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa02c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x4aa02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x4aa030: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4aa030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4aa034: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x4aa034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x4aa038: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4aa038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x4aa03c: 0xafab000c  sw          $t3, 0xC($sp)
    ctx->pc = 0x4aa03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x4aa040: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AA040u;
    SET_GPR_U32(ctx, 31, 0x4AA048u);
    ctx->pc = 0x4AA044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA040u;
    // 0x4aa044: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AA040u, 0x4AA048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA048u;
label_4aa048:
    // 0x4aa048: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x4aa048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4aa04c: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x4aa04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4aa050: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AA050u;
    SET_GPR_U32(ctx, 31, 0x4AA058u);
    ctx->pc = 0x4AA054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA050u;
    // 0x4aa054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AA050u, 0x4AA058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA058u;
label_4aa058:
    // 0x4aa058: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4aa058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4aa05c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4aa05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa060: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AA060u;
    SET_GPR_U32(ctx, 31, 0x4AA068u);
    ctx->pc = 0x4AA064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA060u;
    // 0x4aa064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AA060u, 0x4AA068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA068u;
label_4aa068:
    // 0x4aa068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4aa068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa06c: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AA06Cu;
    SET_GPR_U32(ctx, 31, 0x4AA074u);
    ctx->pc = 0x4AA070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA06Cu;
    // 0x4aa070: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AA06Cu, 0x4AA074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA074u;
label_4aa074:
    // 0x4aa074: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4aa074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa078: 0x87a5000c  lh          $a1, 0xC($sp)
    ctx->pc = 0x4aa078u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4aa07c: 0x87a40010  lh          $a0, 0x10($sp)
    ctx->pc = 0x4aa07cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa080: 0x87a60004  lh          $a2, 0x4($sp)
    ctx->pc = 0x4aa080u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aa084: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4aa084u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4aa088: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4aa088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4aa08c: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x4aa08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4aa090: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4aa090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa094: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4aa094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4aa098: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4aa098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4aa09c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4aa09cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aa0a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aa0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aa0a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4aa0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4aa0a8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4aa0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4aa0ac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4aa0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4aa0b0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4aa0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4aa0b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4aa0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa0b8: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4aa0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4aa0bc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4aa0bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4aa0c0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x4aa0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x4aa0c4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4aa0c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4aa0c8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4aa0c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4aa0cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4aa0ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4aa0d0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4aa0d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4aa0d4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4aa0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4aa0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA0D8u;
        // 0x4aa0dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA0E0u;
    // 0x4aa0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aa0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aa0e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aa0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aa0e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aa0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aa0ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aa0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa0f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aa0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aa0f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aa0f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa0f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aa0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aa0fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aa0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aa100: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AA100u;
    SET_GPR_U32(ctx, 31, 0x4AA108u);
    ctx->pc = 0x4AA104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA100u;
    // 0x4aa104: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AA100u, 0x4AA108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA108u;
label_4aa108:
    // 0x4aa108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa10c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa114: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa118: 0xc12a754  jal         func_4A9D50
    ctx->pc = 0x4AA118u;
    SET_GPR_U32(ctx, 31, 0x4AA120u);
    ctx->pc = 0x4AA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA118u;
    // 0x4aa11c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9D50u, 0x4AA118u, 0x4AA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA120u;
label_4aa120:
    // 0x4aa120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa124: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa128: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa12c: 0xc12a7a0  jal         func_4A9E80
    ctx->pc = 0x4AA12Cu;
    SET_GPR_U32(ctx, 31, 0x4AA134u);
    ctx->pc = 0x4AA130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA12Cu;
    // 0x4aa130: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9E80u, 0x4AA12Cu, 0x4AA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA134u;
label_4aa134:
    // 0x4aa134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa138: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa13c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aa13cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa140: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa144: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aa144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa148: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aa148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa14c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aa14cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aa150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aa150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa154: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aa154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa158: 0x812a7ec  j           func_4A9FB0
    ctx->pc = 0x4AA158u;
    ctx->pc = 0x4AA15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA158u;
    // 0x4aa15c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9FB0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4a9fb0;
    ctx->pc = 0x4AA160u;
    // 0x4aa160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aa160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aa164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aa164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aa168: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aa168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aa16c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aa16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa170: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aa170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aa174: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aa174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa178: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aa178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aa17c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aa17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aa180: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AA180u;
    SET_GPR_U32(ctx, 31, 0x4AA188u);
    ctx->pc = 0x4AA184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA180u;
    // 0x4aa184: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AA180u, 0x4AA188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA188u;
label_4aa188:
    // 0x4aa188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa18c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa194: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa198: 0xc12a754  jal         func_4A9D50
    ctx->pc = 0x4AA198u;
    SET_GPR_U32(ctx, 31, 0x4AA1A0u);
    ctx->pc = 0x4AA19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA198u;
    // 0x4aa19c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9D50u, 0x4AA198u, 0x4AA1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA1A0u;
label_4aa1a0:
    // 0x4aa1a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa1a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa1a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa1ac: 0xc12a7ec  jal         func_4A9FB0
    ctx->pc = 0x4AA1ACu;
    SET_GPR_U32(ctx, 31, 0x4AA1B4u);
    ctx->pc = 0x4AA1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA1ACu;
    // 0x4aa1b0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9FB0u;
    goto label_4a9fb0;
    ctx->pc = 0x4AA1B4u;
label_4aa1b4:
    // 0x4aa1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa1b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa1bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aa1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa1c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa1c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aa1c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa1c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aa1c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa1cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aa1ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aa1d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aa1d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa1d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aa1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa1d8: 0x812a7a0  j           func_4A9E80
    ctx->pc = 0x4AA1D8u;
    ctx->pc = 0x4AA1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA1D8u;
    // 0x4aa1dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    sub_004A9E80_0x4a9e80(rdram, ctx, runtime); return;
    ctx->pc = 0x4AA1E0u;
}
