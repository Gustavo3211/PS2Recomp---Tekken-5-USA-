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

// Function: sub_002852B8
// Address: 0x2852b8 - 0x285440
void sub_002852B8_0x2852b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002852B8_0x2852b8");
#endif

    switch (ctx->pc) {
        case 0x2852b8u: goto label_2852b8;
        case 0x2852bcu: goto label_2852bc;
        case 0x2852c0u: goto label_2852c0;
        case 0x2852c4u: goto label_2852c4;
        case 0x2852c8u: goto label_2852c8;
        case 0x2852ccu: goto label_2852cc;
        case 0x2852d0u: goto label_2852d0;
        case 0x2852d4u: goto label_2852d4;
        case 0x2852d8u: goto label_2852d8;
        case 0x2852dcu: goto label_2852dc;
        case 0x2852e0u: goto label_2852e0;
        case 0x2852e4u: goto label_2852e4;
        case 0x2852e8u: goto label_2852e8;
        case 0x2852ecu: goto label_2852ec;
        case 0x2852f0u: goto label_2852f0;
        case 0x2852f4u: goto label_2852f4;
        case 0x2852f8u: goto label_2852f8;
        case 0x2852fcu: goto label_2852fc;
        case 0x285300u: goto label_285300;
        case 0x285304u: goto label_285304;
        case 0x285308u: goto label_285308;
        case 0x28530cu: goto label_28530c;
        case 0x285310u: goto label_285310;
        case 0x285314u: goto label_285314;
        case 0x285318u: goto label_285318;
        case 0x28531cu: goto label_28531c;
        case 0x285320u: goto label_285320;
        case 0x285324u: goto label_285324;
        case 0x285328u: goto label_285328;
        case 0x28532cu: goto label_28532c;
        case 0x285330u: goto label_285330;
        case 0x285334u: goto label_285334;
        case 0x285338u: goto label_285338;
        case 0x28533cu: goto label_28533c;
        case 0x285340u: goto label_285340;
        case 0x285344u: goto label_285344;
        case 0x285348u: goto label_285348;
        case 0x28534cu: goto label_28534c;
        case 0x285350u: goto label_285350;
        case 0x285354u: goto label_285354;
        case 0x285358u: goto label_285358;
        case 0x28535cu: goto label_28535c;
        case 0x285360u: goto label_285360;
        case 0x285364u: goto label_285364;
        case 0x285368u: goto label_285368;
        case 0x28536cu: goto label_28536c;
        case 0x285370u: goto label_285370;
        case 0x285374u: goto label_285374;
        case 0x285378u: goto label_285378;
        case 0x28537cu: goto label_28537c;
        case 0x285380u: goto label_285380;
        case 0x285384u: goto label_285384;
        case 0x285388u: goto label_285388;
        case 0x28538cu: goto label_28538c;
        case 0x285390u: goto label_285390;
        case 0x285394u: goto label_285394;
        case 0x285398u: goto label_285398;
        case 0x28539cu: goto label_28539c;
        case 0x2853a0u: goto label_2853a0;
        case 0x2853a4u: goto label_2853a4;
        case 0x2853a8u: goto label_2853a8;
        case 0x2853acu: goto label_2853ac;
        case 0x2853b0u: goto label_2853b0;
        case 0x2853b4u: goto label_2853b4;
        case 0x2853b8u: goto label_2853b8;
        case 0x2853bcu: goto label_2853bc;
        case 0x2853c0u: goto label_2853c0;
        case 0x2853c4u: goto label_2853c4;
        case 0x2853c8u: goto label_2853c8;
        case 0x2853ccu: goto label_2853cc;
        case 0x2853d0u: goto label_2853d0;
        case 0x2853d4u: goto label_2853d4;
        case 0x2853d8u: goto label_2853d8;
        case 0x2853dcu: goto label_2853dc;
        case 0x2853e0u: goto label_2853e0;
        case 0x2853e4u: goto label_2853e4;
        case 0x2853e8u: goto label_2853e8;
        case 0x2853ecu: goto label_2853ec;
        case 0x2853f0u: goto label_2853f0;
        case 0x2853f4u: goto label_2853f4;
        case 0x2853f8u: goto label_2853f8;
        case 0x2853fcu: goto label_2853fc;
        case 0x285400u: goto label_285400;
        case 0x285404u: goto label_285404;
        case 0x285408u: goto label_285408;
        case 0x28540cu: goto label_28540c;
        case 0x285410u: goto label_285410;
        case 0x285414u: goto label_285414;
        case 0x285418u: goto label_285418;
        case 0x28541cu: goto label_28541c;
        case 0x285420u: goto label_285420;
        case 0x285424u: goto label_285424;
        case 0x285428u: goto label_285428;
        case 0x28542cu: goto label_28542c;
        case 0x285430u: goto label_285430;
        case 0x285434u: goto label_285434;
        case 0x285438u: goto label_285438;
        case 0x28543cu: goto label_28543c;
        default: break;
    }

    ctx->pc = 0x2852b8u;

