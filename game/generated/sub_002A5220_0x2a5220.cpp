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

// Function: sub_002A5220
// Address: 0x2a5220 - 0x2a5308
void sub_002A5220_0x2a5220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5220_0x2a5220");
#endif

    switch (ctx->pc) {
        case 0x2a5264u: goto label_2a5264;
        case 0x2a52ccu: goto label_2a52cc;
        case 0x2a52dcu: goto label_2a52dc;
        case 0x2a52f0u: goto label_2a52f0;
        default: break;
    }

    ctx->pc = 0x2a5220u;

    // 0x2a5220: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2a5220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2a5224: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5228: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a5228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a522c: 0x248483c0  addiu       $a0, $a0, -0x7C40
    ctx->pc = 0x2a522cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935488));
    // 0x2a5230: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a5230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a5234: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a5234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a5238: 0x2448da70  addiu       $t0, $v0, -0x2590
    ctx->pc = 0x2a5238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957680));
    // 0x2a523c: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x2a523cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a5240: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x2a5240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a5244: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x2a5244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a5248: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x2a5248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a524c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2a524cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5250: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2a5250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5254: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x2a5254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5258: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x2a5258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a525c: 0xc085238  jal         func_2148E0
    ctx->pc = 0x2A525Cu;
    SET_GPR_U32(ctx, 31, 0x2A5264u);
    ctx->pc = 0x2A5260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A525Cu;
    // 0x2a5260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x2A525Cu, 0x2A5264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5264u;
label_2a5264:
    // 0x2a5264: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5268: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x2a5268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x2a526c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A526Cu;
    {
        const bool branch_taken_0x2a526c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A526Cu;
        // 0x2a5270: 0x2862005a  slti        $v0, $v1, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a526c) {
            ctx->pc = 0x2A52B0u;
            goto label_2a52b0;
        }
    }
    ctx->pc = 0x2A5274u;
    // 0x2a5274: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5274u;
    {
        const bool branch_taken_0x2a5274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5274u;
        // 0x2a5278: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5274) {
            ctx->pc = 0x2A5290u;
            goto label_2a5290;
        }
    }
    ctx->pc = 0x2A527Cu;
    // 0x2a527c: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x2a527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2a5280: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5280u;
    {
        const bool branch_taken_0x2a5280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5280u;
        // 0x2a5284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5280) {
            ctx->pc = 0x2A52A8u;
            goto label_2a52a8;
        }
    }
    ctx->pc = 0x2A5288u;
    // 0x2a5288: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2A5288u;
    {
        const bool branch_taken_0x2a5288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5288u;
        // 0x2a528c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5288) {
            ctx->pc = 0x2A52F8u;
            goto label_2a52f8;
        }
    }
    ctx->pc = 0x2A5290u;
label_2a5290:
    // 0x2a5290: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5290u;
    {
        const bool branch_taken_0x2a5290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5290u;
        // 0x2a5294: 0x2402005b  addiu       $v0, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5290) {
            ctx->pc = 0x2A52B8u;
            goto label_2a52b8;
        }
    }
    ctx->pc = 0x2A5298u;
    // 0x2a5298: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5298u;
    {
        const bool branch_taken_0x2a5298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5298u;
        // 0x2a529c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5298) {
            ctx->pc = 0x2A52C0u;
            goto label_2a52c0;
        }
    }
    ctx->pc = 0x2A52A0u;
    // 0x2a52a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A52A0u;
    {
        const bool branch_taken_0x2a52a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A52A0u;
        // 0x2a52a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a52a0) {
            ctx->pc = 0x2A52F8u;
            goto label_2a52f8;
        }
    }
    ctx->pc = 0x2A52A8u;
label_2a52a8:
    // 0x2a52a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A52A8u;
    {
        const bool branch_taken_0x2a52a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A52A8u;
        // 0x2a52ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a52a8) {
            ctx->pc = 0x2A52C4u;
            goto label_2a52c4;
        }
    }
    ctx->pc = 0x2A52B0u;
label_2a52b0:
    // 0x2a52b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A52B0u;
    {
        const bool branch_taken_0x2a52b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A52B0u;
        // 0x2a52b4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a52b0) {
            ctx->pc = 0x2A52C4u;
            goto label_2a52c4;
        }
    }
    ctx->pc = 0x2A52B8u;
label_2a52b8:
    // 0x2a52b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A52B8u;
    {
        const bool branch_taken_0x2a52b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A52B8u;
        // 0x2a52bc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a52b8) {
            ctx->pc = 0x2A52C4u;
            goto label_2a52c4;
        }
    }
    ctx->pc = 0x2A52C0u;
label_2a52c0:
    // 0x2a52c0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2a52c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a52c4:
    // 0x2a52c4: 0xc040468  jal         func_1011A0
    ctx->pc = 0x2A52C4u;
    SET_GPR_U32(ctx, 31, 0x2A52CCu);
    ctx->pc = 0x1011A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1011A0u, 0x2A52C4u, 0x2A52CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52CCu;
label_2a52cc:
    // 0x2a52cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a52d0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2a52d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2a52d4: 0xc04058e  jal         func_101638
    ctx->pc = 0x2A52D4u;
    SET_GPR_U32(ctx, 31, 0x2A52DCu);
    ctx->pc = 0x2A52D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A52D4u;
    // 0x2a52d8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101638u, 0x2A52D4u, 0x2A52DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52DCu;
label_2a52dc:
    // 0x2a52dc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2a52dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a52e0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a52e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a52e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a52e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a52e8: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2A52E8u;
    SET_GPR_U32(ctx, 31, 0x2A52F0u);
    ctx->pc = 0x2A52ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A52E8u;
    // 0x2a52ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2A52E8u, 0x2A52F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52F0u;
label_2a52f0:
    // 0x2a52f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a52f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a52f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a52f8:
    // 0x2a52f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a52f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a52fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A52FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A52FCu;
        // 0x2a5300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A52FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5304u;
    // 0x2a5304: 0x0  nop
    ctx->pc = 0x2a5304u;
    // NOP
    ctx->pc = 0x2a5308u;
}
