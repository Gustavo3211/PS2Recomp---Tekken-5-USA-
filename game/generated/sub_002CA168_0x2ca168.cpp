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

// Function: sub_002CA168
// Address: 0x2ca168 - 0x2ca2d0
void sub_002CA168_0x2ca168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA168_0x2ca168");
#endif

    switch (ctx->pc) {
        case 0x2ca1c8u: goto label_2ca1c8;
        case 0x2ca1e0u: goto label_2ca1e0;
        case 0x2ca214u: goto label_2ca214;
        case 0x2ca2a0u: goto label_2ca2a0;
        default: break;
    }

    ctx->pc = 0x2ca168u;

    // 0x2ca168: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ca168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ca16c: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ca16cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ca170: 0x8c4283c0  lw          $v0, -0x7C40($v0)
    ctx->pc = 0x2ca170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2ca174: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2ca174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2ca178: 0x38430003  xori        $v1, $v0, 0x3
    ctx->pc = 0x2ca178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2ca17c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2ca17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2ca180: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2ca180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2ca184: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2ca184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2ca188: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2ca188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2ca18c: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2CA18Cu;
    {
        const bool branch_taken_0x2ca18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA18Cu;
        // 0x2ca190: 0xffbf0088  sd          $ra, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca18c) {
            ctx->pc = 0x2CA2ACu;
            goto label_2ca2ac;
        }
    }
    ctx->pc = 0x2CA194u;
    // 0x2ca194: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ca194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ca198: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2CA198u;
    {
        const bool branch_taken_0x2ca198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA198u;
        // 0x2ca19c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca198) {
            ctx->pc = 0x2CA2B0u;
            goto label_2ca2b0;
        }
    }
    ctx->pc = 0x2CA1A0u;
    // 0x2ca1a0: 0x8f82bb18  lw          $v0, -0x44E8($gp)
    ctx->pc = 0x2ca1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2ca1a4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2CA1A4u;
    {
        const bool branch_taken_0x2ca1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1A4u;
        // 0x2ca1a8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1a4) {
            ctx->pc = 0x2CA2B0u;
            goto label_2ca2b0;
        }
    }
    ctx->pc = 0x2CA1ACu;
    // 0x2ca1ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ca1acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1b0: 0x245488d0  addiu       $s4, $v0, -0x7730
    ctx->pc = 0x2ca1b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2ca1b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ca1b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ca1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ca1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1c0: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2ca1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ca1c4: 0x0  nop
    ctx->pc = 0x2ca1c4u;
    // NOP
label_2ca1c8:
    // 0x2ca1c8: 0x21c1021  addu        $v0, $s0, $gp
    ctx->pc = 0x2ca1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 28)));
    // 0x2ca1cc: 0x8c42bb20  lw          $v0, -0x44E0($v0)
    ctx->pc = 0x2ca1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949664)));
    // 0x2ca1d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA1D0u;
    {
        const bool branch_taken_0x2ca1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1D0u;
        // 0x2ca1d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1d0) {
            ctx->pc = 0x2CA1F4u;
            goto label_2ca1f4;
        }
    }
    ctx->pc = 0x2CA1D8u;
    // 0x2ca1d8: 0xc0b245c  jal         func_2C9170
    ctx->pc = 0x2CA1D8u;
    SET_GPR_U32(ctx, 31, 0x2CA1E0u);
    ctx->pc = 0x2CA1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA1D8u;
    // 0x2ca1dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9170u, 0x2CA1D8u, 0x2CA1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA1E0u;
label_2ca1e0:
    // 0x2ca1e0: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x2ca1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2ca1e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ca1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca1e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ca1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ca1ec: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x2ca1ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1f0: 0x84670040  lh          $a3, 0x40($v1)
    ctx->pc = 0x2ca1f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2ca1f4:
    // 0x2ca1f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ca1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ca1f8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2ca1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ca1fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2CA1FCu;
    {
        const bool branch_taken_0x2ca1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1FCu;
        // 0x2ca200: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1fc) {
            ctx->pc = 0x2CA1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca1c8;
        }
    }
    ctx->pc = 0x2CA204u;
    // 0x2ca204: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2CA204u;
    {
        const bool branch_taken_0x2ca204 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA204u;
        // 0x2ca208: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca204) {
            ctx->pc = 0x2CA2B0u;
            goto label_2ca2b0;
        }
    }
    ctx->pc = 0x2CA20Cu;
    // 0x2ca20c: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2CA20Cu;
    SET_GPR_U32(ctx, 31, 0x2CA214u);
    ctx->pc = 0x2CA210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA20Cu;
    // 0x2ca210: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2CA20Cu, 0x2CA214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA214u;