label_2852b8:
    // 0x2852b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2852b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2852bc:
    // 0x2852bc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2852bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2852c0:
    // 0x2852c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2852c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2852c4:
    // 0x2852c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2852c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2852c8:
    // 0x2852c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2852c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2852cc:
    // 0x2852cc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2852ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2852d0:
    // 0x2852d0: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
label_2852d4:
    if (ctx->pc == 0x2852D4u) {
        ctx->pc = 0x2852D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852D0u;
        // 0x2852d4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2852D8u;
        goto label_2852d8;
    }
    ctx->pc = 0x2852D0u;
    {
        const bool branch_taken_0x2852d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2852d0) {
            ctx->pc = 0x2852D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2852D0u;
            // 0x2852d4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28542Cu;
            goto label_28542c;
        }
    }
    ctx->pc = 0x2852D8u;
label_2852d8:
    // 0x2852d8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2852d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2852dc:
    // 0x2852dc: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
label_2852e0:
    if (ctx->pc == 0x2852E0u) {
        ctx->pc = 0x2852E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852DCu;
        // 0x2852e0: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2852E4u;
        goto label_2852e4;
    }
    ctx->pc = 0x2852DCu;
    {
        const bool branch_taken_0x2852dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2852E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852DCu;
        // 0x2852e0: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852dc) {
            ctx->pc = 0x285428u;
            goto label_285428;
        }
    }
    ctx->pc = 0x2852E4u;
label_2852e4:
    // 0x2852e4: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2852e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2852e8:
    // 0x2852e8: 0x24483b60  addiu       $t0, $v0, 0x3B60
    ctx->pc = 0x2852e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
label_2852ec:
    // 0x2852ec: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x2852ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2852f0:
    // 0x2852f0: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x2852f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2852f4:
    // 0x2852f4: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x2852f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2852f8:
    // 0x2852f8: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x2852f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2852fc:
    // 0x2852fc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2852fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_285300:
    // 0x285300: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x285300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_285304:
    // 0x285304: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x285304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_285308:
    // 0x285308: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x285308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_28530c:
    // 0x28530c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x28530cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_285310:
    // 0x285310: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x285310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_285314:
    // 0x285314: 0x40f809  jalr        $v0
label_285318:
    if (ctx->pc == 0x285318u) {
        ctx->pc = 0x285318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285314u;
        // 0x285318: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28531Cu;
        goto label_28531c;
    }
    ctx->pc = 0x285314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28531Cu);
        ctx->pc = 0x285318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285314u;
        // 0x285318: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285314u, 0x28531Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28531Cu;
label_28531c:
    // 0x28531c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x28531cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_285320:
    // 0x285320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x285320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285324:
    // 0x285324: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x285324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_285328:
    // 0x285328: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x285328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_28532c:
    // 0x28532c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x28532cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_285330:
    // 0x285330: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x285330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_285334:
    // 0x285334: 0x40f809  jalr        $v0
label_285338:
    if (ctx->pc == 0x285338u) {
        ctx->pc = 0x285338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285334u;
        // 0x285338: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28533Cu;
        goto label_28533c;
    }
    ctx->pc = 0x285334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28533Cu);
        ctx->pc = 0x285338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285334u;
        // 0x285338: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285334u, 0x28533Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28533Cu;
label_28533c:
    // 0x28533c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_285340:
    if (ctx->pc == 0x285340u) {
        ctx->pc = 0x285340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28533Cu;
        // 0x285340: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285344u;
        goto label_285344;
    }
    ctx->pc = 0x28533Cu;
    {
        const bool branch_taken_0x28533c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x285340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28533Cu;
        // 0x285340: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28533c) {
            ctx->pc = 0x285350u;
            goto label_285350;
        }
    }
    ctx->pc = 0x285344u;
