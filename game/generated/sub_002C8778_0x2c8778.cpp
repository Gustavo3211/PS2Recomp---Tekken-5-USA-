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

// Function: sub_002C8778
// Address: 0x2c8778 - 0x2c8b50
void sub_002C8778_0x2c8778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8778_0x2c8778");
#endif

    switch (ctx->pc) {
        case 0x2c87acu: goto label_2c87ac;
        case 0x2c87f0u: goto label_2c87f0;
        case 0x2c8854u: goto label_2c8854;
        case 0x2c88ecu: goto label_2c88ec;
        case 0x2c8930u: goto label_2c8930;
        case 0x2c8938u: goto label_2c8938;
        case 0x2c8964u: goto label_2c8964;
        case 0x2c89c4u: goto label_2c89c4;
        case 0x2c8a58u: goto label_2c8a58;
        case 0x2c8a98u: goto label_2c8a98;
        case 0x2c8aa0u: goto label_2c8aa0;
        default: break;
    }

    ctx->pc = 0x2c8778u;

    // 0x2c8778: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c8778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c877c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2c877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2c8780: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2c8780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2c8784: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2c8784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2c8788: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2c8788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2c878c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2c878cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2c8790: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2c8790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2c8794: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2c8794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2c8798: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2c8798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x2c879c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2c879cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2c87a0: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2c87a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2c87a4: 0xc0b2718  jal         func_2C9C60
    ctx->pc = 0x2C87A4u;
    SET_GPR_U32(ctx, 31, 0x2C87ACu);
    ctx->pc = 0x2C87A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C87A4u;
    // 0x2c87a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9C60u, 0x2C87A4u, 0x2C87ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87ACu;
label_2c87ac:
    // 0x2c87ac: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2C87ACu;
    {
        const bool branch_taken_0x2c87ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87ACu;
        // 0x2c87b0: 0x10b040  sll         $s6, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87ac) {
            ctx->pc = 0x2C8B14u;
            goto label_2c8b14;
        }
    }
    ctx->pc = 0x2C87B4u;
    // 0x2c87b4: 0x2e110001  sltiu       $s1, $s0, 0x1
    ctx->pc = 0x2c87b4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c87b8: 0x2d01021  addu        $v0, $s6, $s0
    ctx->pc = 0x2c87b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2c87bc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c87bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c87c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c87c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c87c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c87c8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2c87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c87cc: 0x3c1e0018  lui         $fp, 0x18
    ctx->pc = 0x2c87ccu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)24 << 16));
    // 0x2c87d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c87d4: 0x3c010018  lui         $at, 0x18
    ctx->pc = 0x2c87d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)24 << 16));
    // 0x2c87d8: 0x24218d10  addiu       $at, $at, -0x72F0
    ctx->pc = 0x2c87d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294937872));
    // 0x2c87dc: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2c87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2c87e0: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2c87e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c87e4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C87E4u;
    {
        const bool branch_taken_0x2c87e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87E4u;
        // 0x2c87e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87e4) {
            ctx->pc = 0x2C8850u;
            goto label_2c8850;
        }
    }
    ctx->pc = 0x2C87ECu;
    // 0x2c87ec: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x2c87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2c87f0:
    // 0x2c87f0: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x2c87f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c87f4: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x2c87f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c87f8: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x2c87f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c87fc: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x2c87fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c8800: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x2c8800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c8804: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x2c8804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c8808: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x2c8808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c880c: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x2c880cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c8810: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2c8810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8814: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2c8814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8818: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2c8818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c881c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2c881cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8820: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2c8820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8824: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2c8824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8828: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2c8828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c882c: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2c882cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8830: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2c8830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2c8834: 0x0  nop
    ctx->pc = 0x2c8834u;
    // NOP
    // 0x2c8838: 0x0  nop
    ctx->pc = 0x2c8838u;
    // NOP
    // 0x2c883c: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C883Cu;
    {
        const bool branch_taken_0x2c883c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C883Cu;
        // 0x2c8840: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c883c) {
            ctx->pc = 0x2C87F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c87f0;
        }
    }
    ctx->pc = 0x2C8844u;
    // 0x2c8844: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C8844u;
    {
        const bool branch_taken_0x2c8844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8844) {
            ctx->pc = 0x2C8888u;
            goto label_2c8888;
        }
    }
    ctx->pc = 0x2C884Cu;
    // 0x2c884c: 0x0  nop
    ctx->pc = 0x2c884cu;
    // NOP
