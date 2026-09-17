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

// Function: sub_002C8EA0
// Address: 0x2c8ea0 - 0x2c8fc8
void sub_002C8EA0_0x2c8ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8EA0_0x2c8ea0");
#endif

    switch (ctx->pc) {
        case 0x2c8eb8u: goto label_2c8eb8;
        case 0x2c8ee8u: goto label_2c8ee8;
        case 0x2c8f4cu: goto label_2c8f4c;
        default: break;
    }

    ctx->pc = 0x2c8ea0u;

    // 0x2c8ea0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c8ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c8ea4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2c8ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2c8ea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8eac: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2c8eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2c8eb0: 0xc0b2062  jal         func_2C8188
    ctx->pc = 0x2C8EB0u;
    SET_GPR_U32(ctx, 31, 0x2C8EB8u);
    ctx->pc = 0x2C8EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8EB0u;
    // 0x2c8eb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8188u, 0x2C8EB0u, 0x2C8EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8EB8u;
label_2c8eb8:
    // 0x2c8eb8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2c8eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2c8ebc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c8ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c8ec0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c8ec4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2c8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c8ec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c8ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8ecc: 0x3c010018  lui         $at, 0x18
    ctx->pc = 0x2c8eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)24 << 16));
    // 0x2c8ed0: 0x24218d10  addiu       $at, $at, -0x72F0
    ctx->pc = 0x2c8ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294937872));
    // 0x2c8ed4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2c8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2c8ed8: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2c8ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c8edc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C8EDCu;
    {
        const bool branch_taken_0x2c8edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EDCu;
        // 0x2c8ee0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8edc) {
            ctx->pc = 0x2C8F48u;
            goto label_2c8f48;
        }
    }
    ctx->pc = 0x2C8EE4u;
    // 0x2c8ee4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2c8ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c8ee8:
    // 0x2c8ee8: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x2c8ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c8eec: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x2c8eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c8ef0: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x2c8ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c8ef4: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x2c8ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c8ef8: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x2c8ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c8efc: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x2c8efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c8f00: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x2c8f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c8f04: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x2c8f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c8f08: 0xb0450007  sdl         $a1, 0x7($v0)
    ctx->pc = 0x2c8f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8f0c: 0xb4450000  sdr         $a1, 0x0($v0)
    ctx->pc = 0x2c8f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8f10: 0xb046000f  sdl         $a2, 0xF($v0)
    ctx->pc = 0x2c8f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8f14: 0xb4460008  sdr         $a2, 0x8($v0)
    ctx->pc = 0x2c8f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8f18: 0xb0470017  sdl         $a3, 0x17($v0)
    ctx->pc = 0x2c8f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8f1c: 0xb4470010  sdr         $a3, 0x10($v0)
    ctx->pc = 0x2c8f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8f20: 0xb048001f  sdl         $t0, 0x1F($v0)
    ctx->pc = 0x2c8f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8f24: 0xb4480018  sdr         $t0, 0x18($v0)
    ctx->pc = 0x2c8f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8f28: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2c8f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2c8f2c: 0x0  nop
    ctx->pc = 0x2c8f2cu;
    // NOP
    // 0x2c8f30: 0x0  nop
    ctx->pc = 0x2c8f30u;
    // NOP
    // 0x2c8f34: 0x1483ffec  bne         $a0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C8F34u;
    {
        const bool branch_taken_0x2c8f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F34u;
        // 0x2c8f38: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f34) {
            ctx->pc = 0x2C8EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8ee8;
        }
    }
    ctx->pc = 0x2C8F3Cu;
    // 0x2c8f3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C8F3Cu;
    {
        const bool branch_taken_0x2c8f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f3c) {
            ctx->pc = 0x2C8F80u;
            goto label_2c8f80;
        }
    }
    ctx->pc = 0x2C8F44u;
    // 0x2c8f44: 0x0  nop
    ctx->pc = 0x2c8f44u;
    // NOP
label_2c8f48:
    // 0x2c8f48: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2c8f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c8f4c:
    // 0x2c8f4c: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x2c8f4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8f50: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x2c8f50u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c8f54: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x2c8f54u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c8f58: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x2c8f58u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c8f5c: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x2c8f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x2c8f60: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x2c8f60u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x2c8f64: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x2c8f64u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x2c8f68: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x2c8f68u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x2c8f6c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2c8f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2c8f70: 0x0  nop
    ctx->pc = 0x2c8f70u;
    // NOP
    // 0x2c8f74: 0x0  nop
    ctx->pc = 0x2c8f74u;
    // NOP
    // 0x2c8f78: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C8F78u;
    {
        const bool branch_taken_0x2c8f78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F78u;
        // 0x2c8f7c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f78) {
            ctx->pc = 0x2C8F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8f4c;
        }
    }
    ctx->pc = 0x2C8F80u;
label_2c8f80:
    // 0x2c8f80: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x2c8f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c8f84: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x2c8f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c8f88: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x2c8f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c8f8c: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x2c8f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c8f90: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x2c8f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c8f94: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x2c8f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c8f98: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x2c8f98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c8f9c: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2c8f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8fa0: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x2c8fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8fa4: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x2c8fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8fa8: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x2c8fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8fac: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x2c8facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8fb0: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x2c8fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8fb4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2c8fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c8fb8: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x2c8fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x2c8fbc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2c8fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c8fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FC0u;
        // 0x2c8fc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8FC8u;
}
