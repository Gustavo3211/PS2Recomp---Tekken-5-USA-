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

// Function: sub_0035EE18
// Address: 0x35ee18 - 0x35ef08
void sub_0035EE18_0x35ee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EE18_0x35ee18");
#endif

    switch (ctx->pc) {
        case 0x35ee44u: goto label_35ee44;
        case 0x35ee70u: goto label_35ee70;
        case 0x35ee94u: goto label_35ee94;
        case 0x35eeb4u: goto label_35eeb4;
        default: break;
    }

    ctx->pc = 0x35ee18u;

    // 0x35ee18: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35ee18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35ee1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ee1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ee20: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x35ee20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x35ee24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35ee24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ee28: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x35ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35ee2c: 0x2c840040  sltiu       $a0, $a0, 0x40
    ctx->pc = 0x35ee2cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35ee30: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35EE30u;
    {
        const bool branch_taken_0x35ee30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE30u;
        // 0x35ee34: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee30) {
            ctx->pc = 0x35EE50u;
            goto label_35ee50;
        }
    }
    ctx->pc = 0x35EE38u;
    // 0x35ee38: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35ee3c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35EE3Cu;
    SET_GPR_U32(ctx, 31, 0x35EE44u);
    ctx->pc = 0x35EE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EE3Cu;
    // 0x35ee40: 0x248465c0  addiu       $a0, $a0, 0x65C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35EE3Cu, 0x35EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EE44u;
label_35ee44:
    // 0x35ee44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35ee48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35EE48u;
    {
        const bool branch_taken_0x35ee48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE48u;
        // 0x35ee4c: 0x3442001f  ori         $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee48) {
            ctx->pc = 0x35EE60u;
            goto label_35ee60;
        }
    }
    ctx->pc = 0x35EE50u;
label_35ee50:
    // 0x35ee50: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35ee50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35ee54: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x35ee54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x35ee58: 0xa4232f68  sh          $v1, 0x2F68($at)
    ctx->pc = 0x35ee58u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 12136), (uint16_t)GPR_U32(ctx, 3));
    // 0x35ee5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ee5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35ee60:
    // 0x35ee60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ee60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ee64: 0x3e00008  jr          $ra
    ctx->pc = 0x35EE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE64u;
        // 0x35ee68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EE6Cu;
    // 0x35ee6c: 0x0  nop
    ctx->pc = 0x35ee6cu;
    // NOP
label_35ee70:
    // 0x35ee70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ee74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x35ee74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ee78: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x35ee78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35ee7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ee80: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x35EE80u;
    {
        const bool branch_taken_0x35ee80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE80u;
        // 0x35ee84: 0x2ca20040  sltiu       $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee80) {
            ctx->pc = 0x35EEA0u;
            goto label_35eea0;
        }
    }
    ctx->pc = 0x35EE88u;
    // 0x35ee88: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35ee8c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35EE8Cu;
    SET_GPR_U32(ctx, 31, 0x35EE94u);
    ctx->pc = 0x35EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EE8Cu;
    // 0x35ee90: 0x24846600  addiu       $a0, $a0, 0x6600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35EE8Cu, 0x35EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EE94u;
label_35ee94:
    // 0x35ee94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35ee98: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x35EE98u;
    {
        const bool branch_taken_0x35ee98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE98u;
        // 0x35ee9c: 0x34420023  ori         $v0, $v0, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee98) {
            ctx->pc = 0x35EEFCu;
            goto label_35eefc;
        }
    }
    ctx->pc = 0x35EEA0u;
label_35eea0:
    // 0x35eea0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35EEA0u;
    {
        const bool branch_taken_0x35eea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EEA0u;
        // 0x35eea4: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eea0) {
            ctx->pc = 0x35EEC0u;
            goto label_35eec0;
        }
    }
    ctx->pc = 0x35EEA8u;
    // 0x35eea8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35eeac: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35EEACu;
    SET_GPR_U32(ctx, 31, 0x35EEB4u);
    ctx->pc = 0x35EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EEACu;
    // 0x35eeb0: 0x24846640  addiu       $a0, $a0, 0x6640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35EEACu, 0x35EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EEB4u;
label_35eeb4:
    // 0x35eeb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35eeb8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x35EEB8u;
    {
        const bool branch_taken_0x35eeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EEB8u;
        // 0x35eebc: 0x3442001f  ori         $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eeb8) {
            ctx->pc = 0x35EEFCu;
            goto label_35eefc;
        }
    }
    ctx->pc = 0x35EEC0u;
label_35eec0:
    // 0x35eec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35eec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eec4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x35eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35eec8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35eecc: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35eeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35eed0: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35eed0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35eed4: 0x68242c6f  ldl         $a0, 0x2C6F($at)
    ctx->pc = 0x35eed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 11375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x35eed8: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35eed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35eedc: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35eedcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35eee0: 0x6c242c68  ldr         $a0, 0x2C68($at)
    ctx->pc = 0x35eee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 11368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x35eee4: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x35eee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x35eee8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x35eee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x35eeec: 0x8ca52c70  lw          $a1, 0x2C70($a1)
    ctx->pc = 0x35eeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11376)));
    // 0x35eef0: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x35eef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35eef4: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x35eef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35eef8: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x35eef8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_35eefc:
    // 0x35eefc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35eefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ef00: 0x3e00008  jr          $ra
    ctx->pc = 0x35EF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF00u;
        // 0x35ef04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EF08u;
}
