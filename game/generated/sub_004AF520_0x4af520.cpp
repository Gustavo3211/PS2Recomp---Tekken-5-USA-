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

// Function: sub_004AF520
// Address: 0x4af520 - 0x4af5e8
void sub_004AF520_0x4af520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF520_0x4af520");
#endif

    switch (ctx->pc) {
        case 0x4af534u: goto label_4af534;
        case 0x4af5a0u: goto label_4af5a0;
        case 0x4af5b4u: goto label_4af5b4;
        case 0x4af5bcu: goto label_4af5bc;
        case 0x4af5c4u: goto label_4af5c4;
        default: break;
    }

    ctx->pc = 0x4af520u;

    // 0x4af520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4af520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4af524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4af524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4af528: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4af528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4af52c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AF52Cu;
    SET_GPR_U32(ctx, 31, 0x4AF534u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AF52Cu, 0x4AF534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF534u;
label_4af534:
    // 0x4af534: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4af534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4af538: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4af538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4af53c: 0xac620d08  sw          $v0, 0xD08($v1)
    ctx->pc = 0x4af53cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0D08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D08u, _value); } while (0);
    // 0x4af540: 0x2490d680  addiu       $s0, $a0, -0x2980
    ctx->pc = 0x4af540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4af544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4af544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af548: 0x8482229c  lh          $v0, 0x229C($a0)
    ctx->pc = 0x4af548u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F91Cu));
    // 0x4af54c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x4AF54Cu;
    {
        const bool branch_taken_0x4af54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4af54c) {
            ctx->pc = 0x4AF550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF54Cu;
            // 0x4af550: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF5D8u;
            goto label_4af5d8;
        }
    }
    ctx->pc = 0x4AF554u;
    // 0x4af554: 0x84822318  lh          $v0, 0x2318($a0)
    ctx->pc = 0x4af554u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8984)));
    // 0x4af558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AF558u;
    {
        const bool branch_taken_0x4af558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF558u;
        // 0x4af55c: 0x3c06007f  lui         $a2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af558) {
            ctx->pc = 0x4AF568u;
            goto label_4af568;
        }
    }
    ctx->pc = 0x4AF560u;
    // 0x4af560: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AF560u;
    {
        const bool branch_taken_0x4af560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF560u;
        // 0x4af564: 0x84840098  lh          $a0, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af560) {
            ctx->pc = 0x4AF56Cu;
            goto label_4af56c;
        }
    }
    ctx->pc = 0x4AF568u;
label_4af568:
    // 0x4af568: 0x84842290  lh          $a0, 0x2290($a0)
    ctx->pc = 0x4af568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8848)));
label_4af56c:
    // 0x4af56c: 0x24c50d10  addiu       $a1, $a2, 0xD10
    ctx->pc = 0x4af56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 3344));
    // 0x4af570: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4af570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4af574: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4af574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4af578: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4af578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4af57c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4af57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4af580: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4af580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4af584: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4af584u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4af588: 0x84c20d10  lh          $v0, 0xD10($a2)
    ctx->pc = 0x4af588u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 3344)));
    // 0x4af58c: 0x8603231a  lh          $v1, 0x231A($s0)
    ctx->pc = 0x4af58cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8986)));
    // 0x4af590: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AF590u;
    {
        const bool branch_taken_0x4af590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF590u;
        // 0x4af594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af590) {
            ctx->pc = 0x4AF5A0u;
            goto label_4af5a0;
        }
    }
    ctx->pc = 0x4AF598u;
    // 0x4af598: 0xc12bd7a  jal         func_4AF5E8
    ctx->pc = 0x4AF598u;
    SET_GPR_U32(ctx, 31, 0x4AF5A0u);
    ctx->pc = 0x4AF5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF5E8u, 0x4AF598u, 0x4AF5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF5A0u;
label_4af5a0:
    // 0x4af5a0: 0x2603231c  addiu       $v1, $s0, 0x231C
    ctx->pc = 0x4af5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8988));
    // 0x4af5a4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4af5a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4af5a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4af5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4af5ac: 0xc126d4c  jal         func_49B530
    ctx->pc = 0x4AF5ACu;
    SET_GPR_U32(ctx, 31, 0x4AF5B4u);
    ctx->pc = 0x4AF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF5ACu;
    // 0x4af5b0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B530u, 0x4AF5ACu, 0x4AF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF5B4u;
label_4af5b4:
    // 0x4af5b4: 0xc12ba86  jal         func_4AEA18
    ctx->pc = 0x4AF5B4u;
    SET_GPR_U32(ctx, 31, 0x4AF5BCu);
    ctx->pc = 0x4AEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEA18u, 0x4AF5B4u, 0x4AF5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF5BCu;
label_4af5bc:
    // 0x4af5bc: 0xc12bc92  jal         func_4AF248
    ctx->pc = 0x4AF5BCu;
    SET_GPR_U32(ctx, 31, 0x4AF5C4u);
    ctx->pc = 0x4AF248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF248u, 0x4AF5BCu, 0x4AF5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF5C4u;
label_4af5c4:
    // 0x4af5c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4af5c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af5c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4af5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4af5cc: 0x812bce8  j           func_4AF3A0
    ctx->pc = 0x4AF5CCu;
    ctx->pc = 0x4AF5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF5CCu;
    // 0x4af5d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF3A0u, 0x4AF5CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AF5D4u;
    // 0x4af5d4: 0x0  nop
    ctx->pc = 0x4af5d4u;
    // NOP
label_4af5d8:
    // 0x4af5d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4af5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4af5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF5DCu;
        // 0x4af5e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF5E4u;
    // 0x4af5e4: 0x0  nop
    ctx->pc = 0x4af5e4u;
    // NOP
    ctx->pc = 0x4af5e8u;
}
