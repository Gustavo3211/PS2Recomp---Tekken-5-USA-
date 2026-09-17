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

// Function: sub_0035B850
// Address: 0x35b850 - 0x35ba28
void sub_0035B850_0x35b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B850_0x35b850");
#endif

    switch (ctx->pc) {
        case 0x35b880u: goto label_35b880;
        case 0x35b8e8u: goto label_35b8e8;
        case 0x35b904u: goto label_35b904;
        case 0x35b918u: goto label_35b918;
        case 0x35b920u: goto label_35b920;
        case 0x35b930u: goto label_35b930;
        case 0x35b960u: goto label_35b960;
        case 0x35b970u: goto label_35b970;
        case 0x35b97cu: goto label_35b97c;
        case 0x35b9a8u: goto label_35b9a8;
        case 0x35b9bcu: goto label_35b9bc;
        case 0x35b9dcu: goto label_35b9dc;
        case 0x35b9f4u: goto label_35b9f4;
        case 0x35ba0cu: goto label_35ba0c;
        default: break;
    }

    ctx->pc = 0x35b850u;

    // 0x35b850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b854: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35b854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35b858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b85c: 0x24451320  addiu       $a1, $v0, 0x1320
    ctx->pc = 0x35b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
    // 0x35b860: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x35b860u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1D1334u));
    // 0x35b864: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x35b864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x35b868: 0x2c421001  sltiu       $v0, $v0, 0x1001
    ctx->pc = 0x35b868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
    // 0x35b86c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B86Cu;
    {
        const bool branch_taken_0x35b86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b86c) {
            ctx->pc = 0x35B870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B86Cu;
            // 0x35b870: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B888u;
            goto label_35b888;
        }
    }
    ctx->pc = 0x35B874u;
    // 0x35b874: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35b874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35b878: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35B878u;
    SET_GPR_U32(ctx, 31, 0x35B880u);
    ctx->pc = 0x35B87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B878u;
    // 0x35b87c: 0x24845478  addiu       $a0, $a0, 0x5478 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35B878u, 0x35B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B880u;
label_35b880:
    // 0x35b880: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x35B880u;
    {
        const bool branch_taken_0x35b880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B880u;
        // 0x35b884: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b880) {
            ctx->pc = 0x35B8D4u;
            goto label_35b8d4;
        }
    }
    ctx->pc = 0x35B888u;
label_35b888:
    // 0x35b888: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35b888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b88c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35b890: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x35b890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x35b894: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35b894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35b898: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x35b898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x35b89c: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x35b89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35b8a0: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x35b8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35b8a4: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x35b8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x35b8a8: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x35b8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x35b8ac: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x35b8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b8b0: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x35b8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b8b4: 0xb046000f  sdl         $a2, 0xF($v0)
    ctx->pc = 0x35b8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b8b8: 0xb4460008  sdr         $a2, 0x8($v0)
    ctx->pc = 0x35b8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b8bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x35b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35b8c0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x35b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x35b8c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35b8c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35b8cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x35b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x35b8d0: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x35b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
label_35b8d4:
    // 0x35b8d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b8d8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x35b8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x35B8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B8DCu;
        // 0x35b8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B8E4u;
    // 0x35b8e4: 0x0  nop
    ctx->pc = 0x35b8e4u;
    // NOP
label_35b8e8:
    // 0x35b8e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b8ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35b8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35b8f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35b8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35b8f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35b8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35b8f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35b8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35b8fc: 0xc0d6d26  jal         func_35B498
    ctx->pc = 0x35B8FCu;
    SET_GPR_U32(ctx, 31, 0x35B904u);
    ctx->pc = 0x35B900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B8FCu;
    // 0x35b900: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B498u, 0x35B8FCu, 0x35B904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B904u;
label_35b904:
    // 0x35b904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35b904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b908: 0x1443003d  bne         $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x35B908u;
    {
        const bool branch_taken_0x35b908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B908u;
        // 0x35b90c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b908) {
            ctx->pc = 0x35BA00u;
            goto label_35ba00;
        }
    }
    ctx->pc = 0x35B910u;
    // 0x35b910: 0xc0d6da0  jal         func_35B680
    ctx->pc = 0x35B910u;
    SET_GPR_U32(ctx, 31, 0x35B918u);
    ctx->pc = 0x35B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B910u;
    // 0x35b914: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B680u, 0x35B910u, 0x35B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B918u;
