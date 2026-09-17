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

// Function: sub_004F6B98
// Address: 0x4f6b98 - 0x4f7110
void sub_004F6B98_0x4f6b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6B98_0x4f6b98");
#endif

    switch (ctx->pc) {
        case 0x4f6bc4u: goto label_4f6bc4;
        case 0x4f6cd8u: goto label_4f6cd8;
        case 0x4f6d54u: goto label_4f6d54;
        case 0x4f6d78u: goto label_4f6d78;
        case 0x4f6d80u: goto label_4f6d80;
        case 0x4f6e18u: goto label_4f6e18;
        case 0x4f6e40u: goto label_4f6e40;
        case 0x4f6e48u: goto label_4f6e48;
        case 0x4f6ee0u: goto label_4f6ee0;
        case 0x4f6ee8u: goto label_4f6ee8;
        case 0x4f6f8cu: goto label_4f6f8c;
        case 0x4f6f94u: goto label_4f6f94;
        case 0x4f7028u: goto label_4f7028;
        case 0x4f7054u: goto label_4f7054;
        case 0x4f70dcu: goto label_4f70dc;
        default: break;
    }

    ctx->pc = 0x4f6b98u;

    // 0x4f6b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f6b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f6b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f6b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f6ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f6ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6ba4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f6ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f6ba8: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4f6ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4f6bac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f6bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f6bb0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f6bb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f6bb4: 0x4420033  bltzl       $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x4F6BB4u;
    {
        const bool branch_taken_0x4f6bb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f6bb4) {
            ctx->pc = 0x4F6BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F6BB4u;
            // 0x4f6bb8: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6C84u;
            goto label_4f6c84;
        }
    }
    ctx->pc = 0x4F6BBCu;
    // 0x4f6bbc: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F6BBCu;
    SET_GPR_U32(ctx, 31, 0x4F6BC4u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F6BBCu, 0x4F6BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6BC4u;
label_4f6bc4:
    // 0x4f6bc4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4f6bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4f6bc8: 0x960301be  lhu         $v1, 0x1BE($s0)
    ctx->pc = 0x4f6bc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4f6bcc: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x4f6bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x4f6bd0: 0x9602015e  lhu         $v0, 0x15E($s0)
    ctx->pc = 0x4f6bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4f6bd4: 0x26060128  addiu       $a2, $s0, 0x128
    ctx->pc = 0x4f6bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4f6bd8: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x4f6bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f6bdc: 0x2607012c  addiu       $a3, $s0, 0x12C
    ctx->pc = 0x4f6bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x4f6be0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6be4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4f6be4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f6be8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f6be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f6bec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f6becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f6bf0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4f6bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4f6bf4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f6bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6bf8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f6bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f6bfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f6c00: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x4f6c00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4f6c04: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f6c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f6c08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f6c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6c0c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f6c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f6c10: 0x96020162  lhu         $v0, 0x162($s0)
    ctx->pc = 0x4f6c10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4f6c14: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f6c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f6c18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6c1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f6c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f6c20: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4f6c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4f6c24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f6c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6c28: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f6c28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f6c2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f6c30: 0x86020164  lh          $v0, 0x164($s0)
    ctx->pc = 0x4f6c30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4f6c34: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f6c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f6c38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f6c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6c3c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f6c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f6c40: 0x96020166  lhu         $v0, 0x166($s0)
    ctx->pc = 0x4f6c40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4f6c44: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f6c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f6c48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6c4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f6c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f6c50: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4f6c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4f6c54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f6c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6c58: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f6c58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f6c5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f6c60: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4f6c60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4f6c64: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f6c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f6c68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f6c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6c6c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f6c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f6c70: 0xa608002e  sh          $t0, 0x2E($s0)
    ctx->pc = 0x4f6c70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 8));
    // 0x4f6c74: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f6c74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f6c78: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f6c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f6c7c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4f6c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f6c80: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4f6c80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4f6c84:
    // 0x4f6c84: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6C84u;
    {
        const bool branch_taken_0x4f6c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6C84u;
        // 0x4f6c88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6c84) {
            ctx->pc = 0x4F6CA8u;
            goto label_4f6ca8;
        }
    }
    ctx->pc = 0x4F6C8Cu;
    // 0x4f6c8c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F6C8Cu;
    {
        const bool branch_taken_0x4f6c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6C8Cu;
        // 0x4f6c90: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6c8c) {
            ctx->pc = 0x4F6CC0u;
            goto label_4f6cc0;
        }
    }
    ctx->pc = 0x4F6C94u;
    // 0x4f6c94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f6c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f6c98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f6c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f6c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F6C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F6CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6C9Cu;
        // 0x4f6ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F6C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F6CA4u;
    // 0x4f6ca4: 0x0  nop
    ctx->pc = 0x4f6ca4u;
    // NOP
