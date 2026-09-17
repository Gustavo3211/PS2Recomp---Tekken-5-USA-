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

// Function: sub_00261568
// Address: 0x261568 - 0x261740
void sub_00261568_0x261568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261568_0x261568");
#endif

    switch (ctx->pc) {
        case 0x261568u: goto label_261568;
        case 0x26156cu: goto label_26156c;
        case 0x261570u: goto label_261570;
        case 0x261574u: goto label_261574;
        case 0x261578u: goto label_261578;
        case 0x26157cu: goto label_26157c;
        case 0x261580u: goto label_261580;
        case 0x261584u: goto label_261584;
        case 0x261588u: goto label_261588;
        case 0x26158cu: goto label_26158c;
        case 0x261590u: goto label_261590;
        case 0x261594u: goto label_261594;
        case 0x261598u: goto label_261598;
        case 0x26159cu: goto label_26159c;
        case 0x2615a0u: goto label_2615a0;
        case 0x2615a4u: goto label_2615a4;
        case 0x2615a8u: goto label_2615a8;
        case 0x2615acu: goto label_2615ac;
        case 0x2615b0u: goto label_2615b0;
        case 0x2615b4u: goto label_2615b4;
        case 0x2615b8u: goto label_2615b8;
        case 0x2615bcu: goto label_2615bc;
        case 0x2615c0u: goto label_2615c0;
        case 0x2615c4u: goto label_2615c4;
        case 0x2615c8u: goto label_2615c8;
        case 0x2615ccu: goto label_2615cc;
        case 0x2615d0u: goto label_2615d0;
        case 0x2615d4u: goto label_2615d4;
        case 0x2615d8u: goto label_2615d8;
        case 0x2615dcu: goto label_2615dc;
        case 0x2615e0u: goto label_2615e0;
        case 0x2615e4u: goto label_2615e4;
        case 0x2615e8u: goto label_2615e8;
        case 0x2615ecu: goto label_2615ec;
        case 0x2615f0u: goto label_2615f0;
        case 0x2615f4u: goto label_2615f4;
        case 0x2615f8u: goto label_2615f8;
        case 0x2615fcu: goto label_2615fc;
        case 0x261600u: goto label_261600;
        case 0x261604u: goto label_261604;
        case 0x261608u: goto label_261608;
        case 0x26160cu: goto label_26160c;
        case 0x261610u: goto label_261610;
        case 0x261614u: goto label_261614;
        case 0x261618u: goto label_261618;
        case 0x26161cu: goto label_26161c;
        case 0x261620u: goto label_261620;
        case 0x261624u: goto label_261624;
        case 0x261628u: goto label_261628;
        case 0x26162cu: goto label_26162c;
        case 0x261630u: goto label_261630;
        case 0x261634u: goto label_261634;
        case 0x261638u: goto label_261638;
        case 0x26163cu: goto label_26163c;
        case 0x261640u: goto label_261640;
        case 0x261644u: goto label_261644;
        case 0x261648u: goto label_261648;
        case 0x26164cu: goto label_26164c;
        case 0x261650u: goto label_261650;
        case 0x261654u: goto label_261654;
        case 0x261658u: goto label_261658;
        case 0x26165cu: goto label_26165c;
        case 0x261660u: goto label_261660;
        case 0x261664u: goto label_261664;
        case 0x261668u: goto label_261668;
        case 0x26166cu: goto label_26166c;
        case 0x261670u: goto label_261670;
        case 0x261674u: goto label_261674;
        case 0x261678u: goto label_261678;
        case 0x26167cu: goto label_26167c;
        case 0x261680u: goto label_261680;
        case 0x261684u: goto label_261684;
        case 0x261688u: goto label_261688;
        case 0x26168cu: goto label_26168c;
        case 0x261690u: goto label_261690;
        case 0x261694u: goto label_261694;
        case 0x261698u: goto label_261698;
        case 0x26169cu: goto label_26169c;
        case 0x2616a0u: goto label_2616a0;
        case 0x2616a4u: goto label_2616a4;
        case 0x2616a8u: goto label_2616a8;
        case 0x2616acu: goto label_2616ac;
        case 0x2616b0u: goto label_2616b0;
        case 0x2616b4u: goto label_2616b4;
        case 0x2616b8u: goto label_2616b8;
        case 0x2616bcu: goto label_2616bc;
        case 0x2616c0u: goto label_2616c0;
        case 0x2616c4u: goto label_2616c4;
        case 0x2616c8u: goto label_2616c8;
        case 0x2616ccu: goto label_2616cc;
        case 0x2616d0u: goto label_2616d0;
        case 0x2616d4u: goto label_2616d4;
        case 0x2616d8u: goto label_2616d8;
        case 0x2616dcu: goto label_2616dc;
        case 0x2616e0u: goto label_2616e0;
        case 0x2616e4u: goto label_2616e4;
        case 0x2616e8u: goto label_2616e8;
        case 0x2616ecu: goto label_2616ec;
        case 0x2616f0u: goto label_2616f0;
        case 0x2616f4u: goto label_2616f4;
        case 0x2616f8u: goto label_2616f8;
        case 0x2616fcu: goto label_2616fc;
        case 0x261700u: goto label_261700;
        case 0x261704u: goto label_261704;
        case 0x261708u: goto label_261708;
        case 0x26170cu: goto label_26170c;
        case 0x261710u: goto label_261710;
        case 0x261714u: goto label_261714;
        case 0x261718u: goto label_261718;
        case 0x26171cu: goto label_26171c;
        case 0x261720u: goto label_261720;
        case 0x261724u: goto label_261724;
        case 0x261728u: goto label_261728;
        case 0x26172cu: goto label_26172c;
        case 0x261730u: goto label_261730;
        case 0x261734u: goto label_261734;
        case 0x261738u: goto label_261738;
        case 0x26173cu: goto label_26173c;
        default: break;
    }

    ctx->pc = 0x261568u;