label_35b918:
    // 0x35b918: 0xc0d6da4  jal         func_35B690
    ctx->pc = 0x35B918u;
    SET_GPR_U32(ctx, 31, 0x35B920u);
    ctx->pc = 0x35B91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B918u;
    // 0x35b91c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B690u, 0x35B918u, 0x35B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B920u;
label_35b920:
    // 0x35b920: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x35b920u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b924: 0x1a200031  blez        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x35B924u;
    {
        const bool branch_taken_0x35b924 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x35B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B924u;
        // 0x35b928: 0x24500004  addiu       $s0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b924) {
            ctx->pc = 0x35B9ECu;
            goto label_35b9ec;
        }
    }
    ctx->pc = 0x35B92Cu;
    // 0x35b92c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x35b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_35b930:
    // 0x35b930: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35b930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35b934: 0x2c430011  sltiu       $v1, $v0, 0x11
    ctx->pc = 0x35b934u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x35b938: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x35B938u;
    {
        const bool branch_taken_0x35b938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b938) {
            ctx->pc = 0x35B93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B938u;
            // 0x35b93c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B9E0u;
            goto label_35b9e0;
        }
    }
    ctx->pc = 0x35B940u;
    // 0x35b940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35b940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35b944: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35b944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x35b948: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35b948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35b94c: 0x8c6354d0  lw          $v1, 0x54D0($v1)
    ctx->pc = 0x35b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21712)));
    // 0x35b950: 0x600008  jr          $v1
    ctx->pc = 0x35B950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x35B958u: goto label_35b958;
            case 0x35B968u: goto label_35b968;
            case 0x35B988u: goto label_35b988;
            case 0x35B990u: goto label_35b990;
            case 0x35B9B0u: goto label_35b9b0;
            case 0x35B9C8u: goto label_35b9c8;
            case 0x35B9D0u: goto label_35b9d0;
            case 0x35B9DCu: goto label_35b9dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B950u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x35B958u;
label_35b958:
    // 0x35b958: 0xc0d7038  jal         func_35C0E0
    ctx->pc = 0x35B958u;
    SET_GPR_U32(ctx, 31, 0x35B960u);
    ctx->pc = 0x35B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B958u;
    // 0x35b95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C0E0u, 0x35B958u, 0x35B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B960u;
label_35b960:
    // 0x35b960: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x35B960u;
    {
        const bool branch_taken_0x35b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B960u;
        // 0x35b964: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b960) {
            ctx->pc = 0x35B9E0u;
            goto label_35b9e0;
        }
    }
    ctx->pc = 0x35B968u;
label_35b968:
    // 0x35b968: 0xc0d6daa  jal         func_35B6A8
    ctx->pc = 0x35B968u;
    SET_GPR_U32(ctx, 31, 0x35B970u);
    ctx->pc = 0x35B96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B968u;
    // 0x35b96c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B6A8u, 0x35B968u, 0x35B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B970u;
label_35b970:
    // 0x35b970: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x35b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35b974: 0xc0d6dba  jal         func_35B6E8
    ctx->pc = 0x35B974u;
    SET_GPR_U32(ctx, 31, 0x35B97Cu);
    ctx->pc = 0x35B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B974u;
    // 0x35b978: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B6E8u, 0x35B974u, 0x35B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B97Cu;
label_35b97c:
    // 0x35b97c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x35B97Cu;
    {
        const bool branch_taken_0x35b97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B97Cu;
        // 0x35b980: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b97c) {
            ctx->pc = 0x35B9E0u;
            goto label_35b9e0;
        }
    }
    ctx->pc = 0x35B984u;
    // 0x35b984: 0x0  nop
    ctx->pc = 0x35b984u;
    // NOP
label_35b988:
    // 0x35b988: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x35B988u;
    {
        const bool branch_taken_0x35b988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B988u;
        // 0x35b98c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b988) {
            ctx->pc = 0x35B9DCu;
            goto label_35b9dc;
        }
    }
    ctx->pc = 0x35B990u;