label_4f6ca8:
    // 0x4f6ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f6ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f6cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f6cb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f6cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f6cb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f6cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f6cb8: 0x813da28  j           func_4F68A0
    ctx->pc = 0x4F6CB8u;
    ctx->pc = 0x4F6CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6CB8u;
    // 0x4f6cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F68A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F68A0u, 0x4F6CB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F6CC0u;
label_4f6cc0:
    // 0x4f6cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f6cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f6cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f6cc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f6cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f6ccc: 0x813da02  j           func_4F6808
    ctx->pc = 0x4F6CCCu;
    ctx->pc = 0x4F6CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6CCCu;
    // 0x4f6cd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6808u, 0x4F6CCCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F6CD4u;
    // 0x4f6cd4: 0x0  nop
    ctx->pc = 0x4f6cd4u;
    // NOP
label_4f6cd8:
    // 0x4f6cd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f6cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f6cdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f6cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f6ce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f6ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6ce4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f6ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f6ce8: 0x2632015e  addiu       $s2, $s1, 0x15E
    ctx->pc = 0x4f6ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4f6cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f6cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f6cf0: 0x26250118  addiu       $a1, $s1, 0x118
    ctx->pc = 0x4f6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
    // 0x4f6cf4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f6cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f6cf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f6cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f6cfc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4f6cfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f6d00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4f6d04: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4f6d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6d08: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4F6D08u;
    {
        const bool branch_taken_0x4f6d08 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4F6D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6D08u;
        // 0x4f6d0c: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6d08) {
            ctx->pc = 0x4F6D30u;
            goto label_4f6d30;
        }
    }
    ctx->pc = 0x4F6D10u;
    // 0x4f6d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f6d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f6d14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f6d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f6d18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f6d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f6d1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f6d1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f6d20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f6d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f6d24: 0x813d9e4  j           func_4F6790
    ctx->pc = 0x4F6D24u;
    ctx->pc = 0x4F6D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6D24u;
    // 0x4f6d28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6790u, 0x4F6D24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F6D2Cu;
    // 0x4f6d2c: 0x0  nop
    ctx->pc = 0x4f6d2cu;
    // NOP
label_4f6d30:
    // 0x4f6d30: 0x86230136  lh          $v1, 0x136($s1)
    ctx->pc = 0x4f6d30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 310)));
    // 0x4f6d34: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4f6d34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4f6d38: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4f6d38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f6d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f6d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f6d40: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x4f6d40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f6d44: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x4f6d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4f6d48: 0xa4b00000  sh          $s0, 0x0($a1)
    ctx->pc = 0x4f6d48u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x4f6d4c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F6D4Cu;
    SET_GPR_U32(ctx, 31, 0x4F6D54u);
    ctx->pc = 0x4F6D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6D4Cu;
    // 0x4f6d50: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F6D4Cu, 0x4F6D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6D54u;
label_4f6d54:
    // 0x4f6d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f6d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6d58: 0x963001b6  lhu         $s0, 0x1B6($s1)
    ctx->pc = 0x4f6d58u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 438)));
    // 0x4f6d5c: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x4f6d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f6d60: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x4f6d60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f6d64: 0x32100006  andi        $s0, $s0, 0x6
    ctx->pc = 0x4f6d64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)6);
    // 0x4f6d68: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F6D68u;
    {
        const bool branch_taken_0x4f6d68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6D68u;
        // 0x4f6d6c: 0xa6220024  sh          $v0, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6d68) {
            ctx->pc = 0x4F6D78u;
            goto label_4f6d78;
        }
    }
    ctx->pc = 0x4F6D70u;
    // 0x4f6d70: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4F6D70u;
    SET_GPR_U32(ctx, 31, 0x4F6D78u);
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4F6D70u, 0x4F6D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6D78u;
label_4f6d78:
    // 0x4f6d78: 0xc12b9d0  jal         func_4AE740
    ctx->pc = 0x4F6D78u;
    SET_GPR_U32(ctx, 31, 0x4F6D80u);
    ctx->pc = 0x4F6D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6D78u;
    // 0x4f6d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE740u, 0x4F6D78u, 0x4F6D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6D80u;
