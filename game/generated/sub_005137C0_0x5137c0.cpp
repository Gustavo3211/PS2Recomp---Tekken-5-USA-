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

// Function: sub_005137C0
// Address: 0x5137c0 - 0x513868
void sub_005137C0_0x5137c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005137C0_0x5137c0");
#endif

    switch (ctx->pc) {
        case 0x5137dcu: goto label_5137dc;
        case 0x513810u: goto label_513810;
        case 0x513818u: goto label_513818;
        case 0x51382cu: goto label_51382c;
        case 0x51383cu: goto label_51383c;
        default: break;
    }

    ctx->pc = 0x5137c0u;

    // 0x5137c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5137c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5137c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5137c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5137c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5137c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5137cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5137ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5137d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x5137d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x5137d4: 0xc13e746  jal         func_4F9D18
    ctx->pc = 0x5137D4u;
    SET_GPR_U32(ctx, 31, 0x5137DCu);
    ctx->pc = 0x5137D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5137D4u;
    // 0x5137d8: 0x3c120090  lui         $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)144 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9D18u, 0x5137D4u, 0x5137DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5137DCu;
label_5137dc:
    // 0x5137dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5137dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5137e0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x5137e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x5137e4: 0x2643f080  addiu       $v1, $s2, -0xF80
    ctx->pc = 0x5137e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963328));
    // 0x5137e8: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x5137e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x5137ec: 0x94650072  lhu         $a1, 0x72($v1)
    ctx->pc = 0x5137ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 114)));
    // 0x5137f0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x5137f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5137f4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x5137f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5137f8: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x5137f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x5137fc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x5137fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x513800: 0xa460006c  sh          $zero, 0x6C($v1)
    ctx->pc = 0x513800u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x513804: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x513804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x513808: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x513808u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x51380c: 0x0  nop
    ctx->pc = 0x51380cu;
    // NOP
label_513810:
    // 0x513810: 0xc142924  jal         func_50A490
    ctx->pc = 0x513810u;
    SET_GPR_U32(ctx, 31, 0x513818u);
    ctx->pc = 0x50A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50A490u, 0x513810u, 0x513818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513818u;
label_513818:
    // 0x513818: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x513818u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x51381c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x51381Cu;
    {
        const bool branch_taken_0x51381c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51381c) {
            ctx->pc = 0x513810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_513810;
        }
    }
    ctx->pc = 0x513824u;
    // 0x513824: 0xc143dbc  jal         func_50F6F0
    ctx->pc = 0x513824u;
    SET_GPR_U32(ctx, 31, 0x51382Cu);
    ctx->pc = 0x50F6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50F6F0u, 0x513824u, 0x51382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51382Cu;
label_51382c:
    // 0x51382c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51382Cu;
    {
        const bool branch_taken_0x51382c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x513830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51382Cu;
        // 0x513830: 0x2643f080  addiu       $v1, $s2, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51382c) {
            ctx->pc = 0x513840u;
            goto label_513840;
        }
    }
    ctx->pc = 0x513834u;
    // 0x513834: 0xc144a00  jal         func_512800
    ctx->pc = 0x513834u;
    SET_GPR_U32(ctx, 31, 0x51383Cu);
    ctx->pc = 0x512800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512800u, 0x513834u, 0x51383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51383Cu;
label_51383c:
    // 0x51383c: 0x2643f080  addiu       $v1, $s2, -0xF80
    ctx->pc = 0x51383cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963328));
label_513840:
    // 0x513840: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x513840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x513844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x513844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x513848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51384c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x51384cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x513850: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x513850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x513854: 0xa462006c  sh          $v0, 0x6C($v1)
    ctx->pc = 0x513854u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 108), (uint16_t)GPR_U32(ctx, 2));
    // 0x513858: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x513858u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x51385c: 0x3e00008  jr          $ra
    ctx->pc = 0x51385Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51385Cu;
        // 0x513860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x51385Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x513864u;
    // 0x513864: 0x0  nop
    ctx->pc = 0x513864u;
    // NOP
    ctx->pc = 0x513868u;
}
