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

// Function: sub_00284300
// Address: 0x284300 - 0x284580
void sub_00284300_0x284300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284300_0x284300");
#endif

    switch (ctx->pc) {
        case 0x284388u: goto label_284388;
        case 0x2843d8u: goto label_2843d8;
        case 0x284408u: goto label_284408;
        case 0x284434u: goto label_284434;
        case 0x284444u: goto label_284444;
        case 0x284460u: goto label_284460;
        case 0x284468u: goto label_284468;
        case 0x284490u: goto label_284490;
        case 0x28449cu: goto label_28449c;
        case 0x2844bcu: goto label_2844bc;
        case 0x2844c4u: goto label_2844c4;
        case 0x2844d4u: goto label_2844d4;
        case 0x2844fcu: goto label_2844fc;
        case 0x284504u: goto label_284504;
        default: break;
    }

    ctx->pc = 0x284300u;

    // 0x284300: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x284300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x284304: 0x2783ca98  addiu       $v1, $gp, -0x3568
    ctx->pc = 0x284304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953624));
    // 0x284308: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x284308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x28430c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x28430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x284310: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x284310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x284314: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x284314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x284318: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x284318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x28431c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x28431cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x284320: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x284320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x284324: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x284324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x284328: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x284328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x28432c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x28432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x284330: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x284330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284334: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284334u;
    {
        const bool branch_taken_0x284334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284334u;
        // 0x284338: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284334) {
            ctx->pc = 0x28434Cu;
            goto label_28434c;
        }
    }
    ctx->pc = 0x28433Cu;
    // 0x28433c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x28433cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x284340: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x284340u;
    {
        const bool branch_taken_0x284340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284340u;
        // 0x284344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284340) {
            ctx->pc = 0x28454Cu;
            goto label_28454c;
        }
    }
    ctx->pc = 0x284348u;
    // 0x284348: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x284348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_28434c:
    // 0x28434c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28434cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284350: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x284350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x284354: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x284354u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284358: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x284358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28435c: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x28435cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284360: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x284360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284364: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x284364u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x284368: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x284368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x28436c: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x28436cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x284370: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x284370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x284374: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x284374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x284378: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x284378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28437c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x28437cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284380: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x284380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x284384: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x284384u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_284388:
    // 0x284388: 0x2793ca98  addiu       $s3, $gp, -0x3568
    ctx->pc = 0x284388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953624));
    // 0x28438c: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x28438cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x284390: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x284390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x284394: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x284394u;
    {
        const bool branch_taken_0x284394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284394u;
        // 0x284398: 0x26910001  addiu       $s1, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284394) {
            ctx->pc = 0x28451Cu;
            goto label_28451c;
        }
    }
    ctx->pc = 0x28439Cu;
    // 0x28439c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28439cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2843a0: 0x1471002b  bne         $v1, $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2843A0u;
    {
        const bool branch_taken_0x2843a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2843a0) {
            ctx->pc = 0x284450u;
            goto label_284450;
        }
    }
    ctx->pc = 0x2843A8u;
    // 0x2843a8: 0x25c1021  addu        $v0, $s2, $gp
    ctx->pc = 0x2843a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x2843ac: 0x8c42ca90  lw          $v0, -0x3570($v0)
    ctx->pc = 0x2843acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953616)));
    // 0x2843b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2843B0u;
    {
        const bool branch_taken_0x2843b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2843B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843B0u;
        // 0x2843b4: 0x3b21021  addu        $v0, $sp, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843b0) {
            ctx->pc = 0x2843E0u;
            goto label_2843e0;
        }
    }
    ctx->pc = 0x2843B8u;
    // 0x2843b8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2843b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2843bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2843bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2843c0: 0x25c0821  addu        $at, $s2, $gp
    ctx->pc = 0x2843c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x2843c4: 0xac37caa8  sw          $s7, -0x3558($at)
    ctx->pc = 0x2843c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953640), GPR_U32(ctx, 23));
    // 0x2843c8: 0x25c0821  addu        $at, $s2, $gp
    ctx->pc = 0x2843c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x2843cc: 0xac20caa0  sw          $zero, -0x3560($at)
    ctx->pc = 0x2843ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953632), GPR_U32(ctx, 0));
    // 0x2843d0: 0xc0a0b26  jal         func_282C98
    ctx->pc = 0x2843D0u;
    SET_GPR_U32(ctx, 31, 0x2843D8u);
    ctx->pc = 0x2843D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2843D0u;
    // 0x2843d4: 0x26910001  addiu       $s1, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C98u, 0x2843D0u, 0x2843D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2843D8u;