label_2ca214:
    // 0x2ca214: 0x8f85bb18  lw          $a1, -0x44E8($gp)
    ctx->pc = 0x2ca214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2ca218: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ca218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca21c: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x2ca21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2ca220: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2ca220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2ca224: 0x3c063b9a  lui         $a2, 0x3B9A
    ctx->pc = 0x2ca224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15258 << 16));
    // 0x2ca228: 0x34c6c9ff  ori         $a2, $a2, 0xC9FF
    ctx->pc = 0x2ca228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51711);
    // 0x2ca22c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ca22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca230: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x2ca230u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ca234: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CA234u;
    {
        const bool branch_taken_0x2ca234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA234u;
        // 0x2ca238: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca234) {
            ctx->pc = 0x2CA240u;
            goto label_2ca240;
        }
    }
    ctx->pc = 0x2CA23Cu;
    // 0x2ca23c: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x2ca23cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
label_2ca240:
    // 0x2ca240: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2ca240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2ca244: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2ca244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2ca248: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2ca248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2ca24c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ca24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ca250: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2ca250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ca254: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ca254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ca258: 0x6ba4003b  ldl         $a0, 0x3B($sp)
    ctx->pc = 0x2ca258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ca25c: 0x6fa40034  ldr         $a0, 0x34($sp)
    ctx->pc = 0x2ca25cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ca260: 0x6ba60043  ldl         $a2, 0x43($sp)
    ctx->pc = 0x2ca260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2ca264: 0x6fa6003c  ldr         $a2, 0x3C($sp)
    ctx->pc = 0x2ca264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2ca268: 0xb06401ab  sdl         $a0, 0x1AB($v1)
    ctx->pc = 0x2ca268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca26c: 0xb46401a4  sdr         $a0, 0x1A4($v1)
    ctx->pc = 0x2ca26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 420); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca270: 0xb06601b3  sdl         $a2, 0x1B3($v1)
    ctx->pc = 0x2ca270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 435); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca274: 0xb46601ac  sdr         $a2, 0x1AC($v1)
    ctx->pc = 0x2ca274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca278: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ca278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ca27c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca280: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x2ca280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ca284: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x2ca284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ca288: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2ca288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca28c: 0xb043002b  sdl         $v1, 0x2B($v0)
    ctx->pc = 0x2ca28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca290: 0xb4430024  sdr         $v1, 0x24($v0)
    ctx->pc = 0x2ca290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca294: 0xac46002c  sw          $a2, 0x2C($v0)
    ctx->pc = 0x2ca294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    // 0x2ca298: 0xc0b2392  jal         func_2C8E48
    ctx->pc = 0x2CA298u;
    SET_GPR_U32(ctx, 31, 0x2CA2A0u);
    ctx->pc = 0x2CA29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA298u;
    // 0x2ca29c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8E48u, 0x2CA298u, 0x2CA2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA2A0u;
label_2ca2a0:
    // 0x2ca2a0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2ca2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x2ca2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca2a8: 0xac624520  sw          $v0, 0x4520($v1)
    ctx->pc = 0x2ca2a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E4520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E4520u, _value); } while (0);
label_2ca2ac:
    // 0x2ca2ac: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2ca2acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ca2b0:
    // 0x2ca2b0: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2ca2b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ca2b4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2ca2b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ca2b8: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2ca2b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ca2bc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2ca2bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ca2c0: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2ca2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ca2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2C4u;
        // 0x2ca2c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA2CCu;
    // 0x2ca2cc: 0x0  nop
    ctx->pc = 0x2ca2ccu;
    // NOP
    ctx->pc = 0x2ca2d0u;
}
