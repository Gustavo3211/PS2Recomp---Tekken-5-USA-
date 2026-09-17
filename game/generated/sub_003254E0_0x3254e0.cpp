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

// Function: sub_003254E0
// Address: 0x3254e0 - 0x325600
void sub_003254E0_0x3254e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003254E0_0x3254e0");
#endif

    switch (ctx->pc) {
        case 0x325540u: goto label_325540;
        case 0x325578u: goto label_325578;
        case 0x3255b0u: goto label_3255b0;
        case 0x3255bcu: goto label_3255bc;
        case 0x3255d0u: goto label_3255d0;
        case 0x3255e0u: goto label_3255e0;
        default: break;
    }

    ctx->pc = 0x3254e0u;

    // 0x3254e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3254e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3254e4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x3254e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x3254e8: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x3254e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x3254ec: 0x2442d260  addiu       $v0, $v0, -0x2DA0
    ctx->pc = 0x3254ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955616));
    // 0x3254f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3254f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3254f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3254f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3254f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3254f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3254fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3254fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325500: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x325500u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x325504: 0x24030500  addiu       $v1, $zero, 0x500
    ctx->pc = 0x325504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x325508: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x325508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x32550c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x32550cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325510: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x325510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x325514: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x325514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325518: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x325518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x32551c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32551cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325520: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x325520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x325524: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x325524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x325528: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x325528u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x32552c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32552cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325530: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x325530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x325534: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x325534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x325538: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x325538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32553c: 0x0  nop
    ctx->pc = 0x32553cu;
    // NOP
label_325540:
    // 0x325540: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x325540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x325544: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x325544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x325548: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x325548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x32554c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x32554cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x325550: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x325550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x325554: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x325554u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x325558: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x325558u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x32555c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x32555cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325560: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x325560u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x325564: 0x4a1fff6  bgez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x325564u;
    {
        const bool branch_taken_0x325564 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x325568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325564u;
        // 0x325568: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325564) {
            ctx->pc = 0x325540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325540;
        }
    }
    ctx->pc = 0x32556Cu;
    // 0x32556c: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x32556cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x325570: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x325570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x325574: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x325574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_325578:
    // 0x325578: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x325578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x32557c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x32557cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x325580: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x325580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x325584: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x325584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x325588: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x325588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x32558c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x32558cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x325590: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x325590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x325594: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x325594u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325598: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x325598u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x32559c: 0x4a1fff6  bgez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x32559Cu;
    {
        const bool branch_taken_0x32559c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x3255A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32559Cu;
        // 0x3255a0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32559c) {
            ctx->pc = 0x325578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325578;
        }
    }
    ctx->pc = 0x3255A4u;
    // 0x3255a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3255a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255a8: 0xc0c9590  jal         func_325640
    ctx->pc = 0x3255A8u;
    SET_GPR_U32(ctx, 31, 0x3255B0u);
    ctx->pc = 0x3255ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3255A8u;
    // 0x3255ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325640u, 0x3255A8u, 0x3255B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255B0u;
label_3255b0:
    // 0x3255b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3255b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255b4: 0xc0c95a6  jal         func_325698
    ctx->pc = 0x3255B4u;
    SET_GPR_U32(ctx, 31, 0x3255BCu);
    ctx->pc = 0x3255B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3255B4u;
    // 0x3255b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325698u, 0x3255B4u, 0x3255BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255BCu;
label_3255bc:
    // 0x3255bc: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3255BCu;
    {
        const bool branch_taken_0x3255bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3255bc) {
            ctx->pc = 0x3255C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3255BCu;
            // 0x3255c0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3255D4u;
            goto label_3255d4;
        }
    }
    ctx->pc = 0x3255C4u;
    // 0x3255c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3255c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255c8: 0xc0c9580  jal         func_325600
    ctx->pc = 0x3255C8u;
    SET_GPR_U32(ctx, 31, 0x3255D0u);
    ctx->pc = 0x3255CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3255C8u;
    // 0x3255cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325600u, 0x3255C8u, 0x3255D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255D0u;
label_3255d0:
    // 0x3255d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3255d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3255d4:
    // 0x3255d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3255d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255d8: 0xc0c95ce  jal         func_325738
    ctx->pc = 0x3255D8u;
    SET_GPR_U32(ctx, 31, 0x3255E0u);
    ctx->pc = 0x3255DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3255D8u;
    // 0x3255dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325738u, 0x3255D8u, 0x3255E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255E0u;
label_3255e0:
    // 0x3255e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3255e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3255e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3255e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3255e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3255e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3255ec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3255ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3255f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3255f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3255f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3255F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3255F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3255F4u;
        // 0x3255f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3255F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3255FCu;
    // 0x3255fc: 0x0  nop
    ctx->pc = 0x3255fcu;
    // NOP
    ctx->pc = 0x325600u;
}