label_2843d8:
    // 0x2843d8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2843D8u;
    {
        const bool branch_taken_0x2843d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2843DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843D8u;
        // 0x2843dc: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843d8) {
            ctx->pc = 0x284520u;
            goto label_284520;
        }
    }
    ctx->pc = 0x2843E0u;
label_2843e0:
    // 0x2843e0: 0x26910001  addiu       $s1, $s4, 0x1
    ctx->pc = 0x2843e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2843e4: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x2843e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x2843e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2843e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2843ec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2843ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2843f0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2843f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2843f4: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x2843f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2843f8: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2843f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2843fc: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x2843fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x284400: 0xc0a0e78  jal         func_2839E0
    ctx->pc = 0x284400u;
    SET_GPR_U32(ctx, 31, 0x284408u);
    ctx->pc = 0x284404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284400u;
    // 0x284404: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2839E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2839E0u, 0x284400u, 0x284408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284408u;
label_284408:
    // 0x284408: 0x21c0821  addu        $at, $s0, $gp
    ctx->pc = 0x284408u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 28)));
    // 0x28440c: 0xac37caa8  sw          $s7, -0x3558($at)
    ctx->pc = 0x28440cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953640), GPR_U32(ctx, 23));
    // 0x284410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284414: 0x8f82cab0  lw          $v0, -0x3550($gp)
    ctx->pc = 0x284414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953648)));
    // 0x284418: 0x8fc383c0  lw          $v1, -0x7C40($fp)
    ctx->pc = 0x284418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294935488)));
    // 0x28441c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28441cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284420: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x284420u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x284424: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x284424u;
    {
        const bool branch_taken_0x284424 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x284428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284424u;
        // 0x284428: 0xae760000  sw          $s6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284424) {
            ctx->pc = 0x284438u;
            goto label_284438;
        }
    }
    ctx->pc = 0x28442Cu;
    // 0x28442c: 0xc0a0e94  jal         func_283A50
    ctx->pc = 0x28442Cu;
    SET_GPR_U32(ctx, 31, 0x284434u);
    ctx->pc = 0x283A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283A50u, 0x28442Cu, 0x284434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284434u;
label_284434:
    // 0x284434: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x284434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284438:
    // 0x284438: 0x3b21021  addu        $v0, $sp, $s2
    ctx->pc = 0x284438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x28443c: 0xc0a0eda  jal         func_283B68
    ctx->pc = 0x28443Cu;
    SET_GPR_U32(ctx, 31, 0x284444u);
    ctx->pc = 0x284440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28443Cu;
    // 0x284440: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283B68u, 0x28443Cu, 0x284444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284444u;
label_284444:
    // 0x284444: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x284444u;
    {
        const bool branch_taken_0x284444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284444u;
        // 0x284448: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284444) {
            ctx->pc = 0x284520u;
            goto label_284520;
        }
    }
    ctx->pc = 0x28444Cu;
    // 0x28444c: 0x0  nop
    ctx->pc = 0x28444cu;
    // NOP
label_284450:
    // 0x284450: 0x14760023  bne         $v1, $s6, . + 4 + (0x23 << 2)
    ctx->pc = 0x284450u;
    {
        const bool branch_taken_0x284450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x284454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284450u;
        // 0x284454: 0x3b28021  addu        $s0, $sp, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284450) {
            ctx->pc = 0x2844E0u;
            goto label_2844e0;
        }
    }
    ctx->pc = 0x284458u;
    // 0x284458: 0xc0a0af6  jal         func_282BD8
    ctx->pc = 0x284458u;
    SET_GPR_U32(ctx, 31, 0x284460u);
    ctx->pc = 0x28445Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284458u;
    // 0x28445c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282BD8u, 0x284458u, 0x284460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284460u;
