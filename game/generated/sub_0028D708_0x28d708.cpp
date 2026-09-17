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

// Function: sub_0028D708
// Address: 0x28d708 - 0x28da68
void sub_0028D708_0x28d708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D708_0x28d708");
#endif

    switch (ctx->pc) {
        case 0x28d730u: goto label_28d730;
        case 0x28d73cu: goto label_28d73c;
        case 0x28d7dcu: goto label_28d7dc;
        case 0x28d7ecu: goto label_28d7ec;
        case 0x28d818u: goto label_28d818;
        case 0x28d838u: goto label_28d838;
        case 0x28d880u: goto label_28d880;
        case 0x28d89cu: goto label_28d89c;
        case 0x28d8f0u: goto label_28d8f0;
        case 0x28d90cu: goto label_28d90c;
        case 0x28d948u: goto label_28d948;
        case 0x28d958u: goto label_28d958;
        case 0x28d964u: goto label_28d964;
        case 0x28d988u: goto label_28d988;
        case 0x28d9acu: goto label_28d9ac;
        case 0x28d9d0u: goto label_28d9d0;
        case 0x28d9f8u: goto label_28d9f8;
        case 0x28da04u: goto label_28da04;
        case 0x28da1cu: goto label_28da1c;
        default: break;
    }

    ctx->pc = 0x28d708u;

    // 0x28d708: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28d708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28d70c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x28d70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x28d710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28d710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d714: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x28d714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x28d718: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x28d718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x28d71c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x28d71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x28d720: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x28d720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x28d724: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x28d724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x28d728: 0xc0b21d6  jal         func_2C8758
    ctx->pc = 0x28D728u;
    SET_GPR_U32(ctx, 31, 0x28D730u);
    ctx->pc = 0x28D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D728u;
    // 0x28d72c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8758u, 0x28D728u, 0x28D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D730u;
label_28d730:
    // 0x28d730: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28d730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d734: 0xc0b21d6  jal         func_2C8758
    ctx->pc = 0x28D734u;
    SET_GPR_U32(ctx, 31, 0x28D73Cu);
    ctx->pc = 0x28D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D734u;
    // 0x28d738: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8758u, 0x28D734u, 0x28D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D73Cu;
label_28d73c:
    // 0x28d73c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x28d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x28d740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d744: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x28d744u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28d748: 0x6a830007  ldl         $v1, 0x7($s4)
    ctx->pc = 0x28d748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28d74c: 0x6e830000  ldr         $v1, 0x0($s4)
    ctx->pc = 0x28d74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28d750: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x28d750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28d754: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x28d754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28d758: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28d758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d75c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D75Cu;
    {
        const bool branch_taken_0x28d75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D75Cu;
        // 0x28d760: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d75c) {
            ctx->pc = 0x28D770u;
            goto label_28d770;
        }
    }
    ctx->pc = 0x28D764u;
    // 0x28d764: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28d764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28d768: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D768u;
    {
        const bool branch_taken_0x28d768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D768u;
        // 0x28d76c: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d768) {
            ctx->pc = 0x28D778u;
            goto label_28d778;
        }
    }
    ctx->pc = 0x28D770u;
label_28d770:
    // 0x28d770: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28d770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d774: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x28d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_28d778:
    // 0x28d778: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d77c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x28d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x28d780: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x28d780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28d784: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x28d784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28d788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28d788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d78c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D78Cu;
    {
        const bool branch_taken_0x28d78c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D78Cu;
        // 0x28d790: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d78c) {
            ctx->pc = 0x28D7A0u;
            goto label_28d7a0;
        }
    }
    ctx->pc = 0x28D794u;
    // 0x28d794: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28d798: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D798u;
    {
        const bool branch_taken_0x28d798 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D798u;
        // 0x28d79c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d798) {
            ctx->pc = 0x28D7A8u;
            goto label_28d7a8;
        }
    }
    ctx->pc = 0x28D7A0u;
label_28d7a0:
    // 0x28d7a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d7a4: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x28d7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