label_261568:
    // 0x261568: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x261568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_26156c:
    // 0x26156c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26156cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_261570:
    // 0x261570: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x261570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_261574:
    // 0x261574: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x261574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_261578:
    // 0x261578: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x261578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_26157c:
    // 0x26157c: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x26157cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
label_261580:
    // 0x261580: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x261580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_261584:
    // 0x261584: 0x265023b0  addiu       $s0, $s2, 0x23B0
    ctx->pc = 0x261584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 9136));
label_261588:
    // 0x261588: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x261588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_26158c:
    // 0x26158c: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x26158cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_261590:
    // 0x261590: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x261590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_261594:
    // 0x261594: 0xc097f3a  jal         func_25FCE8
label_261598:
    if (ctx->pc == 0x261598u) {
        ctx->pc = 0x261598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261594u;
        // 0x261598: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26159Cu;
        goto label_26159c;
    }
    ctx->pc = 0x261594u;
    SET_GPR_U32(ctx, 31, 0x26159Cu);
    ctx->pc = 0x261598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261594u;
    // 0x261598: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE8u, 0x261594u, 0x26159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26159Cu;
label_26159c:
    // 0x26159c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x26159cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2615a0:
    // 0x2615a0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2615a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2615a4:
    // 0x2615a4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2615a8:
    if (ctx->pc == 0x2615A8u) {
        ctx->pc = 0x2615A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615A4u;
        // 0x2615a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2615ACu;
        goto label_2615ac;
    }
    ctx->pc = 0x2615A4u;
    {
        const bool branch_taken_0x2615a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615A4u;
        // 0x2615a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615a4) {
            ctx->pc = 0x261624u;
            goto label_261624;
        }
    }
    ctx->pc = 0x2615ACu;
label_2615ac:
    // 0x2615ac: 0xc097fdc  jal         func_25FF70
label_2615b0:
    if (ctx->pc == 0x2615B0u) {
        ctx->pc = 0x2615B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615ACu;
        // 0x2615b0: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2615B4u;
        goto label_2615b4;
    }
    ctx->pc = 0x2615ACu;
    SET_GPR_U32(ctx, 31, 0x2615B4u);
    ctx->pc = 0x2615B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2615ACu;
    // 0x2615b0: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x2615ACu, 0x2615B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2615B4u;
label_2615b4:
    // 0x2615b4: 0x86270022  lh          $a3, 0x22($s1)
    ctx->pc = 0x2615b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
