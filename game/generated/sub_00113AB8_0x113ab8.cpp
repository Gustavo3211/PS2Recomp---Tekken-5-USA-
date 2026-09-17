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

// Function: sub_00113AB8
// Address: 0x113ab8 - 0x113e70
void sub_00113AB8_0x113ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113AB8_0x113ab8");
#endif

    switch (ctx->pc) {
        case 0x113b54u: goto label_113b54;
        case 0x113ba8u: goto label_113ba8;
        case 0x113bf8u: goto label_113bf8;
        case 0x113c60u: goto label_113c60;
        case 0x113cbcu: goto label_113cbc;
        case 0x113de8u: goto label_113de8;
        case 0x113e24u: goto label_113e24;
        case 0x113e5cu: goto label_113e5c;
        default: break;
    }

    ctx->pc = 0x113ab8u;

    // 0x113ab8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x113ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x113abc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x113abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x113ac0: 0x8c431198  lw          $v1, 0x1198($v0)
    ctx->pc = 0x113ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x131198u));
    // 0x113ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ac8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x113ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x113acc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x113ACCu;
    {
        const bool branch_taken_0x113acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113ACCu;
        // 0x113ad0: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113acc) {
            ctx->pc = 0x113AD8u;
            goto label_113ad8;
        }
    }
    ctx->pc = 0x113AD4u;
    // 0x113ad4: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x113ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_113ad8:
    // 0x113ad8: 0x24030440  addiu       $v1, $zero, 0x440
    ctx->pc = 0x113ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x113adc: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x113adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x113ae0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x113ae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x113ae4: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x113ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x113ae8: 0xac451190  sw          $a1, 0x1190($v0)
    ctx->pc = 0x113ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4496), GPR_U32(ctx, 5));
    // 0x113aec: 0x2484afc0  addiu       $a0, $a0, -0x5040
    ctx->pc = 0x113aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946752));
    // 0x113af0: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x113af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x113af4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x113af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x113af8: 0x658025  or          $s0, $v1, $a1
    ctx->pc = 0x113af8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x113afc: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x113afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x113b00: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x113b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x113b04: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x113b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b08: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x113b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b0c: 0x8a060007  lwl         $a2, 0x7($s0)
    ctx->pc = 0x113b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x113b10: 0x9a060004  lwr         $a2, 0x4($s0)
    ctx->pc = 0x113b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x113b14: 0xaba60007  swl         $a2, 0x7($sp)
    ctx->pc = 0x113b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b18: 0xbba60004  swr         $a2, 0x4($sp)
    ctx->pc = 0x113b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b1c: 0x8a03000b  lwl         $v1, 0xB($s0)
    ctx->pc = 0x113b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x113b20: 0x9a030008  lwr         $v1, 0x8($s0)
    ctx->pc = 0x113b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x113b24: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x113b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b28: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x113b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b2c: 0x8a07000f  lwl         $a3, 0xF($s0)
    ctx->pc = 0x113b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x113b30: 0x9a07000c  lwr         $a3, 0xC($s0)
    ctx->pc = 0x113b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x113b34: 0xaba7000f  swl         $a3, 0xF($sp)
    ctx->pc = 0x113b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b38: 0xbba7000c  swr         $a3, 0xC($sp)
    ctx->pc = 0x113b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x113b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113b40: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113B40u;
    {
        const bool branch_taken_0x113b40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x113B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B40u;
        // 0x113b44: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b40) {
            ctx->pc = 0x113B54u;
            goto label_113b54;
        }
    }
    ctx->pc = 0x113B48u;
    // 0x113b48: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x113b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x113b4c: 0xc04a125  jal         func_128494
    ctx->pc = 0x113B4Cu;
    SET_GPR_U32(ctx, 31, 0x113B54u);
    ctx->pc = 0x113B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B4Cu;
    // 0x113b50: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x113B4Cu, 0x113B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B54u;
label_113b54:
    // 0x113b54: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x113b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x113b58: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x113b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x113b5c: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x113b5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x113b60: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x113B60u;
    {
        const bool branch_taken_0x113b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B60u;
        // 0x113b64: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b60) {
            ctx->pc = 0x113DE8u;
            goto label_113de8;
        }
    }
    ctx->pc = 0x113B68u;
    // 0x113b68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x113b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x113b6c: 0x2442e1d0  addiu       $v0, $v0, -0x1E30
    ctx->pc = 0x113b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959568));
    // 0x113b70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x113b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x113b74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113b78: 0x800008  jr          $a0
    ctx->pc = 0x113B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x113B80u: goto label_113b80;
            case 0x113C28u: goto label_113c28;
            case 0x113D04u: goto label_113d04;
            case 0x113DA0u: goto label_113da0;
            case 0x113DE8u: goto label_113de8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113B78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x113B80u;