label_285344:
    // 0x285344: 0x10000005  b           . + 4 + (0x5 << 2)
label_285348:
    if (ctx->pc == 0x285348u) {
        ctx->pc = 0x285348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285344u;
        // 0x285348: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28534Cu;
        goto label_28534c;
    }
    ctx->pc = 0x285344u;
    {
        const bool branch_taken_0x285344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285344u;
        // 0x285348: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285344) {
            ctx->pc = 0x28535Cu;
            goto label_28535c;
        }
    }
    ctx->pc = 0x28534Cu;
label_28534c:
    // 0x28534c: 0x0  nop
    ctx->pc = 0x28534cu;
    // NOP
label_285350:
    // 0x285350: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x285350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_285354:
    // 0x285354: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x285354u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_285358:
    // 0x285358: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x285358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_28535c:
    // 0x28535c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28535cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285360:
    // 0x285360: 0x2789b2d8  addiu       $t1, $gp, -0x4D28
    ctx->pc = 0x285360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947544));
label_285364:
    // 0x285364: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x285364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285368:
    // 0x285368: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x285368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_28536c:
    // 0x28536c: 0x0  nop
    ctx->pc = 0x28536cu;
    // NOP
label_285370:
    // 0x285370: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x285370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_285374:
    // 0x285374: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x285374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_285378:
    // 0x285378: 0x28c70002  slti        $a3, $a2, 0x2
    ctx->pc = 0x285378u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_28537c:
    // 0x28537c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_285380:
    // 0x285380: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_285384:
    if (ctx->pc == 0x285384u) {
        ctx->pc = 0x285384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285380u;
        // 0x285384: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285388u;
        goto label_285388;
    }
    ctx->pc = 0x285380u;
    {
        const bool branch_taken_0x285380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285380u;
        // 0x285384: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285380) {
            ctx->pc = 0x2853B8u;
            goto label_2853b8;
        }
    }
    ctx->pc = 0x285388u;
label_285388:
    // 0x285388: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_28538c:
    if (ctx->pc == 0x28538Cu) {
        ctx->pc = 0x28538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285388u;
        // 0x28538c: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285390u;
        goto label_285390;
    }
    ctx->pc = 0x285388u;
    {
        const bool branch_taken_0x285388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285388u;
        // 0x28538c: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285388) {
            ctx->pc = 0x2853A4u;
            goto label_2853a4;
        }
    }
    ctx->pc = 0x285390u;
label_285390:
    // 0x285390: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x285390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_285394:
    // 0x285394: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x285394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_285398:
    // 0x285398: 0xac680048  sw          $t0, 0x48($v1)
    ctx->pc = 0x285398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 8));
label_28539c:
    // 0x28539c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2853a0:
    // 0x2853a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2853a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2853a4:
    // 0x2853a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2853a8:
    if (ctx->pc == 0x2853A8u) {
        ctx->pc = 0x2853A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853A4u;
        // 0x2853a8: 0x911021  addu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2853ACu;
        goto label_2853ac;
    }
    ctx->pc = 0x2853A4u;
    {
        const bool branch_taken_0x2853a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853A4u;
        // 0x2853a8: 0x911021  addu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853a4) {
            ctx->pc = 0x2853B4u;
            goto label_2853b4;
        }
    }
    ctx->pc = 0x2853ACu;
label_2853ac:
    // 0x2853ac: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2853acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2853b0:
    // 0x2853b0: 0xac68004c  sw          $t0, 0x4C($v1)
    ctx->pc = 0x2853b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 8));
label_2853b4:
    // 0x2853b4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2853b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2853b8:
    // 0x2853b8: 0x54e0ffed  bnel        $a3, $zero, . + 4 + (-0x13 << 2)
label_2853bc:
    if (ctx->pc == 0x2853BCu) {
        ctx->pc = 0x2853BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853B8u;
        // 0x2853bc: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2853C0u;
        goto label_2853c0;
    }
    ctx->pc = 0x2853B8u;
    {
        const bool branch_taken_0x2853b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2853b8) {
            ctx->pc = 0x2853BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2853B8u;
            // 0x2853bc: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285370;
        }
    }
    ctx->pc = 0x2853C0u;