label_284460:
    // 0x284460: 0xc0a0e58  jal         func_283960
    ctx->pc = 0x284460u;
    SET_GPR_U32(ctx, 31, 0x284468u);
    ctx->pc = 0x284464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284460u;
    // 0x284464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283960u, 0x284460u, 0x284468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284468u;
label_284468:
    // 0x284468: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x284468u;
    {
        const bool branch_taken_0x284468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284468u;
        // 0x28446c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284468) {
            ctx->pc = 0x2844A8u;
            goto label_2844a8;
        }
    }
    ctx->pc = 0x284470u;
    // 0x284470: 0x25c1021  addu        $v0, $s2, $gp
    ctx->pc = 0x284470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x284474: 0x8c42ca90  lw          $v0, -0x3570($v0)
    ctx->pc = 0x284474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953616)));
    // 0x284478: 0x25c0821  addu        $at, $s2, $gp
    ctx->pc = 0x284478u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x28447c: 0xac35caa0  sw          $s5, -0x3560($at)
    ctx->pc = 0x28447cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953632), GPR_U32(ctx, 21));
    // 0x284480: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x284480u;
    {
        const bool branch_taken_0x284480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284480) {
            ctx->pc = 0x284484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284480u;
            // 0x284484: 0x3b21021  addu        $v0, $sp, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2844C8u;
            goto label_2844c8;
        }
    }
    ctx->pc = 0x284488u;
    // 0x284488: 0xc0a109c  jal         func_284270
    ctx->pc = 0x284488u;
    SET_GPR_U32(ctx, 31, 0x284490u);
    ctx->pc = 0x28448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284488u;
    // 0x28448c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284270u, 0x284488u, 0x284490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284490u;
label_284490:
    // 0x284490: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x284490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284494: 0xc0b2390  jal         func_2C8E40
    ctx->pc = 0x284494u;
    SET_GPR_U32(ctx, 31, 0x28449Cu);
    ctx->pc = 0x284498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284494u;
    // 0x284498: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8E40u, 0x284494u, 0x28449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28449Cu;
label_28449c:
    // 0x28449c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28449Cu;
    {
        const bool branch_taken_0x28449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28449Cu;
        // 0x2844a0: 0x3b21021  addu        $v0, $sp, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28449c) {
            ctx->pc = 0x2844C8u;
            goto label_2844c8;
        }
    }
    ctx->pc = 0x2844A4u;
    // 0x2844a4: 0x0  nop
    ctx->pc = 0x2844a4u;
    // NOP
label_2844a8:
    // 0x2844a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2844a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2844ac: 0x25c0821  addu        $at, $s2, $gp
    ctx->pc = 0x2844acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x2844b0: 0xac31caa0  sw          $s1, -0x3560($at)
    ctx->pc = 0x2844b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953632), GPR_U32(ctx, 17));
    // 0x2844b4: 0xc0a0af6  jal         func_282BD8
    ctx->pc = 0x2844B4u;
    SET_GPR_U32(ctx, 31, 0x2844BCu);
    ctx->pc = 0x282BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282BD8u, 0x2844B4u, 0x2844BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844BCu;
label_2844bc:
    // 0x2844bc: 0xc0a0c60  jal         func_283180
    ctx->pc = 0x2844BCu;
    SET_GPR_U32(ctx, 31, 0x2844C4u);
    ctx->pc = 0x2844C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844BCu;
    // 0x2844c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283180u, 0x2844BCu, 0x2844C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844C4u;
label_2844c4:
    // 0x2844c4: 0x3b21021  addu        $v0, $sp, $s2
    ctx->pc = 0x2844c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
