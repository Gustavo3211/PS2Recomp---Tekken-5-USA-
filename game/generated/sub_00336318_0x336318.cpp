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

// Function: sub_00336318
// Address: 0x336318 - 0x336450
void sub_00336318_0x336318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336318_0x336318");
#endif

    switch (ctx->pc) {
        case 0x336340u: goto label_336340;
        default: break;
    }

    ctx->pc = 0x336318u;

    // 0x336318: 0x8c8701b8  lw          $a3, 0x1B8($a0)
    ctx->pc = 0x336318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x33631c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33631cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x336320: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x336320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336324: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x336324u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336328: 0x10e00045  beqz        $a3, . + 4 + (0x45 << 2)
    ctx->pc = 0x336328u;
    {
        const bool branch_taken_0x336328 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x33632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336328u;
        // 0x33632c: 0xe0602d  daddu       $t4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336328) {
            ctx->pc = 0x336440u;
            goto label_336440;
        }
    }
    ctx->pc = 0x336330u;
    // 0x336330: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x336330u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x336334: 0x248b0004  addiu       $t3, $a0, 0x4
    ctx->pc = 0x336334u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x336338: 0x248d001c  addiu       $t5, $a0, 0x1C
    ctx->pc = 0x336338u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x33633c: 0x24850178  addiu       $a1, $a0, 0x178
    ctx->pc = 0x33633cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 376));
label_336340:
    // 0x336340: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x336340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336344: 0x24c80008  addiu       $t0, $a2, 0x8
    ctx->pc = 0x336344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x336348: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x336348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x33634c: 0x1449000e  bne         $v0, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x33634Cu;
    {
        const bool branch_taken_0x33634c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x336350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33634Cu;
        // 0x336350: 0x122182b  sltu        $v1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33634c) {
            ctx->pc = 0x336388u;
            goto label_336388;
        }
    }
    ctx->pc = 0x336354u;
    // 0x336354: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x336354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x336358: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x336358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x33635c: 0xac8201b8  sw          $v0, 0x1B8($a0)
    ctx->pc = 0x33635cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 2));
    // 0x336360: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x336360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336364: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x336364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x336368: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x336368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x33636c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x33636cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x336370: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x336370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
    // 0x336374: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x336374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336378: 0xac4e0010  sw          $t6, 0x10($v0)
    ctx->pc = 0x336378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 14));
    // 0x33637c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x33637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336380: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x336380u;
    {
        const bool branch_taken_0x336380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336380u;
        // 0x336384: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336380) {
            ctx->pc = 0x336444u;
            goto label_336444;
        }
    }
    ctx->pc = 0x336388u;
label_336388:
    // 0x336388: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x336388u;
    {
        const bool branch_taken_0x336388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x336388) {
            ctx->pc = 0x33638Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336388u;
            // 0x33638c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336430u;
            goto label_336430;
        }
    }
    ctx->pc = 0x336390u;
    // 0x336390: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x336390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x336394: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x336394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
    // 0x336398: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x336398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x33639c: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x33639cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x3363a0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3363a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3363a4: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x3363a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3363a8: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x3363a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x3363ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3363acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3363b0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x3363b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3363b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3363b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3363b8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3363b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3363bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3363bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3363c0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3363c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3363c4: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x3363c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3363c8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x3363c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x3363cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3363ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3363d0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x3363d0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x3363d4: 0xac6b0004  sw          $t3, 0x4($v1)
    ctx->pc = 0x3363d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 11));
    // 0x3363d8: 0x8d620014  lw          $v0, 0x14($t3)
    ctx->pc = 0x3363d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x3363dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3363dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3363e0: 0xad620014  sw          $v0, 0x14($t3)
    ctx->pc = 0x3363e0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 2));
    // 0x3363e4: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x3363e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3363e8: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x3363e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3363ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3363ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3363f0: 0xb082000f  sdl         $v0, 0xF($a0)
    ctx->pc = 0x3363f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3363f4: 0xb4820008  sdr         $v0, 0x8($a0)
    ctx->pc = 0x3363f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3363f8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x3363f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x3363fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3363fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x336400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336404: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x336404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x336408: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x336408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x33640c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x33640cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x336410: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x336410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x336414: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x336414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x336418: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x336418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33641c: 0x8da30014  lw          $v1, 0x14($t5)
    ctx->pc = 0x33641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x336420: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x336420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x336424: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x336424u;
    {
        const bool branch_taken_0x336424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336424u;
        // 0x336428: 0xada30014  sw          $v1, 0x14($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336424) {
            ctx->pc = 0x336444u;
            goto label_336444;
        }
    }
    ctx->pc = 0x33642Cu;
    // 0x33642c: 0x0  nop
    ctx->pc = 0x33642cu;
    // NOP
label_336430:
    // 0x336430: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x336430u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336434: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x336434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x336438: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x336438u;
    {
        const bool branch_taken_0x336438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336438u;
        // 0x33643c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336438) {
            ctx->pc = 0x336340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336340;
        }
    }
    ctx->pc = 0x336440u;
label_336440:
    // 0x336440: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x336440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_336444:
    // 0x336444: 0x3e00008  jr          $ra
    ctx->pc = 0x336444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336444u;
        // 0x336448: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33644Cu;
    // 0x33644c: 0x0  nop
    ctx->pc = 0x33644cu;
    // NOP
    ctx->pc = 0x336450u;
}