label_28d7a8:
    // 0x28d7a8: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x28d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x28d7ac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x28d7acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28d7b0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x28d7b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28d7b4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x28d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x28d7b8: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x28d7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28d7bc: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x28d7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28d7c0: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x28d7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28d7c4: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x28d7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28d7c8: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x28d7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28d7cc: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x28d7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28d7d0: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x28d7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28d7d4: 0xc0a39a0  jal         func_28E680
    ctx->pc = 0x28D7D4u;
    SET_GPR_U32(ctx, 31, 0x28D7DCu);
    ctx->pc = 0x28D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7D4u;
    // 0x28d7d8: 0xb7a30028  sdr         $v1, 0x28($sp) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E680u, 0x28D7D4u, 0x28D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7DCu;
label_28d7dc:
    // 0x28d7dc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D7DCu;
    {
        const bool branch_taken_0x28d7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d7dc) {
            ctx->pc = 0x28D7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D7DCu;
            // 0x28d7e0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D7F4u;
            goto label_28d7f4;
        }
    }
    ctx->pc = 0x28D7E4u;
    // 0x28d7e4: 0xc0a39aa  jal         func_28E6A8
    ctx->pc = 0x28D7E4u;
    SET_GPR_U32(ctx, 31, 0x28D7ECu);
    ctx->pc = 0x28E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E6A8u, 0x28D7E4u, 0x28D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7ECu;
label_28d7ec:
    // 0x28d7ec: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x28D7ECu;
    {
        const bool branch_taken_0x28d7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7ECu;
        // 0x28d7f0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7ec) {
            ctx->pc = 0x28D918u;
            goto label_28d918;
        }
    }
    ctx->pc = 0x28D7F4u;
label_28d7f4:
    // 0x28d7f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D7F4u;
    {
        const bool branch_taken_0x28d7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7F4u;
        // 0x28d7f8: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7f4) {
            ctx->pc = 0x28D810u;
            goto label_28d810;
        }
    }
    ctx->pc = 0x28D7FCu;
    // 0x28d7fc: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x28D7FCu;
    {
        const bool branch_taken_0x28d7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d7fc) {
            ctx->pc = 0x28D800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D7FCu;
            // 0x28d800: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D91Cu;
            goto label_28d91c;
        }
    }
    ctx->pc = 0x28D804u;
    // 0x28d804: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28D804u;
    {
        const bool branch_taken_0x28d804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d804) {
            ctx->pc = 0x28D828u;
            goto label_28d828;
        }
    }
    ctx->pc = 0x28D80Cu;
    // 0x28d80c: 0x0  nop
    ctx->pc = 0x28d80cu;
    // NOP
label_28d810:
    // 0x28d810: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x28D810u;
    SET_GPR_U32(ctx, 31, 0x28D818u);
    ctx->pc = 0x28D814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D810u;
    // 0x28d814: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x28D810u, 0x28D818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D818u;
label_28d818:
    // 0x28d818: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x28d818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x28d81c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x28D81Cu;
    {
        const bool branch_taken_0x28d81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d81c) {
            ctx->pc = 0x28D820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D81Cu;
            // 0x28d820: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D848u;
            goto label_28d848;
        }
    }
    ctx->pc = 0x28D824u;
    // 0x28d824: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x28d824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_28d828:
    // 0x28d828: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x28D828u;
    {
        const bool branch_taken_0x28d828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d828) {
            ctx->pc = 0x28D82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D828u;
            // 0x28d82c: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D8B8u;
            goto label_28d8b8;
        }
    }
    ctx->pc = 0x28D830u;
    // 0x28d830: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x28D830u;
    SET_GPR_U32(ctx, 31, 0x28D838u);
    ctx->pc = 0x28D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D830u;
    // 0x28d834: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x28D830u, 0x28D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D838u;
