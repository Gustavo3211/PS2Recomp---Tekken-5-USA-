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

// Function: sub_0033DD60
// Address: 0x33dd60 - 0x33de20
void sub_0033DD60_0x33dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DD60_0x33dd60");
#endif

    switch (ctx->pc) {
        case 0x33dd98u: goto label_33dd98;
        case 0x33de00u: goto label_33de00;
        default: break;
    }

    ctx->pc = 0x33dd60u;

    // 0x33dd60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33dd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33dd64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33dd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33dd68: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x33dd68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dd6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33dd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33dd70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33dd70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dd74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33dd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33dd78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33dd78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dd7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33dd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33dd80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x33dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33dd84: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x33dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33dd88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33dd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dd8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33dd90: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x33DD90u;
    SET_GPR_U32(ctx, 31, 0x33DD98u);
    ctx->pc = 0x33DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DD90u;
    // 0x33dd94: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x33DD90u, 0x33DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DD98u;
label_33dd98:
    // 0x33dd98: 0x960a0006  lhu         $t2, 0x6($s0)
    ctx->pc = 0x33dd98u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x33dd9c: 0x96070004  lhu         $a3, 0x4($s0)
    ctx->pc = 0x33dd9cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33dda0: 0x2ce2003b  sltiu       $v0, $a3, 0x3B
    ctx->pc = 0x33dda0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x33dda4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x33DDA4u;
    {
        const bool branch_taken_0x33dda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDA4u;
        // 0x33dda8: 0x960b0008  lhu         $t3, 0x8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dda4) {
            ctx->pc = 0x33DDE8u;
            goto label_33dde8;
        }
    }
    ctx->pc = 0x33DDACu;
    // 0x33ddac: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x33ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x33ddb0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33ddb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33ddb8: 0x8c6346f0  lw          $v1, 0x46F0($v1)
    ctx->pc = 0x33ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18160)));
    // 0x33ddbc: 0x600008  jr          $v1
    ctx->pc = 0x33DDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33DDC8u: goto label_33ddc8;
            case 0x33DDD8u: goto label_33ddd8;
            case 0x33DDE8u: goto label_33dde8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DDBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33DDC4u;
    // 0x33ddc4: 0x0  nop
    ctx->pc = 0x33ddc4u;
    // NOP
label_33ddc8:
    // 0x33ddc8: 0x2542003f  addiu       $v0, $t2, 0x3F
    ctx->pc = 0x33ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 63));
    // 0x33ddcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33DDCCu;
    {
        const bool branch_taken_0x33ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDCCu;
        // 0x33ddd0: 0x23182  srl         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ddcc) {
            ctx->pc = 0x33DDECu;
            goto label_33ddec;
        }
    }
    ctx->pc = 0x33DDD4u;
    // 0x33ddd4: 0x0  nop
    ctx->pc = 0x33ddd4u;
    // NOP
label_33ddd8:
    // 0x33ddd8: 0x2542007f  addiu       $v0, $t2, 0x7F
    ctx->pc = 0x33ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 127));
    // 0x33dddc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33DDDCu;
    {
        const bool branch_taken_0x33dddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDDCu;
        // 0x33dde0: 0x231c2  srl         $a2, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dddc) {
            ctx->pc = 0x33DDECu;
            goto label_33ddec;
        }
    }
    ctx->pc = 0x33DDE4u;
    // 0x33dde4: 0x0  nop
    ctx->pc = 0x33dde4u;
    // NOP
label_33dde8:
    // 0x33dde8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33dde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ddec:
    // 0x33ddec: 0x96250014  lhu         $a1, 0x14($s1)
    ctx->pc = 0x33ddecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x33ddf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33ddf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ddf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33ddf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ddf8: 0xc0d160e  jal         func_345838
    ctx->pc = 0x33DDF8u;
    SET_GPR_U32(ctx, 31, 0x33DE00u);
    ctx->pc = 0x33DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DDF8u;
    // 0x33ddfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345838u, 0x33DDF8u, 0x33DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DE00u;
label_33de00:
    // 0x33de00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33de04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33de04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33de08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33de08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33de0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33de0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33de10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33de10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33de14: 0x3e00008  jr          $ra
    ctx->pc = 0x33DE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE14u;
        // 0x33de18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DE1Cu;
    // 0x33de1c: 0x0  nop
    ctx->pc = 0x33de1cu;
    // NOP
    ctx->pc = 0x33de20u;
}