label_113b80:
    // 0x113b80: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x113b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x113b84: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x113B84u;
    {
        const bool branch_taken_0x113b84 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x113B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B84u;
        // 0x113b88: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b84) {
            ctx->pc = 0x113BD0u;
            goto label_113bd0;
        }
    }
    ctx->pc = 0x113B8Cu;
    // 0x113b8c: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x113b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x113b90: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x113b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x113b94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b98: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x113B98u;
    {
        const bool branch_taken_0x113b98 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x113B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B98u;
        // 0x113b9c: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b98) {
            ctx->pc = 0x113BD0u;
            goto label_113bd0;
        }
    }
    ctx->pc = 0x113BA0u;
    // 0x113ba0: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x113ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x113ba4: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x113ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_113ba8:
    // 0x113ba8: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x113ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x113bac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x113bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113bb0: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x113bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x113bb4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x113bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113bb8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x113bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x113bbc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x113bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x113bc0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x113bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x113bc4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x113bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x113bc8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x113BC8u;
    {
        const bool branch_taken_0x113bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BC8u;
        // 0x113bcc: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bc8) {
            ctx->pc = 0x113BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113ba8;
        }
    }
    ctx->pc = 0x113BD0u;
label_113bd0:
    // 0x113bd0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x113bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x113bd4: 0x18600084  blez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x113BD4u;
    {
        const bool branch_taken_0x113bd4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x113BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BD4u;
        // 0x113bd8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bd4) {
            ctx->pc = 0x113DE8u;
            goto label_113de8;
        }
    }
    ctx->pc = 0x113BDCu;
    // 0x113bdc: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x113bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x113be0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113be4: 0x18600080  blez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x113BE4u;
    {
        const bool branch_taken_0x113be4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x113BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BE4u;
        // 0x113be8: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113be4) {
            ctx->pc = 0x113DE8u;
            goto label_113de8;
        }
    }
    ctx->pc = 0x113BECu;
    // 0x113bec: 0x24e90050  addiu       $t1, $a3, 0x50
    ctx->pc = 0x113becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x113bf0: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x113bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x113bf4: 0x0  nop
    ctx->pc = 0x113bf4u;
    // NOP
label_113bf8:
    // 0x113bf8: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x113bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x113bfc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x113bfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113c00: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x113c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x113c04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x113c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113c08: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x113c08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x113c0c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x113c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x113c10: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x113c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x113c14: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x113c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x113c18: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x113C18u;
    {
        const bool branch_taken_0x113c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C18u;
        // 0x113c1c: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c18) {
            ctx->pc = 0x113BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113bf8;
        }
    }
    ctx->pc = 0x113C20u;
    // 0x113c20: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x113C20u;
    {
        const bool branch_taken_0x113c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C20u;
        // 0x113c24: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c20) {
            ctx->pc = 0x113DECu;
            goto label_113dec;
        }
    }
    ctx->pc = 0x113C28u;
label_113c28:
    // 0x113c28: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x113c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113c2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x113c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113c30: 0x1860006e  blez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x113C30u;
    {
        const bool branch_taken_0x113c30 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x113C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C30u;
        // 0x113c34: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c30) {
            ctx->pc = 0x113DECu;
            goto label_113dec;
        }
    }
    ctx->pc = 0x113C38u;
    // 0x113c38: 0x8a040017  lwl         $a0, 0x17($s0)
    ctx->pc = 0x113c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x113c3c: 0x9a040014  lwr         $a0, 0x14($s0)
    ctx->pc = 0x113c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x113c40: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x113c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113c44: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x113c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113c48: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x113c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x113c4c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x113c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113c50: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x113c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x113c54: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x113c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x113c58: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x113C58u;
    {
        const bool branch_taken_0x113c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C58u;
        // 0x113c5c: 0x26020158  addiu       $v0, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c58) {
            ctx->pc = 0x113CBCu;
            goto label_113cbc;
        }
    }
    ctx->pc = 0x113C60u;
