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

// Function: sub_0028B5A0
// Address: 0x28b5a0 - 0x28b678
void sub_0028B5A0_0x28b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B5A0_0x28b5a0");
#endif

    switch (ctx->pc) {
        case 0x28b64cu: goto label_28b64c;
        case 0x28b664u: goto label_28b664;
        default: break;
    }

    ctx->pc = 0x28b5a0u;

    // 0x28b5a0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x28b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x28b5a4: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x28b5a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x28b5a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28b5ac: 0x30a70001  andi        $a3, $a1, 0x1
    ctx->pc = 0x28b5acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x28b5b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28b5b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28b5b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28b5b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28b5bc: 0x8d0583c0  lw          $a1, -0x7C40($t0)
    ctx->pc = 0x28b5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294935488)));
    // 0x28b5c0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x28b5c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b5c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28b5c8: 0x38a50004  xori        $a1, $a1, 0x4
    ctx->pc = 0x28b5c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)4);
    // 0x28b5cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28b5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28b5d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b5d4: 0x2781b3c0  addiu       $at, $gp, -0x4C40
    ctx->pc = 0x28b5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947776));
    // 0x28b5d8: 0x273821  addu        $a3, $at, $a3
    ctx->pc = 0x28b5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x28b5dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28b5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28b5e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28b5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b5e4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28B5E4u;
    {
        const bool branch_taken_0x28b5e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5E4u;
        // 0x28b5e8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5e4) {
            ctx->pc = 0x28B600u;
            goto label_28b600;
        }
    }
    ctx->pc = 0x28B5ECu;
    // 0x28b5ec: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x28b5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x28b5f0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28b5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28b5f4: 0x8e107068  lw          $s0, 0x7068($s0)
    ctx->pc = 0x28b5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28776)));
    // 0x28b5f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28B5F8u;
    {
        const bool branch_taken_0x28b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b5f8) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B600u;
label_28b600:
    // 0x28b600: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x28b600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28b604: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28b608: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28b608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28b60c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x28b60cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28b610: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x28b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x28b614: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28b614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28b618: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x28b618u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x28b61c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x28b61cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x28b620: 0x8e107078  lw          $s0, 0x7078($s0)
    ctx->pc = 0x28b620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28792)));
label_28b624:
    // 0x28b624: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x28B624u;
    {
        const bool branch_taken_0x28b624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b624) {
            ctx->pc = 0x28B628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B624u;
            // 0x28b628: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B668u;
            goto label_28b668;
        }
    }
    ctx->pc = 0x28B62Cu;
    // 0x28b62c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x28b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x28b630: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28b630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28b634: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x28b634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x28b638: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28b638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28b63c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28b640: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28b640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28b644: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28B644u;
    SET_GPR_U32(ctx, 31, 0x28B64Cu);
    ctx->pc = 0x28B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B644u;
    // 0x28b648: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28B644u, 0x28B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B64Cu;
label_28b64c:
    // 0x28b64c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28b64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b650: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28b650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b654: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B654u;
    {
        const bool branch_taken_0x28b654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B654u;
        // 0x28b658: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b654) {
            ctx->pc = 0x28B664u;
            goto label_28b664;
        }
    }
    ctx->pc = 0x28B65Cu;
    // 0x28b65c: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28B65Cu;
    SET_GPR_U32(ctx, 31, 0x28B664u);
    ctx->pc = 0x28B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B65Cu;
    // 0x28b660: 0x8e240130  lw          $a0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28B65Cu, 0x28B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B664u;
label_28b664:
    // 0x28b664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28b668:
    // 0x28b668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28b668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28b66c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28b66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b670: 0x3e00008  jr          $ra
    ctx->pc = 0x28B670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B670u;
        // 0x28b674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B678u;
}
