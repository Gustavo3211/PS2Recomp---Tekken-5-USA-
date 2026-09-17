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

// Function: sub_00261740
// Address: 0x261740 - 0x261838
void sub_00261740_0x261740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261740_0x261740");
#endif

    switch (ctx->pc) {
        case 0x261740u: goto label_261740;
        case 0x261744u: goto label_261744;
        case 0x261748u: goto label_261748;
        case 0x26174cu: goto label_26174c;
        case 0x261750u: goto label_261750;
        case 0x261754u: goto label_261754;
        case 0x261758u: goto label_261758;
        case 0x26175cu: goto label_26175c;
        case 0x261760u: goto label_261760;
        case 0x261764u: goto label_261764;
        case 0x261768u: goto label_261768;
        case 0x26176cu: goto label_26176c;
        case 0x261770u: goto label_261770;
        case 0x261774u: goto label_261774;
        case 0x261778u: goto label_261778;
        case 0x26177cu: goto label_26177c;
        case 0x261780u: goto label_261780;
        case 0x261784u: goto label_261784;
        case 0x261788u: goto label_261788;
        case 0x26178cu: goto label_26178c;
        case 0x261790u: goto label_261790;
        case 0x261794u: goto label_261794;
        case 0x261798u: goto label_261798;
        case 0x26179cu: goto label_26179c;
        case 0x2617a0u: goto label_2617a0;
        case 0x2617a4u: goto label_2617a4;
        case 0x2617a8u: goto label_2617a8;
        case 0x2617acu: goto label_2617ac;
        case 0x2617b0u: goto label_2617b0;
        case 0x2617b4u: goto label_2617b4;
        case 0x2617b8u: goto label_2617b8;
        case 0x2617bcu: goto label_2617bc;
        case 0x2617c0u: goto label_2617c0;
        case 0x2617c4u: goto label_2617c4;
        case 0x2617c8u: goto label_2617c8;
        case 0x2617ccu: goto label_2617cc;
        case 0x2617d0u: goto label_2617d0;
        case 0x2617d4u: goto label_2617d4;
        case 0x2617d8u: goto label_2617d8;
        case 0x2617dcu: goto label_2617dc;
        case 0x2617e0u: goto label_2617e0;
        case 0x2617e4u: goto label_2617e4;
        case 0x2617e8u: goto label_2617e8;
        case 0x2617ecu: goto label_2617ec;
        case 0x2617f0u: goto label_2617f0;
        case 0x2617f4u: goto label_2617f4;
        case 0x2617f8u: goto label_2617f8;
        case 0x2617fcu: goto label_2617fc;
        case 0x261800u: goto label_261800;
        case 0x261804u: goto label_261804;
        case 0x261808u: goto label_261808;
        case 0x26180cu: goto label_26180c;
        case 0x261810u: goto label_261810;
        case 0x261814u: goto label_261814;
        case 0x261818u: goto label_261818;
        case 0x26181cu: goto label_26181c;
        case 0x261820u: goto label_261820;
        case 0x261824u: goto label_261824;
        case 0x261828u: goto label_261828;
        case 0x26182cu: goto label_26182c;
        case 0x261830u: goto label_261830;
        case 0x261834u: goto label_261834;
        default: break;
    }

    ctx->pc = 0x261740u;

label_261740:
    // 0x261740: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x261740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_261744:
    // 0x261744: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x261744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_261748:
    // 0x261748: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x261748u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
label_26174c:
    // 0x26174c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x26174cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_261750:
    // 0x261750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x261750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261754:
    // 0x261754: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x261754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_261758:
    // 0x261758: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x261758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26175c:
    // 0x26175c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x26175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_261760:
    // 0x261760: 0x260323b0  addiu       $v1, $s0, 0x23B0
    ctx->pc = 0x261760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9136));
