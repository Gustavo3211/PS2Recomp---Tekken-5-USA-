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

// Function: sub_002C9F78
// Address: 0x2c9f78 - 0x2ca168
void sub_002C9F78_0x2c9f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9F78_0x2c9f78");
#endif

    switch (ctx->pc) {
        case 0x2c9facu: goto label_2c9fac;
        case 0x2c9fb8u: goto label_2c9fb8;
        case 0x2c9fc0u: goto label_2c9fc0;
        case 0x2ca024u: goto label_2ca024;
        case 0x2ca114u: goto label_2ca114;
        default: break;
    }

    ctx->pc = 0x2c9f78u;

    // 0x2c9f78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c9f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c9f7c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2c9f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2c9f80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c9f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f84: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2c9f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2c9f88: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2c9f88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9f8c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2c9f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2c9f90: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2c9f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2c9f94: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2c9f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2c9f98: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2c9f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2c9f9c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2c9f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2c9fa0: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2c9fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x2c9fa4: 0xc08661c  jal         func_219870
    ctx->pc = 0x2C9FA4u;
    SET_GPR_U32(ctx, 31, 0x2C9FACu);
    ctx->pc = 0x2C9FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9FA4u;
    // 0x2c9fa8: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x2C9FA4u, 0x2C9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FACu;
label_2c9fac:
    // 0x2c9fac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c9facu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9fb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c9fb4: 0x245688d0  addiu       $s6, $v0, -0x7730
    ctx->pc = 0x2c9fb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
label_2c9fb8:
    // 0x2c9fb8: 0xc0b4750  jal         func_2D1D40
    ctx->pc = 0x2C9FB8u;
    SET_GPR_U32(ctx, 31, 0x2C9FC0u);
    ctx->pc = 0x2C9FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9FB8u;
    // 0x2c9fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D40u, 0x2C9FB8u, 0x2C9FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FC0u;
label_2c9fc0:
    // 0x2c9fc0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2c9fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c9fc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9fc8: 0x26a58858  addiu       $a1, $s5, -0x77A8
    ctx->pc = 0x2c9fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936664));
    // 0x2c9fcc: 0x12000056  beqz        $s0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2C9FCCu;
    {
        const bool branch_taken_0x2c9fcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FCCu;
        // 0x2c9fd0: 0x2331804  sllv        $v1, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9fcc) {
            ctx->pc = 0x2CA128u;
            goto label_2ca128;
        }
    }
    ctx->pc = 0x2C9FD4u;
    // 0x2c9fd4: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x2c9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x2c9fd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c9fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c9fdc: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2C9FDCu;
    {
        const bool branch_taken_0x2c9fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FDCu;
        // 0x2c9fe0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9fdc) {
            ctx->pc = 0x2CA128u;
            goto label_2ca128;
        }
    }
    ctx->pc = 0x2C9FE4u;
    // 0x2c9fe4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2c9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c9fe8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9FE8u;
    {
        const bool branch_taken_0x2c9fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FE8u;
        // 0x2c9fec: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9fe8) {
            ctx->pc = 0x2CA008u;
            goto label_2ca008;
        }
    }
    ctx->pc = 0x2C9FF0u;
    // 0x2c9ff0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c9ff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ff4: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x2c9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x2c9ff8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c9ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9ffc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9FFCu;
    {
        const bool branch_taken_0x2c9ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FFCu;
        // 0x2ca000: 0x84630040  lh          $v1, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ffc) {
            ctx->pc = 0x2CA01Cu;
            goto label_2ca01c;
        }
    }
    ctx->pc = 0x2CA004u;
    // 0x2ca004: 0x0  nop
    ctx->pc = 0x2ca004u;
    // NOP
label_2ca008:
    // 0x2ca008: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x2ca008u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ca00c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2ca00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ca010: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ca010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ca014: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ca014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ca018: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2ca018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ca01c:
    // 0x2ca01c: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2CA01Cu;
    SET_GPR_U32(ctx, 31, 0x2CA024u);
    ctx->pc = 0x2CA020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA01Cu;
    // 0x2ca020: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2CA01Cu, 0x2CA024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA024u;
