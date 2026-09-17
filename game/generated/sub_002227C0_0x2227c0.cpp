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

// Function: sub_002227C0
// Address: 0x2227c0 - 0x222908
void sub_002227C0_0x2227c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002227C0_0x2227c0");
#endif

    switch (ctx->pc) {
        case 0x2227c0u: goto label_2227c0;
        case 0x2227c4u: goto label_2227c4;
        case 0x2227c8u: goto label_2227c8;
        case 0x2227ccu: goto label_2227cc;
        case 0x2227d0u: goto label_2227d0;
        case 0x2227d4u: goto label_2227d4;
        case 0x2227d8u: goto label_2227d8;
        case 0x2227dcu: goto label_2227dc;
        case 0x2227e0u: goto label_2227e0;
        case 0x2227e4u: goto label_2227e4;
        case 0x2227e8u: goto label_2227e8;
        case 0x2227ecu: goto label_2227ec;
        case 0x2227f0u: goto label_2227f0;
        case 0x2227f4u: goto label_2227f4;
        case 0x2227f8u: goto label_2227f8;
        case 0x2227fcu: goto label_2227fc;
        case 0x222800u: goto label_222800;
        case 0x222804u: goto label_222804;
        case 0x222808u: goto label_222808;
        case 0x22280cu: goto label_22280c;
        case 0x222810u: goto label_222810;
        case 0x222814u: goto label_222814;
        case 0x222818u: goto label_222818;
        case 0x22281cu: goto label_22281c;
        case 0x222820u: goto label_222820;
        case 0x222824u: goto label_222824;
        case 0x222828u: goto label_222828;
        case 0x22282cu: goto label_22282c;
        case 0x222830u: goto label_222830;
        case 0x222834u: goto label_222834;
        case 0x222838u: goto label_222838;
        case 0x22283cu: goto label_22283c;
        case 0x222840u: goto label_222840;
        case 0x222844u: goto label_222844;
        case 0x222848u: goto label_222848;
        case 0x22284cu: goto label_22284c;
        case 0x222850u: goto label_222850;
        case 0x222854u: goto label_222854;
        case 0x222858u: goto label_222858;
        case 0x22285cu: goto label_22285c;
        case 0x222860u: goto label_222860;
        case 0x222864u: goto label_222864;
        case 0x222868u: goto label_222868;
        case 0x22286cu: goto label_22286c;
        case 0x222870u: goto label_222870;
        case 0x222874u: goto label_222874;
        case 0x222878u: goto label_222878;
        case 0x22287cu: goto label_22287c;
        case 0x222880u: goto label_222880;
        case 0x222884u: goto label_222884;
        case 0x222888u: goto label_222888;
        case 0x22288cu: goto label_22288c;
        case 0x222890u: goto label_222890;
        case 0x222894u: goto label_222894;
        case 0x222898u: goto label_222898;
        case 0x22289cu: goto label_22289c;
        case 0x2228a0u: goto label_2228a0;
        case 0x2228a4u: goto label_2228a4;
        case 0x2228a8u: goto label_2228a8;
        case 0x2228acu: goto label_2228ac;
        case 0x2228b0u: goto label_2228b0;
        case 0x2228b4u: goto label_2228b4;
        case 0x2228b8u: goto label_2228b8;
        case 0x2228bcu: goto label_2228bc;
        case 0x2228c0u: goto label_2228c0;
        case 0x2228c4u: goto label_2228c4;
        case 0x2228c8u: goto label_2228c8;
        case 0x2228ccu: goto label_2228cc;
        case 0x2228d0u: goto label_2228d0;
        case 0x2228d4u: goto label_2228d4;
        case 0x2228d8u: goto label_2228d8;
        case 0x2228dcu: goto label_2228dc;
        case 0x2228e0u: goto label_2228e0;
        case 0x2228e4u: goto label_2228e4;
        case 0x2228e8u: goto label_2228e8;
        case 0x2228ecu: goto label_2228ec;
        case 0x2228f0u: goto label_2228f0;
        case 0x2228f4u: goto label_2228f4;
        case 0x2228f8u: goto label_2228f8;
        case 0x2228fcu: goto label_2228fc;
        case 0x222900u: goto label_222900;
        case 0x222904u: goto label_222904;
        default: break;
    }

    ctx->pc = 0x2227c0u;

label_2227c0:
    // 0x2227c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2227c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2227c4:
    // 0x2227c4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x2227c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_2227c8:
    // 0x2227c8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2227c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2227cc:
    // 0x2227cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2227ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2227d0:
    // 0x2227d0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2227d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2227d4:
    // 0x2227d4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2227d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2227d8:
    // 0x2227d8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2227d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2227dc:
    // 0x2227dc: 0x24762908  addiu       $s6, $v1, 0x2908
    ctx->pc = 0x2227dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 10504));