label_28d838:
    // 0x28d838: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x28d838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x28d83c: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x28D83Cu;
    {
        const bool branch_taken_0x28d83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d83c) {
            ctx->pc = 0x28D840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D83Cu;
            // 0x28d840: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D8B8u;
            goto label_28d8b8;
        }
    }
    ctx->pc = 0x28D844u;
    // 0x28d844: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x28d844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_28d848:
    // 0x28d848: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x28d848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x28d84c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x28d84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x28d850: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x28d850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x28d854: 0x8e320048  lw          $s2, 0x48($s1)
    ctx->pc = 0x28d854u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x28d858: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x28d858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x28d85c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28d85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28d860: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x28D860u;
    {
        const bool branch_taken_0x28d860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d860) {
            ctx->pc = 0x28D940u;
            goto label_28d940;
        }
    }
    ctx->pc = 0x28D868u;
    // 0x28d868: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28d86c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x28D86Cu;
    {
        const bool branch_taken_0x28d86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d86c) {
            ctx->pc = 0x28D940u;
            goto label_28d940;
        }
    }
    ctx->pc = 0x28D874u;
    // 0x28d874: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x28d874u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x28d878: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28D878u;
    SET_GPR_U32(ctx, 31, 0x28D880u);
    ctx->pc = 0x28D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D878u;
    // 0x28d87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28D878u, 0x28D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D880u;
label_28d880:
    // 0x28d880: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28D880u;
    {
        const bool branch_taken_0x28d880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d880) {
            ctx->pc = 0x28D884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D880u;
            // 0x28d884: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D8A0u;
            goto label_28d8a0;
        }
    }
    ctx->pc = 0x28D888u;
    // 0x28d888: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x28d888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x28d88c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28d88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d890: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28d890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d894: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28D894u;
    SET_GPR_U32(ctx, 31, 0x28D89Cu);
    ctx->pc = 0x28D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D894u;
    // 0x28d898: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28D894u, 0x28D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D89Cu;
label_28d89c:
    // 0x28d89c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x28d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_28d8a0:
    // 0x28d8a0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28d8a4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28d8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28d8a8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x28d8ac: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x28d8acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x28d8b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28D8B0u;
    {
        const bool branch_taken_0x28d8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8B0u;
        // 0x28d8b4: 0x8e320050  lw          $s2, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d8b0) {
            ctx->pc = 0x28D8E8u;
            goto label_28d8e8;
        }
    }
    ctx->pc = 0x28D8B8u;
label_28d8b8:
    // 0x28d8b8: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x28d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x28d8bc: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x28d8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x28d8c0: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x28d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x28d8c4: 0x8e32004c  lw          $s2, 0x4C($s1)
    ctx->pc = 0x28d8c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x28d8c8: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x28d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x28d8cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28d8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28d8d0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28D8D0u;
    {
        const bool branch_taken_0x28d8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d8d0) {
            ctx->pc = 0x28D940u;
            goto label_28d940;
        }
    }
    ctx->pc = 0x28D8D8u;
    // 0x28d8d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28d8dc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28D8DCu;
    {
        const bool branch_taken_0x28d8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d8dc) {
            ctx->pc = 0x28D940u;
            goto label_28d940;
        }
    }
    ctx->pc = 0x28D8E4u;
    // 0x28d8e4: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x28d8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_28d8e8:
    // 0x28d8e8: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28D8E8u;
    SET_GPR_U32(ctx, 31, 0x28D8F0u);
    ctx->pc = 0x28D8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D8E8u;
    // 0x28d8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28D8E8u, 0x28D8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8F0u;
label_28d8f0:
    // 0x28d8f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28D8F0u;
    {
        const bool branch_taken_0x28d8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d8f0) {
            ctx->pc = 0x28D8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D8F0u;
            // 0x28d8f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D910u;
            goto label_28d910;
        }
    }
    ctx->pc = 0x28D8F8u;
    // 0x28d8f8: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x28d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x28d8fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28d8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d900: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28d900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d904: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28D904u;
    SET_GPR_U32(ctx, 31, 0x28D90Cu);
    ctx->pc = 0x28D908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D904u;
    // 0x28d908: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28D904u, 0x28D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D90Cu;