label_2615b8:
    // 0x2615b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2615b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2615bc:
    // 0x2615bc: 0x4e0000c  bltz        $a3, . + 4 + (0xC << 2)
label_2615c0:
    if (ctx->pc == 0x2615C0u) {
        ctx->pc = 0x2615C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615BCu;
        // 0x2615c0: 0x2606e770  addiu       $a2, $s0, -0x1890 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2615C4u;
        goto label_2615c4;
    }
    ctx->pc = 0x2615BCu;
    {
        const bool branch_taken_0x2615bc = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2615C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615BCu;
        // 0x2615c0: 0x2606e770  addiu       $a2, $s0, -0x1890 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615bc) {
            ctx->pc = 0x2615F0u;
            goto label_2615f0;
        }
    }
    ctx->pc = 0x2615C4u;
label_2615c4:
    // 0x2615c4: 0x86220024  lh          $v0, 0x24($s1)
    ctx->pc = 0x2615c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_2615c8:
    // 0x2615c8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2615c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2615cc:
    // 0x2615cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2615ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2615d0:
    // 0x2615d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2615d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2615d4:
    // 0x2615d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2615d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2615d8:
    // 0x2615d8: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x2615d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2615dc:
    // 0x2615dc: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x2615dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2615e0:
    // 0x2615e0: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x2615e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2615e4:
    // 0x2615e4: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x2615e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2615e8:
    // 0x2615e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2615ec:
    if (ctx->pc == 0x2615ECu) {
        ctx->pc = 0x2615ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615E8u;
        // 0x2615ec: 0x8fa80054  lw          $t0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2615F0u;
        goto label_2615f0;
    }
    ctx->pc = 0x2615E8u;
    {
        const bool branch_taken_0x2615e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615E8u;
        // 0x2615ec: 0x8fa80054  lw          $t0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615e8) {
            ctx->pc = 0x2615F4u;
            goto label_2615f4;
        }
    }
    ctx->pc = 0x2615F0u;
label_2615f0:
    // 0x2615f0: 0x8e280024  lw          $t0, 0x24($s1)
    ctx->pc = 0x2615f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2615f4:
    // 0x2615f4: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_2615f8:
    if (ctx->pc == 0x2615F8u) {
        ctx->pc = 0x2615F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615F4u;
        // 0x2615f8: 0x86230020  lh          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2615FCu;
        goto label_2615fc;
    }
    ctx->pc = 0x2615F4u;
    {
        const bool branch_taken_0x2615f4 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2615F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615F4u;
        // 0x2615f8: 0x86230020  lh          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615f4) {
            ctx->pc = 0x261608u;
            goto label_261608;
        }
    }
    ctx->pc = 0x2615FCu;
label_2615fc:
    // 0x2615fc: 0x87a20050  lh          $v0, 0x50($sp)
    ctx->pc = 0x2615fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
label_261600:
    // 0x261600: 0x10000002  b           . + 4 + (0x2 << 2)
label_261604:
    if (ctx->pc == 0x261604u) {
        ctx->pc = 0x261604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261600u;
        // 0x261604: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261608u;
        goto label_261608;
    }
    ctx->pc = 0x261600u;
    {
        const bool branch_taken_0x261600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261600u;
        // 0x261604: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261600) {
            ctx->pc = 0x26160Cu;
            goto label_26160c;
        }
    }
    ctx->pc = 0x261608u;
label_261608:
    // 0x261608: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x261608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26160c:
    // 0x26160c: 0x100f809  jalr        $t0
label_261610:
    if (ctx->pc == 0x261610u) {
        ctx->pc = 0x261610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26160Cu;
        // 0x261610: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261614u;
        goto label_261614;
    }
    ctx->pc = 0x26160Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x261614u);
        ctx->pc = 0x261610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26160Cu;
        // 0x261610: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26160Cu, 0x261614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261614u;
label_261614:
    // 0x261614: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_261618:
    if (ctx->pc == 0x261618u) {
        ctx->pc = 0x261618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261614u;
        // 0x261618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26161Cu;
        goto label_26161c;
    }
    ctx->pc = 0x261614u;
    {
        const bool branch_taken_0x261614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261614) {
            ctx->pc = 0x261618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261614u;
            // 0x261618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261628u;
            goto label_261628;
        }
    }
    ctx->pc = 0x26161Cu;
