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

// Function: sub_00241760
// Address: 0x241760 - 0x241850
void sub_00241760_0x241760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241760_0x241760");
#endif

    switch (ctx->pc) {
        case 0x241784u: goto label_241784;
        default: break;
    }

    ctx->pc = 0x241760u;

    // 0x241760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x241760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x241764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241768: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x241768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24176c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x241770: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x241770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241774: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x241774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x241778: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x241778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24177c: 0xc0905ae  jal         func_2416B8
    ctx->pc = 0x24177Cu;
    SET_GPR_U32(ctx, 31, 0x241784u);
    ctx->pc = 0x241780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24177Cu;
    // 0x241780: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B8u, 0x24177Cu, 0x241784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241784u;
label_241784:
    // 0x241784: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x241784u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241788: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x241788u;
    {
        const bool branch_taken_0x241788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241788u;
        // 0x24178c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241788) {
            ctx->pc = 0x241834u;
            goto label_241834;
        }
    }
    ctx->pc = 0x241790u;
    // 0x241790: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x241790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x241794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241798: 0x12230017  beq         $s1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x241798u;
    {
        const bool branch_taken_0x241798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x24179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241798u;
        // 0x24179c: 0x523021  addu        $a2, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241798) {
            ctx->pc = 0x2417F8u;
            goto label_2417f8;
        }
    }
    ctx->pc = 0x2417A0u;
    // 0x2417a0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2417a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2417a4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2417A4u;
    {
        const bool branch_taken_0x2417a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2417a4) {
            ctx->pc = 0x2417A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2417A4u;
            // 0x2417a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2417C0u;
            goto label_2417c0;
        }
    }
    ctx->pc = 0x2417ACu;
    // 0x2417ac: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2417ACu;
    {
        const bool branch_taken_0x2417ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2417ac) {
            ctx->pc = 0x2417B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2417ACu;
            // 0x2417b0: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2417E0u;
            goto label_2417e0;
        }
    }
    ctx->pc = 0x2417B4u;
    // 0x2417b4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2417B4u;
    {
        const bool branch_taken_0x2417b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2417B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417B4u;
        // 0x2417b8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417b4) {
            ctx->pc = 0x241834u;
            goto label_241834;
        }
    }
    ctx->pc = 0x2417BCu;
    // 0x2417bc: 0x0  nop
    ctx->pc = 0x2417bcu;
    // NOP
label_2417c0:
    // 0x2417c0: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2417C0u;
    {
        const bool branch_taken_0x2417c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2417C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417C0u;
        // 0x2417c4: 0x101180  sll         $v0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417c0) {
            ctx->pc = 0x241810u;
            goto label_241810;
        }
    }
    ctx->pc = 0x2417C8u;
    // 0x2417c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2417c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2417cc: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2417CCu;
    {
        const bool branch_taken_0x2417cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2417D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417CCu;
        // 0x2417d0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417cc) {
            ctx->pc = 0x241818u;
            goto label_241818;
        }
    }
    ctx->pc = 0x2417D4u;
    // 0x2417d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2417D4u;
    {
        const bool branch_taken_0x2417d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2417D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417D4u;
        // 0x2417d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417d4) {
            ctx->pc = 0x241838u;
            goto label_241838;
        }
    }
    ctx->pc = 0x2417DCu;
    // 0x2417dc: 0x0  nop
    ctx->pc = 0x2417dcu;
    // NOP
label_2417e0:
    // 0x2417e0: 0x8f83c9a8  lw          $v1, -0x3658($gp)
    ctx->pc = 0x2417e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953384)));
    // 0x2417e4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2417e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2417e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2417e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2417ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2417ECu;
    {
        const bool branch_taken_0x2417ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2417F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417ECu;
        // 0x2417f0: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417ec) {
            ctx->pc = 0x241824u;
            goto label_241824;
        }
    }
    ctx->pc = 0x2417F4u;
    // 0x2417f4: 0x0  nop
    ctx->pc = 0x2417f4u;
    // NOP
label_2417f8:
    // 0x2417f8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2417f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2417fc: 0x8f83c9ac  lw          $v1, -0x3654($gp)
    ctx->pc = 0x2417fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953388)));
    // 0x241800: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x241800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x241804: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x241804u;
    {
        const bool branch_taken_0x241804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241804u;
        // 0x241808: 0x21140  sll         $v0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241804) {
            ctx->pc = 0x241820u;
            goto label_241820;
        }
    }
    ctx->pc = 0x24180Cu;
    // 0x24180c: 0x0  nop
    ctx->pc = 0x24180cu;
    // NOP
label_241810:
    // 0x241810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x241810u;
    {
        const bool branch_taken_0x241810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241810u;
        // 0x241814: 0x8f83c9b0  lw          $v1, -0x3650($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241810) {
            ctx->pc = 0x241820u;
            goto label_241820;
        }
    }
    ctx->pc = 0x241818u;
label_241818:
    // 0x241818: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x241818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x24181c: 0x8f83c9b4  lw          $v1, -0x364C($gp)
    ctx->pc = 0x24181cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953396)));
label_241820:
    // 0x241820: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x241820u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_241824:
    // 0x241824: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x241824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x241828: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x241828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x24182c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x24182cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241830: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x241830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_241834:
    // 0x241834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_241838:
    // 0x241838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x241838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24183c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24183cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241840: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x241840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241844: 0x3e00008  jr          $ra
    ctx->pc = 0x241844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241844u;
        // 0x241848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24184Cu;
    // 0x24184c: 0x0  nop
    ctx->pc = 0x24184cu;
    // NOP
    ctx->pc = 0x241850u;
}
