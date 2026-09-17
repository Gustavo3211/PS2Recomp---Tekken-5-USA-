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

// Function: sub_002D0680
// Address: 0x2d0680 - 0x2d0840
void sub_002D0680_0x2d0680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0680_0x2d0680");
#endif

    switch (ctx->pc) {
        case 0x2d06f8u: goto label_2d06f8;
        case 0x2d0708u: goto label_2d0708;
        case 0x2d076cu: goto label_2d076c;
        case 0x2d07d0u: goto label_2d07d0;
        case 0x2d07e8u: goto label_2d07e8;
        case 0x2d0804u: goto label_2d0804;
        default: break;
    }

    ctx->pc = 0x2d0680u;

    // 0x2d0680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0684: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d0684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d0688: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d0688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d068c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d068cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d0690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d0694: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d0694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d0698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d069c: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x2d069cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2d06a0: 0x924201bb  lbu         $v0, 0x1BB($s2)
    ctx->pc = 0x2d06a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 443)));
    // 0x2d06a4: 0x8c900030  lw          $s0, 0x30($a0)
    ctx->pc = 0x2d06a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d06a8: 0x86450096  lh          $a1, 0x96($s2)
    ctx->pc = 0x2d06a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x2d06ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D06ACu;
    {
        const bool branch_taken_0x2d06ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06ACu;
        // 0x2d06b0: 0x8653009a  lh          $s3, 0x9A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 154)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06ac) {
            ctx->pc = 0x2D06C4u;
            goto label_2d06c4;
        }
    }
    ctx->pc = 0x2D06B4u;
    // 0x2d06b4: 0x86430180  lh          $v1, 0x180($s2)
    ctx->pc = 0x2d06b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x2d06b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d06bc: 0x5062005a  beql        $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2D06BCu;
    {
        const bool branch_taken_0x2d06bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d06bc) {
            ctx->pc = 0x2D06C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D06BCu;
            // 0x2d06c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0828u;
            goto label_2d0828;
        }
    }
    ctx->pc = 0x2D06C4u;
label_2d06c4:
    // 0x2d06c4: 0x52000058  beql        $s0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x2D06C4u;
    {
        const bool branch_taken_0x2d06c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d06c4) {
            ctx->pc = 0x2D06C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D06C4u;
            // 0x2d06c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0828u;
            goto label_2d0828;
        }
    }
    ctx->pc = 0x2D06CCu;
    // 0x2d06cc: 0x924301f8  lbu         $v1, 0x1F8($s2)
    ctx->pc = 0x2d06ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 504)));
    // 0x2d06d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D06D0u;
    {
        const bool branch_taken_0x2d06d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D06D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06D0u;
        // 0x2d06d4: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06d0) {
            ctx->pc = 0x2D06E0u;
            goto label_2d06e0;
        }
    }
    ctx->pc = 0x2D06D8u;
    // 0x2d06d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2d06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d06dc: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x2d06dcu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
label_2d06e0:
    // 0x2d06e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d06e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d06e4: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x2d06e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d06e8: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D06E8u;
    {
        const bool branch_taken_0x2d06e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d06e8) {
            ctx->pc = 0x2D06ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D06E8u;
            // 0x2d06ec: 0x8645009e  lh          $a1, 0x9E($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 158)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0798u;
            goto label_2d0798;
        }
    }
    ctx->pc = 0x2D06F0u;
    // 0x2d06f0: 0x8c900030  lw          $s0, 0x30($a0)
    ctx->pc = 0x2d06f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d06f4: 0x0  nop
    ctx->pc = 0x2d06f4u;
    // NOP
