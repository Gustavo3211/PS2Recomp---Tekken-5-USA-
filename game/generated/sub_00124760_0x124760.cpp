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

// Function: sub_00124760
// Address: 0x124760 - 0x124880
void sub_00124760_0x124760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124760_0x124760");
#endif

    switch (ctx->pc) {
        case 0x1247e8u: goto label_1247e8;
        case 0x124810u: goto label_124810;
        case 0x124828u: goto label_124828;
        case 0x124850u: goto label_124850;
        case 0x124868u: goto label_124868;
        default: break;
    }

    ctx->pc = 0x124760u;

    // 0x124760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124764: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x124764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x124768: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x124768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12476c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12476cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x124770: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x124770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x124774: 0x90900000  lbu         $s0, 0x0($a0)
    ctx->pc = 0x124774u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x124778: 0x2e020070  sltiu       $v0, $s0, 0x70
    ctx->pc = 0x124778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x12477c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12477Cu;
    {
        const bool branch_taken_0x12477c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12477Cu;
        // 0x124780: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12477c) {
            ctx->pc = 0x1247A8u;
            goto label_1247a8;
        }
    }
    ctx->pc = 0x124784u;
    // 0x124784: 0x2e020050  sltiu       $v0, $s0, 0x50
    ctx->pc = 0x124784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x124788: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x124788u;
    {
        const bool branch_taken_0x124788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124788u;
        // 0x12478c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124788) {
            ctx->pc = 0x1247D0u;
            goto label_1247d0;
        }
    }
    ctx->pc = 0x124790u;
    // 0x124790: 0x12020029  beq         $s0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x124790u;
    {
        const bool branch_taken_0x124790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x124794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124790u;
        // 0x124794: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124790) {
            ctx->pc = 0x124838u;
            goto label_124838;
        }
    }
    ctx->pc = 0x124798u;
    // 0x124798: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x124798u;
    {
        const bool branch_taken_0x124798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x124798) {
            ctx->pc = 0x124848u;
            goto label_124848;
        }
    }
    ctx->pc = 0x1247A0u;
    // 0x1247a0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1247A0u;
    {
        const bool branch_taken_0x1247a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1247a0) {
            ctx->pc = 0x124860u;
            goto label_124860;
        }
    }
    ctx->pc = 0x1247A8u;
label_1247a8:
    // 0x1247a8: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x1247a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1247ac: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1247ACu;
    {
        const bool branch_taken_0x1247ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1247B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247ACu;
        // 0x1247b0: 0x2e020090  sltiu       $v0, $s0, 0x90 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247ac) {
            ctx->pc = 0x1247E0u;
            goto label_1247e0;
        }
    }
    ctx->pc = 0x1247B4u;
    // 0x1247b4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1247B4u;
    {
        const bool branch_taken_0x1247b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1247B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247B4u;
        // 0x1247b8: 0x24020092  addiu       $v0, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247b4) {
            ctx->pc = 0x1247F4u;
            goto label_1247f4;
        }
    }
    ctx->pc = 0x1247BCu;
    // 0x1247bc: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1247BCu;
    {
        const bool branch_taken_0x1247bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1247bc) {
            ctx->pc = 0x124808u;
            goto label_124808;
        }
    }
    ctx->pc = 0x1247C4u;
    // 0x1247c4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1247C4u;
    {
        const bool branch_taken_0x1247c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1247c4) {
            ctx->pc = 0x124860u;
            goto label_124860;
        }
    }
    ctx->pc = 0x1247CCu;
    // 0x1247cc: 0x0  nop
    ctx->pc = 0x1247ccu;
    // NOP
label_1247d0:
    // 0x1247d0: 0x3402ffb0  ori         $v0, $zero, 0xFFB0
    ctx->pc = 0x1247d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65456);
    // 0x1247d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1247d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1247d8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1247D8u;
    {
        const bool branch_taken_0x1247d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1247DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247D8u;
        // 0x1247dc: 0xa62203f8  sh          $v0, 0x3F8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247d8) {
            ctx->pc = 0x124868u;
            goto label_124868;
        }
    }
    ctx->pc = 0x1247E0u;
