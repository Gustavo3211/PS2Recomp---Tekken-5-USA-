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

// Function: sub_00504AF8
// Address: 0x504af8 - 0x504bf8
void sub_00504AF8_0x504af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504AF8_0x504af8");
#endif

    switch (ctx->pc) {
        case 0x504b74u: goto label_504b74;
        case 0x504b84u: goto label_504b84;
        case 0x504b90u: goto label_504b90;
        case 0x504b9cu: goto label_504b9c;
        default: break;
    }

    ctx->pc = 0x504af8u;

    // 0x504af8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x504af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x504afc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x504afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504b00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x504b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x504b04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x504b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504b08: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x504b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x504b0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x504b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504b10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x504b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x504b14: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x504b14u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x504b18: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x504b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x504b1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x504b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504b20: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x504b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x504b24: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x504b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x504b28: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x504b28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504b2c: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x504b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x504b30: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x504b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x504b34: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x504b34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x504b38: 0x84490074  lh          $t1, 0x74($v0)
    ctx->pc = 0x504b38u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x504b3c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x504b3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x504b40: 0x84430072  lh          $v1, 0x72($v0)
    ctx->pc = 0x504b40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 114)));
    // 0x504b44: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x504b44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x504b48: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x504b48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x504b4c: 0x1324825  or          $t1, $t1, $s2
    ctx->pc = 0x504b4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x504b50: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x504b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x504b54: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x504b54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x504b58: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x504b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x504b5c: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x504b5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x504b60: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x504b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x504b64: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x504b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x504b68: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x504b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x504b6c: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504B6Cu;
    SET_GPR_U32(ctx, 31, 0x504B74u);
    ctx->pc = 0x504B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504B6Cu;
    // 0x504b70: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504B6Cu, 0x504B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504B74u;
label_504b74:
    // 0x504b74: 0x27b00008  addiu       $s0, $sp, 0x8
    ctx->pc = 0x504b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x504b78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x504b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504b7c: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504B7Cu;
    SET_GPR_U32(ctx, 31, 0x504B84u);
    ctx->pc = 0x504B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504B7Cu;
    // 0x504b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504B7Cu, 0x504B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504B84u;
label_504b84:
    // 0x504b84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x504b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504b88: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504B88u;
    SET_GPR_U32(ctx, 31, 0x504B90u);
    ctx->pc = 0x504B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504B88u;
    // 0x504b8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504B88u, 0x504B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504B90u;
label_504b90:
    // 0x504b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504b94: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504B94u;
    SET_GPR_U32(ctx, 31, 0x504B9Cu);
    ctx->pc = 0x504B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504B94u;
    // 0x504b98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504B94u, 0x504B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504B9Cu;
label_504b9c:
    // 0x504b9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x504b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x504ba0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x504ba0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x504ba4: 0x87a40004  lh          $a0, 0x4($sp)
    ctx->pc = 0x504ba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x504ba8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x504ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x504bac: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x504bacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504bb0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x504bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x504bb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x504bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504bb8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x504bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x504bbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x504bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x504bc0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x504bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x504bc4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x504bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x504bc8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x504bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504bcc: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x504bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x504bd0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x504bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x504bd4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x504bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x504bd8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x504bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x504bdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x504bdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504be0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x504be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x504be4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x504be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x504be8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x504be8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x504bec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x504becu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x504bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x504BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x504BF0u;
        // 0x504bf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x504BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x504BF8u;
}