label_26161c:
    // 0x26161c: 0xc098944  jal         func_262510
label_261620:
    if (ctx->pc == 0x261620u) {
        ctx->pc = 0x261620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26161Cu;
        // 0x261620: 0x2604e770  addiu       $a0, $s0, -0x1890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261624u;
        goto label_261624;
    }
    ctx->pc = 0x26161Cu;
    SET_GPR_U32(ctx, 31, 0x261624u);
    ctx->pc = 0x261620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26161Cu;
    // 0x261620: 0x2604e770  addiu       $a0, $s0, -0x1890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262510u, 0x26161Cu, 0x261624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261624u;
label_261624:
    // 0x261624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261628:
    // 0x261628: 0xc097fdc  jal         func_25FF70
label_26162c:
    if (ctx->pc == 0x26162Cu) {
        ctx->pc = 0x26162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261628u;
        // 0x26162c: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261630u;
        goto label_261630;
    }
    ctx->pc = 0x261628u;
    SET_GPR_U32(ctx, 31, 0x261630u);
    ctx->pc = 0x26162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261628u;
    // 0x26162c: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x261628u, 0x261630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261630u;
label_261630:
    // 0x261630: 0x86270022  lh          $a3, 0x22($s1)
    ctx->pc = 0x261630u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
label_261634:
    // 0x261634: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x261634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261638:
    // 0x261638: 0x4e0000d  bltz        $a3, . + 4 + (0xD << 2)
label_26163c:
    if (ctx->pc == 0x26163Cu) {
        ctx->pc = 0x26163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261638u;
        // 0x26163c: 0x2606e7c0  addiu       $a2, $s0, -0x1840 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261640u;
        goto label_261640;
    }
    ctx->pc = 0x261638u;
    {
        const bool branch_taken_0x261638 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x26163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261638u;
        // 0x26163c: 0x2606e7c0  addiu       $a2, $s0, -0x1840 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261638) {
            ctx->pc = 0x261670u;
            goto label_261670;
        }
    }
    ctx->pc = 0x261640u;
label_261640:
    // 0x261640: 0x86220024  lh          $v0, 0x24($s1)
    ctx->pc = 0x261640u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_261644:
    // 0x261644: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x261644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_261648:
    // 0x261648: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x261648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_26164c:
    // 0x26164c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26164cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261650:
    // 0x261650: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x261650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_261654:
    // 0x261654: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x261654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_261658:
    // 0x261658: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x261658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_26165c:
    // 0x26165c: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x26165cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_261660:
    // 0x261660: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x261660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_261664:
    // 0x261664: 0x10000003  b           . + 4 + (0x3 << 2)
label_261668:
    if (ctx->pc == 0x261668u) {
        ctx->pc = 0x261668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261664u;
        // 0x261668: 0x8fa80064  lw          $t0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26166Cu;
        goto label_26166c;
    }
    ctx->pc = 0x261664u;
    {
        const bool branch_taken_0x261664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261664u;
        // 0x261668: 0x8fa80064  lw          $t0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261664) {
            ctx->pc = 0x261674u;
            goto label_261674;
        }
    }
    ctx->pc = 0x26166Cu;
label_26166c:
    // 0x26166c: 0x0  nop
    ctx->pc = 0x26166cu;
    // NOP
label_261670:
    // 0x261670: 0x8e280024  lw          $t0, 0x24($s1)
    ctx->pc = 0x261670u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_261674:
    // 0x261674: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_261678:
    if (ctx->pc == 0x261678u) {
        ctx->pc = 0x261678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261674u;
        // 0x261678: 0x86230020  lh          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26167Cu;
        goto label_26167c;
    }
    ctx->pc = 0x261674u;
    {
        const bool branch_taken_0x261674 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x261678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261674u;
        // 0x261678: 0x86230020  lh          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261674) {
            ctx->pc = 0x261688u;
            goto label_261688;
        }
    }
    ctx->pc = 0x26167Cu;
label_26167c:
    // 0x26167c: 0x87a20060  lh          $v0, 0x60($sp)
    ctx->pc = 0x26167cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
label_261680:
    // 0x261680: 0x10000002  b           . + 4 + (0x2 << 2)