label_2d06f8:
    // 0x2d06f8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2d06f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d06fc: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D06FCu;
    {
        const bool branch_taken_0x2d06fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d06fc) {
            ctx->pc = 0x2D0700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D06FCu;
            // 0x2d0700: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0784u;
            goto label_2d0784;
        }
    }
    ctx->pc = 0x2D0704u;
    // 0x2d0704: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2d0704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_2d0708:
    // 0x2d0708: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0708u;
    {
        const bool branch_taken_0x2d0708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0708u;
        // 0x2d070c: 0x3062bfff  andi        $v0, $v1, 0xBFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49151);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0708) {
            ctx->pc = 0x2D0728u;
            goto label_2d0728;
        }
    }
    ctx->pc = 0x2D0710u;
    // 0x2d0710: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2d0710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d0714: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D0714u;
    {
        const bool branch_taken_0x2d0714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0714) {
            ctx->pc = 0x2D0718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0714u;
            // 0x2d0718: 0x26040002  addiu       $a0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0764u;
            goto label_2d0764;
        }
    }
    ctx->pc = 0x2D071Cu;
    // 0x2d071c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2D071Cu;
    {
        const bool branch_taken_0x2d071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D071Cu;
        // 0x2d0720: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d071c) {
            ctx->pc = 0x2D0770u;
            goto label_2d0770;
        }
    }
    ctx->pc = 0x2D0724u;
    // 0x2d0724: 0x0  nop
    ctx->pc = 0x2d0724u;
    // NOP
label_2d0728:
    // 0x2d0728: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x2d0728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2d072c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D072Cu;
    {
        const bool branch_taken_0x2d072c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D072Cu;
        // 0x2d0730: 0x3062dfff  andi        $v0, $v1, 0xDFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57343);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d072c) {
            ctx->pc = 0x2D0748u;
            goto label_2d0748;
        }
    }
    ctx->pc = 0x2D0734u;
    // 0x2d0734: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2d0734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d0738: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0738u;
    {
        const bool branch_taken_0x2d0738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0738u;
        // 0x2d073c: 0x26040002  addiu       $a0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0738) {
            ctx->pc = 0x2D0764u;
            goto label_2d0764;
        }
    }
    ctx->pc = 0x2D0740u;
    // 0x2d0740: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D0740u;
    {
        const bool branch_taken_0x2d0740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0740u;
        // 0x2d0744: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0740) {
            ctx->pc = 0x2D0770u;
            goto label_2d0770;
        }
    }
    ctx->pc = 0x2D0748u;
label_2d0748:
    // 0x2d0748: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2d0748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2d074c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D074Cu;
    {
        const bool branch_taken_0x2d074c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d074c) {
            ctx->pc = 0x2D0750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D074Cu;
            // 0x2d0750: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0770u;
            goto label_2d0770;
        }
    }
    ctx->pc = 0x2D0754u;
    // 0x2d0754: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2d0754u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d0758: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0758u;
    {
        const bool branch_taken_0x2d0758 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d0758) {
            ctx->pc = 0x2D075Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0758u;
            // 0x2d075c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0770u;
            goto label_2d0770;
        }
    }
    ctx->pc = 0x2D0760u;
    // 0x2d0760: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x2d0760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2d0764:
    // 0x2d0764: 0xc0b4162  jal         func_2D0588
    ctx->pc = 0x2D0764u;
    SET_GPR_U32(ctx, 31, 0x2D076Cu);
    ctx->pc = 0x2D0768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0764u;
    // 0x2d0768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0588u, 0x2D0764u, 0x2D076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D076Cu;
label_2d076c:
    // 0x2d076c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2d076cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2d0770:
    // 0x2d0770: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2d0770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d0774: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2D0774u;
    {
        const bool branch_taken_0x2d0774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0774u;
        // 0x2d0778: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0774) {
            ctx->pc = 0x2D0708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0708;
        }
    }
    ctx->pc = 0x2D077Cu;
    // 0x2d077c: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x2d077cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2d0780: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d0780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d0784:
    // 0x2d0784: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x2d0784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d0788: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2D0788u;
    {
        const bool branch_taken_0x2d0788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0788) {
            ctx->pc = 0x2D078Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0788u;
            // 0x2d078c: 0x8c900030  lw          $s0, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D06F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d06f8;
        }
    }
    ctx->pc = 0x2D0790u;
    // 0x2d0790: 0x924301f8  lbu         $v1, 0x1F8($s2)
    ctx->pc = 0x2d0790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 504)));
    // 0x2d0794: 0x8645009e  lh          $a1, 0x9E($s2)
    ctx->pc = 0x2d0794u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 158)));
