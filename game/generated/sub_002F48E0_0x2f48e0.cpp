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

// Function: sub_002F48E0
// Address: 0x2f48e0 - 0x2f49d0
void sub_002F48E0_0x2f48e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F48E0_0x2f48e0");
#endif

    switch (ctx->pc) {
        case 0x2f4900u: goto label_2f4900;
        case 0x2f4920u: goto label_2f4920;
        case 0x2f495cu: goto label_2f495c;
        case 0x2f4998u: goto label_2f4998;
        case 0x2f49c0u: goto label_2f49c0;
        default: break;
    }

    ctx->pc = 0x2f48e0u;

    // 0x2f48e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f48e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f48e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f48e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f48e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f48e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f48ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f48ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f48f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f48f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f48f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f48f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f48f8: 0xc0bd106  jal         func_2F4418
    ctx->pc = 0x2F48F8u;
    SET_GPR_U32(ctx, 31, 0x2F4900u);
    ctx->pc = 0x2F48FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48F8u;
    // 0x2f48fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4418u, 0x2F48F8u, 0x2F4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4900u;
label_2f4900:
    // 0x2f4900: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f4900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f4904: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f4904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f4908: 0x24630b88  addiu       $v1, $v1, 0xB88
    ctx->pc = 0x2f4908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2952));
    // 0x2f490c: 0x260400fc  addiu       $a0, $s0, 0xFC
    ctx->pc = 0x2f490cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    // 0x2f4910: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2f4910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2f4914: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x2f4914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f4918: 0xc0bb89a  jal         func_2EE268
    ctx->pc = 0x2F4918u;
    SET_GPR_U32(ctx, 31, 0x2F4920u);
    ctx->pc = 0x2F491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4918u;
    // 0x2f491c: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE268u, 0x2F4918u, 0x2F4920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4920u;
label_2f4920:
    // 0x2f4920: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x2f4920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x2f4924: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f4924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f4928: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4928u;
    {
        const bool branch_taken_0x2f4928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4928) {
            ctx->pc = 0x2F492Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4928u;
            // 0x2f492c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4944u;
            goto label_2f4944;
        }
    }
    ctx->pc = 0x2F4930u;
    // 0x2f4930: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f4930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f4934: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f4934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f4938: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4938u;
    {
        const bool branch_taken_0x2f4938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4938) {
            ctx->pc = 0x2F493Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4938u;
            // 0x2f493c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4950u;
            goto label_2f4950;
        }
    }
    ctx->pc = 0x2F4940u;
    // 0x2f4940: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f4940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f4944:
    // 0x2f4944: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4948: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f4948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f494c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f494cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4950:
    // 0x2f4950: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2f4950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2f4954: 0xc0bbd8a  jal         func_2EF628
    ctx->pc = 0x2F4954u;
    SET_GPR_U32(ctx, 31, 0x2F495Cu);
    ctx->pc = 0x2F4958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4954u;
    // 0x2f4958: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2F4954u, 0x2F495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F495Cu;
label_2f495c:
    // 0x2f495c: 0x26050118  addiu       $a1, $s0, 0x118
    ctx->pc = 0x2f495cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x2f4960: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f4960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f4964: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4964u;
    {
        const bool branch_taken_0x2f4964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4964) {
            ctx->pc = 0x2F4968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4964u;
            // 0x2f4968: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4980u;
            goto label_2f4980;
        }
    }
    ctx->pc = 0x2F496Cu;
    // 0x2f496c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f4970: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f4970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f4974: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4974u;
    {
        const bool branch_taken_0x2f4974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4974) {
            ctx->pc = 0x2F4978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4974u;
            // 0x2f4978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F498Cu;
            goto label_2f498c;
        }
    }
    ctx->pc = 0x2F497Cu;
    // 0x2f497c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f497cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f4980:
    // 0x2f4980: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4984: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f4984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f4988: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f4988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f498c:
    // 0x2f498c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2f498cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2f4990: 0xc0bbd8a  jal         func_2EF628
    ctx->pc = 0x2F4990u;
    SET_GPR_U32(ctx, 31, 0x2F4998u);
    ctx->pc = 0x2F4994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4990u;
    // 0x2f4994: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2F4990u, 0x2F4998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4998u;
label_2f4998:
    // 0x2f4998: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2f4998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2f499c: 0x246312c8  addiu       $v1, $v1, 0x12C8
    ctx->pc = 0x2f499cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4808));
    // 0x2f49a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F49A0u;
    {
        const bool branch_taken_0x2f49a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49A0u;
        // 0x2f49a4: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49a0) {
            ctx->pc = 0x2F49C0u;
            goto label_2f49c0;
        }
    }
    ctx->pc = 0x2F49A8u;
    // 0x2f49a8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2f49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2f49ac: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2f49acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2f49b0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2f49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2f49b4: 0x248406e4  addiu       $a0, $a0, 0x6E4
    ctx->pc = 0x2f49b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1764));
    // 0x2f49b8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2F49B8u;
    SET_GPR_U32(ctx, 31, 0x2F49C0u);
    ctx->pc = 0x2F49BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F49B8u;
    // 0x2f49bc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2F49B8u, 0x2F49C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F49C0u;
label_2f49c0:
    // 0x2f49c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f49c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f49c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f49c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f49c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F49C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49C8u;
        // 0x2f49cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F49C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F49D0u;
}
