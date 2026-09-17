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

// Function: sub_0020A668
// Address: 0x20a668 - 0x20a780
void sub_0020A668_0x20a668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A668_0x20a668");
#endif

    switch (ctx->pc) {
        case 0x20a690u: goto label_20a690;
        case 0x20a6a0u: goto label_20a6a0;
        case 0x20a6e8u: goto label_20a6e8;
        case 0x20a6f0u: goto label_20a6f0;
        case 0x20a70cu: goto label_20a70c;
        case 0x20a71cu: goto label_20a71c;
        case 0x20a724u: goto label_20a724;
        case 0x20a72cu: goto label_20a72c;
        case 0x20a734u: goto label_20a734;
        case 0x20a758u: goto label_20a758;
        case 0x20a760u: goto label_20a760;
        case 0x20a768u: goto label_20a768;
        default: break;
    }

    ctx->pc = 0x20a668u;

    // 0x20a668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a66c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a670: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x20a670u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x20a674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a678: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a67c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20a67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a680: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20a680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20a684: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20a684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20a688: 0xc07cc00  jal         func_1F3000
    ctx->pc = 0x20A688u;
    SET_GPR_U32(ctx, 31, 0x20A690u);
    ctx->pc = 0x20A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A688u;
    // 0x20a68c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3000u, 0x20A688u, 0x20A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A690u;
label_20a690:
    // 0x20a690: 0x260283c0  addiu       $v0, $s0, -0x7C40
    ctx->pc = 0x20a690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935488));
    // 0x20a694: 0x9044002b  lbu         $a0, 0x2B($v0)
    ctx->pc = 0x20a694u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
    // 0x20a698: 0xc0b464a  jal         func_2D1928
    ctx->pc = 0x20A698u;
    SET_GPR_U32(ctx, 31, 0x20A6A0u);
    ctx->pc = 0x20A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A698u;
    // 0x20a69c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1928u, 0x20A698u, 0x20A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A6A0u;
label_20a6a0:
    // 0x20a6a0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x20a6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x20a6a4: 0x8f82973c  lw          $v0, -0x68C4($gp)
    ctx->pc = 0x20a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x20a6a8: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x20a6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x20a6ac: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x20a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A889Cu));
    // 0x20a6b0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x20a6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20a6b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20A6B4u;
    {
        const bool branch_taken_0x20a6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6B4u;
        // 0x20a6b8: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6b4) {
            ctx->pc = 0x20A6E0u;
            goto label_20a6e0;
        }
    }
    ctx->pc = 0x20A6BCu;
    // 0x20a6bc: 0x8ca50040  lw          $a1, 0x40($a1)
    ctx->pc = 0x20a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x20a6c0: 0x86220090  lh          $v0, 0x90($s1)
    ctx->pc = 0x20a6c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x20a6c4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x20a6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20a6c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A6C8u;
    {
        const bool branch_taken_0x20a6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a6c8) {
            ctx->pc = 0x20A6E0u;
            goto label_20a6e0;
        }
    }
    ctx->pc = 0x20A6D0u;
    // 0x20a6d0: 0x86420090  lh          $v0, 0x90($s2)
    ctx->pc = 0x20a6d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x20a6d4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x20a6d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20a6d8: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x20A6D8u;
    {
        const bool branch_taken_0x20a6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a6d8) {
            ctx->pc = 0x20A6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A6D8u;
            // 0x20a6dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A76Cu;
            goto label_20a76c;
        }
    }
    ctx->pc = 0x20A6E0u;
label_20a6e0:
    // 0x20a6e0: 0xc092486  jal         func_249218
    ctx->pc = 0x20A6E0u;
    SET_GPR_U32(ctx, 31, 0x20A6E8u);
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x20A6E0u, 0x20A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A6E8u;
label_20a6e8:
    // 0x20a6e8: 0xc092490  jal         func_249240
    ctx->pc = 0x20A6E8u;
    SET_GPR_U32(ctx, 31, 0x20A6F0u);
    ctx->pc = 0x20A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A6E8u;
    // 0x20a6ec: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249240u, 0x20A6E8u, 0x20A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A6F0u;
label_20a6f0:
    // 0x20a6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a6f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20a6f8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x20a6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x20a6fc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20A6FCu;
    {
        const bool branch_taken_0x20a6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6FCu;
        // 0x20a700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6fc) {
            ctx->pc = 0x20A750u;
            goto label_20a750;
        }
    }
    ctx->pc = 0x20A704u;
    // 0x20a704: 0xc085238  jal         func_2148E0
    ctx->pc = 0x20A704u;
    SET_GPR_U32(ctx, 31, 0x20A70Cu);
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x20A704u, 0x20A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A70Cu;
label_20a70c:
    // 0x20a70c: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20A70Cu;
    {
        const bool branch_taken_0x20a70c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20a70c) {
            ctx->pc = 0x20A750u;
            goto label_20a750;
        }
    }
    ctx->pc = 0x20A714u;
    // 0x20a714: 0xc082162  jal         func_208588
    ctx->pc = 0x20A714u;
    SET_GPR_U32(ctx, 31, 0x20A71Cu);
    ctx->pc = 0x20A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A714u;
    // 0x20a718: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20A714u, 0x20A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A71Cu;
label_20a71c:
    // 0x20a71c: 0xc082158  jal         func_208560
    ctx->pc = 0x20A71Cu;
    SET_GPR_U32(ctx, 31, 0x20A724u);
    ctx->pc = 0x208560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208560u, 0x20A71Cu, 0x20A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A724u;
label_20a724:
    // 0x20a724: 0xc08528a  jal         func_214A28
    ctx->pc = 0x20A724u;
    SET_GPR_U32(ctx, 31, 0x20A72Cu);
    ctx->pc = 0x20A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A724u;
    // 0x20a728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214A28u, 0x20A724u, 0x20A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A72Cu;
label_20a72c:
    // 0x20a72c: 0xc07ce42  jal         func_1F3908
    ctx->pc = 0x20A72Cu;
    SET_GPR_U32(ctx, 31, 0x20A734u);
    ctx->pc = 0x20A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A72Cu;
    // 0x20a730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3908u, 0x20A72Cu, 0x20A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A734u;
label_20a734:
    // 0x20a734: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x20a734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x20a738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a73c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a73cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a740: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a744: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20a744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a748: 0x807c864  j           func_1F2190
    ctx->pc = 0x20A748u;
    ctx->pc = 0x20A74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A748u;
    // 0x20a74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    sub_001F2190_0x1f2190(rdram, ctx, runtime); return;
    ctx->pc = 0x20A750u;
label_20a750:
    // 0x20a750: 0xc082162  jal         func_208588
    ctx->pc = 0x20A750u;
    SET_GPR_U32(ctx, 31, 0x20A758u);
    ctx->pc = 0x20A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A750u;
    // 0x20a754: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20A750u, 0x20A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A758u;
label_20a758:
    // 0x20a758: 0xc082158  jal         func_208560
    ctx->pc = 0x20A758u;
    SET_GPR_U32(ctx, 31, 0x20A760u);
    ctx->pc = 0x208560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208560u, 0x20A758u, 0x20A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A760u;
label_20a760:
    // 0x20a760: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x20A760u;
    SET_GPR_U32(ctx, 31, 0x20A768u);
    ctx->pc = 0x20A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A760u;
    // 0x20a764: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x20A760u, 0x20A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A768u;
label_20a768:
    // 0x20a768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a76c:
    // 0x20a76c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a770: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a774: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20a774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a778: 0x3e00008  jr          $ra
    ctx->pc = 0x20A778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A778u;
        // 0x20a77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A780u;
}