label_2c8850:
    // 0x2c8850: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x2c8850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2c8854:
    // 0x2c8854: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x2c8854u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8858: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x2c8858u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c885c: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x2c885cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c8860: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x2c8860u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c8864: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x2c8864u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x2c8868: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x2c8868u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2c886c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x2c886cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x2c8870: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x2c8870u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x2c8874: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2c8874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2c8878: 0x0  nop
    ctx->pc = 0x2c8878u;
    // NOP
    // 0x2c887c: 0x0  nop
    ctx->pc = 0x2c887cu;
    // NOP
    // 0x2c8880: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C8880u;
    {
        const bool branch_taken_0x2c8880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8880u;
        // 0x2c8884: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8880) {
            ctx->pc = 0x2C8854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8854;
        }
    }
    ctx->pc = 0x2C8888u;
label_2c8888:
    // 0x2c8888: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x2c8888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c888c: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x2c888cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c8890: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x2c8890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c8894: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x2c8894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c8898: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x2c8898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c889c: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x2c889cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c88a0: 0x8c480018  lw          $t0, 0x18($v0)
    ctx->pc = 0x2c88a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c88a4: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2c88a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c88a8: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2c88a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c88ac: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2c88acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c88b0: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2c88b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c88b4: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2c88b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c88b8: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2c88b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c88bc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c88bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2c88c0: 0x247288d0  addiu       $s2, $v1, -0x7730
    ctx->pc = 0x2c88c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x2c88c4: 0x10a880  sll         $s5, $s0, 2
    ctx->pc = 0x2c88c4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c88c8: 0xac880018  sw          $t0, 0x18($a0)
    ctx->pc = 0x2c88c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x2c88cc: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x2c88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2c88d0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2c88d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c88d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c88d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c88d8: 0x906401bc  lbu         $a0, 0x1BC($v1)
    ctx->pc = 0x2c88d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x2c88dc: 0x50930018  beql        $a0, $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C88DCu;
    {
        const bool branch_taken_0x2c88dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        if (branch_taken_0x2c88dc) {
            ctx->pc = 0x2C88E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C88DCu;
            // 0x2c88e0: 0x2d01021  addu        $v0, $s6, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8940u;
            goto label_2c8940;
        }
    }
    ctx->pc = 0x2C88E4u;
    // 0x2c88e4: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C88E4u;
    SET_GPR_U32(ctx, 31, 0x2C88ECu);
    ctx->pc = 0x2C88E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C88E4u;
    // 0x2c88e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C88E4u, 0x2C88ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C88ECu;
label_2c88ec:
    // 0x2c88ec: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C88ECu;
    {
        const bool branch_taken_0x2c88ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88ECu;
        // 0x2c88f0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88ec) {
            ctx->pc = 0x2C893Cu;
            goto label_2c893c;
        }
    }
    ctx->pc = 0x2C88F4u;
    // 0x2c88f4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c88f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c88f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c88fc: 0x906401bc  lbu         $a0, 0x1BC($v1)
    ctx->pc = 0x2c88fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x2c8900: 0x1493000f  bne         $a0, $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x2C8900u;
    {
        const bool branch_taken_0x2c8900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8900u;
        // 0x2c8904: 0x2d01021  addu        $v0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8900) {
            ctx->pc = 0x2C8940u;
            goto label_2c8940;
        }
    }
    ctx->pc = 0x2C8908u;
    // 0x2c8908: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x2c8908u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2c890c: 0x27c28d10  addiu       $v0, $fp, -0x72F0
    ctx->pc = 0x2c890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294937872));
    // 0x2c8910: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2c8910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2c8914: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c8914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8918: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2c8918u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2c891c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c891cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8920: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x2c8920u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2c8924: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2c8924u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c8928: 0xc0b20d6  jal         func_2C8358
    ctx->pc = 0x2C8928u;
    SET_GPR_U32(ctx, 31, 0x2C8930u);
    ctx->pc = 0x2C892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8928u;
    // 0x2c892c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8358u, 0x2C8928u, 0x2C8930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8930u;