label_4f6d80:
    // 0x4f6d80: 0x96220160  lhu         $v0, 0x160($s1)
    ctx->pc = 0x4f6d80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x4f6d84: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4f6d84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f6d88: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x4f6d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4f6d8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6d90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f6d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f6d94: 0xb32825  or          $a1, $a1, $s3
    ctx->pc = 0x4f6d94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 19));
    // 0x4f6d98: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4f6d98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f6d9c: 0x658024  and         $s0, $v1, $a1
    ctx->pc = 0x4f6d9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4f6da0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4f6da4: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4f6da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4f6da8: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4f6da8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x4f6dac: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4f6dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4f6db0: 0x8cc684b0  lw          $a2, -0x7B50($a2)
    ctx->pc = 0x4f6db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294935728)));
    // 0x4f6db4: 0x30830030  andi        $v1, $a0, 0x30
    ctx->pc = 0x4f6db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x4f6db8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f6db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f6dbc: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4f6dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4f6dc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f6dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f6dc4: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x4f6dc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f6dc8: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x4f6dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4f6dcc: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4f6dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4f6dd0: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x4f6dd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
    // 0x4f6dd4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4f6dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4f6dd8: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4f6dd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f6ddc: 0x32031fff  andi        $v1, $s0, 0x1FFF
    ctx->pc = 0x4f6ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8191);
    // 0x4f6de0: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4f6de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4f6de4: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4f6de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4f6de8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f6de8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f6dec: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x4f6decu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f6df0: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x4f6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4f6df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f6df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f6df8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4f6df8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f6dfc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f6dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f6e00: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4f6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4f6e04: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f6e04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f6e08: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x4f6e08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f6e0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f6e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f6e10: 0x3e00008  jr          $ra
    ctx->pc = 0x4F6E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6E10u;
        // 0x4f6e14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F6E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F6E18u;
label_4f6e18:
    // 0x4f6e18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f6e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f6e1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f6e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f6e20: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f6e20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f6e24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f6e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f6e28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f6e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6e2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f6e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f6e30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f6e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f6e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f6e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f6e38: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F6E38u;
    SET_GPR_U32(ctx, 31, 0x4F6E40u);
    ctx->pc = 0x4F6E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6E38u;
    // 0x4f6e3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F6E38u, 0x4F6E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6E40u;
label_4f6e40:
    // 0x4f6e40: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F6E40u;
    SET_GPR_U32(ctx, 31, 0x4F6E48u);
    ctx->pc = 0x4F6E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6E40u;
    // 0x4f6e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F6E40u, 0x4F6E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6E48u;
label_4f6e48:
    // 0x4f6e48: 0x26280124  addiu       $t0, $s1, 0x124
    ctx->pc = 0x4f6e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    // 0x4f6e4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f6e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6e50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x4f6e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4f6e54: 0x32430003  andi        $v1, $s2, 0x3
    ctx->pc = 0x4f6e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x4f6e58: 0x32448000  andi        $a0, $s2, 0x8000
    ctx->pc = 0x4f6e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f6e5c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f6e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f6e60: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x4f6e60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6e64: 0x44980b  movn        $s3, $v0, $a0
    ctx->pc = 0x4f6e64u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x4f6e68: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x4f6e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x4f6e6c: 0xa6320024  sh          $s2, 0x24($s1)
    ctx->pc = 0x4f6e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 18));
    // 0x4f6e70: 0xa39024  and         $s2, $a1, $v1
    ctx->pc = 0x4f6e70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f6e74: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f6e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f6e78: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f6e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6e7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6e80: 0x133400  sll         $a2, $s3, 16
    ctx->pc = 0x4f6e80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f6e84: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6e84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6e88: 0xa6240022  sh          $a0, 0x22($s1)
    ctx->pc = 0x4f6e88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f6e8c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6e90: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f6e90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f6e94: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f6e94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6e98: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f6e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f6e9c: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f6e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f6ea0: 0x3647ffff  ori         $a3, $s2, 0xFFFF
    ctx->pc = 0x4f6ea0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6ea4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f6ea4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f6ea8: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f6ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f6eac: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4f6eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f6eb0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f6eb0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f6eb4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f6eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f6eb8: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f6eb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f6ebc: 0xe39024  and         $s2, $a3, $v1
    ctx->pc = 0x4f6ebcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f6ec0: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f6ec4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6ec4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6ec8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f6ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f6ecc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f6eccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f6ed0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f6ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f6ed4: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f6ed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f6ed8: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F6ED8u;
    SET_GPR_U32(ctx, 31, 0x4F6EE0u);
    ctx->pc = 0x4F6EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6ED8u;
    // 0x4f6edc: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F6ED8u, 0x4F6EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6EE0u;
