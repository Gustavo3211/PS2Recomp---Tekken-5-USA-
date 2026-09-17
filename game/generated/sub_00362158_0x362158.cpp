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

// Function: sub_00362158
// Address: 0x362158 - 0x362240
void sub_00362158_0x362158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362158_0x362158");
#endif

    switch (ctx->pc) {
        case 0x362188u: goto label_362188;
        case 0x3621ccu: goto label_3621cc;
        case 0x36221cu: goto label_36221c;
        default: break;
    }

    ctx->pc = 0x362158u;

    // 0x362158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x362158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36215c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x36215cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362160: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x362160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x362164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x362164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362168: 0x2e020030  sltiu       $v0, $s0, 0x30
    ctx->pc = 0x362168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x36216c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x36216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x362170: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x362170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362174: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x362174u;
    {
        const bool branch_taken_0x362174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362174u;
        // 0x362178: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362174) {
            ctx->pc = 0x362190u;
            goto label_362190;
        }
    }
    ctx->pc = 0x36217Cu;
    // 0x36217c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36217cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362180: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362180u;
    SET_GPR_U32(ctx, 31, 0x362188u);
    ctx->pc = 0x362184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362180u;
    // 0x362184: 0x24847238  addiu       $a0, $a0, 0x7238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362180u, 0x362188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362188u;
label_362188:
    // 0x362188: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x362188u;
    {
        const bool branch_taken_0x362188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362188u;
        // 0x36218c: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362188) {
            ctx->pc = 0x36222Cu;
            goto label_36222c;
        }
    }
    ctx->pc = 0x362190u;
label_362190:
    // 0x362190: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x362190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x362194: 0xa3b00008  sb          $s0, 0x8($sp)
    ctx->pc = 0x362194u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x362198: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x362198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x36219c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x36219cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3621a0: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x3621a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3621a4: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x3621a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3621a8: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x3621a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3621ac: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x3621acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3621b0: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x3621b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3621b4: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x3621b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3621b8: 0xb3a5001b  sdl         $a1, 0x1B($sp)
    ctx->pc = 0x3621b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3621bc: 0xb7a50014  sdr         $a1, 0x14($sp)
    ctx->pc = 0x3621bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3621c0: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x3621c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x3621c4: 0xc0d6f0c  jal         func_35BC30
    ctx->pc = 0x3621C4u;
    SET_GPR_U32(ctx, 31, 0x3621CCu);
    ctx->pc = 0x35BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BC30u, 0x3621C4u, 0x3621CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621CCu;
label_3621cc:
    // 0x3621cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3621ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3621d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3621d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3621d4: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3621D4u;
    {
        const bool branch_taken_0x3621d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3621D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3621D4u;
        // 0x3621d8: 0x2a050018  slti        $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3621d4) {
            ctx->pc = 0x36222Cu;
            goto label_36222c;
        }
    }
    ctx->pc = 0x3621DCu;
    // 0x3621dc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3621dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3621e0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3621E0u;
    {
        const bool branch_taken_0x3621e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3621E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3621E0u;
        // 0x3621e4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3621e0) {
            ctx->pc = 0x362200u;
            goto label_362200;
        }
    }
    ctx->pc = 0x3621E8u;
    // 0x3621e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3621e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3621ec: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3621ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x3621f0: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x3621f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x3621f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3621F4u;
    {
        const bool branch_taken_0x3621f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3621F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3621F4u;
        // 0x3621f8: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3621f4) {
            ctx->pc = 0x362214u;
            goto label_362214;
        }
    }
    ctx->pc = 0x3621FCu;
    // 0x3621fc: 0x0  nop
    ctx->pc = 0x3621fcu;
    // NOP
label_362200:
    // 0x362200: 0x2603ffe8  addiu       $v1, $s0, -0x18
    ctx->pc = 0x362200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x362204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362208: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x362208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x36220c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x36220cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x362210: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x362210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_362214:
    // 0x362214: 0xc0d6ee8  jal         func_35BBA0
    ctx->pc = 0x362214u;
    SET_GPR_U32(ctx, 31, 0x36221Cu);
    ctx->pc = 0x35BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BBA0u, 0x362214u, 0x36221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36221Cu;
label_36221c:
    // 0x36221c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x36221cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x362220: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x362220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x362224: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x362224u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x362228: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x362228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_36222c:
    // 0x36222c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x36222cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362230: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x362230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362234: 0x3e00008  jr          $ra
    ctx->pc = 0x362234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362234u;
        // 0x362238: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36223Cu;
    // 0x36223c: 0x0  nop
    ctx->pc = 0x36223cu;
    // NOP
    ctx->pc = 0x362240u;
}