label_2227e0:
    // 0x2227e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2227e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2227e4:
    // 0x2227e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2227e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2227e8:
    // 0x2227e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2227e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2227ec:
    // 0x2227ec: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2227ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2227f0:
    // 0x2227f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2227f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2227f4:
    // 0x2227f4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2227f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2227f8:
    // 0x2227f8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2227f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2227fc:
    // 0x2227fc: 0x2a8c3  sra         $s5, $v0, 3
    ctx->pc = 0x2227fcu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 3));
label_222800:
    // 0x222800: 0x295182a  slt         $v1, $s4, $s5
    ctx->pc = 0x222800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_222804:
    // 0x222804: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_222808:
    if (ctx->pc == 0x222808u) {
        ctx->pc = 0x222808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222804u;
        // 0x222808: 0x24930004  addiu       $s3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22280Cu;
        goto label_22280c;
    }
    ctx->pc = 0x222804u;
    {
        const bool branch_taken_0x222804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222804u;
        // 0x222808: 0x24930004  addiu       $s3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222804) {
            ctx->pc = 0x222894u;
            goto label_222894;
        }
    }
    ctx->pc = 0x22280Cu;
label_22280c:
    // 0x22280c: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x22280cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_222810:
    // 0x222810: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x222810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_222814:
    // 0x222814: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x222814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_222818:
    // 0x222818: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x222818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_22281c:
    // 0x22281c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x22281cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_222820:
    // 0x222820: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x222820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_222824:
    // 0x222824: 0x10000006  b           . + 4 + (0x6 << 2)
label_222828:
    if (ctx->pc == 0x222828u) {
        ctx->pc = 0x222828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222824u;
        // 0x222828: 0xb7a30000  sdr         $v1, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22282Cu;
        goto label_22282c;
    }
    ctx->pc = 0x222824u;
    {
        const bool branch_taken_0x222824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222824u;
        // 0x222828: 0xb7a30000  sdr         $v1, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x222824) {
            ctx->pc = 0x222840u;
            goto label_222840;
        }
    }
    ctx->pc = 0x22282Cu;
label_22282c:
    // 0x22282c: 0x0  nop
    ctx->pc = 0x22282cu;
    // NOP
label_222830:
    // 0x222830: 0x6a070007  ldl         $a3, 0x7($s0)
    ctx->pc = 0x222830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_222834:
    // 0x222834: 0x6e070000  ldr         $a3, 0x0($s0)
    ctx->pc = 0x222834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_222838:
    // 0x222838: 0xb207000f  sdl         $a3, 0xF($s0)
    ctx->pc = 0x222838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_22283c:
    // 0x22283c: 0xb6070008  sdr         $a3, 0x8($s0)
    ctx->pc = 0x22283cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_222840:
    // 0x222840: 0x620000b  bltz        $s1, . + 4 + (0xB << 2)
label_222844:
    if (ctx->pc == 0x222844u) {
        ctx->pc = 0x222844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222840u;
        // 0x222844: 0x1190c0  sll         $s2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222848u;
        goto label_222848;
    }
    ctx->pc = 0x222840u;
    {
        const bool branch_taken_0x222840 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x222844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222840u;
        // 0x222844: 0x1190c0  sll         $s2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222840) {
            ctx->pc = 0x222870u;
            goto label_222870;
        }
    }
    ctx->pc = 0x222848u;
label_222848:
    // 0x222848: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x222848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22284c:
    // 0x22284c: 0x2728021  addu        $s0, $s3, $s2
    ctx->pc = 0x22284cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_222850:
    // 0x222850: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x222850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_222854:
    // 0x222854: 0x2c0f809  jalr        $s6
label_222858:
    if (ctx->pc == 0x222858u) {
        ctx->pc = 0x222858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222854u;
        // 0x222858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22285Cu;
        goto label_22285c;
    }
    ctx->pc = 0x222854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x22285Cu);
        ctx->pc = 0x222858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222854u;
        // 0x222858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222854u, 0x22285Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22285Cu;
label_22285c:
    // 0x22285c: 0x1c40fff4  bgtz        $v0, . + 4 + (-0xC << 2)
label_222860:
    if (ctx->pc == 0x222860u) {
        ctx->pc = 0x222864u;
        goto label_222864;
    }
    ctx->pc = 0x22285Cu;
    {
        const bool branch_taken_0x22285c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x22285c) {
            ctx->pc = 0x222830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222830;
        }
    }
    ctx->pc = 0x222864u;
