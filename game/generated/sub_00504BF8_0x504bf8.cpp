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

// Function: sub_00504BF8
// Address: 0x504bf8 - 0x504d60
void sub_00504BF8_0x504bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504BF8_0x504bf8");
#endif

    switch (ctx->pc) {
        case 0x504c70u: goto label_504c70;
        case 0x504c80u: goto label_504c80;
        case 0x504c8cu: goto label_504c8c;
        case 0x504c98u: goto label_504c98;
        case 0x504d20u: goto label_504d20;
        case 0x504d34u: goto label_504d34;
        default: break;
    }

    ctx->pc = 0x504bf8u;

label_504bf8:
    // 0x504bf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x504bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x504bfc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x504bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x504c00: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x504c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x504c04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x504c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504c08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x504c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x504c0c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x504c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x504c10: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x504c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x504c14: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x504c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504c18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x504c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x504c1c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x504c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x504c20: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x504c20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504c24: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x504c24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x504c28: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x504c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x504c2c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x504c2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x504c30: 0x84890078  lh          $t1, 0x78($a0)
    ctx->pc = 0x504c30u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x504c34: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x504c34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x504c38: 0x84830076  lh          $v1, 0x76($a0)
    ctx->pc = 0x504c38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 118)));
    // 0x504c3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x504c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504c40: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x504c40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x504c44: 0x1324825  or          $t1, $t1, $s2
    ctx->pc = 0x504c44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x504c48: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x504c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x504c4c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x504c4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x504c50: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x504c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x504c54: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x504c54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x504c58: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x504c58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x504c5c: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x504c5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x504c60: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x504c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x504c64: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x504c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x504c68: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504C68u;
    SET_GPR_U32(ctx, 31, 0x504C70u);
    ctx->pc = 0x504C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504C68u;
    // 0x504c6c: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504C68u, 0x504C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504C70u;
label_504c70:
    // 0x504c70: 0x27b00008  addiu       $s0, $sp, 0x8
    ctx->pc = 0x504c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x504c74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504c78: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504C78u;
    SET_GPR_U32(ctx, 31, 0x504C80u);
    ctx->pc = 0x504C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504C78u;
    // 0x504c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504C78u, 0x504C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504C80u;
label_504c80:
    // 0x504c80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x504c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504c84: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504C84u;
    SET_GPR_U32(ctx, 31, 0x504C8Cu);
    ctx->pc = 0x504C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504C84u;
    // 0x504c88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504C84u, 0x504C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504C8Cu;
label_504c8c:
    // 0x504c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504c90: 0xc140fac  jal         func_503EB0
    ctx->pc = 0x504C90u;
    SET_GPR_U32(ctx, 31, 0x504C98u);
    ctx->pc = 0x504C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504C90u;
    // 0x504c94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503EB0u, 0x504C90u, 0x504C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504C98u;
label_504c98:
    // 0x504c98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x504c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x504c9c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x504c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x504ca0: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x504ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504ca4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x504ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x504ca8: 0x87a50004  lh          $a1, 0x4($sp)
    ctx->pc = 0x504ca8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x504cac: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x504cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x504cb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x504cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504cb4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x504cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x504cb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x504cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x504cbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x504cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x504cc0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x504cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x504cc4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x504cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504cc8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x504cc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x504ccc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x504cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x504cd0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x504cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x504cd4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x504cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x504cd8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x504cd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504cdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x504cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x504ce0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x504ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x504ce4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x504ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x504ce8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x504ce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x504cec: 0x3e00008  jr          $ra
    ctx->pc = 0x504CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x504CECu;
        // 0x504cf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x504CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x504CF4u;
    // 0x504cf4: 0x0  nop
    ctx->pc = 0x504cf4u;
    // NOP
    // 0x504cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x504cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x504cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x504d00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x504d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x504d04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x504d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x504d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x504d0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x504d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x504d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x504d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504d18: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x504D18u;
    SET_GPR_U32(ctx, 31, 0x504D20u);
    ctx->pc = 0x504D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504D18u;
    // 0x504d1c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x504D18u, 0x504D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504D20u;
label_504d20:
    // 0x504d20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x504d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d2c: 0xc1412fe  jal         func_504BF8
    ctx->pc = 0x504D2Cu;
    SET_GPR_U32(ctx, 31, 0x504D34u);
    ctx->pc = 0x504D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504D2Cu;
    // 0x504d30: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504BF8u;
    goto label_504bf8;
    ctx->pc = 0x504D34u;
label_504d34:
    // 0x504d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x504d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x504d3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504d40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x504d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504d48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x504d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504d4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x504d4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x504d50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x504d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504d54: 0x81412be  j           func_504AF8
    ctx->pc = 0x504D54u;
    ctx->pc = 0x504D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504D54u;
    // 0x504d58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504AF8u;
    sub_00504AF8_0x504af8(rdram, ctx, runtime); return;
    ctx->pc = 0x504D5Cu;
    // 0x504d5c: 0x0  nop
    ctx->pc = 0x504d5cu;
    // NOP
    ctx->pc = 0x504d60u;
}