label_28d90c:
    // 0x28d90c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d910:
    // 0x28d910: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28D910u;
    {
        const bool branch_taken_0x28d910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D910u;
        // 0x28d914: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d910) {
            ctx->pc = 0x28D940u;
            goto label_28d940;
        }
    }
    ctx->pc = 0x28D918u;
label_28d918:
    // 0x28d918: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x28d918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_28d91c:
    // 0x28d91c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x28d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28d920: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x28d920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28d924: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d928: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28d928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d92c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28d930: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x28d930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x28d934: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28d934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28d938: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x28d938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x28d93c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28d93cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28d940:
    // 0x28d940: 0xc0a39b4  jal         func_28E6D0
    ctx->pc = 0x28D940u;
    SET_GPR_U32(ctx, 31, 0x28D948u);
    ctx->pc = 0x28E6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E6D0u, 0x28D940u, 0x28D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D948u;
label_28d948:
    // 0x28d948: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x28D948u;
    {
        const bool branch_taken_0x28d948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d948) {
            ctx->pc = 0x28D94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D948u;
            // 0x28d94c: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DA34u;
            goto label_28da34;
        }
    }
    ctx->pc = 0x28D950u;
    // 0x28d950: 0xc0b2334  jal         func_2C8CD0
    ctx->pc = 0x28D950u;
    SET_GPR_U32(ctx, 31, 0x28D958u);
    ctx->pc = 0x28D954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D950u;
    // 0x28d954: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8CD0u, 0x28D950u, 0x28D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D958u;
label_28d958:
    // 0x28d958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28d958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d95c: 0xc0b2334  jal         func_2C8CD0
    ctx->pc = 0x28D95Cu;
    SET_GPR_U32(ctx, 31, 0x28D964u);
    ctx->pc = 0x28D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D95Cu;
    // 0x28d960: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8CD0u, 0x28D95Cu, 0x28D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D964u;
label_28d964:
    // 0x28d964: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x28d964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x28d968: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28d968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28d96c: 0x8c508884  lw          $s0, -0x777C($v0)
    ctx->pc = 0x28d96cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3A8884u));
    // 0x28d970: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28d970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d974: 0x6a660007  ldl         $a2, 0x7($s3)
    ctx->pc = 0x28d974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x28d978: 0x6e660000  ldr         $a2, 0x0($s3)
    ctx->pc = 0x28d978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x28d97c: 0xb2860007  sdl         $a2, 0x7($s4)
    ctx->pc = 0x28d97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28d980: 0xc0a39e6  jal         func_28E798
    ctx->pc = 0x28D980u;
    SET_GPR_U32(ctx, 31, 0x28D988u);
    ctx->pc = 0x28D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D980u;
    // 0x28d984: 0xb6860000  sdr         $a2, 0x0($s4) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E798u, 0x28D980u, 0x28D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D988u;
label_28d988:
    // 0x28d988: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D988u;
    {
        const bool branch_taken_0x28d988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d988) {
            ctx->pc = 0x28D9A4u;
            goto label_28d9a4;
        }
    }
    ctx->pc = 0x28D990u;
    // 0x28d990: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D990u;
    {
        const bool branch_taken_0x28d990 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D990u;
        // 0x28d994: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d990) {
            ctx->pc = 0x28D9A4u;
            goto label_28d9a4;
        }
    }
    ctx->pc = 0x28D998u;
    // 0x28d998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d99c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28D99Cu;
    {
        const bool branch_taken_0x28d99c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28d99c) {
            ctx->pc = 0x28D9C8u;
            goto label_28d9c8;
        }
    }
    ctx->pc = 0x28D9A4u;
label_28d9a4:
    // 0x28d9a4: 0xc0a39e6  jal         func_28E798
    ctx->pc = 0x28D9A4u;
    SET_GPR_U32(ctx, 31, 0x28D9ACu);
    ctx->pc = 0x28D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D9A4u;
    // 0x28d9a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E798u, 0x28D9A4u, 0x28D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D9ACu;