label_222864:
    // 0x222864: 0x10000003  b           . + 4 + (0x3 << 2)
label_222868:
    if (ctx->pc == 0x222868u) {
        ctx->pc = 0x222868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222864u;
        // 0x222868: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22286Cu;
        goto label_22286c;
    }
    ctx->pc = 0x222864u;
    {
        const bool branch_taken_0x222864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222864u;
        // 0x222868: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222864) {
            ctx->pc = 0x222874u;
            goto label_222874;
        }
    }
    ctx->pc = 0x22286Cu;
label_22286c:
    // 0x22286c: 0x0  nop
    ctx->pc = 0x22286cu;
    // NOP
label_222870:
    // 0x222870: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x222870u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_222874:
    // 0x222874: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x222874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_222878:
    // 0x222878: 0x295182a  slt         $v1, $s4, $s5
    ctx->pc = 0x222878u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_22287c:
    // 0x22287c: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x22287cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_222880:
    // 0x222880: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x222880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_222884:
    // 0x222884: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x222884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_222888:
    // 0x222888: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x222888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_22288c:
    // 0x22288c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_222890:
    if (ctx->pc == 0x222890u) {
        ctx->pc = 0x222890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22288Cu;
        // 0x222890: 0x1410c0  sll         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222894u;
        goto label_222894;
    }
    ctx->pc = 0x22288Cu;
    {
        const bool branch_taken_0x22288c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x222890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22288Cu;
        // 0x222890: 0x1410c0  sll         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22288c) {
            ctx->pc = 0x222810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222810;
        }
    }
    ctx->pc = 0x222894u;
label_222894:
    // 0x222894: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x222894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_222898:
    // 0x222898: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x222898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22289c:
    // 0x22289c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22289cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2228a0:
    // 0x2228a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2228a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2228a4:
    // 0x2228a4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2228a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2228a8:
    // 0x2228a8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2228a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2228ac:
    // 0x2228ac: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2228acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2228b0:
    // 0x2228b0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2228b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2228b4:
    // 0x2228b4: 0x3e00008  jr          $ra
label_2228b8:
    if (ctx->pc == 0x2228B8u) {
        ctx->pc = 0x2228B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228B4u;
        // 0x2228b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2228BCu;
        goto label_2228bc;
    }
    ctx->pc = 0x2228B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2228B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228B4u;
        // 0x2228b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2228B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2228BCu;
label_2228bc:
    // 0x2228bc: 0x0  nop
    ctx->pc = 0x2228bcu;
    // NOP
label_2228c0:
    // 0x2228c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2228c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2228c4:
    // 0x2228c4: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x2228c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
label_2228c8:
    // 0x2228c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2228c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2228cc:
    // 0x2228cc: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2228ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2228d0:
    // 0x2228d0: 0x25082920  addiu       $t0, $t0, 0x2920
    ctx->pc = 0x2228d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10528));
label_2228d4:
    // 0x2228d4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2228d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2228d8:
    // 0x2228d8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2228d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2228dc:
    // 0x2228dc: 0xa7a50048  sh          $a1, 0x48($sp)
    ctx->pc = 0x2228dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 72), (uint16_t)GPR_U32(ctx, 5));
label_2228e0:
    // 0x2228e0: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x2228e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2228e4:
    // 0x2228e4: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x2228e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2228e8:
    // 0x2228e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2228e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2228ec:
    // 0x2228ec: 0xac5d0000  sw          $sp, 0x0($v0)
    ctx->pc = 0x2228ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 29));
label_2228f0:
    // 0x2228f0: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x2228f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_2228f4:
    // 0x2228f4: 0xc049d88  jal         func_127620
label_2228f8:
    if (ctx->pc == 0x2228F8u) {
        ctx->pc = 0x2228F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228F4u;
        // 0x2228f8: 0x630c3  sra         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2228FCu;
        goto label_2228fc;
    }
    ctx->pc = 0x2228F4u;
    SET_GPR_U32(ctx, 31, 0x2228FCu);
    ctx->pc = 0x2228F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228F4u;
    // 0x2228f8: 0x630c3  sra         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127620u, 0x2228F4u, 0x2228FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228FCu;
label_2228fc:
    // 0x2228fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2228fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_222900:
    // 0x222900: 0x3e00008  jr          $ra
label_222904:
    if (ctx->pc == 0x222904u) {
        ctx->pc = 0x222904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222900u;
        // 0x222904: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222908u;
        goto label_fallthrough_0x222900;
    }
    ctx->pc = 0x222900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222900u;
        // 0x222904: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x222900:
    ctx->pc = 0x222908u;
}