label_113c60:
    // 0x113c60: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x113c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x113c64: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x113c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x113c68: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x113c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x113c6c: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x113c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x113c70: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x113c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x113c74: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x113c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x113c78: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x113c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x113c7c: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x113c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x113c80: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x113c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113c84: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x113c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113c88: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x113c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113c8c: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x113c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113c90: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x113c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113c94: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x113c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113c98: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x113c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113c9c: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x113c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113ca0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x113ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x113ca4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x113ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x113ca8: 0x0  nop
    ctx->pc = 0x113ca8u;
    // NOP
    // 0x113cac: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x113CACu;
    {
        const bool branch_taken_0x113cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x113cac) {
            ctx->pc = 0x113C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113c60;
        }
    }
    ctx->pc = 0x113CB4u;
    // 0x113cb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x113CB4u;
    {
        const bool branch_taken_0x113cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113cb4) {
            ctx->pc = 0x113CF0u;
            goto label_113cf0;
        }
    }
    ctx->pc = 0x113CBCu;
label_113cbc:
    // 0x113cbc: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x113cbcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113cc0: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x113cc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x113cc4: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x113cc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x113cc8: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x113cc8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x113ccc: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x113cccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x113cd0: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x113cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x113cd4: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x113cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x113cd8: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x113cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x113cdc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x113cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x113ce0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x113ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x113ce4: 0x0  nop
    ctx->pc = 0x113ce4u;
    // NOP
    // 0x113ce8: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x113CE8u;
    {
        const bool branch_taken_0x113ce8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x113ce8) {
            ctx->pc = 0x113CBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113cbc;
        }
    }
    ctx->pc = 0x113CF0u;
label_113cf0:
    // 0x113cf0: 0x88880003  lwl         $t0, 0x3($a0)
    ctx->pc = 0x113cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x113cf4: 0x98880000  lwr         $t0, 0x0($a0)
    ctx->pc = 0x113cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x113cf8: 0xa8c80003  swl         $t0, 0x3($a2)
    ctx->pc = 0x113cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113cfc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x113CFCu;
    {
        const bool branch_taken_0x113cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CFCu;
        // 0x113d00: 0xb8c80000  swr         $t0, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113cfc) {
            ctx->pc = 0x113DE8u;
            goto label_113de8;
        }
    }
    ctx->pc = 0x113D04u;
label_113d04:
    // 0x113d04: 0x8a060017  lwl         $a2, 0x17($s0)
    ctx->pc = 0x113d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x113d08: 0x9a060014  lwr         $a2, 0x14($s0)
    ctx->pc = 0x113d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x113d0c: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x113d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113d10: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x113d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113d14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113d18: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x113d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x113d1c: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x113d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x113d20: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x113d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x113d24: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x113d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x113d28: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x113d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x113d2c: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x113d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x113d30: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x113d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x113d34: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x113d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x113d38: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x113d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d3c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x113d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d40: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x113d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d44: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x113d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d48: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x113d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d4c: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x113d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d50: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x113d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d54: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x113d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d58: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x113d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x113d5c: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x113d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x113d60: 0x6a040047  ldl         $a0, 0x47($s0)
    ctx->pc = 0x113d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x113d64: 0x6e040040  ldr         $a0, 0x40($s0)
    ctx->pc = 0x113d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x113d68: 0x6a05004f  ldl         $a1, 0x4F($s0)
    ctx->pc = 0x113d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x113d6c: 0x6e050048  ldr         $a1, 0x48($s0)
    ctx->pc = 0x113d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x113d70: 0x6a060057  ldl         $a2, 0x57($s0)
    ctx->pc = 0x113d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x113d74: 0x6e060050  ldr         $a2, 0x50($s0)
    ctx->pc = 0x113d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x113d78: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x113d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d7c: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x113d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d80: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x113d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d84: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x113d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d88: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x113d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d8c: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x113d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d90: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x113d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d94: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x113d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d98: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x113D98u;
    {
        const bool branch_taken_0x113d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D98u;
        // 0x113d9c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d98) {
            ctx->pc = 0x113DECu;
            goto label_113dec;
        }
    }
    ctx->pc = 0x113DA0u;