label_2c8930:
    // 0x2c8930: 0xc0b2078  jal         func_2C81E0
    ctx->pc = 0x2C8930u;
    SET_GPR_U32(ctx, 31, 0x2C8938u);
    ctx->pc = 0x2C8934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8930u;
    // 0x2c8934: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C81E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C81E0u, 0x2C8930u, 0x2C8938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8938u;
label_2c8938:
    // 0x2c8938: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c8938u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c893c:
    // 0x2c893c: 0x2d01021  addu        $v0, $s6, $s0
    ctx->pc = 0x2c893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_2c8940:
    // 0x2c8940: 0x27c48d10  addiu       $a0, $fp, -0x72F0
    ctx->pc = 0x2c8940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294937872));
    // 0x2c8944: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c8944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c8948: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2c8948u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c894c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c894cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8950: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8954: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2c8954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c8958: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C8958u;
    {
        const bool branch_taken_0x2c8958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8958u;
        // 0x2c895c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8958) {
            ctx->pc = 0x2C89C0u;
            goto label_2c89c0;
        }
    }
    ctx->pc = 0x2C8960u;
    // 0x2c8960: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x2c8960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2c8964:
    // 0x2c8964: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x2c8964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c8968: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x2c8968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c896c: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x2c896cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c8970: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x2c8970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c8974: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x2c8974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c8978: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x2c8978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c897c: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x2c897cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c8980: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x2c8980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c8984: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x2c8984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8988: 0xb4a40000  sdr         $a0, 0x0($a1)
    ctx->pc = 0x2c8988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c898c: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x2c898cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8990: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x2c8990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8994: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x2c8994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8998: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x2c8998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c899c: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x2c899cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c89a0: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x2c89a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c89a4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2c89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2c89a8: 0x0  nop
    ctx->pc = 0x2c89a8u;
    // NOP
    // 0x2c89ac: 0x0  nop
    ctx->pc = 0x2c89acu;
    // NOP
    // 0x2c89b0: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C89B0u;
    {
        const bool branch_taken_0x2c89b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89B0u;
        // 0x2c89b4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89b0) {
            ctx->pc = 0x2C8964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8964;
        }
    }
    ctx->pc = 0x2C89B8u;
    // 0x2c89b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C89B8u;
    {
        const bool branch_taken_0x2c89b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c89b8) {
            ctx->pc = 0x2C89F8u;
            goto label_2c89f8;
        }
    }
    ctx->pc = 0x2C89C0u;
label_2c89c0:
    // 0x2c89c0: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x2c89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2c89c4:
    // 0x2c89c4: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x2c89c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c89c8: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x2c89c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c89cc: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x2c89ccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c89d0: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x2c89d0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c89d4: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x2c89d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x2c89d8: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x2c89d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x2c89dc: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x2c89dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x2c89e0: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x2c89e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x2c89e4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2c89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2c89e8: 0x0  nop
    ctx->pc = 0x2c89e8u;
    // NOP
    // 0x2c89ec: 0x0  nop
    ctx->pc = 0x2c89ecu;
    // NOP
    // 0x2c89f0: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C89F0u;
    {
        const bool branch_taken_0x2c89f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89F0u;
        // 0x2c89f4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89f0) {
            ctx->pc = 0x2C89C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c89c4;
        }
    }
    ctx->pc = 0x2C89F8u;