label_2844c8:
    // 0x2844c8: 0x26910001  addiu       $s1, $s4, 0x1
    ctx->pc = 0x2844c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2844cc: 0xc0a0b26  jal         func_282C98
    ctx->pc = 0x2844CCu;
    SET_GPR_U32(ctx, 31, 0x2844D4u);
    ctx->pc = 0x2844D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844CCu;
    // 0x2844d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C98u, 0x2844CCu, 0x2844D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844D4u;
label_2844d4:
    // 0x2844d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2844D4u;
    {
        const bool branch_taken_0x2844d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844D4u;
        // 0x2844d8: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844d4) {
            ctx->pc = 0x284520u;
            goto label_284520;
        }
    }
    ctx->pc = 0x2844DCu;
    // 0x2844dc: 0x0  nop
    ctx->pc = 0x2844dcu;
    // NOP
label_2844e0:
    // 0x2844e0: 0x1475000b  bne         $v1, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x2844E0u;
    {
        const bool branch_taken_0x2844e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x2844E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2844E0u;
        // 0x2844e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844e0) {
            ctx->pc = 0x284510u;
            goto label_284510;
        }
    }
    ctx->pc = 0x2844E8u;
    // 0x2844e8: 0x3b21821  addu        $v1, $sp, $s2
    ctx->pc = 0x2844e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x2844ec: 0x26910001  addiu       $s1, $s4, 0x1
    ctx->pc = 0x2844ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2844f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2844f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2844f4: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x2844F4u;
    SET_GPR_U32(ctx, 31, 0x2844FCu);
    ctx->pc = 0x2844F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844F4u;
    // 0x2844f8: 0x9444003c  lhu         $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x2844F4u, 0x2844FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844FCu;
label_2844fc:
    // 0x2844fc: 0xc0a0e5a  jal         func_283968
    ctx->pc = 0x2844FCu;
    SET_GPR_U32(ctx, 31, 0x284504u);
    ctx->pc = 0x284500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844FCu;
    // 0x284500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283968u, 0x2844FCu, 0x284504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284504u;
label_284504:
    // 0x284504: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x284504u;
    {
        const bool branch_taken_0x284504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284504u;
        // 0x284508: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284504) {
            ctx->pc = 0x28451Cu;
            goto label_28451c;
        }
    }
    ctx->pc = 0x28450Cu;
    // 0x28450c: 0x0  nop
    ctx->pc = 0x28450cu;
    // NOP
label_284510:
    // 0x284510: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x284510u;
    {
        const bool branch_taken_0x284510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x284510) {
            ctx->pc = 0x284514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284510u;
            // 0x284514: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284518u;
            goto label_284518;
        }
    }
    ctx->pc = 0x284518u;
label_284518:
    // 0x284518: 0x26910001  addiu       $s1, $s4, 0x1
    ctx->pc = 0x284518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_28451c:
    // 0x28451c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x28451cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284520:
    // 0x284520: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x284520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x284524: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x284524u;
    {
        const bool branch_taken_0x284524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284524u;
        // 0x284528: 0x149080  sll         $s2, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284524) {
            ctx->pc = 0x284388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284388;
        }
    }
    ctx->pc = 0x28452Cu;
    // 0x28452c: 0x2782ca98  addiu       $v0, $gp, -0x3568
    ctx->pc = 0x28452cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953624));
    // 0x284530: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x284530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284534: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x284534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284538: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x284538u;
    {
        const bool branch_taken_0x284538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284538u;
        // 0x28453c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284538) {
            ctx->pc = 0x284548u;
            goto label_284548;
        }
    }
    ctx->pc = 0x284540u;
    // 0x284540: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x284540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284544: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x284544u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_284548:
    // 0x284548: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x284548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28454c:
    // 0x28454c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x28454cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284550: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x284550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x284554: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x284554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284558: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x284558u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28455c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x28455cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x284560: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x284560u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x284564: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x284564u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x284568: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x284568u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x28456c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x28456cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x284570: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x284570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x284574: 0x3e00008  jr          $ra
    ctx->pc = 0x284574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284574u;
        // 0x284578: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28457Cu;
    // 0x28457c: 0x0  nop
    ctx->pc = 0x28457cu;
    // NOP
    ctx->pc = 0x284580u;
}