label_261764:
    // 0x261764: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x261764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_261768:
    // 0x261768: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x261768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_26176c:
    // 0x26176c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_261770:
    if (ctx->pc == 0x261770u) {
        ctx->pc = 0x261770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26176Cu;
        // 0x261770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261774u;
        goto label_261774;
    }
    ctx->pc = 0x26176Cu;
    {
        const bool branch_taken_0x26176c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x261770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26176Cu;
        // 0x261770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26176c) {
            ctx->pc = 0x261780u;
            goto label_261780;
        }
    }
    ctx->pc = 0x261774u;
label_261774:
    // 0x261774: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x261774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
label_261778:
    // 0x261778: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_26177c:
    if (ctx->pc == 0x26177Cu) {
        ctx->pc = 0x261780u;
        goto label_261780;
    }
    ctx->pc = 0x261778u;
    {
        const bool branch_taken_0x261778 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x261778) {
            ctx->pc = 0x261784u;
            goto label_261784;
        }
    }
    ctx->pc = 0x261780u;
label_261780:
    // 0x261780: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_261784:
    // 0x261784: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
label_261788:
    if (ctx->pc == 0x261788u) {
        ctx->pc = 0x261788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261784u;
        // 0x261788: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26178Cu;
        goto label_26178c;
    }
    ctx->pc = 0x261784u;
    {
        const bool branch_taken_0x261784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x261788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261784u;
        // 0x261788: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261784) {
            ctx->pc = 0x261820u;
            goto label_261820;
        }
    }
    ctx->pc = 0x26178Cu;
label_26178c:
    // 0x26178c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26178cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_261790:
    // 0x261790: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x261790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_261794:
    // 0x261794: 0xc097f3a  jal         func_25FCE8
label_261798:
    if (ctx->pc == 0x261798u) {
        ctx->pc = 0x261798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261794u;
        // 0x261798: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26179Cu;
        goto label_26179c;
    }
    ctx->pc = 0x261794u;
    SET_GPR_U32(ctx, 31, 0x26179Cu);
    ctx->pc = 0x261798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261794u;
    // 0x261798: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE8u, 0x261794u, 0x26179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26179Cu;
label_26179c:
    // 0x26179c: 0x8e1023b0  lw          $s0, 0x23B0($s0)
    ctx->pc = 0x26179cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9136)));
label_2617a0:
    // 0x2617a0: 0xc097fdc  jal         func_25FF70
label_2617a4:
    if (ctx->pc == 0x2617A4u) {
        ctx->pc = 0x2617A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617A0u;
        // 0x2617a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617A8u;
        goto label_2617a8;
    }
    ctx->pc = 0x2617A0u;
    SET_GPR_U32(ctx, 31, 0x2617A8u);
    ctx->pc = 0x2617A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2617A0u;
    // 0x2617a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x2617A0u, 0x2617A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2617A8u;
label_2617a8:
    // 0x2617a8: 0x86060022  lh          $a2, 0x22($s0)
    ctx->pc = 0x2617a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_2617ac:
    // 0x2617ac: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
label_2617b0:
    if (ctx->pc == 0x2617B0u) {
        ctx->pc = 0x2617B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617ACu;
        // 0x2617b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617B4u;
        goto label_2617b4;
    }
    ctx->pc = 0x2617ACu;
    {
        const bool branch_taken_0x2617ac = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2617B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617ACu;
        // 0x2617b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617ac) {
            ctx->pc = 0x2617E0u;
            goto label_2617e0;
        }
    }
    ctx->pc = 0x2617B4u;
label_2617b4:
    // 0x2617b4: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x2617b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_2617b8:
    // 0x2617b8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2617b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2617bc:
    // 0x2617bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2617bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2617c0:
    // 0x2617c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2617c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2617c4:
    // 0x2617c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2617c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2617c8:
    // 0x2617c8: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x2617c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2617cc:
    // 0x2617cc: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x2617ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2617d0:
    // 0x2617d0: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x2617d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2617d4:
    // 0x2617d4: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x2617d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2617d8:
    // 0x2617d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2617dc:
    if (ctx->pc == 0x2617DCu) {
        ctx->pc = 0x2617DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617D8u;
        // 0x2617dc: 0x8fa70054  lw          $a3, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617E0u;
        goto label_2617e0;
    }
    ctx->pc = 0x2617D8u;
    {
        const bool branch_taken_0x2617d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617D8u;
        // 0x2617dc: 0x8fa70054  lw          $a3, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617d8) {
            ctx->pc = 0x2617E4u;
            goto label_2617e4;
        }
    }
    ctx->pc = 0x2617E0u;
