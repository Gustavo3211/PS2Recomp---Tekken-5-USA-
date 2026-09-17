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

// Function: sub_0026C608
// Address: 0x26c608 - 0x26c6d0
void sub_0026C608_0x26c608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C608_0x26c608");
#endif

    switch (ctx->pc) {
        case 0x26c64cu: goto label_26c64c;
        case 0x26c6b0u: goto label_26c6b0;
        default: break;
    }

    ctx->pc = 0x26c608u;

    // 0x26c608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c60c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26c60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c610: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26c610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c614: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26c614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26c618: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26c618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c61c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26c61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26c620: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x26c620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x26c624: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x26c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x26c628: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x26c628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c62c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x26c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26c630: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x26c630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c634: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x26c634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x26c638: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x26C638u;
    {
        const bool branch_taken_0x26c638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C638u;
        // 0x26c63c: 0x94710044  lhu         $s1, 0x44($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c638) {
            ctx->pc = 0x26C6B4u;
            goto label_26c6b4;
        }
    }
    ctx->pc = 0x26C640u;
    // 0x26c640: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26c640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26c644: 0xc09faac  jal         func_27EAB0
    ctx->pc = 0x26C644u;
    SET_GPR_U32(ctx, 31, 0x26C64Cu);
    ctx->pc = 0x26C648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C644u;
    // 0x26c648: 0x8f85aa80  lw          $a1, -0x5580($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EAB0u, 0x26C644u, 0x26C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C64Cu;
label_26c64c:
    // 0x26c64c: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x26c64cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26c650: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x26C650u;
    {
        const bool branch_taken_0x26c650 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C650u;
        // 0x26c654: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c650) {
            ctx->pc = 0x26C6B8u;
            goto label_26c6b8;
        }
    }
    ctx->pc = 0x26C658u;
    // 0x26c658: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x26c658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c65c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x26c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x26c660: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26c660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26c664: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x26c664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x26c668: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26C668u;
    {
        const bool branch_taken_0x26c668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C668u;
        // 0x26c66c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c668) {
            ctx->pc = 0x26C6B8u;
            goto label_26c6b8;
        }
    }
    ctx->pc = 0x26C670u;
    // 0x26c670: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x26C670u;
    {
        const bool branch_taken_0x26c670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C670u;
        // 0x26c674: 0x24020512  addiu       $v0, $zero, 0x512 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c670) {
            ctx->pc = 0x26C6B4u;
            goto label_26c6b4;
        }
    }
    ctx->pc = 0x26C678u;
    // 0x26c678: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x26c678u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26c67c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26C67Cu;
    {
        const bool branch_taken_0x26c67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C67Cu;
        // 0x26c680: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c67c) {
            ctx->pc = 0x26C6B4u;
            goto label_26c6b4;
        }
    }
    ctx->pc = 0x26C684u;
    // 0x26c684: 0x8c620298  lw          $v0, 0x298($v1)
    ctx->pc = 0x26c684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 664)));
    // 0x26c688: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x26c688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26c68c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26C68Cu;
    {
        const bool branch_taken_0x26c68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C68Cu;
        // 0x26c690: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c68c) {
            ctx->pc = 0x26C6B8u;
            goto label_26c6b8;
        }
    }
    ctx->pc = 0x26C694u;
    // 0x26c694: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x26c694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x26c698: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x26c698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x26c69c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C69Cu;
    {
        const bool branch_taken_0x26c69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C69Cu;
        // 0x26c6a0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c69c) {
            ctx->pc = 0x26C6B8u;
            goto label_26c6b8;
        }
    }
    ctx->pc = 0x26C6A4u;
    // 0x26c6a4: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x26c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x26c6a8: 0xc09ae62  jal         func_26B988
    ctx->pc = 0x26C6A8u;
    SET_GPR_U32(ctx, 31, 0x26C6B0u);
    ctx->pc = 0x26C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C6A8u;
    // 0x26c6ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B988u, 0x26C6A8u, 0x26C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6B0u;
label_26c6b0:
    // 0x26c6b0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x26c6b0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26c6b4:
    // 0x26c6b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x26c6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c6b8:
    // 0x26c6b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c6b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c6bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26c6bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26c6c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26c6c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c6c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x26c6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26c6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x26C6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6C8u;
        // 0x26c6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C6D0u;
}