label_2853c0:
    // 0x2853c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2853c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2853c4:
    // 0x2853c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2853c8:
    if (ctx->pc == 0x2853C8u) {
        ctx->pc = 0x2853C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853C4u;
        // 0x2853c8: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2853CCu;
        goto label_2853cc;
    }
    ctx->pc = 0x2853C4u;
    {
        const bool branch_taken_0x2853c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853C4u;
        // 0x2853c8: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853c4) {
            ctx->pc = 0x2853F8u;
            goto label_2853f8;
        }
    }
    ctx->pc = 0x2853CCu;
label_2853cc:
    // 0x2853cc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2853ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2853d0:
    // 0x2853d0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2853d4:
    if (ctx->pc == 0x2853D4u) {
        ctx->pc = 0x2853D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853D0u;
        // 0x2853d4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2853D8u;
        goto label_2853d8;
    }
    ctx->pc = 0x2853D0u;
    {
        const bool branch_taken_0x2853d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2853D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853D0u;
        // 0x2853d4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853d0) {
            ctx->pc = 0x2853F8u;
            goto label_2853f8;
        }
    }
    ctx->pc = 0x2853D8u;
label_2853d8:
    // 0x2853d8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2853d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2853dc:
    // 0x2853dc: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x2853dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_2853e0:
    // 0x2853e0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2853e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2853e4:
    // 0x2853e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2853e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2853e8:
    // 0x2853e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2853e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2853ec:
    // 0x2853ec: 0x60f809  jalr        $v1
label_2853f0:
    if (ctx->pc == 0x2853F0u) {
        ctx->pc = 0x2853F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853ECu;
        // 0x2853f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2853F4u;
        goto label_2853f4;
    }
    ctx->pc = 0x2853ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2853F4u);
        ctx->pc = 0x2853F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853ECu;
        // 0x2853f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2853ECu, 0x2853F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2853F4u;
label_2853f4:
    // 0x2853f4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2853f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2853f8:
    // 0x2853f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2853fc:
    if (ctx->pc == 0x2853FCu) {
        ctx->pc = 0x2853FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853F8u;
        // 0x2853fc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285400u;
        goto label_285400;
    }
    ctx->pc = 0x2853F8u;
    {
        const bool branch_taken_0x2853f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853F8u;
        // 0x2853fc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853f8) {
            ctx->pc = 0x28542Cu;
            goto label_28542c;
        }
    }
    ctx->pc = 0x285400u;
label_285400:
    // 0x285400: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x285400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_285404:
    // 0x285404: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_285408:
    if (ctx->pc == 0x285408u) {
        ctx->pc = 0x285408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285404u;
        // 0x285408: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28540Cu;
        goto label_28540c;
    }
    ctx->pc = 0x285404u;
    {
        const bool branch_taken_0x285404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285404) {
            ctx->pc = 0x285408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285404u;
            // 0x285408: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285430u;
            goto label_285430;
        }
    }
    ctx->pc = 0x28540Cu;
label_28540c:
    // 0x28540c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x28540cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_285410:
    // 0x285410: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x285410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_285414:
    // 0x285414: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x285414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_285418:
    // 0x285418: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x285418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_28541c:
    // 0x28541c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28541cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_285420:
    // 0x285420: 0x60f809  jalr        $v1
label_285424:
    if (ctx->pc == 0x285424u) {
        ctx->pc = 0x285424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285420u;
        // 0x285424: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285428u;
        goto label_285428;
    }
    ctx->pc = 0x285420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x285428u);
        ctx->pc = 0x285424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285420u;
        // 0x285424: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285420u, 0x285428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285428u;
label_285428:
    // 0x285428: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x285428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28542c:
    // 0x28542c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x28542cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_285430:
    // 0x285430: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x285430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_285434:
    // 0x285434: 0x3e00008  jr          $ra
label_285438:
    if (ctx->pc == 0x285438u) {
        ctx->pc = 0x285438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285434u;
        // 0x285438: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28543Cu;
        goto label_28543c;
    }
    ctx->pc = 0x285434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285434u;
        // 0x285438: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28543Cu;
label_28543c:
    // 0x28543c: 0x0  nop
    ctx->pc = 0x28543cu;
    // NOP
    ctx->pc = 0x285440u;
}
