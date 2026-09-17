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

// Function: sub_00337520
// Address: 0x337520 - 0x337650
void sub_00337520_0x337520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337520_0x337520");
#endif

    switch (ctx->pc) {
        case 0x337584u: goto label_337584;
        default: break;
    }

    ctx->pc = 0x337520u;

    // 0x337520: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x337520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x337524: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x337524u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337528: 0x24420a60  addiu       $v0, $v0, 0xA60
    ctx->pc = 0x337528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2656));
    // 0x33752c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x33752cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x440A7Cu));
    // 0x337530: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x337530u;
    {
        const bool branch_taken_0x337530 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x337534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337530u;
        // 0x337534: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337530) {
            ctx->pc = 0x337568u;
            goto label_337568;
        }
    }
    ctx->pc = 0x337538u;
    // 0x337538: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x337538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x33753c: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x33753cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x337540: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x337540u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10000810u)); // MMIO: 0x10000810
    // 0x337544: 0x54c0000a  bnel        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x337544u;
    {
        const bool branch_taken_0x337544 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x337544) {
            ctx->pc = 0x337548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337544u;
            // 0x337548: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337570u;
            goto label_337570;
        }
    }
    ctx->pc = 0x33754Cu;
    // 0x33754c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x33754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x337550: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x337550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x337554: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x337554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x337558: 0x34420820  ori         $v0, $v0, 0x820
    ctx->pc = 0x337558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2080);
    // 0x33755c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33755cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x337560: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x337560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x337564: 0xac230810  sw          $v1, 0x810($at)
    ctx->pc = 0x337564u;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 3)); // MMIO: 0x10000810
label_337568:
    // 0x337568: 0x3e00008  jr          $ra
    ctx->pc = 0x337568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337570u;
label_337570:
    // 0x337570: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x337570u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x337574: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x337574u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x337578: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x337578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33757c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x33757cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x337580: 0x44382f  dsubu       $a3, $v0, $a0
    ctx->pc = 0x337580u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_337584:
    // 0x337584: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x337584u;
    {
        const bool branch_taken_0x337584 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x337588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337584u;
        // 0x337588: 0x64e37333  daddiu      $v1, $a3, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337584) {
            ctx->pc = 0x3375B8u;
            goto label_3375b8;
        }
    }
    ctx->pc = 0x33758Cu;
    // 0x33758c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x33758cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x337590: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x337590u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x337594: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x337594u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x337598: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x337598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x33759c: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x33759cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x3375a0: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3375a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3375a4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3375A4u;
    {
        const bool branch_taken_0x3375a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3375a4) {
            ctx->pc = 0x3375A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3375A4u;
            // 0x3375a8: 0xe9102f  dsubu       $v0, $a3, $t1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3375BCu;
            goto label_3375bc;
        }
    }
    ctx->pc = 0x3375ACu;
    // 0x3375ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3375acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3375b0: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x3375B0u;
    {
        const bool branch_taken_0x3375b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3375B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3375B0u;
        // 0x3375b4: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3375b0) {
            ctx->pc = 0x337584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337584;
        }
    }
    ctx->pc = 0x3375B8u;
label_3375b8:
    // 0x3375b8: 0xe9102f  dsubu       $v0, $a3, $t1
    ctx->pc = 0x3375b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 9));
label_3375bc:
    // 0x3375bc: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x3375bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x3375c0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3375C0u;
    {
        const bool branch_taken_0x3375c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3375C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3375C0u;
        // 0x3375c4: 0x31020003  andi        $v0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3375c0) {
            ctx->pc = 0x337618u;
            goto label_337618;
        }
    }
    ctx->pc = 0x3375C8u;
    // 0x3375c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3375c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3375cc: 0x31040003  andi        $a0, $t0, 0x3
    ctx->pc = 0x3375ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x3375d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3375d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3375d4: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x3375d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x3375d8: 0x24027333  addiu       $v0, $zero, 0x7333
    ctx->pc = 0x3375d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x3375dc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3375dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3375e0: 0x821016  dsrlv       $v0, $v0, $a0
    ctx->pc = 0x3375e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x3375e4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3375e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3375e8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3375e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3375ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3375ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3375f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3375f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3375f4: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x3375f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x3375f8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3375f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3375fc: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x3375fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x337600: 0x34a50820  ori         $a1, $a1, 0x820
    ctx->pc = 0x337600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2080);
    // 0x337604: 0x34840810  ori         $a0, $a0, 0x810
    ctx->pc = 0x337604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2064);
    // 0x337608: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x337608u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x33760c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33760cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x337610: 0x3e00008  jr          $ra
    ctx->pc = 0x337610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337618u;
label_337618:
    // 0x337618: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x337618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x33761c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33761cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x337620: 0x2404f7ff  addiu       $a0, $zero, -0x801
    ctx->pc = 0x337620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x337624: 0x471016  dsrlv       $v0, $a3, $v0
    ctx->pc = 0x337624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x337628: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x337628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x33762c: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x33762cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x337630: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x337630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x337634: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x337634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x337638: 0x34a50810  ori         $a1, $a1, 0x810
    ctx->pc = 0x337638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2064);
    // 0x33763c: 0x34630820  ori         $v1, $v1, 0x820
    ctx->pc = 0x33763cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2080);
    // 0x337640: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x337640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x337644: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x337644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x337648: 0x3e00008  jr          $ra
    ctx->pc = 0x337648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337650u;
}