label_4f6ee0:
    // 0x4f6ee0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F6EE0u;
    SET_GPR_U32(ctx, 31, 0x4F6EE8u);
    ctx->pc = 0x4F6EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6EE0u;
    // 0x4f6ee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F6EE0u, 0x4F6EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6EE8u;
label_4f6ee8:
    // 0x4f6ee8: 0x3666ffff  ori         $a2, $s3, 0xFFFF
    ctx->pc = 0x4f6ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f6eec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f6eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6ef0: 0x2702024  and         $a0, $s3, $s0
    ctx->pc = 0x4f6ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f6ef4: 0x32420003  andi        $v0, $s2, 0x3
    ctx->pc = 0x4f6ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x4f6ef8: 0x32438000  andi        $v1, $s2, 0x8000
    ctx->pc = 0x4f6ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f6efc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6f00: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x4f6f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6f04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4f6f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6f08: 0xa6320028  sh          $s2, 0x28($s1)
    ctx->pc = 0x4f6f08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 18));
    // 0x4f6f0c: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x4f6f0cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x4f6f10: 0x2501824  and         $v1, $s2, $s0
    ctx->pc = 0x4f6f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f6f14: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x4f6f14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f6f18: 0x132c00  sll         $a1, $s3, 16
    ctx->pc = 0x4f6f18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f6f1c: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f6f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f6f20: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f6f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6f24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6f28: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4f6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4f6f2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6f2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6f30: 0xa6230026  sh          $v1, 0x26($s1)
    ctx->pc = 0x4f6f30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f6f34: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6f38: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f6f38u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f6f3c: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4f6f3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f6f40: 0x26270128  addiu       $a3, $s1, 0x128
    ctx->pc = 0x4f6f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x4f6f44: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f6f48: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4f6f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f6f4c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6f4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6f50: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f6f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6f54: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4f6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4f6f58: 0x901824  and         $v1, $a0, $s0
    ctx->pc = 0x4f6f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x4f6f5c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6f60: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f6f60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f6f64: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f6f64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f6f68: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4f6f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4f6f6c: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f6f70: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6f70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6f74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f6f78: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f6f7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f6f80: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f6f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f6f84: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F6F84u;
    SET_GPR_U32(ctx, 31, 0x4F6F8Cu);
    ctx->pc = 0x4F6F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6F84u;
    // 0x4f6f88: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F6F84u, 0x4F6F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6F8Cu;
label_4f6f8c:
    // 0x4f6f8c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F6F8Cu;
    SET_GPR_U32(ctx, 31, 0x4F6F94u);
    ctx->pc = 0x4F6F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6F8Cu;
    // 0x4f6f90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F6F8Cu, 0x4F6F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6F94u;
label_4f6f94:
    // 0x4f6f94: 0x3666ffff  ori         $a2, $s3, 0xFFFF
    ctx->pc = 0x4f6f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f6f98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f6f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6f9c: 0x2702824  and         $a1, $s3, $s0
    ctx->pc = 0x4f6f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f6fa0: 0x32420003  andi        $v0, $s2, 0x3
    ctx->pc = 0x4f6fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x4f6fa4: 0x32438000  andi        $v1, $s2, 0x8000
    ctx->pc = 0x4f6fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f6fa8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6fac: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f6facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6fb0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4f6fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6fb4: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4f6fb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f6fb8: 0xa3980a  movz        $s3, $a1, $v1
    ctx->pc = 0x4f6fb8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
    // 0x4f6fbc: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f6fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6fc0: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f6fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f6fc4: 0x133400  sll         $a2, $s3, 16
    ctx->pc = 0x4f6fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f6fc8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6fcc: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f6fccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f6fd0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6fd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6fd4: 0x2628012c  addiu       $t0, $s1, 0x12C
    ctx->pc = 0x4f6fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x4f6fd8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6fdc: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f6fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f6fe0: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4f6fe0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f6fe4: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f6fe8: 0x3647ffff  ori         $a3, $s2, 0xFFFF
    ctx->pc = 0x4f6fe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6fec: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f6fecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f6ff0: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f6ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f6ff4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4f6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f6ff8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f6ff8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f6ffc: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f6ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f7000: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f7000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f7004: 0xe39024  and         $s2, $a3, $v1
    ctx->pc = 0x4f7004u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f7008: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f7008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f700c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f700cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f7010: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f7010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f7014: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f7014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f7018: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f7018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f701c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f701cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f7020: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F7020u;
    SET_GPR_U32(ctx, 31, 0x4F7028u);
    ctx->pc = 0x4F7024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7020u;
    // 0x4f7024: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F7020u, 0x4F7028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7028u;
