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

// Function: sub_00243D68
// Address: 0x243d68 - 0x243e58
void sub_00243D68_0x243d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243D68_0x243d68");
#endif

    switch (ctx->pc) {
        case 0x243d84u: goto label_243d84;
        case 0x243d98u: goto label_243d98;
        case 0x243da8u: goto label_243da8;
        default: break;
    }

    ctx->pc = 0x243d68u;

    // 0x243d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x243d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243d70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x243d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d74: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x243D74u;
    {
        const bool branch_taken_0x243d74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x243D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D74u;
        // 0x243d78: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d74) {
            ctx->pc = 0x243D90u;
            goto label_243d90;
        }
    }
    ctx->pc = 0x243D7Cu;
    // 0x243d7c: 0xc090d76  jal         func_2435D8
    ctx->pc = 0x243D7Cu;
    SET_GPR_U32(ctx, 31, 0x243D84u);
    ctx->pc = 0x243D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D7Cu;
    // 0x243d80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2435D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2435D8u, 0x243D7Cu, 0x243D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D84u;
label_243d84:
    // 0x243d84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x243D84u;
    {
        const bool branch_taken_0x243d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D84u;
        // 0x243d88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d84) {
            ctx->pc = 0x243D9Cu;
            goto label_243d9c;
        }
    }
    ctx->pc = 0x243D8Cu;
    // 0x243d8c: 0x0  nop
    ctx->pc = 0x243d8cu;
    // NOP
label_243d90:
    // 0x243d90: 0xc090d76  jal         func_2435D8
    ctx->pc = 0x243D90u;
    SET_GPR_U32(ctx, 31, 0x243D98u);
    ctx->pc = 0x243D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D90u;
    // 0x243d94: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2435D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2435D8u, 0x243D90u, 0x243D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D98u;
label_243d98:
    // 0x243d98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x243d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243d9c:
    // 0x243d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243da0: 0x24a70090  addiu       $a3, $a1, 0x90
    ctx->pc = 0x243da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x243da4: 0x0  nop
    ctx->pc = 0x243da4u;
    // NOP
label_243da8:
    // 0x243da8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x243da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x243dac: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x243dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x243db0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x243db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x243db4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x243db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x243db8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x243dbc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x243dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x243dc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x243dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x243dc4: 0x28c40003  slti        $a0, $a2, 0x3
    ctx->pc = 0x243dc4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x243dc8: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x243dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x243dcc: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x243dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x243dd0: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x243dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x243dd4: 0xb0a80007  sdl         $t0, 0x7($a1)
    ctx->pc = 0x243dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243dd8: 0xb4a80000  sdr         $t0, 0x0($a1)
    ctx->pc = 0x243dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243ddc: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x243ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x243de0: 0x6862002b  ldl         $v0, 0x2B($v1)
    ctx->pc = 0x243de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x243de4: 0x6c620024  ldr         $v0, 0x24($v1)
    ctx->pc = 0x243de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x243de8: 0x68680033  ldl         $t0, 0x33($v1)
    ctx->pc = 0x243de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x243dec: 0x6c68002c  ldr         $t0, 0x2C($v1)
    ctx->pc = 0x243decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x243df0: 0xb0a20017  sdl         $v0, 0x17($a1)
    ctx->pc = 0x243df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243df4: 0xb4a20010  sdr         $v0, 0x10($a1)
    ctx->pc = 0x243df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243df8: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x243df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243dfc: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x243dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243e00: 0x686b005b  ldl         $t3, 0x5B($v1)
    ctx->pc = 0x243e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x243e04: 0x6c6b0054  ldr         $t3, 0x54($v1)
    ctx->pc = 0x243e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x243e08: 0x68620063  ldl         $v0, 0x63($v1)
    ctx->pc = 0x243e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x243e0c: 0x6c62005c  ldr         $v0, 0x5C($v1)
    ctx->pc = 0x243e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x243e10: 0xb0ab0027  sdl         $t3, 0x27($a1)
    ctx->pc = 0x243e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243e14: 0xb4ab0020  sdr         $t3, 0x20($a1)
    ctx->pc = 0x243e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243e18: 0xb0a2002f  sdl         $v0, 0x2F($a1)
    ctx->pc = 0x243e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243e1c: 0xb4a20028  sdr         $v0, 0x28($a1)
    ctx->pc = 0x243e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243e20: 0x1480ffe1  bnez        $a0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x243E20u;
    {
        const bool branch_taken_0x243e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x243E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E20u;
        // 0x243e24: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e20) {
            ctx->pc = 0x243DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243da8;
        }
    }
    ctx->pc = 0x243E28u;
    // 0x243e28: 0x6a0a008b  ldl         $t2, 0x8B($s0)
    ctx->pc = 0x243e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 139); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x243e2c: 0x6e0a0084  ldr         $t2, 0x84($s0)
    ctx->pc = 0x243e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 132); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x243e30: 0x6a0b0093  ldl         $t3, 0x93($s0)
    ctx->pc = 0x243e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 147); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x243e34: 0x6e0b008c  ldr         $t3, 0x8C($s0)
    ctx->pc = 0x243e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 140); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x243e38: 0xb0ea0007  sdl         $t2, 0x7($a3)
    ctx->pc = 0x243e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243e3c: 0xb4ea0000  sdr         $t2, 0x0($a3)
    ctx->pc = 0x243e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243e40: 0xb0eb000f  sdl         $t3, 0xF($a3)
    ctx->pc = 0x243e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243e44: 0xb4eb0008  sdr         $t3, 0x8($a3)
    ctx->pc = 0x243e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243e48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x243e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243e50: 0x3e00008  jr          $ra
    ctx->pc = 0x243E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E50u;
        // 0x243e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243E58u;
}