label_113da0:
    // 0x113da0: 0x8a070017  lwl         $a3, 0x17($s0)
    ctx->pc = 0x113da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x113da4: 0x9a070014  lwr         $a3, 0x14($s0)
    ctx->pc = 0x113da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x113da8: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x113da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113dac: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x113dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113db0: 0x8a04001b  lwl         $a0, 0x1B($s0)
    ctx->pc = 0x113db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x113db4: 0x9a040018  lwr         $a0, 0x18($s0)
    ctx->pc = 0x113db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x113db8: 0xaba40017  swl         $a0, 0x17($sp)
    ctx->pc = 0x113db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113dbc: 0xbba40014  swr         $a0, 0x14($sp)
    ctx->pc = 0x113dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113dc0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x113dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x113dc4: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x113dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x113dc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113DC8u;
    {
        const bool branch_taken_0x113dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DC8u;
        // 0x113dcc: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113dc8) {
            ctx->pc = 0x113DE0u;
            goto label_113de0;
        }
    }
    ctx->pc = 0x113DD0u;
    // 0x113dd0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x113dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x113dd4: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x113dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x113dd8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x113dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x113ddc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_113de0:
    // 0x113de0: 0xc04a125  jal         func_128494
    ctx->pc = 0x113DE0u;
    SET_GPR_U32(ctx, 31, 0x113DE8u);
    ctx->pc = 0x113DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113DE0u;
    // 0x113de4: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x113DE0u, 0x113DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DE8u;
label_113de8:
    // 0x113de8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x113de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_113dec:
    // 0x113dec: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x113DECu;
    {
        const bool branch_taken_0x113dec = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x113DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DECu;
        // 0x113df0: 0x3c070013  lui         $a3, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113dec) {
            ctx->pc = 0x113E54u;
            goto label_113e54;
        }
    }
    ctx->pc = 0x113DF4u;
    // 0x113df4: 0x41023  negu        $v0, $a0
    ctx->pc = 0x113df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x113df8: 0x8ce31110  lw          $v1, 0x1110($a3)
    ctx->pc = 0x113df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4368)));
    // 0x113dfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e00: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x113e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x113e04: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x113E04u;
    {
        const bool branch_taken_0x113e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x113E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E04u;
        // 0x113e08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e04) {
            ctx->pc = 0x113E20u;
            goto label_113e20;
        }
    }
    ctx->pc = 0x113E0Cu;
    // 0x113e0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x113e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113e10: 0xace21110  sw          $v0, 0x1110($a3)
    ctx->pc = 0x113e10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4368), GPR_U32(ctx, 2));
    // 0x113e14: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x113E14u;
    {
        const bool branch_taken_0x113e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E14u;
        // 0x113e18: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e14) {
            ctx->pc = 0x113E60u;
            goto label_113e60;
        }
    }
    ctx->pc = 0x113E1Cu;
    // 0x113e1c: 0x0  nop
    ctx->pc = 0x113e1cu;
    // NOP
label_113e20:
    // 0x113e20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x113e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_113e24:
    // 0x113e24: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x113e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x113e28: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x113E28u;
    {
        const bool branch_taken_0x113e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E28u;
        // 0x113e2c: 0x24e21110  addiu       $v0, $a3, 0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e28) {
            ctx->pc = 0x113E5Cu;
            goto label_113e5c;
        }
    }
    ctx->pc = 0x113E30u;
    // 0x113e30: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x113e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x113e34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x113e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x113e38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113e3c: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x113E3Cu;
    {
        const bool branch_taken_0x113e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x113E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E3Cu;
        // 0x113e40: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e3c) {
            ctx->pc = 0x113E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113e24;
        }
    }
    ctx->pc = 0x113E44u;
    // 0x113e44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x113e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113e48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x113e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x113e4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x113E4Cu;
    {
        const bool branch_taken_0x113e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E4Cu;
        // 0x113e50: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e4c) {
            ctx->pc = 0x113E60u;
            goto label_113e60;
        }
    }
    ctx->pc = 0x113E54u;
label_113e54:
    // 0x113e54: 0xc043cf4  jal         func_10F3D0
    ctx->pc = 0x113E54u;
    SET_GPR_U32(ctx, 31, 0x113E5Cu);
    ctx->pc = 0x10F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3D0u, 0x113E54u, 0x113E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E5Cu;
label_113e5c:
    // 0x113e5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x113e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_113e60:
    // 0x113e60: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x113e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113e64: 0x3e00008  jr          $ra
    ctx->pc = 0x113E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E64u;
        // 0x113e68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113E6Cu;
    // 0x113e6c: 0x0  nop
    ctx->pc = 0x113e6cu;
    // NOP
    ctx->pc = 0x113e70u;
}
