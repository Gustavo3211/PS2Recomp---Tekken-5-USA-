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

// Function: sub_00282A00
// Address: 0x282a00 - 0x282b38
void sub_00282A00_0x282a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282A00_0x282a00");
#endif

    switch (ctx->pc) {
        case 0x282a28u: goto label_282a28;
        case 0x282a60u: goto label_282a60;
        case 0x282ac4u: goto label_282ac4;
        default: break;
    }

    ctx->pc = 0x282a00u;

    // 0x282a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x282a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x282a04: 0x8f85ca8c  lw          $a1, -0x3574($gp)
    ctx->pc = 0x282a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953612)));
    // 0x282a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x282a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282a0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x282a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x282a10: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x282a10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x282a14: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x282a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x282a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282a1c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x282a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x282a20: 0xc0a108e  jal         func_284238
    ctx->pc = 0x282A20u;
    SET_GPR_U32(ctx, 31, 0x282A28u);
    ctx->pc = 0x282A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282A20u;
    // 0x282a24: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284238u, 0x282A20u, 0x282A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A28u;
label_282a28:
    // 0x282a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x282a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x282a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282a30: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282A30u;
    {
        const bool branch_taken_0x282a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x282A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A30u;
        // 0x282a34: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a30) {
            ctx->pc = 0x282A40u;
            goto label_282a40;
        }
    }
    ctx->pc = 0x282A38u;
    // 0x282a38: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282A38u;
    {
        const bool branch_taken_0x282a38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x282a38) {
            ctx->pc = 0x282A48u;
            goto label_282a48;
        }
    }
    ctx->pc = 0x282A40u;
label_282a40:
    // 0x282a40: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x282A40u;
    {
        const bool branch_taken_0x282a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A40u;
        // 0x282a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a40) {
            ctx->pc = 0x282B24u;
            goto label_282b24;
        }
    }
    ctx->pc = 0x282A48u;
label_282a48:
    // 0x282a48: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x282A48u;
    {
        const bool branch_taken_0x282a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A48u;
        // 0x282a4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a48) {
            ctx->pc = 0x282B24u;
            goto label_282b24;
        }
    }
    ctx->pc = 0x282A50u;
    // 0x282a50: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x282a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x282a54: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x282A54u;
    {
        const bool branch_taken_0x282a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A54u;
        // 0x282a58: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a54) {
            ctx->pc = 0x282AC0u;
            goto label_282ac0;
        }
    }
    ctx->pc = 0x282A5Cu;
    // 0x282a5c: 0x24a20160  addiu       $v0, $a1, 0x160
    ctx->pc = 0x282a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
label_282a60:
    // 0x282a60: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x282a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x282a64: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x282a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x282a68: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x282a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x282a6c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x282a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x282a70: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x282a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x282a74: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x282a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x282a78: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x282a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x282a7c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x282a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x282a80: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x282a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282a84: 0xb4a40000  sdr         $a0, 0x0($a1)
    ctx->pc = 0x282a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282a88: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x282a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282a8c: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x282a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282a90: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x282a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282a94: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x282a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282a98: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x282a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282a9c: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x282a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282aa0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x282aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x282aa4: 0x0  nop
    ctx->pc = 0x282aa4u;
    // NOP
    // 0x282aa8: 0x0  nop
    ctx->pc = 0x282aa8u;
    // NOP
    // 0x282aac: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x282AACu;
    {
        const bool branch_taken_0x282aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x282AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282AACu;
        // 0x282ab0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282aac) {
            ctx->pc = 0x282A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282a60;
        }
    }
    ctx->pc = 0x282AB4u;
    // 0x282ab4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x282AB4u;
    {
        const bool branch_taken_0x282ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282ab4) {
            ctx->pc = 0x282AF8u;
            goto label_282af8;
        }
    }
    ctx->pc = 0x282ABCu;
    // 0x282abc: 0x0  nop
    ctx->pc = 0x282abcu;
    // NOP
label_282ac0:
    // 0x282ac0: 0x24a20160  addiu       $v0, $a1, 0x160
    ctx->pc = 0x282ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
label_282ac4:
    // 0x282ac4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x282ac4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282ac8: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x282ac8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x282acc: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x282accu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x282ad0: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x282ad0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x282ad4: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x282ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x282ad8: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x282ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x282adc: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x282adcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x282ae0: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x282ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x282ae4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x282ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x282ae8: 0x0  nop
    ctx->pc = 0x282ae8u;
    // NOP
    // 0x282aec: 0x0  nop
    ctx->pc = 0x282aecu;
    // NOP
    // 0x282af0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x282AF0u;
    {
        const bool branch_taken_0x282af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x282AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282AF0u;
        // 0x282af4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282af0) {
            ctx->pc = 0x282AC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282ac4;
        }
    }
    ctx->pc = 0x282AF8u;
label_282af8:
    // 0x282af8: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x282af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x282afc: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x282afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x282b00: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x282b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x282b04: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x282b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x282b08: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x282b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x282b0c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x282b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282b10: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x282b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282b14: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x282b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282b18: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x282b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282b1c: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x282b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x282b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_282b24:
    // 0x282b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x282b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282b28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x282b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x282b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x282B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B2Cu;
        // 0x282b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282B34u;
    // 0x282b34: 0x0  nop
    ctx->pc = 0x282b34u;
    // NOP
    ctx->pc = 0x282b38u;
}
