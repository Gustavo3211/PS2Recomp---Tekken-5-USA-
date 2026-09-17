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

// Function: sub_00370468
// Address: 0x370468 - 0x370530
void sub_00370468_0x370468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370468_0x370468");
#endif

    switch (ctx->pc) {
        case 0x37048cu: goto label_37048c;
        case 0x3704a4u: goto label_3704a4;
        case 0x3704e0u: goto label_3704e0;
        default: break;
    }

    ctx->pc = 0x370468u;

    // 0x370468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37046c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x37046cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x370470: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370474: 0x24507300  addiu       $s0, $v0, 0x7300
    ctx->pc = 0x370474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29440));
    // 0x370478: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370478u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7300u));
    // 0x37047c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37047Cu;
    {
        const bool branch_taken_0x37047c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37047Cu;
        // 0x370480: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37047c) {
            ctx->pc = 0x3704A4u;
            goto label_3704a4;
        }
    }
    ctx->pc = 0x370484u;
    // 0x370484: 0xc0dc6c2  jal         func_371B08
    ctx->pc = 0x370484u;
    SET_GPR_U32(ctx, 31, 0x37048Cu);
    ctx->pc = 0x371B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371B08u, 0x370484u, 0x37048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37048Cu;
label_37048c:
    // 0x37048c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x37048cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370490: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370490u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x370494: 0x24a50a68  addiu       $a1, $a1, 0xA68
    ctx->pc = 0x370494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2664));
    // 0x370498: 0x24c67540  addiu       $a2, $a2, 0x7540
    ctx->pc = 0x370498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    // 0x37049c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x37049Cu;
    SET_GPR_U32(ctx, 31, 0x3704A4u);
    ctx->pc = 0x3704A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37049Cu;
    // 0x3704a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x37049Cu, 0x3704A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3704A4u;
label_3704a4:
    // 0x3704a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3704a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3704a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3704a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3704ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3704acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3704b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3704B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3704B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3704B0u;
        // 0x3704b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3704B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3704B8u;
    // 0x3704b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3704b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3704bc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x3704bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3704c0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3704c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3704c4: 0x24c30050  addiu       $v1, $a2, 0x50
    ctx->pc = 0x3704c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x3704c8: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x3704c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x3704cc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3704ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3704d0: 0x24c20058  addiu       $v0, $a2, 0x58
    ctx->pc = 0x3704d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x3704d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3704d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3704d8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3704d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3704dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3704dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3704e0:
    // 0x3704e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3704e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3704e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3704e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3704e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3704e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3704ec: 0x0  nop
    ctx->pc = 0x3704ecu;
    // NOP
    // 0x3704f0: 0x0  nop
    ctx->pc = 0x3704f0u;
    // NOP
    // 0x3704f4: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3704F4u;
    {
        const bool branch_taken_0x3704f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3704F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3704F4u;
        // 0x3704f8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3704f4) {
            ctx->pc = 0x3704E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3704e0;
        }
    }
    ctx->pc = 0x3704FCu;
    // 0x3704fc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3704fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x370500: 0x24c20110  addiu       $v0, $a2, 0x110
    ctx->pc = 0x370500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x370504: 0x24c300b8  addiu       $v1, $a2, 0xB8
    ctx->pc = 0x370504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 184));
    // 0x370508: 0x2484f838  addiu       $a0, $a0, -0x7C8
    ctx->pc = 0x370508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965304));
    // 0x37050c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37050cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370510: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370514: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x370514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x370518: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x370518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x37051c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x37051cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x370520: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x370520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x370524: 0x3e00008  jr          $ra
    ctx->pc = 0x370524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370524u;
        // 0x370528: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37052Cu;
    // 0x37052c: 0x0  nop
    ctx->pc = 0x37052cu;
    // NOP
    ctx->pc = 0x370530u;
}
