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

// Function: sub_004FBE80
// Address: 0x4fbe80 - 0x4fc000
void sub_004FBE80_0x4fbe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FBE80_0x4fbe80");
#endif

    switch (ctx->pc) {
        case 0x4fbeacu: goto label_4fbeac;
        case 0x4fbed8u: goto label_4fbed8;
        case 0x4fbfbcu: goto label_4fbfbc;
        case 0x4fbfd8u: goto label_4fbfd8;
        default: break;
    }

    ctx->pc = 0x4fbe80u;

    // 0x4fbe80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4fbe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4fbe84: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x4fbe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x4fbe88: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x4fbe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x4fbe8c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x4fbe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x4fbe90: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x4fbe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x4fbe94: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x4fbe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x4fbe98: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x4fbe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x4fbe9c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x4fbe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x4fbea0: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x4fbea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x4fbea4: 0xc13ec36  jal         func_4FB0D8
    ctx->pc = 0x4FBEA4u;
    SET_GPR_U32(ctx, 31, 0x4FBEACu);
    ctx->pc = 0x4FBEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBEA4u;
    // 0x4fbea8: 0x3c110057  lui         $s1, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FB0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FB0D8u, 0x4FBEA4u, 0x4FBEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBEACu;
label_4fbeac:
    // 0x4fbeac: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x4fbeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x4fbeb0: 0x8e22ce98  lw          $v0, -0x3168($s1)
    ctx->pc = 0x4fbeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954648)));
    // 0x4fbeb4: 0x24703748  addiu       $s0, $v1, 0x3748
    ctx->pc = 0x4fbeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14152));
    // 0x4fbeb8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4fbeb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4fbebc: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x4FBEBCu;
    {
        const bool branch_taken_0x4fbebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBEBCu;
        // 0x4fbec0: 0x241603f5  addiu       $s6, $zero, 0x3F5 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1013));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbebc) {
            ctx->pc = 0x4FBFD0u;
            goto label_4fbfd0;
        }
    }
    ctx->pc = 0x4FBEC4u;
    // 0x4fbec4: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x4fbec4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x4fbec8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4fbec8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fbecc: 0x24133000  addiu       $s3, $zero, 0x3000
    ctx->pc = 0x4fbeccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x4fbed0: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x4fbed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4fbed4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4fbed4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4fbed8:
    // 0x4fbed8: 0x10760039  beq         $v1, $s6, . + 4 + (0x39 << 2)
    ctx->pc = 0x4FBED8u;
    {
        const bool branch_taken_0x4fbed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x4FBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBED8u;
        // 0x4fbedc: 0x8e22ce98  lw          $v0, -0x3168($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbed8) {
            ctx->pc = 0x4FBFC0u;
            goto label_4fbfc0;
        }
    }
    ctx->pc = 0x4FBEE0u;
    // 0x4fbee0: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x4fbee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4fbee4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x4FBEE4u;
    {
        const bool branch_taken_0x4fbee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBEE4u;
        // 0x4fbee8: 0x8e22ce98  lw          $v0, -0x3168($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbee4) {
            ctx->pc = 0x4FBFC0u;
            goto label_4fbfc0;
        }
    }
    ctx->pc = 0x4FBEECu;
    // 0x4fbeec: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x4fbeecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x4fbef0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4FBEF0u;
    {
        const bool branch_taken_0x4fbef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBEF0u;
        // 0x4fbef4: 0x306203ff  andi        $v0, $v1, 0x3FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbef0) {
            ctx->pc = 0x4FBFBCu;
            goto label_4fbfbc;
        }
    }
    ctx->pc = 0x4FBEF8u;
    // 0x4fbef8: 0x8ea4cea8  lw          $a0, -0x3158($s5)
    ctx->pc = 0x4fbef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954664)));
    // 0x4fbefc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4fbf00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4fbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4fbf04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4fbf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fbf08: 0x32282  srl         $a0, $v1, 10
    ctx->pc = 0x4fbf08u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
    // 0x4fbf0c: 0x31702  srl         $v0, $v1, 28
    ctx->pc = 0x4fbf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x4fbf10: 0x308403ff  andi        $a0, $a0, 0x3FF
    ctx->pc = 0x4fbf10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x4fbf14: 0x14540029  bne         $v0, $s4, . + 4 + (0x29 << 2)
    ctx->pc = 0x4FBF14u;
    {
        const bool branch_taken_0x4fbf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x4FBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBF14u;
        // 0x4fbf18: 0x306503ff  andi        $a1, $v1, 0x3FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbf14) {
            ctx->pc = 0x4FBFBCu;
            goto label_4fbfbc;
        }
    }
    ctx->pc = 0x4FBF1Cu;
    // 0x4fbf1c: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x4fbf1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4fbf20: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x4fbf20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4fbf24: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x4fbf24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4fbf28: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x4fbf28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4fbf2c: 0x6a070017  ldl         $a3, 0x17($s0)
    ctx->pc = 0x4fbf2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4fbf30: 0x6e070010  ldr         $a3, 0x10($s0)
    ctx->pc = 0x4fbf30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4fbf34: 0x6a08001f  ldl         $t0, 0x1F($s0)
    ctx->pc = 0x4fbf34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4fbf38: 0x6e080018  ldr         $t0, 0x18($s0)
    ctx->pc = 0x4fbf38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4fbf3c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4fbf3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbf40: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4fbf40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbf44: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x4fbf44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbf48: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x4fbf48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbf4c: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x4fbf4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbf50: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x4fbf50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbf54: 0xb3a8001f  sdl         $t0, 0x1F($sp)
    ctx->pc = 0x4fbf54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbf58: 0xb7a80018  sdr         $t0, 0x18($sp)
    ctx->pc = 0x4fbf58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbf5c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4fbf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4fbf60: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x4fbf60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4fbf64: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4fbf64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4fbf68: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x4fbf68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4fbf6c: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x4fbf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x4fbf70: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x4fbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x4fbf74: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x4fbf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x4fbf78: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x4fbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x4fbf7c: 0xafb3002c  sw          $s3, 0x2C($sp)
    ctx->pc = 0x4fbf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x4fbf80: 0x344203f0  ori         $v0, $v0, 0x3F0
    ctx->pc = 0x4fbf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1008);
    // 0x4fbf84: 0x24420680  addiu       $v0, $v0, 0x680
    ctx->pc = 0x4fbf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x4fbf88: 0x14720003  bne         $v1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FBF88u;
    {
        const bool branch_taken_0x4fbf88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x4FBF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBF88u;
        // 0x4fbf8c: 0xa7a20030  sh          $v0, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbf88) {
            ctx->pc = 0x4FBF98u;
            goto label_4fbf98;
        }
    }
    ctx->pc = 0x4FBF90u;
    // 0x4fbf90: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x4fbf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x4fbf94: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x4fbf94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
