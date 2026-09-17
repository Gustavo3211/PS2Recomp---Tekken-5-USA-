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

// Function: sub_00503FC0
// Address: 0x503fc0 - 0x5040c0
void sub_00503FC0_0x503fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503FC0_0x503fc0");
#endif

    switch (ctx->pc) {
        case 0x504038u: goto label_504038;
        case 0x504048u: goto label_504048;
        case 0x504054u: goto label_504054;
        case 0x504060u: goto label_504060;
        default: break;
    }

    ctx->pc = 0x503fc0u;

    // 0x503fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x503fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x503fc4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x503fc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503fc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x503fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x503fcc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x503fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503fd0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x503fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x503fd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x503fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503fd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x503fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x503fdc: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x503fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x503fe0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x503fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x503fe4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x503fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503fe8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x503fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x503fec: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x503fecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x503ff0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x503ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x503ff4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x503ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x503ff8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x503ff8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x503ffc: 0x8525001e  lh          $a1, 0x1E($t1)
    ctx->pc = 0x503ffcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 30)));
    // 0x504000: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x504000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x504004: 0x8522001c  lh          $v0, 0x1C($t1)
    ctx->pc = 0x504004u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x504008: 0xd23024  and         $a2, $a2, $s2
    ctx->pc = 0x504008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x50400c: 0x96690000  lhu         $t1, 0x0($s3)
    ctx->pc = 0x50400cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x504010: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x504010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x504014: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x504014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x504018: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x504018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x50401c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x50401cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x504020: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x504020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x504024: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x504024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x504028: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x504028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x50402c: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x50402cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x504030: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504030u;
    SET_GPR_U32(ctx, 31, 0x504038u);
    ctx->pc = 0x504034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504030u;
    // 0x504034: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504030u, 0x504038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504038u;
label_504038:
    // 0x504038: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x504038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x50403c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x50403cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504040: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504040u;
    SET_GPR_U32(ctx, 31, 0x504048u);
    ctx->pc = 0x504044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504040u;
    // 0x504044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504040u, 0x504048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504048u;
label_504048:
    // 0x504048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50404c: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x50404Cu;
    SET_GPR_U32(ctx, 31, 0x504054u);
    ctx->pc = 0x504050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50404Cu;
    // 0x504050: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x50404Cu, 0x504054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504054u;
label_504054:
    // 0x504054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x504054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504058: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504058u;
    SET_GPR_U32(ctx, 31, 0x504060u);
    ctx->pc = 0x50405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504058u;
    // 0x50405c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504058u, 0x504060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504060u;
label_504060:
    // 0x504060: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x504060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x504064: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x504064u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x504068: 0x87a40004  lh          $a0, 0x4($sp)
    ctx->pc = 0x504068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50406c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50406cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x504070: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x504070u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504074: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x504074u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x504078: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x504078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50407c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50407cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x504080: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x504080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x504084: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x504084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x504088: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x504088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50408c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x50408cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504090: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x504090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x504094: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x504094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x504098: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x504098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x50409c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x5040a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x5040a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5040a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5040a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5040a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5040a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5040ac: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x5040acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x5040b0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x5040b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5040b4: 0x3e00008  jr          $ra
    ctx->pc = 0x5040B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5040B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5040B4u;
        // 0x5040b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5040B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5040BCu;
    // 0x5040bc: 0x0  nop
    ctx->pc = 0x5040bcu;
    // NOP
    ctx->pc = 0x5040c0u;
}