label_2d0798:
    // 0x2d0798: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0798u;
    {
        const bool branch_taken_0x2d0798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0798u;
        // 0x2d079c: 0x865300a0  lh          $s3, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0798) {
            ctx->pc = 0x2D07ACu;
            goto label_2d07ac;
        }
    }
    ctx->pc = 0x2D07A0u;
    // 0x2d07a0: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x2d07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2d07a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2d07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d07a8: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x2d07a8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
label_2d07ac:
    // 0x2d07ac: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2d07acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d07b0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D07B0u;
    {
        const bool branch_taken_0x2d07b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07B0u;
        // 0x2d07b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07b0) {
            ctx->pc = 0x2D0824u;
            goto label_2d0824;
        }
    }
    ctx->pc = 0x2D07B8u;
    // 0x2d07b8: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x2d07b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d07bc: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D07BCu;
    {
        const bool branch_taken_0x2d07bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d07bc) {
            ctx->pc = 0x2D07C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D07BCu;
            // 0x2d07c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0828u;
            goto label_2d0828;
        }
    }
    ctx->pc = 0x2D07C4u;
    // 0x2d07c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D07C4u;
    {
        const bool branch_taken_0x2d07c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07C4u;
        // 0x2d07c8: 0x8c900030  lw          $s0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07c4) {
            ctx->pc = 0x2D07D8u;
            goto label_2d07d8;
        }
    }
    ctx->pc = 0x2D07CCu;
    // 0x2d07cc: 0x0  nop
    ctx->pc = 0x2d07ccu;
    // NOP
label_2d07d0:
    // 0x2d07d0: 0x8c900030  lw          $s0, 0x30($a0)
    ctx->pc = 0x2d07d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d07d4: 0x0  nop
    ctx->pc = 0x2d07d4u;
    // NOP
label_2d07d8:
    // 0x2d07d8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2d07d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d07dc: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D07DCu;
    {
        const bool branch_taken_0x2d07dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d07dc) {
            ctx->pc = 0x2D07E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D07DCu;
            // 0x2d07e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0818u;
            goto label_2d0818;
        }
    }
    ctx->pc = 0x2D07E4u;
    // 0x2d07e4: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2d07e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_2d07e8:
    // 0x2d07e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D07E8u;
    {
        const bool branch_taken_0x2d07e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07E8u;
        // 0x2d07ec: 0x30627fff  andi        $v0, $v1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07e8) {
            ctx->pc = 0x2D0804u;
            goto label_2d0804;
        }
    }
    ctx->pc = 0x2D07F0u;
    // 0x2d07f0: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D07F0u;
    {
        const bool branch_taken_0x2d07f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d07f0) {
            ctx->pc = 0x2D07F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D07F0u;
            // 0x2d07f4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0808u;
            goto label_2d0808;
        }
    }
    ctx->pc = 0x2D07F8u;
    // 0x2d07f8: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x2d07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2d07fc: 0xc0b4162  jal         func_2D0588
    ctx->pc = 0x2D07FCu;
    SET_GPR_U32(ctx, 31, 0x2D0804u);
    ctx->pc = 0x2D0800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D07FCu;
    // 0x2d0800: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0588u, 0x2D07FCu, 0x2D0804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0804u;
label_2d0804:
    // 0x2d0804: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2d0804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2d0808:
    // 0x2d0808: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2d0808u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d080c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D080Cu;
    {
        const bool branch_taken_0x2d080c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D080Cu;
        // 0x2d0810: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d080c) {
            ctx->pc = 0x2D07E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d07e8;
        }
    }
    ctx->pc = 0x2D0814u;
    // 0x2d0814: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d0814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d0818:
    // 0x2d0818: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x2d0818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d081c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2D081Cu;
    {
        const bool branch_taken_0x2d081c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d081c) {
            ctx->pc = 0x2D0820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D081Cu;
            // 0x2d0820: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D07D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d07d0;
        }
    }
    ctx->pc = 0x2D0824u;
label_2d0824:
    // 0x2d0824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0828:
    // 0x2d0828: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d0828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d082c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d082cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0830: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d0830u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d0834: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0838: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0838u;
        // 0x2d083c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0840u;
}