label_4fbf98:
    // 0x4fbf98: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4fbf98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4fbf9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FBF9Cu;
    {
        const bool branch_taken_0x4fbf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FBFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBF9Cu;
        // 0x4fbfa0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbf9c) {
            ctx->pc = 0x4FBFACu;
            goto label_4fbfac;
        }
    }
    ctx->pc = 0x4FBFA4u;
    // 0x4fbfa4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4fbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4fbfa8: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x4fbfa8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
label_4fbfac:
    // 0x4fbfac: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x4fbfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4fbfb0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x4fbfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4fbfb4: 0xc13ed9c  jal         func_4FB670
    ctx->pc = 0x4FBFB4u;
    SET_GPR_U32(ctx, 31, 0x4FBFBCu);
    ctx->pc = 0x4FBFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBFB4u;
    // 0x4fbfb8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FB670u, 0x4FBFB4u, 0x4FBFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBFBCu;
label_4fbfbc:
    // 0x4fbfbc: 0x8e22ce98  lw          $v0, -0x3168($s1)
    ctx->pc = 0x4fbfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954648)));
label_4fbfc0:
    // 0x4fbfc0: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x4fbfc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x4fbfc4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4fbfc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4fbfc8: 0x5440ffc3  bnel        $v0, $zero, . + 4 + (-0x3D << 2)
    ctx->pc = 0x4FBFC8u;
    {
        const bool branch_taken_0x4fbfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fbfc8) {
            ctx->pc = 0x4FBFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FBFC8u;
            // 0x4fbfcc: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FBED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fbed8;
        }
    }
    ctx->pc = 0x4FBFD0u;
label_4fbfd0:
    // 0x4fbfd0: 0xc13ebc8  jal         func_4FAF20
    ctx->pc = 0x4FBFD0u;
    SET_GPR_U32(ctx, 31, 0x4FBFD8u);
    ctx->pc = 0x4FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FAF20u, 0x4FBFD0u, 0x4FBFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBFD8u;
label_4fbfd8:
    // 0x4fbfd8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x4fbfd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4fbfdc: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x4fbfdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4fbfe0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x4fbfe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fbfe4: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x4fbfe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4fbfe8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x4fbfe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4fbfec: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x4fbfecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4fbff0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x4fbff0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4fbff4: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x4fbff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4fbff8: 0x3e00008  jr          $ra
    ctx->pc = 0x4FBFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FBFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBFF8u;
        // 0x4fbffc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FBFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FC000u;
}