label_2c89f8:
    // 0x2c89f8: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x2c89f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c89fc: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x2c89fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c8a00: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x2c8a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c8a04: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x2c8a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c8a08: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x2c8a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c8a0c: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x2c8a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c8a10: 0x8c480018  lw          $t0, 0x18($v0)
    ctx->pc = 0x2c8a10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c8a14: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x2c8a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8a18: 0xb4a40000  sdr         $a0, 0x0($a1)
    ctx->pc = 0x2c8a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8a1c: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x2c8a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8a20: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x2c8a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8a24: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x2c8a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8a28: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x2c8a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8a2c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c8a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2c8a30: 0x247288d0  addiu       $s2, $v1, -0x7730
    ctx->pc = 0x2c8a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x2c8a34: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2c8a34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8a38: 0xaca80018  sw          $t0, 0x18($a1)
    ctx->pc = 0x2c8a38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 8));
    // 0x2c8a3c: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x2c8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2c8a40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c8a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8a44: 0x906401bc  lbu         $a0, 0x1BC($v1)
    ctx->pc = 0x2c8a44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x2c8a48: 0x10930016  beq         $a0, $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C8A48u;
    {
        const bool branch_taken_0x2c8a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        if (branch_taken_0x2c8a48) {
            ctx->pc = 0x2C8AA4u;
            goto label_2c8aa4;
        }
    }
    ctx->pc = 0x2C8A50u;
    // 0x2c8a50: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C8A50u;
    SET_GPR_U32(ctx, 31, 0x2C8A58u);
    ctx->pc = 0x2C8A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8A50u;
    // 0x2c8a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C8A50u, 0x2C8A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A58u;
label_2c8a58:
    // 0x2c8a58: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C8A58u;
    {
        const bool branch_taken_0x2c8a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A58u;
        // 0x2c8a5c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a58) {
            ctx->pc = 0x2C8AA4u;
            goto label_2c8aa4;
        }
    }
    ctx->pc = 0x2C8A60u;
    // 0x2c8a60: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c8a64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8a68: 0x906401bc  lbu         $a0, 0x1BC($v1)
    ctx->pc = 0x2c8a68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x2c8a6c: 0x1493000d  bne         $a0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x2C8A6Cu;
    {
        const bool branch_taken_0x2c8a6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C8A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A6Cu;
        // 0x2c8a70: 0x112840  sll         $a1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a6c) {
            ctx->pc = 0x2C8AA4u;
            goto label_2c8aa4;
        }
    }
    ctx->pc = 0x2C8A74u;
    // 0x2c8a74: 0x27c28d10  addiu       $v0, $fp, -0x72F0
    ctx->pc = 0x2c8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294937872));
    // 0x2c8a78: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2c8a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2c8a7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c8a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a80: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2c8a80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2c8a84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c8a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8a88: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x2c8a88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2c8a8c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2c8a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c8a90: 0xc0b2154  jal         func_2C8550
    ctx->pc = 0x2C8A90u;
    SET_GPR_U32(ctx, 31, 0x2C8A98u);
    ctx->pc = 0x2C8A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8A90u;
    // 0x2c8a94: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8550u, 0x2C8A90u, 0x2C8A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A98u;
label_2c8a98:
    // 0x2c8a98: 0xc0b2078  jal         func_2C81E0
    ctx->pc = 0x2C8A98u;
    SET_GPR_U32(ctx, 31, 0x2C8AA0u);
    ctx->pc = 0x2C8A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8A98u;
    // 0x2c8a9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C81E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C81E0u, 0x2C8A98u, 0x2C8AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8AA0u;
