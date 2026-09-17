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

// Function: sub_002F6430
// Address: 0x2f6430 - 0x2f6638
void sub_002F6430_0x2f6430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6430_0x2f6430");
#endif

    switch (ctx->pc) {
        case 0x2f646cu: goto label_2f646c;
        case 0x2f64c0u: goto label_2f64c0;
        case 0x2f6530u: goto label_2f6530;
        case 0x2f654cu: goto label_2f654c;
        case 0x2f65f8u: goto label_2f65f8;
        case 0x2f6614u: goto label_2f6614;
        default: break;
    }

    ctx->pc = 0x2f6430u;

    // 0x2f6430: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f6430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f6434: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2f6434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2f6438: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f6438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f643c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2f643cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2f6440: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2f6440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2f6444: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2f6444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2f6448: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x2f6448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2f644c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2f644cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f6450: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6450u;
    {
        const bool branch_taken_0x2f6450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6450) {
            ctx->pc = 0x2F6454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6450u;
            // 0x2f6454: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6460u;
            goto label_2f6460;
        }
    }
    ctx->pc = 0x2F6458u;
    // 0x2f6458: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2f6458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2f645c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2f645cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2f6460:
    // 0x2f6460: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x2f6460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x2f6464: 0xc0bbebc  jal         func_2EFAF0
    ctx->pc = 0x2F6464u;
    SET_GPR_U32(ctx, 31, 0x2F646Cu);
    ctx->pc = 0x2F6468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6464u;
    // 0x2f6468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFAF0u, 0x2F6464u, 0x2F646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F646Cu;
label_2f646c:
    // 0x2f646c: 0x8e260150  lw          $a2, 0x150($s1)
    ctx->pc = 0x2f646cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2f6470: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x2f6470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2f6474: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f6474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f6478: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F6478u;
    {
        const bool branch_taken_0x2f6478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6478u;
        // 0x2f647c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6478) {
            ctx->pc = 0x2F64C8u;
            goto label_2f64c8;
        }
    }
    ctx->pc = 0x2F6480u;
    // 0x2f6480: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2f6480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2f6484: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2f6484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2f6488: 0x38c60005  xori        $a2, $a2, 0x5
    ctx->pc = 0x2f6488u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)5);
    // 0x2f648c: 0x34630041  ori         $v1, $v1, 0x41
    ctx->pc = 0x2f648cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65);
    // 0x2f6490: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f6490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f6494: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f6494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6498: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2f6498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2f649c: 0x66380b  movn        $a3, $v1, $a2
    ctx->pc = 0x2f649cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x2f64a0: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x2f64a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x2f64a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f64a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f64a8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2f64a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2f64ac: 0x3c120015  lui         $s2, 0x15
    ctx->pc = 0x2f64acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)21 << 16));
    // 0x2f64b0: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x2f64b0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x2f64b4: 0x26444b40  addiu       $a0, $s2, 0x4B40
    ctx->pc = 0x2f64b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 19264));
    // 0x2f64b8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2F64B8u;
    SET_GPR_U32(ctx, 31, 0x2F64C0u);
    ctx->pc = 0x2F64BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F64B8u;
    // 0x2f64bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2F64B8u, 0x2F64C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F64C0u;
label_2f64c0:
    // 0x2f64c0: 0x8e260150  lw          $a2, 0x150($s1)
    ctx->pc = 0x2f64c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2f64c4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f64c8:
    // 0x2f64c8: 0x14c20056  bne         $a2, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2F64C8u;
    {
        const bool branch_taken_0x2f64c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64C8u;
        // 0x2f64cc: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64c8) {
            ctx->pc = 0x2F6624u;
            goto label_2f6624;
        }
    }
    ctx->pc = 0x2F64D0u;
    // 0x2f64d0: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2f64d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2f64d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f64d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f64d8: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F64D8u;
    {
        const bool branch_taken_0x2f64d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64D8u;
        // 0x2f64dc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64d8) {
            ctx->pc = 0x2F655Cu;
            goto label_2f655c;
        }
    }
    ctx->pc = 0x2F64E0u;
    // 0x2f64e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f64e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f64e4: 0x24461770  addiu       $a2, $v0, 0x1770
    ctx->pc = 0x2f64e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x2f64e8: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2f64e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f64ec: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2f64ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f64f0: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x2f64f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f64f4: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x2f64f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f64f8: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x2f64f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f64fc: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x2f64fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f6500: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2f6500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6504: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2f6504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6508: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x2f6508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f650c: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x2f650cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6510: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x2f6510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6514: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x2f6514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6518: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x2f6518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f651c: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x2f651cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f6520: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2f6520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6524: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2f6524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6528: 0x3c120015  lui         $s2, 0x15
    ctx->pc = 0x2f6528u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)21 << 16));
    // 0x2f652c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2f652cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2f6530:
    // 0x2f6530: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f6530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f6534: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2f6534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2f6538: 0x26444b40  addiu       $a0, $s2, 0x4B40
    ctx->pc = 0x2f6538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 19264));
    // 0x2f653c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2f653cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6544: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2F6544u;
    SET_GPR_U32(ctx, 31, 0x2F654Cu);
    ctx->pc = 0x2F6548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6544u;
    // 0x2f6548: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2F6544u, 0x2F654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F654Cu;
