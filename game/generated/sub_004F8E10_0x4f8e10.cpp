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

// Function: sub_004F8E10
// Address: 0x4f8e10 - 0x4f8f50
void sub_004F8E10_0x4f8e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F8E10_0x4f8e10");
#endif

    switch (ctx->pc) {
        case 0x4f8e3cu: goto label_4f8e3c;
        default: break;
    }

    ctx->pc = 0x4f8e10u;

    // 0x4f8e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f8e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f8e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f8e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f8e18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f8e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8e1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f8e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f8e20: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4f8e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4f8e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f8e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f8e28: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f8e28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f8e2c: 0x4420033  bltzl       $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x4F8E2Cu;
    {
        const bool branch_taken_0x4f8e2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f8e2c) {
            ctx->pc = 0x4F8E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F8E2Cu;
            // 0x4f8e30: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8EFCu;
            goto label_4f8efc;
        }
    }
    ctx->pc = 0x4F8E34u;
    // 0x4f8e34: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F8E34u;
    SET_GPR_U32(ctx, 31, 0x4F8E3Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F8E34u, 0x4F8E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8E3Cu;
label_4f8e3c:
    // 0x4f8e3c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4f8e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4f8e40: 0x9602015e  lhu         $v0, 0x15E($s0)
    ctx->pc = 0x4f8e40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4f8e44: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x4f8e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x4f8e48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f8e4c: 0x26060128  addiu       $a2, $s0, 0x128
    ctx->pc = 0x4f8e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4f8e50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f8e54: 0x2607012c  addiu       $a3, $s0, 0x12C
    ctx->pc = 0x4f8e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x4f8e58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f8e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f8e5c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4f8e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4f8e60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8e64: 0x24090500  addiu       $t1, $zero, 0x500
    ctx->pc = 0x4f8e64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x4f8e68: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f8e6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f8e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f8e70: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4f8e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f8e74: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x4f8e74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4f8e78: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f8e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f8e7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8e80: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f8e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f8e84: 0x96020162  lhu         $v0, 0x162($s0)
    ctx->pc = 0x4f8e84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4f8e88: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f8e8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f8e90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f8e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f8e94: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4f8e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4f8e98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8e9c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f8e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f8ea0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f8ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f8ea4: 0x86020164  lh          $v0, 0x164($s0)
    ctx->pc = 0x4f8ea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4f8ea8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f8ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f8eac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8eb0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f8eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f8eb4: 0x96020166  lhu         $v0, 0x166($s0)
    ctx->pc = 0x4f8eb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4f8eb8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f8eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f8ebc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f8ec0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f8ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f8ec4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4f8ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4f8ec8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8ecc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f8eccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f8ed0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f8ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f8ed4: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4f8ed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4f8ed8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f8ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f8edc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8ee0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f8ee4: 0xa609000c  sh          $t1, 0xC($s0)
    ctx->pc = 0x4f8ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x4f8ee8: 0xa608002e  sh          $t0, 0x2E($s0)
    ctx->pc = 0x4f8ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 8));
    // 0x4f8eec: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f8eecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f8ef0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f8ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f8ef4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4f8ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f8ef8: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4f8ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4f8efc:
    // 0x4f8efc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F8EFCu;
    {
        const bool branch_taken_0x4f8efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8EFCu;
        // 0x4f8f00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8efc) {
            ctx->pc = 0x4F8F20u;
            goto label_4f8f20;
        }
    }
    ctx->pc = 0x4F8F04u;
    // 0x4f8f04: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F8F04u;
    {
        const bool branch_taken_0x4f8f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F8F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8F04u;
        // 0x4f8f08: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8f04) {
            ctx->pc = 0x4F8F38u;
            goto label_4f8f38;
        }
    }
    ctx->pc = 0x4F8F0Cu;
    // 0x4f8f0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f8f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8f10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f8f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f8f14: 0x3e00008  jr          $ra
    ctx->pc = 0x4F8F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8F14u;
        // 0x4f8f18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F8F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F8F1Cu;
    // 0x4f8f1c: 0x0  nop
    ctx->pc = 0x4f8f1cu;
    // NOP
label_4f8f20:
    // 0x4f8f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f8f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f8f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8f28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f8f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f8f2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f8f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f8f30: 0x813e2bc  j           func_4F8AF0
    ctx->pc = 0x4F8F30u;
    ctx->pc = 0x4F8F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8F30u;
    // 0x4f8f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8AF0u, 0x4F8F30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F8F38u;
label_4f8f38:
    // 0x4f8f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f8f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f8f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f8f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f8f44: 0x813e296  j           func_4F8A58
    ctx->pc = 0x4F8F44u;
    ctx->pc = 0x4F8F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8F44u;
    // 0x4f8f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8A58u;
    sub_004F8A58_0x4f8a58(rdram, ctx, runtime); return;
    ctx->pc = 0x4F8F4Cu;
    // 0x4f8f4c: 0x0  nop
    ctx->pc = 0x4f8f4cu;
    // NOP
    ctx->pc = 0x4f8f50u;
}