label_261684:
    if (ctx->pc == 0x261684u) {
        ctx->pc = 0x261684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261680u;
        // 0x261684: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261688u;
        goto label_261688;
    }
    ctx->pc = 0x261680u;
    {
        const bool branch_taken_0x261680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261680u;
        // 0x261684: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261680) {
            ctx->pc = 0x26168Cu;
            goto label_26168c;
        }
    }
    ctx->pc = 0x261688u;
label_261688:
    // 0x261688: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x261688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26168c:
    // 0x26168c: 0x100f809  jalr        $t0
label_261690:
    if (ctx->pc == 0x261690u) {
        ctx->pc = 0x261690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26168Cu;
        // 0x261690: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261694u;
        goto label_261694;
    }
    ctx->pc = 0x26168Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x261694u);
        ctx->pc = 0x261690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26168Cu;
        // 0x261690: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26168Cu, 0x261694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261694u;
label_261694:
    // 0x261694: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_261698:
    if (ctx->pc == 0x261698u) {
        ctx->pc = 0x261698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261694u;
        // 0x261698: 0x264323b0  addiu       $v1, $s2, 0x23B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 9136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26169Cu;
        goto label_26169c;
    }
    ctx->pc = 0x261694u;
    {
        const bool branch_taken_0x261694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261694u;
        // 0x261698: 0x264323b0  addiu       $v1, $s2, 0x23B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 9136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261694) {
            ctx->pc = 0x2616ACu;
            goto label_2616ac;
        }
    }
    ctx->pc = 0x26169Cu;
label_26169c:
    // 0x26169c: 0x2604e7c0  addiu       $a0, $s0, -0x1840
    ctx->pc = 0x26169cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961088));
label_2616a0:
    // 0x2616a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2616a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2616a4:
    // 0x2616a4: 0xc098a44  jal         func_262910
label_2616a8:
    if (ctx->pc == 0x2616A8u) {
        ctx->pc = 0x2616A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616A4u;
        // 0x2616a8: 0x8c45001c  lw          $a1, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616ACu;
        goto label_2616ac;
    }
    ctx->pc = 0x2616A4u;
    SET_GPR_U32(ctx, 31, 0x2616ACu);
    ctx->pc = 0x2616A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2616A4u;
    // 0x2616a8: 0x8c45001c  lw          $a1, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262910u, 0x2616A4u, 0x2616ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2616ACu;
label_2616ac:
    // 0x2616ac: 0xc097fdc  jal         func_25FF70
label_2616b0:
    if (ctx->pc == 0x2616B0u) {
        ctx->pc = 0x2616B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616ACu;
        // 0x2616b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616B4u;
        goto label_2616b4;
    }
    ctx->pc = 0x2616ACu;
    SET_GPR_U32(ctx, 31, 0x2616B4u);
    ctx->pc = 0x2616B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2616ACu;
    // 0x2616b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x2616ACu, 0x2616B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2616B4u;
label_2616b4:
    // 0x2616b4: 0x86260022  lh          $a2, 0x22($s1)
    ctx->pc = 0x2616b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
label_2616b8:
    // 0x2616b8: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
label_2616bc:
    if (ctx->pc == 0x2616BCu) {
        ctx->pc = 0x2616BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616B8u;
        // 0x2616bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616C0u;
        goto label_2616c0;
    }
    ctx->pc = 0x2616B8u;
    {
        const bool branch_taken_0x2616b8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2616BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616B8u;
        // 0x2616bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616b8) {
            ctx->pc = 0x2616F0u;
            goto label_2616f0;
        }
    }
    ctx->pc = 0x2616C0u;
