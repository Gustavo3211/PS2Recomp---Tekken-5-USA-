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

// Function: sub_00488AE0
// Address: 0x488ae0 - 0x488ba0
void sub_00488AE0_0x488ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488AE0_0x488ae0");
#endif

    switch (ctx->pc) {
        case 0x488b60u: goto label_488b60;
        case 0x488b6cu: goto label_488b6c;
        case 0x488b78u: goto label_488b78;
        default: break;
    }

    ctx->pc = 0x488ae0u;

    // 0x488ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x488ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x488ae4: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x488ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x488ae8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x488ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x488aec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x488aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x488af0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x488af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x488af4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x488af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x488af8: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x488af8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x488afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x488afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x488b00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x488b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x488b04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x488b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488b08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x488b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x488b0c: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x488b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x488b10: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x488b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x488b14: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x488b14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488b18: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x488b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x488b1c: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x488b1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x488b20: 0x944300a0  lhu         $v1, 0xA0($v0)
    ctx->pc = 0x488b20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x488b24: 0x3502ffff  ori         $v0, $t0, 0xFFFF
    ctx->pc = 0x488b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x488b28: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x488b28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x488b2c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x488b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x488b30: 0x474024  and         $t0, $v0, $a3
    ctx->pc = 0x488b30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x488b34: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x488b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x488b38: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x488b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x488b3c: 0x3502ffff  ori         $v0, $t0, 0xFFFF
    ctx->pc = 0x488b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x488b40: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x488b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x488b44: 0xa6060000  sh          $a2, 0x0($s0)
    ctx->pc = 0x488b44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x488b48: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x488b48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x488b4c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x488b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x488b50: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x488b50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x488b54: 0xa6080000  sh          $t0, 0x0($s0)
    ctx->pc = 0x488b54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x488b58: 0xc13e65c  jal         func_4F9970
    ctx->pc = 0x488B58u;
    SET_GPR_U32(ctx, 31, 0x488B60u);
    ctx->pc = 0x488B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488B58u;
    // 0x488b5c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9970u, 0x488B58u, 0x488B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488B60u;
label_488b60:
    // 0x488b60: 0x822300a1  lb          $v1, 0xA1($s1)
    ctx->pc = 0x488b60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 161)));
    // 0x488b64: 0xc13e65c  jal         func_4F9970
    ctx->pc = 0x488B64u;
    SET_GPR_U32(ctx, 31, 0x488B6Cu);
    ctx->pc = 0x488B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488B64u;
    // 0x488b68: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9970u, 0x488B64u, 0x488B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488B6Cu;
label_488b6c:
    // 0x488b6c: 0x822300a3  lb          $v1, 0xA3($s1)
    ctx->pc = 0x488b6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 163)));
    // 0x488b70: 0xc13e65c  jal         func_4F9970
    ctx->pc = 0x488B70u;
    SET_GPR_U32(ctx, 31, 0x488B78u);
    ctx->pc = 0x488B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488B70u;
    // 0x488b74: 0xa0430001  sb          $v1, 0x1($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9970u, 0x488B70u, 0x488B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488B78u;
label_488b78:
    // 0x488b78: 0x822300a5  lb          $v1, 0xA5($s1)
    ctx->pc = 0x488b78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 165)));
    // 0x488b7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x488b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x488b80: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x488b80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x488b84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x488b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x488b88: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x488b88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x488b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x488b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488b90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x488b90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488b94: 0x3e00008  jr          $ra
    ctx->pc = 0x488B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488B94u;
        // 0x488b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488B9Cu;
    // 0x488b9c: 0x0  nop
    ctx->pc = 0x488b9cu;
    // NOP
    ctx->pc = 0x488ba0u;
}
