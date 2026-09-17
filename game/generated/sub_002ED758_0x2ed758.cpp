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

// Function: sub_002ED758
// Address: 0x2ed758 - 0x2ed858
void sub_002ED758_0x2ed758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED758_0x2ed758");
#endif

    switch (ctx->pc) {
        case 0x2ed810u: goto label_2ed810;
        case 0x2ed824u: goto label_2ed824;
        case 0x2ed830u: goto label_2ed830;
        default: break;
    }

    ctx->pc = 0x2ed758u;

    // 0x2ed758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed75c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ed75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed760: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ed760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ed764: 0x24f20080  addiu       $s2, $a3, 0x80
    ctx->pc = 0x2ed764u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x2ed768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed76c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ed770: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ed770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ed774: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ed774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ed778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED778u;
    {
        const bool branch_taken_0x2ed778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED778u;
        // 0x2ed77c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed778) {
            ctx->pc = 0x2ED790u;
            goto label_2ed790;
        }
    }
    ctx->pc = 0x2ED780u;
    // 0x2ed780: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ed780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ed784: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ed784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ed788: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED788u;
    {
        const bool branch_taken_0x2ed788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed788) {
            ctx->pc = 0x2ED79Cu;
            goto label_2ed79c;
        }
    }
    ctx->pc = 0x2ED790u;
label_2ed790:
    // 0x2ed790: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2ed790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2ed794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed798: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2ed798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2ed79c:
    // 0x2ed79c: 0x14a00028  bnez        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2ED79Cu;
    {
        const bool branch_taken_0x2ed79c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED79Cu;
        // 0x2ed7a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed79c) {
            ctx->pc = 0x2ED840u;
            goto label_2ed840;
        }
    }
    ctx->pc = 0x2ED7A4u;
    // 0x2ed7a4: 0x24e50078  addiu       $a1, $a3, 0x78
    ctx->pc = 0x2ed7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 120));
    // 0x2ed7a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ed7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ed7ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED7ACu;
    {
        const bool branch_taken_0x2ed7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7ACu;
        // 0x2ed7b0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7ac) {
            ctx->pc = 0x2ED7C4u;
            goto label_2ed7c4;
        }
    }
    ctx->pc = 0x2ED7B4u;
    // 0x2ed7b4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ed7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ed7b8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ed7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ed7bc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED7BCu;
    {
        const bool branch_taken_0x2ed7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed7bc) {
            ctx->pc = 0x2ED7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED7BCu;
            // 0x2ed7c0: 0x24c50050  addiu       $a1, $a2, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED7D4u;
            goto label_2ed7d4;
        }
    }
    ctx->pc = 0x2ED7C4u;
label_2ed7c4:
    // 0x2ed7c4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ed7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2ed7c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ed7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7cc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ed7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ed7d0: 0x24c50050  addiu       $a1, $a2, 0x50
    ctx->pc = 0x2ed7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_2ed7d4:
    // 0x2ed7d4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ed7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ed7d8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED7D8u;
    {
        const bool branch_taken_0x2ed7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed7d8) {
            ctx->pc = 0x2ED7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED7D8u;
            // 0x2ed7dc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED7F4u;
            goto label_2ed7f4;
        }
    }
    ctx->pc = 0x2ED7E0u;
    // 0x2ed7e0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ed7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ed7e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ed7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ed7e8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED7E8u;
    {
        const bool branch_taken_0x2ed7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7E8u;
        // 0x2ed7ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7e8) {
            ctx->pc = 0x2ED7FCu;
            goto label_2ed7fc;
        }
    }
    ctx->pc = 0x2ED7F0u;
    // 0x2ed7f0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ed7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ed7f4:
    // 0x2ed7f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ed7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7f8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ed7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ed7fc:
    // 0x2ed7fc: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ED7FCu;
    {
        const bool branch_taken_0x2ed7fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7FCu;
        // 0x2ed800: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7fc) {
            ctx->pc = 0x2ED840u;
            goto label_2ed840;
        }
    }
    ctx->pc = 0x2ED804u;
    // 0x2ed804: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2ed804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed808: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2ED808u;
    SET_GPR_U32(ctx, 31, 0x2ED810u);
    ctx->pc = 0x2ED80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED808u;
    // 0x2ed80c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2ED808u, 0x2ED810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED810u;
label_2ed810:
    // 0x2ed810: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ed810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ed814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ed814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed818: 0x24a5fec0  addiu       $a1, $a1, -0x140
    ctx->pc = 0x2ed818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966976));
    // 0x2ed81c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2ED81Cu;
    SET_GPR_U32(ctx, 31, 0x2ED824u);
    ctx->pc = 0x2ED820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED81Cu;
    // 0x2ed820: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2ED81Cu, 0x2ED824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED824u;
label_2ed824:
    // 0x2ed824: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ed824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed828: 0xc0bb3b4  jal         func_2ECED0
    ctx->pc = 0x2ED828u;
    SET_GPR_U32(ctx, 31, 0x2ED830u);
    ctx->pc = 0x2ED82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED828u;
    // 0x2ed82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECED0u, 0x2ED828u, 0x2ED830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED830u;
label_2ed830:
    // 0x2ed830: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2ed830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2ed834: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ed834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ed838: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2ed838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2ed83c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed840:
    // 0x2ed840: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ed840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed844: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ed844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed848: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ed848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ed84c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED84Cu;
        // 0x2ed850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED854u;
    // 0x2ed854: 0x0  nop
    ctx->pc = 0x2ed854u;
    // NOP
    ctx->pc = 0x2ed858u;
}