label_2ca024:
    // 0x2ca024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca028: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ca028u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca02c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ca02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ca030: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x2ca030u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ca034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca038: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2ca038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ca03c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ca03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ca040: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2ca040u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ca044: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ca044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ca048: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x2ca048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2ca04c: 0x684503ab  ldl         $a1, 0x3AB($v0)
    ctx->pc = 0x2ca04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 939); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2ca050: 0x6c4503a4  ldr         $a1, 0x3A4($v0)
    ctx->pc = 0x2ca050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 932); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2ca054: 0x684703b3  ldl         $a3, 0x3B3($v0)
    ctx->pc = 0x2ca054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ca058: 0x6c4703ac  ldr         $a3, 0x3AC($v0)
    ctx->pc = 0x2ca058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ca05c: 0x684803bb  ldl         $t0, 0x3BB($v0)
    ctx->pc = 0x2ca05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 955); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2ca060: 0x6c4803b4  ldr         $t0, 0x3B4($v0)
    ctx->pc = 0x2ca060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2ca064: 0x684903c3  ldl         $t1, 0x3C3($v0)
    ctx->pc = 0x2ca064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 963); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2ca068: 0x6c4903bc  ldr         $t1, 0x3BC($v0)
    ctx->pc = 0x2ca068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2ca06c: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x2ca06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca070: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x2ca070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca074: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x2ca074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca078: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x2ca078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca07c: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x2ca07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca080: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x2ca080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca084: 0xb3a9001f  sdl         $t1, 0x1F($sp)
    ctx->pc = 0x2ca084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca088: 0xb7a90018  sdr         $t1, 0x18($sp)
    ctx->pc = 0x2ca088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca08c: 0x684503cb  ldl         $a1, 0x3CB($v0)
    ctx->pc = 0x2ca08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2ca090: 0x6c4503c4  ldr         $a1, 0x3C4($v0)
    ctx->pc = 0x2ca090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2ca094: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x2ca094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca098: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x2ca098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca09c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ca09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ca0a0: 0x68c2002b  ldl         $v0, 0x2B($a2)
    ctx->pc = 0x2ca0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ca0a4: 0x6cc20024  ldr         $v0, 0x24($a2)
    ctx->pc = 0x2ca0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ca0a8: 0x8cc7002c  lw          $a3, 0x2C($a2)
    ctx->pc = 0x2ca0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2ca0ac: 0xb3a2002f  sdl         $v0, 0x2F($sp)
    ctx->pc = 0x2ca0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca0b0: 0xb7a20028  sdr         $v0, 0x28($sp)
    ctx->pc = 0x2ca0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca0b4: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2ca0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2ca0b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ca0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ca0bc: 0x686201ab  ldl         $v0, 0x1AB($v1)
    ctx->pc = 0x2ca0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ca0c0: 0x6c6201a4  ldr         $v0, 0x1A4($v1)
    ctx->pc = 0x2ca0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 420); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ca0c4: 0x686601b3  ldl         $a2, 0x1B3($v1)
    ctx->pc = 0x2ca0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 435); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2ca0c8: 0x6c6601ac  ldr         $a2, 0x1AC($v1)
    ctx->pc = 0x2ca0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2ca0cc: 0xb3a2003b  sdl         $v0, 0x3B($sp)
    ctx->pc = 0x2ca0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca0d0: 0xb7a20034  sdr         $v0, 0x34($sp)
    ctx->pc = 0x2ca0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca0d4: 0xb3a60043  sdl         $a2, 0x43($sp)
    ctx->pc = 0x2ca0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca0d8: 0xb7a6003c  sdr         $a2, 0x3C($sp)
    ctx->pc = 0x2ca0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca0dc: 0x6a090013  ldl         $t1, 0x13($s0)
    ctx->pc = 0x2ca0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2ca0e0: 0x6e09000c  ldr         $t1, 0xC($s0)
    ctx->pc = 0x2ca0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2ca0e4: 0x6a02001b  ldl         $v0, 0x1B($s0)
    ctx->pc = 0x2ca0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ca0e8: 0x6e020014  ldr         $v0, 0x14($s0)
    ctx->pc = 0x2ca0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ca0ec: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2ca0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ca0f0: 0x86060020  lh          $a2, 0x20($s0)
    ctx->pc = 0x2ca0f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ca0f4: 0xb3a9004b  sdl         $t1, 0x4B($sp)
    ctx->pc = 0x2ca0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca0f8: 0xb7a90044  sdr         $t1, 0x44($sp)
    ctx->pc = 0x2ca0f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca0fc: 0xb3a20053  sdl         $v0, 0x53($sp)
    ctx->pc = 0x2ca0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca100: 0xb7a2004c  sdr         $v0, 0x4C($sp)
    ctx->pc = 0x2ca100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ca104: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x2ca104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x2ca108: 0xa7a60058  sh          $a2, 0x58($sp)
    ctx->pc = 0x2ca108u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 88), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ca10c: 0xc0b24c0  jal         func_2C9300
    ctx->pc = 0x2CA10Cu;
    SET_GPR_U32(ctx, 31, 0x2CA114u);
    ctx->pc = 0x2CA110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA10Cu;
    // 0x2ca110: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9300u, 0x2CA10Cu, 0x2CA114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA114u;
label_2ca114:
    // 0x2ca114: 0x25c0821  addu        $at, $s2, $gp
    ctx->pc = 0x2ca114u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x2ca118: 0xac33bb20  sw          $s3, -0x44E0($at)
    ctx->pc = 0x2ca118u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949664), GPR_U32(ctx, 19));
    // 0x2ca11c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA11Cu;
    {
        const bool branch_taken_0x2ca11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA11Cu;
        // 0x2ca120: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca11c) {
            ctx->pc = 0x2CA134u;
            goto label_2ca134;
        }
    }
    ctx->pc = 0x2CA124u;
    // 0x2ca124: 0x0  nop
    ctx->pc = 0x2ca124u;
    // NOP
label_2ca128:
    // 0x2ca128: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x2ca128u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x2ca12c: 0xac20bb20  sw          $zero, -0x44E0($at)
    ctx->pc = 0x2ca12cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949664), GPR_U32(ctx, 0));
    // 0x2ca130: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ca130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ca134:
    // 0x2ca134: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2ca134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ca138: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x2CA138u;
    {
        const bool branch_taken_0x2ca138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA138u;
        // 0x2ca13c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca138) {
            ctx->pc = 0x2C9FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9fb8;
        }
    }
    ctx->pc = 0x2CA140u;
    // 0x2ca140: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2ca140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ca144: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2ca144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ca148: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2ca148u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ca14c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2ca14cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ca150: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2ca150u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ca154: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2ca154u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ca158: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2ca158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2ca15c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA15Cu;
        // 0x2ca160: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA164u;
    // 0x2ca164: 0x0  nop
    ctx->pc = 0x2ca164u;
    // NOP
    ctx->pc = 0x2ca168u;
}
