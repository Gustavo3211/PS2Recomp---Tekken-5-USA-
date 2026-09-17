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

// Function: sub_00488A20
// Address: 0x488a20 - 0x488ae0
void sub_00488A20_0x488a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488A20_0x488a20");
#endif

    switch (ctx->pc) {
        case 0x488aa4u: goto label_488aa4;
        case 0x488ab0u: goto label_488ab0;
        case 0x488abcu: goto label_488abc;
        default: break;
    }

    ctx->pc = 0x488a20u;

    // 0x488a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x488a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x488a24: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x488a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x488a28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x488a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x488a2c: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x488a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x488a30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x488a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x488a34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x488a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488a38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x488a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x488a3c: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x488a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x488a40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x488a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x488a44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x488a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x488a48: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x488a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x488a4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x488a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x488a50: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x488a50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x488a54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x488a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x488a58: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x488a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x488a5c: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x488a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x488a60: 0x34e5ffff  ori         $a1, $a3, 0xFFFF
    ctx->pc = 0x488a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x488a64: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x488a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x488a68: 0x944300a0  lhu         $v1, 0xA0($v0)
    ctx->pc = 0x488a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x488a6c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x488a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x488a70: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x488a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x488a74: 0xa6060000  sh          $a2, 0x0($s0)
    ctx->pc = 0x488a74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x488a78: 0xa43824  and         $a3, $a1, $a0
    ctx->pc = 0x488a78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x488a7c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x488a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x488a80: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x488a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x488a84: 0x34e2ffff  ori         $v0, $a3, 0xFFFF
    ctx->pc = 0x488a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x488a88: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x488a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x488a8c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x488a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x488a90: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x488a90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x488a94: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x488a94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x488a98: 0xa6070000  sh          $a3, 0x0($s0)
    ctx->pc = 0x488a98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x488a9c: 0xc13e65c  jal         func_4F9970
    ctx->pc = 0x488A9Cu;
    SET_GPR_U32(ctx, 31, 0x488AA4u);
    ctx->pc = 0x488AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488A9Cu;
    // 0x488aa0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9970u, 0x488A9Cu, 0x488AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488AA4u;
label_488aa4:
    // 0x488aa4: 0x822300a1  lb          $v1, 0xA1($s1)
    ctx->pc = 0x488aa4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 161)));
    // 0x488aa8: 0xc13e65c  jal         func_4F9970
    ctx->pc = 0x488AA8u;
    SET_GPR_U32(ctx, 31, 0x488AB0u);
    ctx->pc = 0x488AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488AA8u;
    // 0x488aac: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9970u, 0x488AA8u, 0x488AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488AB0u;
label_488ab0:
    // 0x488ab0: 0x822300a3  lb          $v1, 0xA3($s1)
    ctx->pc = 0x488ab0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 163)));
    // 0x488ab4: 0xc13e65c  jal         func_4F9970
    ctx->pc = 0x488AB4u;
    SET_GPR_U32(ctx, 31, 0x488ABCu);
    ctx->pc = 0x488AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488AB4u;
    // 0x488ab8: 0xa0430001  sb          $v1, 0x1($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9970u, 0x488AB4u, 0x488ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488ABCu;
label_488abc:
    // 0x488abc: 0x822300a5  lb          $v1, 0xA5($s1)
    ctx->pc = 0x488abcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 165)));
    // 0x488ac0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x488ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x488ac4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x488ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x488ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x488ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x488acc: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x488accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x488ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x488ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488ad4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x488ad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x488AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488AD8u;
        // 0x488adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488AE0u;
}