label_2c8aa0:
    // 0x2c8aa0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c8aa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8aa4:
    // 0x2c8aa4: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8AA4u;
    {
        const bool branch_taken_0x2c8aa4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8aa4) {
            ctx->pc = 0x2C8AC0u;
            goto label_2c8ac0;
        }
    }
    ctx->pc = 0x2C8AACu;
    // 0x2c8aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8ab0: 0x12e2000b  beq         $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C8AB0u;
    {
        const bool branch_taken_0x2c8ab0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AB0u;
        // 0x2c8ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ab0) {
            ctx->pc = 0x2C8AE0u;
            goto label_2c8ae0;
        }
    }
    ctx->pc = 0x2C8AB8u;
    // 0x2c8ab8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2C8AB8u;
    {
        const bool branch_taken_0x2c8ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AB8u;
        // 0x2c8abc: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ab8) {
            ctx->pc = 0x2C8B18u;
            goto label_2c8b18;
        }
    }
    ctx->pc = 0x2C8AC0u;
label_2c8ac0:
    // 0x2c8ac0: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C8AC0u;
    {
        const bool branch_taken_0x2c8ac0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AC0u;
        // 0x2c8ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ac0) {
            ctx->pc = 0x2C8B14u;
            goto label_2c8b14;
        }
    }
    ctx->pc = 0x2C8AC8u;
    // 0x2c8ac8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8acc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c8accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8ad0: 0x2831826  xor         $v1, $s4, $v1
    ctx->pc = 0x2c8ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 3));
    // 0x2c8ad4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C8AD4u;
    {
        const bool branch_taken_0x2c8ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AD4u;
        // 0x2c8ad8: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ad4) {
            ctx->pc = 0x2C8B14u;
            goto label_2c8b14;
        }
    }
    ctx->pc = 0x2C8ADCu;
    // 0x2c8adc: 0x0  nop
    ctx->pc = 0x2c8adcu;
    // NOP
label_2c8ae0:
    // 0x2c8ae0: 0x1297000c  beq         $s4, $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8AE0u;
    {
        const bool branch_taken_0x2c8ae0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 23));
        ctx->pc = 0x2C8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AE0u;
        // 0x2c8ae4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ae0) {
            ctx->pc = 0x2C8B14u;
            goto label_2c8b14;
        }
    }
    ctx->pc = 0x2C8AE8u;
    // 0x2c8ae8: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2c8ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c8aec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8AECu;
    {
        const bool branch_taken_0x2c8aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AECu;
        // 0x2c8af0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8aec) {
            ctx->pc = 0x2C8B08u;
            goto label_2c8b08;
        }
    }
    ctx->pc = 0x2C8AF4u;
    // 0x2c8af4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C8AF4u;
    {
        const bool branch_taken_0x2c8af4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AF4u;
        // 0x2c8af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8af4) {
            ctx->pc = 0x2C8B14u;
            goto label_2c8b14;
        }
    }
    ctx->pc = 0x2C8AFCu;
    // 0x2c8afc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8AFCu;
    {
        const bool branch_taken_0x2c8afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AFCu;
        // 0x2c8b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8afc) {
            ctx->pc = 0x2C8B14u;
            goto label_2c8b14;
        }
    }
    ctx->pc = 0x2C8B04u;
    // 0x2c8b04: 0x0  nop
    ctx->pc = 0x2c8b04u;
    // NOP
label_2c8b08:
    // 0x2c8b08: 0x12830002  beq         $s4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8B08u;
    {
        const bool branch_taken_0x2c8b08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B08u;
        // 0x2c8b0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b08) {
            ctx->pc = 0x2C8B14u;
            goto label_2c8b14;
        }
    }
    ctx->pc = 0x2C8B10u;
    // 0x2c8b10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b14:
    // 0x2c8b14: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2c8b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c8b18:
    // 0x2c8b18: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2c8b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c8b1c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2c8b1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c8b20: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2c8b20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8b24: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2c8b24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c8b28: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2c8b28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8b2c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2c8b2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c8b30: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x2c8b30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2c8b34: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2c8b34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c8b38: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2c8b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2c8b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B3Cu;
        // 0x2c8b40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8B44u;
    // 0x2c8b44: 0x0  nop
    ctx->pc = 0x2c8b44u;
    // NOP
    // 0x2c8b48: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B48u;
        // 0x2c8b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8B50u;
}