label_1247e0:
    // 0x1247e0: 0xc048e50  jal         func_123940
    ctx->pc = 0x1247E0u;
    SET_GPR_U32(ctx, 31, 0x1247E8u);
    ctx->pc = 0x1247E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1247E0u;
    // 0x1247e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123940u, 0x1247E0u, 0x1247E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1247E8u;
label_1247e8:
    // 0x1247e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1247e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247ec: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x1247ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1247f0: 0xa62203f8  sh          $v0, 0x3F8($s1)
    ctx->pc = 0x1247f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
label_1247f4:
    // 0x1247f4: 0x3402ff90  ori         $v0, $zero, 0xFF90
    ctx->pc = 0x1247f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65424);
    // 0x1247f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1247f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1247fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1247fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124800: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x124800u;
    {
        const bool branch_taken_0x124800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124800u;
        // 0x124804: 0xa62203f8  sh          $v0, 0x3F8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124800) {
            ctx->pc = 0x124820u;
            goto label_124820;
        }
    }
    ctx->pc = 0x124808u;
label_124808:
    // 0x124808: 0xc048e50  jal         func_123940
    ctx->pc = 0x124808u;
    SET_GPR_U32(ctx, 31, 0x124810u);
    ctx->pc = 0x12480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124808u;
    // 0x12480c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123940u, 0x124808u, 0x124810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124810u;
label_124810:
    // 0x124810: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x124810u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124818: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12481c: 0xa62303f8  sh          $v1, 0x3F8($s1)
    ctx->pc = 0x12481cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 3));
label_124820:
    // 0x124820: 0xc048e50  jal         func_123940
    ctx->pc = 0x124820u;
    SET_GPR_U32(ctx, 31, 0x124828u);
    ctx->pc = 0x123940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123940u, 0x124820u, 0x124828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124828u;
label_124828:
    // 0x124828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12482c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124830: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x124830u;
    {
        const bool branch_taken_0x124830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124830u;
        // 0x124834: 0xfe220010  sd          $v0, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124830) {
            ctx->pc = 0x124868u;
            goto label_124868;
        }
    }
    ctx->pc = 0x124838u;
label_124838:
    // 0x124838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12483c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12483Cu;
    {
        const bool branch_taken_0x12483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12483Cu;
        // 0x124840: 0xa2220477  sb          $v0, 0x477($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1143), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12483c) {
            ctx->pc = 0x124868u;
            goto label_124868;
        }
    }
    ctx->pc = 0x124844u;
    // 0x124844: 0x0  nop
    ctx->pc = 0x124844u;
    // NOP
label_124848:
    // 0x124848: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124848u;
    SET_GPR_U32(ctx, 31, 0x124850u);
    ctx->pc = 0x12484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124848u;
    // 0x12484c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124848u, 0x124850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124850u;
label_124850:
    // 0x124850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124854: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x124854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124858: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124858u;
    {
        const bool branch_taken_0x124858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124858u;
        // 0x12485c: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124858) {
            ctx->pc = 0x124868u;
            goto label_124868;
        }
    }
    ctx->pc = 0x124860u;
label_124860:
    // 0x124860: 0xc049d4a  jal         func_127528
    ctx->pc = 0x124860u;
    SET_GPR_U32(ctx, 31, 0x124868u);
    ctx->pc = 0x127528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127528u, 0x124860u, 0x124868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124868u;
label_124868:
    // 0x124868: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x124868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12486c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12486cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124870: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x124870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124874: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x124874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124878: 0x3e00008  jr          $ra
    ctx->pc = 0x124878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124878u;
        // 0x12487c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124880u;
}