label_2617e0:
    // 0x2617e0: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x2617e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2617e4:
    // 0x2617e4: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_2617e8:
    if (ctx->pc == 0x2617E8u) {
        ctx->pc = 0x2617E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617E4u;
        // 0x2617e8: 0x86030020  lh          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617ECu;
        goto label_2617ec;
    }
    ctx->pc = 0x2617E4u;
    {
        const bool branch_taken_0x2617e4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2617E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617E4u;
        // 0x2617e8: 0x86030020  lh          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617e4) {
            ctx->pc = 0x2617F8u;
            goto label_2617f8;
        }
    }
    ctx->pc = 0x2617ECu;
label_2617ec:
    // 0x2617ec: 0x87a20050  lh          $v0, 0x50($sp)
    ctx->pc = 0x2617ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
label_2617f0:
    // 0x2617f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2617f4:
    if (ctx->pc == 0x2617F4u) {
        ctx->pc = 0x2617F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617F0u;
        // 0x2617f4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617F8u;
        goto label_2617f8;
    }
    ctx->pc = 0x2617F0u;
    {
        const bool branch_taken_0x2617f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617F0u;
        // 0x2617f4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617f0) {
            ctx->pc = 0x2617FCu;
            goto label_2617fc;
        }
    }
    ctx->pc = 0x2617F8u;
label_2617f8:
    // 0x2617f8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2617f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2617fc:
    // 0x2617fc: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x2617fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_261800:
    // 0x261800: 0xe0f809  jalr        $a3
label_261804:
    if (ctx->pc == 0x261804u) {
        ctx->pc = 0x261804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261800u;
        // 0x261804: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261808u;
        goto label_261808;
    }
    ctx->pc = 0x261800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x261808u);
        ctx->pc = 0x261804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261800u;
        // 0x261804: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261800u, 0x261808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261808u;
label_261808:
    // 0x261808: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x261808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26180c:
    // 0x26180c: 0xc098d56  jal         func_263558
label_261810:
    if (ctx->pc == 0x261810u) {
        ctx->pc = 0x261810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26180Cu;
        // 0x261810: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261814u;
        goto label_261814;
    }
    ctx->pc = 0x26180Cu;
    SET_GPR_U32(ctx, 31, 0x261814u);
    ctx->pc = 0x261810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26180Cu;
    // 0x261810: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263558u, 0x26180Cu, 0x261814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261814u;
label_261814:
    // 0x261814: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x261814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261818:
    // 0x261818: 0xc098d56  jal         func_263558
label_26181c:
    if (ctx->pc == 0x26181Cu) {
        ctx->pc = 0x26181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261818u;
        // 0x26181c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261820u;
        goto label_261820;
    }
    ctx->pc = 0x261818u;
    SET_GPR_U32(ctx, 31, 0x261820u);
    ctx->pc = 0x26181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261818u;
    // 0x26181c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263558u, 0x261818u, 0x261820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261820u;
label_261820:
    // 0x261820: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x261820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_261824:
    // 0x261824: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x261824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_261828:
    // 0x261828: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x261828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_26182c:
    // 0x26182c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x26182cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_261830:
    // 0x261830: 0x3e00008  jr          $ra
label_261834:
    if (ctx->pc == 0x261834u) {
        ctx->pc = 0x261834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261830u;
        // 0x261834: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261838u;
        goto label_fallthrough_0x261830;
    }
    ctx->pc = 0x261830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261830u;
        // 0x261834: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x261830:
    ctx->pc = 0x261838u;
}