label_2616c0:
    // 0x2616c0: 0x86220024  lh          $v0, 0x24($s1)
    ctx->pc = 0x2616c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_2616c4:
    // 0x2616c4: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2616c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2616c8:
    // 0x2616c8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2616c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2616cc:
    // 0x2616cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2616ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2616d0:
    // 0x2616d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2616d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2616d4:
    // 0x2616d4: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x2616d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2616d8:
    // 0x2616d8: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x2616d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2616dc:
    // 0x2616dc: 0xb3a20077  sdl         $v0, 0x77($sp)
    ctx->pc = 0x2616dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2616e0:
    // 0x2616e0: 0xb7a20070  sdr         $v0, 0x70($sp)
    ctx->pc = 0x2616e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2616e4:
    // 0x2616e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2616e8:
    if (ctx->pc == 0x2616E8u) {
        ctx->pc = 0x2616E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616E4u;
        // 0x2616e8: 0x8fa70074  lw          $a3, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616ECu;
        goto label_2616ec;
    }
    ctx->pc = 0x2616E4u;
    {
        const bool branch_taken_0x2616e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2616E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616E4u;
        // 0x2616e8: 0x8fa70074  lw          $a3, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616e4) {
            ctx->pc = 0x2616F4u;
            goto label_2616f4;
        }
    }
    ctx->pc = 0x2616ECu;
label_2616ec:
    // 0x2616ec: 0x0  nop
    ctx->pc = 0x2616ecu;
    // NOP
label_2616f0:
    // 0x2616f0: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x2616f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2616f4:
    // 0x2616f4: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_2616f8:
    if (ctx->pc == 0x2616F8u) {
        ctx->pc = 0x2616F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616F4u;
        // 0x2616f8: 0x86230020  lh          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616FCu;
        goto label_2616fc;
    }
    ctx->pc = 0x2616F4u;
    {
        const bool branch_taken_0x2616f4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2616F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616F4u;
        // 0x2616f8: 0x86230020  lh          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616f4) {
            ctx->pc = 0x261708u;
            goto label_261708;
        }
    }
    ctx->pc = 0x2616FCu;
label_2616fc:
    // 0x2616fc: 0x87a20070  lh          $v0, 0x70($sp)
    ctx->pc = 0x2616fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 112)));
label_261700:
    // 0x261700: 0x10000002  b           . + 4 + (0x2 << 2)
label_261704:
    if (ctx->pc == 0x261704u) {
        ctx->pc = 0x261704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261700u;
        // 0x261704: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261708u;
        goto label_261708;
    }
    ctx->pc = 0x261700u;
    {
        const bool branch_taken_0x261700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261700u;
        // 0x261704: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261700) {
            ctx->pc = 0x26170Cu;
            goto label_26170c;
        }
    }
    ctx->pc = 0x261708u;
label_261708:
    // 0x261708: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x261708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26170c:
    // 0x26170c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x26170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_261710:
    // 0x261710: 0xe0f809  jalr        $a3
label_261714:
    if (ctx->pc == 0x261714u) {
        ctx->pc = 0x261714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261710u;
        // 0x261714: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261718u;
        goto label_261718;
    }
    ctx->pc = 0x261710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x261718u);
        ctx->pc = 0x261714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261710u;
        // 0x261714: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261710u, 0x261718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261718u;
label_261718:
    // 0x261718: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26171c:
    if (ctx->pc == 0x26171Cu) {
        ctx->pc = 0x26171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261718u;
        // 0x26171c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261720u;
        goto label_261720;
    }
    ctx->pc = 0x261718u;
    {
        const bool branch_taken_0x261718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261718u;
        // 0x26171c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261718) {
            ctx->pc = 0x26172Cu;
            goto label_26172c;
        }
    }
    ctx->pc = 0x261720u;
label_261720:
    // 0x261720: 0xc08b380  jal         func_22CE00
label_261724:
    if (ctx->pc == 0x261724u) {
        ctx->pc = 0x261724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261720u;
        // 0x261724: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261728u;
        goto label_261728;
    }
    ctx->pc = 0x261720u;
    SET_GPR_U32(ctx, 31, 0x261728u);
    ctx->pc = 0x261724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261720u;
    // 0x261724: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CE00u, 0x261720u, 0x261728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261728u;
label_261728:
    // 0x261728: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x261728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26172c:
    // 0x26172c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x26172cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_261730:
    // 0x261730: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x261730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_261734:
    // 0x261734: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x261734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_261738:
    // 0x261738: 0x3e00008  jr          $ra
label_26173c:
    if (ctx->pc == 0x26173Cu) {
        ctx->pc = 0x26173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261738u;
        // 0x26173c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261740u;
        goto label_fallthrough_0x261738;
    }
    ctx->pc = 0x261738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261738u;
        // 0x26173c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x261738:
    ctx->pc = 0x261740u;
}