label_2f654c:
    // 0x2f654c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2f654cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f6550: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F6550u;
    {
        const bool branch_taken_0x2f6550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6550u;
        // 0x2f6554: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6550) {
            ctx->pc = 0x2F6530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6530;
        }
    }
    ctx->pc = 0x2F6558u;
    // 0x2f6558: 0x8e260150  lw          $a2, 0x150($s1)
    ctx->pc = 0x2f6558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_2f655c:
    // 0x2f655c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f6560: 0x14c20030  bne         $a2, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2F6560u;
    {
        const bool branch_taken_0x2f6560 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6560u;
        // 0x2f6564: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6560) {
            ctx->pc = 0x2F6624u;
            goto label_2f6624;
        }
    }
    ctx->pc = 0x2F6568u;
    // 0x2f6568: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2f6568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2f656c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f6570: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F6570u;
    {
        const bool branch_taken_0x2f6570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F6574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6570u;
        // 0x2f6574: 0xdfb10068  ld          $s1, 0x68($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6570) {
            ctx->pc = 0x2F6628u;
            goto label_2f6628;
        }
    }
    ctx->pc = 0x2F6578u;
    // 0x2f6578: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2f6578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2f657c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2f657cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6580: 0x24461790  addiu       $a2, $v0, 0x1790
    ctx->pc = 0x2f6580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6032));
    // 0x2f6584: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2f6584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f6588: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2f6588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f658c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x2f658cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f6590: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x2f6590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f6594: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x2f6594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f6598: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x2f6598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f659c: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x2f659cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f65a0: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x2f65a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f65a4: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x2f65a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f65a8: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x2f65a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f65ac: 0xb2250017  sdl         $a1, 0x17($s1)
    ctx->pc = 0x2f65acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f65b0: 0xb6250010  sdr         $a1, 0x10($s1)
    ctx->pc = 0x2f65b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f65b4: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x2f65b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f65b8: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x2f65b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f65bc: 0x68c40027  ldl         $a0, 0x27($a2)
    ctx->pc = 0x2f65bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f65c0: 0x6cc40020  ldr         $a0, 0x20($a2)
    ctx->pc = 0x2f65c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f65c4: 0x68c5002f  ldl         $a1, 0x2F($a2)
    ctx->pc = 0x2f65c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f65c8: 0x6cc50028  ldr         $a1, 0x28($a2)
    ctx->pc = 0x2f65c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f65cc: 0xb223001f  sdl         $v1, 0x1F($s1)
    ctx->pc = 0x2f65ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f65d0: 0xb6230018  sdr         $v1, 0x18($s1)
    ctx->pc = 0x2f65d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f65d4: 0xb2240027  sdl         $a0, 0x27($s1)
    ctx->pc = 0x2f65d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f65d8: 0xb6240020  sdr         $a0, 0x20($s1)
    ctx->pc = 0x2f65d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f65dc: 0xb225002f  sdl         $a1, 0x2F($s1)
    ctx->pc = 0x2f65dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f65e0: 0xb6250028  sdr         $a1, 0x28($s1)
    ctx->pc = 0x2f65e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f65e4: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x2f65e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4817C0u));
    // 0x2f65e8: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2f65e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x2f65ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f65ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f65f0: 0x3c120015  lui         $s2, 0x15
    ctx->pc = 0x2f65f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)21 << 16));
    // 0x2f65f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2f65f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2f65f8:
    // 0x2f65f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f65f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f65fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f6600: 0x26444b40  addiu       $a0, $s2, 0x4B40
    ctx->pc = 0x2f6600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 19264));
    // 0x2f6604: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2f6604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f660c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2F660Cu;
    SET_GPR_U32(ctx, 31, 0x2F6614u);
    ctx->pc = 0x2F6610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F660Cu;
    // 0x2f6610: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2F660Cu, 0x2F6614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6614u;
label_2f6614:
    // 0x2f6614: 0x2a02000d  slti        $v0, $s0, 0xD
    ctx->pc = 0x2f6614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f6618: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F6618u;
    {
        const bool branch_taken_0x2f6618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6618u;
        // 0x2f661c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6618) {
            ctx->pc = 0x2F65F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f65f8;
        }
    }
    ctx->pc = 0x2F6620u;
    // 0x2f6620: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2f6620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f6624:
    // 0x2f6624: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2f6624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2f6628:
    // 0x2f6628: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2f6628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f662c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2f662cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f6630: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6630u;
        // 0x2f6634: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6638u;
}