label_4f7028:
    // 0x4f7028: 0x2501824  and         $v1, $s2, $s0
    ctx->pc = 0x4f7028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f702c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f702cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7030: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4f7030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4f7034: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x4f7034u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4f7038: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4f7038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f703c: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x4f703cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f7040: 0x2673002d  addiu       $s3, $s3, 0x2D
    ctx->pc = 0x4f7040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 45));
    // 0x4f7044: 0xa633015e  sh          $s3, 0x15E($s1)
    ctx->pc = 0x4f7044u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 19));
    // 0x4f7048: 0x122c00  sll         $a1, $s2, 16
    ctx->pc = 0x4f7048u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f704c: 0xc13e438  jal         func_4F90E0
    ctx->pc = 0x4F704Cu;
    SET_GPR_U32(ctx, 31, 0x4F7054u);
    ctx->pc = 0x4F7050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F704Cu;
    // 0x4f7050: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F90E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F90E0u, 0x4F704Cu, 0x4F7054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F7054u;
label_4f7054:
    // 0x4f7054: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f7054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7058: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f705c: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x4f705cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f7060: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f7060u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7064: 0x2703024  and         $a2, $s3, $s0
    ctx->pc = 0x4f7064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f7068: 0x324201ff  andi        $v0, $s2, 0x1FF
    ctx->pc = 0x4f7068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)511);
    // 0x4f706c: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f706cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7070: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f7070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f7074: 0x32448000  andi        $a0, $s2, 0x8000
    ctx->pc = 0x4f7074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f7078: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f7078u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f707c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4f707cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7080: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f7080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f7084: 0xc4980a  movz        $s3, $a2, $a0
    ctx->pc = 0x4f7084u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
    // 0x4f7088: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f7088u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f708c: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f708cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f7090: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x4f7090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x4f7094: 0x132c00  sll         $a1, $s3, 16
    ctx->pc = 0x4f7094u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f7098: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f7098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f709c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f709cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f70a0: 0xc39024  and         $s2, $a2, $v1
    ctx->pc = 0x4f70a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4f70a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f70a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f70a8: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f70a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f70ac: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f70acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f70b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f70b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f70b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f70b8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f70b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f70bc: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f70bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f70c0: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f70c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f70c4: 0x3642ffff  ori         $v0, $s2, 0xFFFF
    ctx->pc = 0x4f70c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f70c8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f70c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f70cc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4f70ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4f70d0: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f70d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f70d4: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4F70D4u;
    SET_GPR_U32(ctx, 31, 0x4F70DCu);
    ctx->pc = 0x4F70D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F70D4u;
    // 0x4f70d8: 0xa6320136  sh          $s2, 0x136($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 310), (uint16_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4F70D4u, 0x4F70DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F70DCu;
label_4f70dc:
    // 0x4f70dc: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4f70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4f70e0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f70e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f70e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f70e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f70e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f70e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f70ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f70ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f70f0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f70f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f70f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f70f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f70f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f70fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f70fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f7100: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f7100u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f7104: 0x813db36  j           func_4F6CD8
    ctx->pc = 0x4F7104u;
    ctx->pc = 0x4F7108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F7104u;
    // 0x4f7108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6CD8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4f6cd8;
    ctx->pc = 0x4F710Cu;
    // 0x4f710c: 0x0  nop
    ctx->pc = 0x4f710cu;
    // NOP
    ctx->pc = 0x4f7110u;
}