label_28d9ac:
    // 0x28d9ac: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x28D9ACu;
    {
        const bool branch_taken_0x28d9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9ACu;
        // 0x28d9b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9ac) {
            ctx->pc = 0x28DA30u;
            goto label_28da30;
        }
    }
    ctx->pc = 0x28D9B4u;
    // 0x28d9b4: 0x5602001f  bnel        $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28D9B4u;
    {
        const bool branch_taken_0x28d9b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x28d9b4) {
            ctx->pc = 0x28D9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D9B4u;
            // 0x28d9b8: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DA34u;
            goto label_28da34;
        }
    }
    ctx->pc = 0x28D9BCu;
    // 0x28d9bc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x28d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x28d9c0: 0x5450001c  bnel        $v0, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28D9C0u;
    {
        const bool branch_taken_0x28d9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x28d9c0) {
            ctx->pc = 0x28D9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D9C0u;
            // 0x28d9c4: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DA34u;
            goto label_28da34;
        }
    }
    ctx->pc = 0x28D9C8u;
label_28d9c8:
    // 0x28d9c8: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x28D9C8u;
    SET_GPR_U32(ctx, 31, 0x28D9D0u);
    ctx->pc = 0x28D9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D9C8u;
    // 0x28d9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x28D9C8u, 0x28D9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D9D0u;
label_28d9d0:
    // 0x28d9d0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x28d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x28d9d4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28d9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x28d9d8: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x28d9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28d9dc: 0x34c6ff00  ori         $a2, $a2, 0xFF00
    ctx->pc = 0x28d9dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    // 0x28d9e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28d9e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9e4: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x28d9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x28d9e8: 0x2484a0c8  addiu       $a0, $a0, -0x5F38
    ctx->pc = 0x28d9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942920));
    // 0x28d9ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d9f0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x28D9F0u;
    SET_GPR_U32(ctx, 31, 0x28D9F8u);
    ctx->pc = 0x28D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D9F0u;
    // 0x28d9f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x28D9F0u, 0x28D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D9F8u;
label_28d9f8:
    // 0x28d9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9fc: 0xc0a6426  jal         func_299098
    ctx->pc = 0x28D9FCu;
    SET_GPR_U32(ctx, 31, 0x28DA04u);
    ctx->pc = 0x28DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D9FCu;
    // 0x28da00: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299098u, 0x28D9FCu, 0x28DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA04u;
label_28da04:
    // 0x28da04: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x28da04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x28da08: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28da08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da0c: 0x24843d90  addiu       $a0, $a0, 0x3D90
    ctx->pc = 0x28da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15760));
    // 0x28da10: 0x24050145  addiu       $a1, $zero, 0x145
    ctx->pc = 0x28da10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x28da14: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x28DA14u;
    SET_GPR_U32(ctx, 31, 0x28DA1Cu);
    ctx->pc = 0x28DA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA14u;
    // 0x28da18: 0x24060106  addiu       $a2, $zero, 0x106 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x28DA14u, 0x28DA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA1Cu;
label_28da1c:
    // 0x28da1c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x28da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x28da20: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28da24: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28da24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28da28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28DA28u;
    {
        const bool branch_taken_0x28da28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA28u;
        // 0x28da2c: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da28) {
            ctx->pc = 0x28DA44u;
            goto label_28da44;
        }
    }
    ctx->pc = 0x28DA30u;
label_28da30:
    // 0x28da30: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x28da30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_28da34:
    // 0x28da34: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x28da34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28da38: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28da3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28da3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28da40: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28da40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28da44:
    // 0x28da44: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x28da44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28da48: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x28da48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28da4c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x28da4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28da50: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x28da50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x28da54: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x28da54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28da58: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x28da58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x28da5c: 0x3e00008  jr          $ra
    ctx->pc = 0x28DA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA5Cu;
        // 0x28da60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DA64u;
    // 0x28da64: 0x0  nop
    ctx->pc = 0x28da64u;
    // NOP
    ctx->pc = 0x28da68u;
}