label_35b990:
    // 0x35b990: 0x82030009  lb          $v1, 0x9($s0)
    ctx->pc = 0x35b990u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x35b994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b998: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35B998u;
    {
        const bool branch_taken_0x35b998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35b998) {
            ctx->pc = 0x35B99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B998u;
            // 0x35b99c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B9DCu;
            goto label_35b9dc;
        }
    }
    ctx->pc = 0x35B9A0u;
    // 0x35b9a0: 0xc0d704c  jal         func_35C130
    ctx->pc = 0x35B9A0u;
    SET_GPR_U32(ctx, 31, 0x35B9A8u);
    ctx->pc = 0x35B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B9A0u;
    // 0x35b9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C130u, 0x35B9A0u, 0x35B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B9A8u;
label_35b9a8:
    // 0x35b9a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35B9A8u;
    {
        const bool branch_taken_0x35b9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B9A8u;
        // 0x35b9ac: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b9a8) {
            ctx->pc = 0x35B9DCu;
            goto label_35b9dc;
        }
    }
    ctx->pc = 0x35B9B0u;
label_35b9b0:
    // 0x35b9b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x35b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35b9b4: 0xc0d7842  jal         func_35E108
    ctx->pc = 0x35B9B4u;
    SET_GPR_U32(ctx, 31, 0x35B9BCu);
    ctx->pc = 0x35B9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B9B4u;
    // 0x35b9b8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E108u, 0x35B9B4u, 0x35B9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B9BCu;
label_35b9bc:
    // 0x35b9bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35B9BCu;
    {
        const bool branch_taken_0x35b9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B9BCu;
        // 0x35b9c0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b9bc) {
            ctx->pc = 0x35B9E0u;
            goto label_35b9e0;
        }
    }
    ctx->pc = 0x35B9C4u;
    // 0x35b9c4: 0x0  nop
    ctx->pc = 0x35b9c4u;
    // NOP
label_35b9c8:
    // 0x35b9c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35B9C8u;
    {
        const bool branch_taken_0x35b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B9C8u;
        // 0x35b9cc: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b9c8) {
            ctx->pc = 0x35B9DCu;
            goto label_35b9dc;
        }
    }
    ctx->pc = 0x35B9D0u;
label_35b9d0:
    // 0x35b9d0: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x35b9d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35b9d4: 0xc0d8a96  jal         func_362A58
    ctx->pc = 0x35B9D4u;
    SET_GPR_U32(ctx, 31, 0x35B9DCu);
    ctx->pc = 0x35B9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B9D4u;
    // 0x35b9d8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362A58u, 0x35B9D4u, 0x35B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B9DCu;
label_35b9dc:
    // 0x35b9dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35b9dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_35b9e0:
    // 0x35b9e0: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x35b9e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x35b9e4: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x35B9E4u;
    {
        const bool branch_taken_0x35b9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b9e4) {
            ctx->pc = 0x35B9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B9E4u;
            // 0x35b9e8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b930;
        }
    }
    ctx->pc = 0x35B9ECu;
label_35b9ec:
    // 0x35b9ec: 0xc0d6ce6  jal         func_35B398
    ctx->pc = 0x35B9ECu;
    SET_GPR_U32(ctx, 31, 0x35B9F4u);
    ctx->pc = 0x35B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B9ECu;
    // 0x35b9f0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B398u, 0x35B9ECu, 0x35B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B9F4u;
label_35b9f4:
    // 0x35b9f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35B9F4u;
    {
        const bool branch_taken_0x35b9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B9F4u;
        // 0x35b9f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b9f4) {
            ctx->pc = 0x35BA10u;
            goto label_35ba10;
        }
    }
    ctx->pc = 0x35B9FCu;
    // 0x35b9fc: 0x0  nop
    ctx->pc = 0x35b9fcu;
    // NOP
label_35ba00:
    // 0x35ba00: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x35ba00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x35ba04: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35BA04u;
    SET_GPR_U32(ctx, 31, 0x35BA0Cu);
    ctx->pc = 0x35BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BA04u;
    // 0x35ba08: 0x248454a0  addiu       $a0, $a0, 0x54A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35BA04u, 0x35BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA0Cu;
label_35ba0c:
    // 0x35ba0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35ba0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ba10:
    // 0x35ba10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ba10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ba14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ba14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ba18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ba18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ba1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35ba1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ba20: 0x3e00008  jr          $ra
    ctx->pc = 0x35BA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA20u;
        // 0x35ba24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BA28u;
}
